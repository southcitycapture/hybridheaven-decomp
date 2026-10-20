#include "context.h"

extern s32 func_80010550(s32, s32);

void func_801C2BDC(struct func_801C2E20_Struct0 *arg0, s32 arg1)
{
    register s32 temp_a2;

    temp_a2 = arg0->unk5C;
    if (D_801BBBF0.unk1B4 & 1) {
        D_801BBBF0.unk1B4 &= 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    if (func_80010550(arg1, temp_a2) != 0) {
        func_801C3BAC(0);
        func_800058DC(arg0, func_801C2580);
        func_801C3BAC(0);
        func_801C3B48(4);
        func_800058DC(arg0, func_801C2580);
    }
}
