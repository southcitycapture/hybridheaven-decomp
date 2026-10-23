#include "context.h"

typedef struct func_8022B3E0_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1030 - 0xE0];
    u8 unk1030;
    u8 unk1031;
} func_8022B3E0_StructG;

typedef struct func_8022B3E0_StructE {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad1[3];
    u8 unk2DD;
} func_8022B3E0_StructE;

typedef struct func_8022B3E0_StructArg {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x9A - 0x10];
    s16 unk9A;
    u8 pad2[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
    u8 pad3[0xA8 - 0xA3];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
} func_8022B3E0_StructArg;

extern void func_800058DC(void *arg0, void *arg1);

#define GG ((func_8022B3E0_StructG *)&D_801BBBF0)

void func_8022B3E0(func_8022B3E0_StructArg *arg0, s32 arg1) {
    func_8022B3E0_StructE *a;
    func_8022B3E0_StructE *b;
    s32 c;
    s32 d;

    c = arg0->unkC;
    d = GG->unkDC;
    a = (d == c) ? (func_8022B3E0_StructE *)&D_801BC03C : (func_8022B3E0_StructE *)&D_801BC3D8;
    b = (d == c) ? (func_8022B3E0_StructE *)&D_801BC3D8 : (func_8022B3E0_StructE *)&D_801BC03C;
    d = (d == c) ? 0 : 1;
    if (GG->unk1031 == 5) {
        if (d != GG->unk1030 && b->unk2DD == 0) {
            a->unk2D8 = arg0->unkA1;
            a->unk2D9 = arg0->unkA2;
            arg0->unkA8 = 0;
        } else {
            arg0->unkA8 = 2;
            arg0->unk9A = 0;
        }
        func_800058DC(arg0, arg0->unkB0);
    }
}
