/* starting point: func_801C1E74 (file009), whose assembly is 96% the same as this function's */
#include "context.h"

extern void func_801E5010();
extern u8 D_801BBBF0[];

typedef struct func_801C33FC_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C33FC_StructDC;

typedef struct func_801C33FC_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C33FC_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x1DA - 0x192];
    u16 unk1DA;
    u8 pad3[0xEF0 - 0x1DC];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C33FC_StructBBBF0;

typedef struct func_801C33FC_StructArg {
    u8 pad0[0x54];
    s32 unk54;
} func_801C33FC_StructArg;

void func_801C33FC(void *arg0, s32 arg1) {
    if (((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk1DA == 2) {
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk18E = 3;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unk190 = 0;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEF0 = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEF0 & 0xFFBF;
        ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkDC->unk2C | 0x40;
        ((func_801C33FC_StructArg *) arg0)->unk54 = ((func_801C33FC_StructBBBF0 *) &D_801BBBF0)->unkEFC;
        func_800058DC(arg0, &func_801E5010);
    }
}
