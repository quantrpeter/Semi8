; Open8 demo program
; Computes the sum 1..10 (= 55 = 0x37), writes it to I/O port 0,
; stores it to SRAM address 0x20, reads it back, then halts.

        LDI   R16, 0          ; R16 = sum
        LDI   R17, 1          ; R17 = i
        LDI   R18, 11         ; R18 = loop limit
loop:
        ADD   R16, R17        ; sum += i
        INC   R17             ; i++
        CP    R17, R18        ; compare i with limit
        BRNE  loop            ; repeat while i != 11

        OUT   0, R16          ; port_out <= 55
        STS   0x20, R16       ; SRAM[0x20] <= 55
        LDI   R19, 0
        LDS   R19, 0x20       ; R19 <= SRAM[0x20]  (read-back check)

        ; a few bit-ops to exercise the ALU
        LDI   R20, 0x0F
        SWAP  R20             ; R20 = 0xF0
        LDI   R21, 0x81
        LSR   R21             ; R21 = 0x40, C=1

        SLEEP                 ; stop the core
