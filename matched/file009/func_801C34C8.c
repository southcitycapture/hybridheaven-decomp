#include "context.h"
/* starting point: func_801C1F40 (file009), adapted: 6-arg call with the 12-byte struct passed by value */
typedef struct func_801C34C8_StructDC {
    u8 pad0[0x2C];
    s32 unk2C;
} func_801C34C8_StructDC;

typedef struct func_801C34C8_StructBBBF0 {
    u8 pad0[0xDC];
    func_801C34C8_StructDC *unkDC;
    u8 pad1[0x18E - 0xE0];
    u16 unk18E;
    u16 unk190;
    u8 pad2[0x1DA - 0x192];
    u16 unk1DA;
    u16 unk1DC;
    u8 pad3[0xEF0 - 0x1DE];
    u16 unkEF0;
    u8 pad4[0xEFC - 0xEF2];
    s32 unkEFC;
} func_801C34C8_StructBBBF0;

typedef struct func_801C34C8_StructArg {
    u8 pad0[0x54];
    s32 unk54;
    u8 pad1[0x4];
    s32 unk5C;
} func_801C34C8_StructArg;

void func_801C34C8(func_801C34C8_StructArg *arg0, s32 arg1) {
    extern void func_801C3070();
    extern void func_801E5010();
    s32 temp_a1;
    s32 temp_a0;

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        temp_a0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DA;
        ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DC = 1;
        if (temp_a0 == 1) {
            func_800058DC(arg0, func_801C3070);
            temp_a0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk1DA;
        }
        if (temp_a0 == 2) {
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk18E = 3;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unk190 = 0;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEF0 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEF0 & 0xFFBF;
            ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkDC->unk2C = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkDC->unk2C | 0x40;
            arg0->unk54 = ((func_801C34C8_StructBBBF0 *)D_801BBBF0)->unkEFC;
            func_800058DC(arg0, func_801E5010);
        }
    }
}
