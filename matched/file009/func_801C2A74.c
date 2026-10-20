#include "context.h"

void func_801C2A74(struct func_801C2E20_Struct0 *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;
    if (D_801BBBF0.unk1B4 & 1) {
        D_801BBBF0.unk1B4 = D_801BBBF0.unk1B4 & 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    if (func_80010550(arg1, temp) != 0) {
        func_801C3BAC(0);
        func_801C3B48(4);
        func_800058DC(arg0, func_801C2580);
    }
}
