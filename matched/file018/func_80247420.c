#include "context.h"



extern void func_802474E4();

void func_80247420(func_80247420_Struct *arg0, s32 arg1) {
    func_80247420_StructInner *sp2C;

    sp2C = arg0->unk5C;
    arg0->unk2C = arg0->unk2C | 0x80;
    if (func_80244AB0() == 0 && func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0 && func_80010550(arg1, sp2C) != 0) {
        sp2C->unk78 = 1;
        arg0->unk2C = arg0->unk2C & ~0x80;
        D_8025C704 = 1;
        func_800058DC(arg0, &func_802474E4);
    }
}
