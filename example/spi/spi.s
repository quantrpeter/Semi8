; SPI master demo for Open8.
;
; I/O map (decoded in src/open8_top.v):
;   GPIO banks occupy I/O addresses 0..31 (addr k -> pins [8k +: 8]); the SPI
;   registers follow the GPIO region (IO_PORTS = 32):
;   32 = SPI_DATA  OUT: load byte and start a transfer / IN: last received byte
;   33 = SPI_STAT  IN : bit0 = busy
;   34 = SPI_CTRL  OUT: [2:0]=CLKDIV [3]=CPOL [4]=CPHA [5]=CS_N
;
; In the Verilator simulation MOSI is looped back to MISO, so whatever byte we
; send comes straight back. We send 0xA5, poll until the transfer completes,
; and keep the received byte in R18 (the testbench checks R18 == 0xA5).
;
; On real hardware (iCESugar SPI header: SS=16, SCK=15, MOSI=17, MISO=14) this
; same program clocks 0xA5 out to whatever slave is attached.

        ; configure: CLKDIV=1, CPOL=0, CPHA=0 (mode 0), CS asserted (CS_N=0)
        LDI   R16, 0x01
        OUT   34, R16         ; SPI_CTRL

        ; start a transfer of 0xA5
        LDI   R16, 0xA5
        OUT   32, R16         ; write SPI_DATA -> begins shifting

wait:
        IN    R17, 33         ; read SPI_STAT
        ANDI  R17, 0x01       ; isolate busy bit
        BRNE  wait            ; spin while busy

        IN    R18, 32         ; R18 <- received byte (0xA5 via loopback)

        ; deassert CS (CS_N=1), keep CLKDIV=1 / mode 0
        LDI   R16, 0x21
        OUT   34, R16         ; SPI_CTRL

        SLEEP                 ; stop the core
