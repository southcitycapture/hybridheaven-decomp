#include "context.h"

extern s32 func_801517CC(s32);
extern void func_801512CC();
extern void func_80151430();
extern u8 func_80244A04[];

void func_80244998(arg0, arg1)
s32 arg0;
s32 arg1;
{
    if (func_801517CC(D_8025A290) != 0) {
        func_801512CC(D_8025A290, 0xC3160000, 0xC3EB0000, 0x43A28000);
        func_80151430(D_8025A290, 0x400);
        {
            extern void func_800058DC();
            func_800058DC(arg0, func_80244A04);
        }
    }
}
