#include "context.h"

typedef struct func_801DFAA4_StructB {
    u8 pad0[0x2C];
    f32 *unk2C;
} func_801DFAA4_StructB;
typedef struct func_801DFAA4_StructA {
    u8 pad0[0x24];
    func_801DFAA4_StructB *unk24;
} func_801DFAA4_StructA;
typedef struct func_801DFAA4_StructG {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0xE0 - 6];
    func_801DFAA4_StructB *unkE0;
    u8 padE4[0x35B - 0xE4];
    u8 unk35B;
} func_801DFAA4_StructG;
#define G801DFAA4 ((func_801DFAA4_StructG *)&D_801BBBF0)

s32 func_801DFAA4(func_801DFAA4_StructA *arg0, u8 arg1) {
    f32 *p;
    u16 t;
    u16 id;
    func_801DE6F4_StructVec v;

    v.x = arg0->unk24->unk2C[1];
    v.y = arg0->unk24->unk2C[2];
    v.z = arg0->unk24->unk2C[3];
    if (arg1 == 2) {
        func_801DC9C4(v, 0x30F, 1.0f);
        return 0;
    }
    p = G801DFAA4->unkE0->unk2C;
    if (func_801C5A1C(p[1], p[2], p[3], p[1], p[2] - 5.0, p[3]) != 0) {
        id = *(u16 *)&D_801E15E0[D_801E16A0[G801DFAA4->unk4] * 16 + G801DFAA4->unk35B * 2];
        t = id;
        if (id == 0x677 || id == 0x679 || id == 0x676 || id == 0x678 || id == 0x66E || id == 0x670 || id == 0x66F || id == 0x671 || id == 0x661) {
            if (arg1 == 0) id = 0x308; else id = 0x30C;
        } else if (t == 0x672 || t == 0x674 || t == 0x673 || t == 0x675) {
            if (arg1 == 0) id = 0x30A; else id = 0x30E;
        } else {
            if (arg1 == 0) id = 0x309; else id = 0x30D;
        }
        func_801DC9C4(v, id, 1.0f);
        return 1;
    }
    return 0;
}
