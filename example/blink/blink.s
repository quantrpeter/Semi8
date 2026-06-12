; Blink example for Open8 on FPGA (or sim).
; Toggles ALL 8 bits of the I/O port between 0x00 and 0xFF.
;
; On the iCESugar board the top-level (boards/icesugar40/top.v) drives the
; onboard RGB LED active-low from port_out, so:
;   port_out = 0xFF  ->  RGB LED ON (white)
;   port_out = 0x00  ->  RGB LED OFF
;
; Timing: the core is single-cycle and the board clock is 12 MHz (pin 35).
; The delay below is three nested loops. The inner INC+BRNE pair costs
; 2 cycles per count, so one half-period is roughly:
;   48 (outer) * 256 * 256 * 2 cycles ~= 6.3M cycles ~= 0.5 s at 12 MHz
; giving a comfortable ~1 s full on/off blink cycle.
;
; FOR SIMULATION (fast toggles in gtkwave with "make EXAMPLE=blink wave"):
; comment out the delay block; the loop becomes OUT + COM + RJMP and you
; will see very rapid 0x00 <-> 0xFF transitions on R16/port_out in the VCD.

        LDI   R16, 0x00     ; start with all bits off (0x00)

loop:
        OUT   0, R16        ; drive the 8-bit port (LEDs)

        ; ---- delay ~0.5 s at 12 MHz (comment out for fast simulation) ----
        LDI   R19, 0xD0     ; outer loop: 256-0xD0 = 48 iterations
d0:     LDI   R20, 0
d1:     LDI   R21, 0
d2:     INC   R21
        BRNE  d2
        INC   R20
        BRNE  d1
        INC   R19
        BRNE  d0

        ; toggle ALL 8 bits: 0x00 <-> 0xFF
        COM   R16

        RJMP  loop          ; forever
