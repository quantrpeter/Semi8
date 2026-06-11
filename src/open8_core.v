// ============================================================================
// Open8 - the simplest soft-core implementation of the Open8 8-bit MCU
// (AVR-inspired ISA described in the project markdown spec).
//
// Design choices for simplicity:
//   * Single-cycle execution: one instruction completes every clock.
//   * Harvard architecture: separate program (16-bit word) and data (8-bit)
//     memories, both with asynchronous (combinational) read.
//   * 32 x 8-bit general purpose registers (R0..R31).
//   * 8-bit status register SREG = {I,T,H,S,V,N,Z,C}.
//   * Two-word instructions (LDS/STS) read the following program word in the
//     same cycle (async ROM), so they still complete in one clock.
//
// Implemented subset of the Open8/AVR ISA:
//   ALU   : ADD ADC SUB SBC AND OR EOR MOV CP CPC
//   IMM   : LDI SUBI ORI ANDI CPI
//   UNARY : COM NEG SWAP INC DEC ASR LSR ROR   (LSL/ROL via ADD/ADC Rd,Rd)
//   FLOW  : RJMP BREQ BRNE BRCS BRCC
//   MEM   : LDS STS
//   IO    : IN OUT
//   CTRL  : NOP SEI CLI SLEEP
// ============================================================================

module open8_core #(
    parameter PROG_ADDR_W = 12,   // program memory address width (words)
    parameter DATA_ADDR_W = 16    // data address bus width
)(
    input  wire                    clk,
    input  wire                    rst_n,

    // Program memory: dual asynchronous read (current word + next word).
    output wire [PROG_ADDR_W-1:0]  pmem_addr_a,
    input  wire [15:0]             pmem_data_a,
    output wire [PROG_ADDR_W-1:0]  pmem_addr_b,
    input  wire [15:0]             pmem_data_b,

    // Data memory: asynchronous read, synchronous write.
    output reg  [DATA_ADDR_W-1:0]  dmem_addr,
    output reg                     dmem_we,
    output reg  [7:0]              dmem_wdata,
    input  wire [7:0]              dmem_rdata,

    // Simple I/O bus (OUT writes / IN reads).
    output reg                     io_we,
    output reg  [5:0]              io_addr,
    output reg  [7:0]              io_wdata,
    input  wire [7:0]              io_rdata,

    // Status.
    output wire                    halted,

    // Debug read port (tool-independent introspection for the testbench).
    input  wire [4:0]              dbg_addr,
    output wire [7:0]              dbg_data,
    output wire [7:0]              dbg_sreg,
    output wire [15:0]             dbg_pc
);

    // ---- SREG bit positions -------------------------------------------------
    /* verilator lint_off UNUSEDPARAM */
    localparam C = 0, Z = 1, N = 2, V = 3, S = 4, H = 5, T = 6, I = 7;
    /* verilator lint_on UNUSEDPARAM */

    // ---- Architectural state ------------------------------------------------
    reg [7:0]  R [0:31];
    reg [7:0]  sreg;
    reg [15:0] pc;
    reg        halt;

    integer k;

    // Named wires for every register so they appear cleanly in waveforms
    // (gtkwave / VCD). The raw array R[0:31] often has poor per-element
    // visibility under Verilator tracing; these wires are simple assigns.
    // The /*verilator public*/ attributes ensure Verilator keeps the signals
    // in the emitted C++ model and VCD trace (they are otherwise only used for
    // debug/visibility and could be optimized away).
    wire [7:0] R0  /*verilator public*/ = R[0],  R1  /*verilator public*/ = R[1],  R2  /*verilator public*/ = R[2],  R3  /*verilator public*/ = R[3];
    wire [7:0] R4  /*verilator public*/ = R[4],  R5  /*verilator public*/ = R[5],  R6  /*verilator public*/ = R[6],  R7  /*verilator public*/ = R[7];
    wire [7:0] R8  /*verilator public*/ = R[8],  R9  /*verilator public*/ = R[9],  R10 /*verilator public*/ = R[10], R11 /*verilator public*/ = R[11];
    wire [7:0] R12 /*verilator public*/ = R[12], R13 /*verilator public*/ = R[13], R14 /*verilator public*/ = R[14], R15 /*verilator public*/ = R[15];
    wire [7:0] R16 /*verilator public*/ = R[16], R17 /*verilator public*/ = R[17], R18 /*verilator public*/ = R[18], R19 /*verilator public*/ = R[19];
    wire [7:0] R20 /*verilator public*/ = R[20], R21 /*verilator public*/ = R[21], R22 /*verilator public*/ = R[22], R23 /*verilator public*/ = R[23];
    wire [7:0] R24 /*verilator public*/ = R[24], R25 /*verilator public*/ = R[25], R26 /*verilator public*/ = R[26], R27 /*verilator public*/ = R[27];
    wire [7:0] R28 /*verilator public*/ = R[28], R29 /*verilator public*/ = R[29], R30 /*verilator public*/ = R[30], R31 /*verilator public*/ = R[31];

    // ---- Instruction fetch (async) -----------------------------------------
    assign pmem_addr_a = pc[PROG_ADDR_W-1:0];
    assign pmem_addr_b = pc[PROG_ADDR_W-1:0] + 1'b1;
    wire [15:0] ir  = pmem_data_a;   // current instruction word
    wire [15:0] ir2 = pmem_data_b;   // following word (immediate/address)

    // ---- Field extraction ---------------------------------------------------
    wire [4:0] d5  = {ir[8], ir[7:4]};        // 5-bit dest reg
    wire [4:0] r5  = {ir[9], ir[3:0]};        // 5-bit src reg
    wire [4:0] di  = {1'b1, ir[7:4]};         // immediate dest reg (R16..R31)
    wire [7:0] K8  = {ir[11:8], ir[3:0]};     // 8-bit immediate
    wire [5:0] io6 = {ir[10:9], ir[3:0]};     // 6-bit I/O address
    wire [2:0] bsel = ir[2:0];                // branch bit select
    wire [15:0] br_off = {{9{ir[9]}}, ir[9:3]};   // signed 7-bit branch offset
    wire [15:0] rj_off = {{4{ir[11]}}, ir[11:0]}; // signed 12-bit rjmp offset

    wire [7:0] Rd  = R[d5];
    wire [7:0] Rr  = R[r5];
    wire [7:0] Rdi = R[di];

    // ---- Combinational decode / datapath -----------------------------------
    reg                    reg_we;
    reg  [4:0]             reg_waddr;
    reg  [7:0]             reg_wdata;
    reg  [7:0]             sreg_n;
    reg  [15:0]            pc_n;
    reg                    halt_n;

    // ALU scratch
    reg  [7:0] a, b, res;
    reg        cin;
    reg  [8:0] add9, sub9;
    /* verilator lint_off UNUSEDSIGNAL */
    reg  [4:0] add4_tmp, sub4_tmp; // 5-bit results for half-carry (H flag) computation
    /* verilator lint_on UNUSEDSIGNAL */
    reg        add4_c, sub4_c;     // half-carry (bit 4 of the 4-bit add/sub)
    reg        fC, fZ, fN, fV, fS, fH;

    always @* begin
        // defaults
        reg_we     = 1'b0;
        reg_waddr  = d5;
        reg_wdata  = 8'h00;
        sreg_n     = sreg;
        pc_n       = pc + 16'd1;
        halt_n     = halt;
        dmem_addr  = {DATA_ADDR_W{1'b0}};
        dmem_we    = 1'b0;
        dmem_wdata = 8'h00;
        io_we      = 1'b0;
        io_addr    = 6'h00;
        io_wdata   = 8'h00;

        a = 8'h00; b = 8'h00; cin = 1'b0;
        add9 = 9'h0; sub9 = 9'h0; add4_tmp = 5'h0; sub4_tmp = 5'h0;
        add4_c = 1'b0; sub4_c = 1'b0;
        res = 8'h00; fC=0; fZ=0; fN=0; fV=0; fS=0; fH=0;

        casez (ir)
            // ---- control (exact opcodes first) ----
            16'b0000_0000_0000_0000: begin /* NOP */ end
            16'b1001_0100_0111_1000: begin sreg_n[I] = 1'b1; end // SEI
            16'b1001_0100_1111_1000: begin sreg_n[I] = 1'b0; end // CLI
            16'b1001_0101_1000_1000: begin halt_n = 1'b1; pc_n = pc; end // SLEEP

            // ---- ADD / ADC / LSL / ROL ----
            16'b0000_11??_????_????,   // ADD
            16'b0001_11??_????_????: begin // ADC
                a = Rd; b = Rr;
                cin = ir[12] ? sreg[C] : 1'b0; // ir[12]=1 -> ADC
                add9   = {1'b0,a} + {1'b0,b} + {8'd0, cin};
                add4_tmp = {1'b0,a[3:0]} + {1'b0,b[3:0]} + {4'd0, cin};
                add4_c   = add4_tmp[4];
                res = add9[7:0];
                fC = add9[8]; fH = add4_c;
                fN = res[7];  fZ = (res == 8'h00);
                fV = (~(a[7]^b[7])) & (a[7]^res[7]);
                fS = fN ^ fV;
                reg_we = 1'b1; reg_waddr = d5; reg_wdata = res;
                sreg_n[C]=fC; sreg_n[Z]=fZ; sreg_n[N]=fN;
                sreg_n[V]=fV; sreg_n[S]=fS; sreg_n[H]=fH;
            end

            // ---- SUB / SBC / CP / CPC ----
            // ir[12] : 1 = no carry-in (SUB/CP), 0 = carry-in (SBC/CPC)
            // ir[11] : 1 = write-back (SUB/SBC),  0 = compare only (CP/CPC)
            16'b0001_10??_????_????,   // SUB  0001_10
            16'b0000_10??_????_????,   // SBC  0000_10
            16'b0001_01??_????_????,   // CP   0001_01
            16'b0000_01??_????_????: begin // CPC 0000_01
                a = Rd; b = Rr;
                cin = ir[12] ? 1'b0 : sreg[C];
                sub9 = {1'b0,a} - {1'b0,b} - {8'd0, cin};
                sub4_tmp = {1'b0,a[3:0]} - {1'b0,b[3:0]} - {4'd0, cin};
                sub4_c   = sub4_tmp[4];
                res = sub9[7:0];
                fC = sub9[8]; fH = sub4_c;
                fN = res[7];
                fV = (a[7]^b[7]) & (a[7]^res[7]);
                fS = fN ^ fV;
                fZ = ir[12] ? (res == 8'h00) : ((res == 8'h00) & sreg[Z]);
                reg_we    = ir[11];
                reg_waddr = d5;
                reg_wdata = res;
                sreg_n[C]=fC; sreg_n[Z]=fZ; sreg_n[N]=fN;
                sreg_n[V]=fV; sreg_n[S]=fS; sreg_n[H]=fH;
            end

            // ---- AND / EOR / OR / MOV ----
            16'b0010_00??_????_????: begin // AND
                res = Rd & Rr; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[V]=1'b0; sreg_n[N]=res[7]; sreg_n[Z]=(res==0); sreg_n[S]=res[7];
            end
            16'b0010_01??_????_????: begin // EOR
                res = Rd ^ Rr; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[V]=1'b0; sreg_n[N]=res[7]; sreg_n[Z]=(res==0); sreg_n[S]=res[7];
            end
            16'b0010_10??_????_????: begin // OR
                res = Rd | Rr; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[V]=1'b0; sreg_n[N]=res[7]; sreg_n[Z]=(res==0); sreg_n[S]=res[7];
            end
            16'b0010_11??_????_????: begin // MOV
                reg_we=1'b1; reg_waddr=d5; reg_wdata=Rr;
            end

            // ---- immediate ops (R16..R31) ----
            16'b1110_????_????_????: begin // LDI
                reg_we=1'b1; reg_waddr=di; reg_wdata=K8;
            end
            16'b0110_????_????_????: begin // ORI / SBR
                res = Rdi | K8; reg_we=1'b1; reg_waddr=di; reg_wdata=res;
                sreg_n[V]=1'b0; sreg_n[N]=res[7]; sreg_n[Z]=(res==0); sreg_n[S]=res[7];
            end
            16'b0111_????_????_????: begin // ANDI / CBR
                res = Rdi & K8; reg_we=1'b1; reg_waddr=di; reg_wdata=res;
                sreg_n[V]=1'b0; sreg_n[N]=res[7]; sreg_n[Z]=(res==0); sreg_n[S]=res[7];
            end
            16'b0101_????_????_????,   // SUBI
            16'b0011_????_????_????: begin // CPI
                a = Rdi; b = K8;
                sub9 = {1'b0,a} - {1'b0,b};
                sub4_tmp = {1'b0,a[3:0]} - {1'b0,b[3:0]};
                sub4_c   = sub4_tmp[4];
                res = sub9[7:0];
                fC=sub9[8]; fH=sub4_c; fN=res[7]; fZ=(res==0);
                fV=(a[7]^b[7]) & (a[7]^res[7]); fS=fN^fV;
                reg_we = (ir[14:12]==3'b101); // SUBI writes, CPI does not
                reg_waddr = di; reg_wdata = res;
                sreg_n[C]=fC; sreg_n[Z]=fZ; sreg_n[N]=fN;
                sreg_n[V]=fV; sreg_n[S]=fS; sreg_n[H]=fH;
            end

            // ---- unary group 1001_010d_dddd_xxxx ----
            16'b1001_010?_????_0000: begin // COM
                res = ~Rd; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[C]=1'b1; sreg_n[V]=1'b0; sreg_n[N]=res[7];
                sreg_n[Z]=(res==0); sreg_n[S]=res[7];
            end
            16'b1001_010?_????_0001: begin // NEG
                res = 8'h00 - Rd; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[C]=(res!=8'h00); sreg_n[H]=(res[3]|Rd[3]);
                sreg_n[V]=(res==8'h80); sreg_n[N]=res[7];
                sreg_n[Z]=(res==0); sreg_n[S]=res[7]^(res==8'h80);
            end
            16'b1001_010?_????_0010: begin // SWAP
                res = {Rd[3:0], Rd[7:4]}; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
            end
            16'b1001_010?_????_0011: begin // INC
                res = Rd + 8'd1; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[V]=(Rd==8'h7f); sreg_n[N]=res[7];
                sreg_n[Z]=(res==0); sreg_n[S]=res[7]^(Rd==8'h7f);
            end
            16'b1001_010?_????_1010: begin // DEC
                res = Rd - 8'd1; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[V]=(Rd==8'h80); sreg_n[N]=res[7];
                sreg_n[Z]=(res==0); sreg_n[S]=res[7]^(Rd==8'h80);
            end
            16'b1001_010?_????_0110: begin // LSR
                res = {1'b0, Rd[7:1]}; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[C]=Rd[0]; sreg_n[N]=1'b0; sreg_n[Z]=(res==0);
                sreg_n[V]=1'b0 ^ Rd[0]; sreg_n[S]=1'b0 ^ (1'b0 ^ Rd[0]);
            end
            16'b1001_010?_????_0101: begin // ASR
                res = {Rd[7], Rd[7:1]}; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[C]=Rd[0]; sreg_n[N]=res[7]; sreg_n[Z]=(res==0);
                sreg_n[V]=res[7]^Rd[0]; sreg_n[S]=res[7]^(res[7]^Rd[0]);
            end
            16'b1001_010?_????_0111: begin // ROR
                res = {sreg[C], Rd[7:1]}; reg_we=1'b1; reg_waddr=d5; reg_wdata=res;
                sreg_n[C]=Rd[0]; sreg_n[N]=res[7]; sreg_n[Z]=(res==0);
                sreg_n[V]=res[7]^Rd[0]; sreg_n[S]=res[7]^(res[7]^Rd[0]);
            end

            // ---- data memory (two-word) ----
            16'b1001_000?_????_0000: begin // LDS Rd, k
                dmem_addr = ir2[DATA_ADDR_W-1:0];
                reg_we=1'b1; reg_waddr=d5; reg_wdata=dmem_rdata;
                pc_n = pc + 16'd2;
            end
            16'b1001_001?_????_0000: begin // STS k, Rr
                dmem_addr = ir2[DATA_ADDR_W-1:0];
                dmem_we=1'b1; dmem_wdata=Rd;
                pc_n = pc + 16'd2;
            end

            // ---- I/O ----
            16'b1011_0???_????_????: begin // IN Rd, P
                io_addr = io6;
                reg_we=1'b1; reg_waddr=d5; reg_wdata=io_rdata;
            end
            16'b1011_1???_????_????: begin // OUT P, Rr
                io_we=1'b1; io_addr=io6; io_wdata=Rd;
            end

            // ---- branches ----
            16'b1111_00??_????_????: begin // BRBS b (branch if SREG[b] set)
                if (sreg[bsel]) pc_n = pc + 16'd1 + br_off;
            end
            16'b1111_01??_????_????: begin // BRBC b (branch if SREG[b] clear)
                if (!sreg[bsel]) pc_n = pc + 16'd1 + br_off;
            end

            // ---- relative jump ----
            16'b1100_????_????_????: begin // RJMP
                pc_n = pc + 16'd1 + rj_off;
            end

            default: begin /* unimplemented -> NOP */ end
        endcase
    end

    // ---- Sequential state update -------------------------------------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pc   <= 16'h0000;
            sreg <= 8'h00;
            halt <= 1'b0;
            for (k = 0; k < 32; k = k + 1) R[k] <= 8'h00;
        end else if (!halt) begin
            pc   <= pc_n;
            sreg <= sreg_n;
            halt <= halt_n;
            if (reg_we) R[reg_waddr] <= reg_wdata;
        end
    end

    assign halted   = halt;
    assign dbg_data = R[dbg_addr];
    assign dbg_sreg = sreg;
    assign dbg_pc   = pc;

endmodule
