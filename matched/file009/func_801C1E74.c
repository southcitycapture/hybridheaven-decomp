#include "context.h"

extern void func_801E5010();

typedef struct func_801C1E74_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C1E74_StructDC;

typedef struct func_801C1E74_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C1E74_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x194 - 0x192];
    u16 unk194;
    u8 pad3[0xEF0 - 0x196];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C1E74_StructBBBF0;

typedef struct func_801C1E74_StructArg {
    u8 pad0[0x54];
    s32 unk54;
} func_801C1E74_StructArg;

void func_801C1E74(void *arg0, s32 arg1) {
    if (((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unk194 == 2) {
        ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unk18E = 3;
        ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unk190 = 0;
        ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkEF0 = ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkEF0 & 0xFFBF;
        ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C = ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C | 0x40;
        ((func_801C1E74_StructArg *) arg0)->unk54 = ((func_801C1E74_StructBBBF0 *) &D_801BBBF0)->unkEFC;
        func_800058DC(arg0, &func_801E5010);
    }
}
