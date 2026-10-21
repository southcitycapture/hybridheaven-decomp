#include "context.h"

extern s32 func_80002BE0(u8);
extern void func_80141BD0(s32, s32);

u8 func_80142350(arg0, arg1)
    u8 arg0;
    s32 arg1;
{
    u8 r;
    s32 sp20;
    s32 v;

    v = func_80002BE0(arg0);
    r = v;
    if (v == 0) {
        sp20 = func_8001F430(0x100);
        func_80141BD0(arg1, sp20);
        r = func_800032E0(arg0, 0, 0, 0x100, sp20);
        func_8001F540(sp20);
    }
    return r;
}
