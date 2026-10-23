#define func_801F3A18 func_801F3A18_ctx
#include "context.h"
#undef func_801F3A18

extern s32 func_80133A24(s32);
extern void func_8012D844(s32, s32, s32);

void func_801F3A18(s32 arg0, s32 arg1)
{
    s32 flags;

    flags = 0;
    if (func_80133A24(5)) flags = 1;
    if (func_80133A24(3)) flags |= 2;
    if (func_80133A24(6)) flags |= 4;
    if (flags == 0) goto zero;
    if (flags == 1) goto one;
    if (flags == 3) goto three;
    if (flags != 7) goto other;
    goto seven;
zero:
    func_8012D844(arg0, 0x78, 1);
    return;
one:
    func_8012D844(arg0, 0x78, 0);
    return;
three:
    func_8012D844(arg0, 0x78, 1);
    return;
seven:
    func_8012D844(arg0, 0x78, 0);
    return;
other:
    func_8012D844(arg0, 0x78, 0);
}
