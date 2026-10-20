#include "context.h"



void func_80246E60(void *arg0, s32 arg1);

void func_80246DA0(func_80246DA0_Struct *arg0, s32 arg1) {
    func_80246DA0_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80244AB0(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x40);
        func_800058DC(arg0, func_80246E60);
    }
}
