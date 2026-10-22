#include "context.h"



extern s32 func_80242620();
extern s32 func_80242714(void *);
extern s32 func_8012C6B4(s32);
extern void func_802431FC();
extern struct func_80242C60_Cfg D_80258D98;

void func_8024312C(func_8024312C_Struct *arg0, s32 arg1) {
    func_8024312C_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80242620() == 0) && (func_80242714(arg0) == 0) && (func_8012CE9C(arg1, sp2C, D_80258D98, 0xA) == 0) && (func_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x80) + 0x80);
        func_800058DC(arg0, func_802431FC);
    }
}
