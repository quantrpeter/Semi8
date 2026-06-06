#!/usr/bin/env python3
"""Tiny two-pass assembler for the Open8 soft core.

Usage:  python3 tools/asm.py input.s output.hex

Produces a Verilog $readmemh-compatible file: one 16-bit word per line in hex.
Supports labels, comments (';' or '//'), and the instruction subset implemented
by src/open8_core.v. Registers are written as R0..R31. Immediates accept decimal
or 0x-hex.
"""

import sys
import re


def reg(tok):
    m = re.fullmatch(r"[Rr](\d+)", tok)
    if not m:
        raise ValueError(f"expected register, got '{tok}'")
    n = int(m.group(1))
    if not (0 <= n <= 31):
        raise ValueError(f"register out of range: {tok}")
    return n


def imm(tok, labels=None, bits=None, signed=False):
    tok = tok.strip()
    if labels is not None and tok in labels:
        val = labels[tok]
    else:
        val = int(tok, 0)
    return val


def rr(base, d, r):
    return base | (((r >> 4) & 1) << 9) | (((d >> 4) & 1) << 8) | ((d & 0xF) << 4) | (r & 0xF)


def imm_op(base, d, k):
    if not (16 <= d <= 31):
        raise ValueError("immediate ops require R16..R31")
    dd = d - 16
    k &= 0xFF
    return base | (((k >> 4) & 0xF) << 8) | (dd << 4) | (k & 0xF)


def unary(suffix, d):
    return 0x9400 | (((d >> 4) & 1) << 8) | ((d & 0xF) << 4) | suffix


def io_op(base, d, a):
    a &= 0x3F
    return base | (((a >> 4) & 0x3) << 9) | (((d >> 4) & 1) << 8) | ((d & 0xF) << 4) | (a & 0xF)


# instruction -> (#words, encoder)
RR_BASES = {
    "ADD": 0x0C00, "ADC": 0x1C00, "SUB": 0x1800, "SBC": 0x0800,
    "CP": 0x1400, "CPC": 0x0400, "AND": 0x2000, "EOR": 0x2400,
    "OR": 0x2800, "MOV": 0x2C00,
}
IMM_BASES = {"SUBI": 0x5000, "ORI": 0x6000, "ANDI": 0x7000, "CPI": 0x3000, "LDI": 0xE000}
UNARY = {"COM": 0x0, "NEG": 0x1, "SWAP": 0x2, "INC": 0x3, "ASR": 0x5, "LSR": 0x6, "ROR": 0x7, "DEC": 0xA}
BR = {"BRCS": (0xF000, 0), "BREQ": (0xF000, 1), "BRCC": (0xF400, 0), "BRNE": (0xF400, 1)}
SIMPLE = {"NOP": 0x0000, "SEI": 0x9478, "CLI": 0x94F8, "SLEEP": 0x9588}


def tokenize_operands(rest):
    return [t.strip() for t in rest.split(",")] if rest.strip() else []


def size_of(mn):
    if mn in ("LDS", "STS"):
        return 2
    return 1


def assemble(src_lines):
    # ---- pass 1: collect labels and addresses (in words) ----
    labels = {}
    program = []  # list of (mnemonic, operands, addr)
    addr = 0
    for raw in src_lines:
        line = raw.split(";")[0].split("//")[0].strip()
        if not line:
            continue
        while ":" in line:
            lbl, _, line = line.partition(":")
            labels[lbl.strip()] = addr
            line = line.strip()
            if not line:
                break
        if not line:
            continue
        parts = line.split(None, 1)
        mn = parts[0].upper()
        rest = parts[1] if len(parts) > 1 else ""
        ops = tokenize_operands(rest)
        program.append((mn, ops, addr))
        addr += size_of(mn)

    # ---- pass 2: encode ----
    words = []
    for mn, ops, addr in program:
        if mn in SIMPLE:
            words.append(SIMPLE[mn])
        elif mn in RR_BASES:
            words.append(rr(RR_BASES[mn], reg(ops[0]), reg(ops[1])))
        elif mn == "CLR":  # pseudo: EOR Rd,Rd
            d = reg(ops[0]); words.append(rr(0x2400, d, d))
        elif mn == "LSL":  # pseudo: ADD Rd,Rd
            d = reg(ops[0]); words.append(rr(0x0C00, d, d))
        elif mn == "ROL":  # pseudo: ADC Rd,Rd
            d = reg(ops[0]); words.append(rr(0x1C00, d, d))
        elif mn == "TST":  # pseudo: AND Rd,Rd
            d = reg(ops[0]); words.append(rr(0x2000, d, d))
        elif mn == "SER":  # pseudo: LDI Rd,0xFF
            words.append(imm_op(0xE000, reg(ops[0]), 0xFF))
        elif mn in IMM_BASES:
            words.append(imm_op(IMM_BASES[mn], reg(ops[0]), imm(ops[1], labels)))
        elif mn in UNARY:
            words.append(unary(UNARY[mn], reg(ops[0])))
        elif mn == "IN":
            words.append(io_op(0xB000, reg(ops[0]), imm(ops[1], labels)))
        elif mn == "OUT":
            words.append(io_op(0xB800, reg(ops[1]), imm(ops[0], labels)))
        elif mn == "LDS":
            d = reg(ops[0]); k = imm(ops[1], labels)
            words.append(0x9000 | (((d >> 4) & 1) << 8) | ((d & 0xF) << 4))
            words.append(k & 0xFFFF)
        elif mn == "STS":
            k = imm(ops[0], labels); d = reg(ops[1])
            words.append(0x9200 | (((d >> 4) & 1) << 8) | ((d & 0xF) << 4))
            words.append(k & 0xFFFF)
        elif mn in BR:
            base, b = BR[mn]
            target = imm(ops[0], labels)
            off = target - (addr + 1)
            if not (-64 <= off <= 63):
                raise ValueError(f"branch out of range at word {addr}: {mn} {ops}")
            words.append(base | ((off & 0x7F) << 3) | b)
        elif mn == "RJMP":
            target = imm(ops[0], labels)
            off = target - (addr + 1)
            if not (-2048 <= off <= 2047):
                raise ValueError(f"rjmp out of range at word {addr}")
            words.append(0xC000 | (off & 0xFFF))
        else:
            raise ValueError(f"unknown instruction '{mn}'")
    return words


def main():
    if len(sys.argv) != 3:
        print("usage: asm.py input.s output.hex", file=sys.stderr)
        sys.exit(1)
    with open(sys.argv[1]) as f:
        words = assemble(f.readlines())
    with open(sys.argv[2], "w") as f:
        for w in words:
            f.write(f"{w & 0xFFFF:04x}\n")
    print(f"assembled {len(words)} words -> {sys.argv[2]}")


if __name__ == "__main__":
    main()
