; Blink example for Open8 on FPGA (or sim).
; Toggles bit 0 of the 8-bit I/O port (wired to led0 on icesugar40).
; This demonstrates a simple "alive" loop driving an output pin.
;
; On real hardware: runs forever (visible LED blink).
; In simulation: the testbench will run a fixed number of cycles and
; report how many times the port value changed (no SLEEP/halt required).

        LDI   R16, 0x01     ; initial port value (bit 0 set)

loop:
        OUT   0, R16        ; drive the 8-bit port (led0..led7)

        ; crude software delay so the toggle is visible
        ; (nested loops; adjust constants for your clock rate)
        LDI   R20, 0
d1:     LDI   R21, 0
d2:     INC   R21
        BRNE  d2
        INC   R20
        BRNE  d1

        ; toggle bit 0
        LDI   R17, 0x01
        EOR   R16, R17

        RJMP  loop          ; forever (or until power-off / reset)
