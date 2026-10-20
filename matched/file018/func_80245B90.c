#include "context.h"
extern s32 func_80244AB0();
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
extern func_80246E60_StructGlobal D_80258F18;
extern s32 func_8012C6B4(s32);

extern void func_80245C58();



void func_80245B90(func_80245B90_Struct *arg0, s32 arg1) {
    func_80245B90_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80244AB0(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258F18, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x40);
        arg0->unk9C = arg0->unk30;
        func_800058DC(arg0, func_80245C58);
    }
}
