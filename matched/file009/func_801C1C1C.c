#include "context.h"
typedef struct func_801C1EE0_StructB00 {
    s32 unk0;
    s16 unk4;
    u16 unk6;
    f32 unk8;
} func_801C1EE0_StructB00;
extern void func_800058DC();
extern func_801C1EE0_StructB00 D_801E0B00;
extern s32 func_80010550();
extern u8 D_801BBBF0[];
extern void func_801E5010();
typedef struct func_801C2494_Struct388500 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C2494_Struct388500;
extern s32 func_8012CE9C(s32, void *, func_801C2494_Struct388500, s32);

typedef struct func_801C1C1C_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C1C1C_StructDC;

typedef struct func_801C1C1C_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C1C1C_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u16 unk192;
    u16 unk194;
    u16 unk196;
    u8 pad3[0xEF0 - 0x198];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C1C1C_StructBBBF0;

typedef struct func_801C1C1C_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    void *unk5C;
} func_801C1C1C_StructArg;

typedef struct func_801C1C1C_StructVec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C1C1C_StructVec;

extern void func_801C1A34();
#define G ((func_801C1C1C_StructBBBF0 *)D_801BBBF0)

void func_801C1C1C(func_801C1C1C_StructArg *arg0, s32 arg1) {
    void *t7;
    void *sp24;

    t7 = arg0->unk5C;
    sp24 = t7;
    if (G->unk190 == 4) {
        if (func_8012CE9C(arg1, t7, *(func_801C2494_Struct388500 *)&D_801E0B00, 0xF) != 0) {
            return;
        }
        goto block_4;
    }
    if (func_8012CE9C(arg1, sp24, *(func_801C2494_Struct388500 *)&D_801E0B00, 0xA) != 0) {
        return;
    }
block_4:
    func_80010550(arg1, sp24);
    G->unk196 = 1;
    if (G->unk194 == 1) {
        func_800058DC(arg0, func_801C1A34);
        return;
    }
    if (G->unk192 == 7) {
        func_800058DC(arg0, func_801E5010);
        return;
    }
    if (G->unk194 == 2) {
        G->unk18E = 3;
        G->unk190 = 0;
        G->unkEF0 &= 0xFFBF;
        G->unkDC->unk2C |= 0x40;
        arg0->unk54 = G->unkEFC;
        func_800058DC(arg0, func_801E5010);
    }
}
