#include "context.h"
extern s32 func_8012CE9C(s32, void *, func_801C2494_Struct388500, s32);

typedef struct func_801C1F40_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    s32 unk5C;
} func_801C1F40_StructArg;

typedef struct func_801C1F40_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C1F40_StructDC;

typedef struct func_801C1F40_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C1F40_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x194 - 0x192];
    u16 unk194;
    u16 unk196;
    u8 pad3[0xEF0 - 0x198];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C1F40_StructBBBF0;

void func_801C1F40(func_801C1F40_StructArg *arg0, s32 arg1) {
    extern void func_801C1A34();
    extern void func_801E5010();
    s32 temp_a1;
    s32 temp_a0;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, *(func_801C2494_Struct388500 *)&D_801E0B00, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        temp_a0 = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk194;
        ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk196 = 1;
        if (temp_a0 == 1) {
            func_800058DC(arg0, func_801C1A34);
            temp_a0 = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk194;
        }
        if (temp_a0 == 2) {
            ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk18E = 3;
            ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unk190 = 0;
            ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkEF0 = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkEF0 & 0xFFBF;
            ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkDC->unk2C = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkDC->unk2C | 0x40;
            arg0->unk54 = ((func_801C1F40_StructBBBF0 *)&D_801BBBF0)->unkEFC;
            func_800058DC(arg0, func_801E5010);
        }
    }
}
