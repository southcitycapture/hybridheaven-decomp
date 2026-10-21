#include "context.h"
/* starting point: func_80243B94 (file018), whose assembly is 95% the same as this function's */
extern u8 D_80258DD4[];
extern void func_8013A334();
extern void func_80243C54();
extern void func_80243D20();
void func_80243C54(arg, arg1)
void *arg;
s32 arg1;
{
#define arg0 ((func_8024312C_Struct *)arg)
    func_8024312C_StructInner *s0 = arg0->unk5C;
    struct func_80242C60_Cfg sp28;
    arg0->unk2C |= 0x80;
    if (func_80242620(arg) == 0) {
        func_8013A334(&sp28, arg1, s0, 0xC);
        if (func_8012CE9C(arg1, s0, D_80258D98, 0xA) == 0 && func_80010550(arg1, s0) != 0) {
            s0->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg, func_80243D20);
        }
    }
}
#undef arg0
