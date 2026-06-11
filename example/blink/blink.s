; Blink example for Open8 on FPGA (or sim).
; Toggles ALL 8 bits of the I/O port between 0x00 and 0xFF.
; (All LEDs on the board turn on together, then off together.)
;
; On real hardware: runs forever (visible full-byte blink).
; In simulation: the testbench now stops after a few port writes so that
; gtkwave contains multiple visible 0x00 <-> 0xFF transitions on R16/port_out
; (even with the delay loops left enabled). No SLEEP/halt required.
;
; Fast-sim tip: comment the delay block below, then `make EXAMPLE=blink clean wave`
; to see very rapid toggles in the VCD (hundreds of thousands per second of sim time).

        LDI   R16, 0x00     ; start with all bits off (0x00)

loop:
        OUT   0, R16        ; drive the 8-bit port (led0..led7)

        ; --------------------------------------------------------------------
        ; DELAY (active by default for real FPGA/hardware)
        ; A visible blink rate so you can actually see the LEDs toggle on the
        ; board. Three 8-bit nested loops → ~16.7 million cycles per half-period.
        ;
        ; On the iCESugar40 (internal HFOSC ~48 MHz with div-by-1) this yields
        ; ~0.35 s per half → a comfortable ~1.4 s full on/off cycle that is easy
        ; for the eye to follow as distinct blinks.
        ;
        ; To slow it even more on hardware: add yet another outer loop (e.g. R18)
        ; or start the counters from a higher value (LDI Rn, N) to shorten the
        ; count range if you want asymmetric timing.
        ;
        ; FOR SIMULATION (fast toggles in gtkwave with "make EXAMPLE=blink wave"):
        ;   Comment out or delete the entire delay block below. The loop then
        ;   becomes just OUT + COM + RJMP (~3 cycles per toggle). The testbench
        ;   will still stop after a few strobes, but you will see hundreds of
        ;   thousands of rapid 0x00 <-> 0xFF transitions inside the VCD window.
        ; --------------------------------------------------------------------

        ; visible delay for hardware blink rate (comment this block for max-speed sim)
        LDI   R19, 0
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

        RJMP  loop          ; forever (or until power-off / reset)
