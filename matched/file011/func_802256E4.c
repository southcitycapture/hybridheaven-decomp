#include "common.h"
s32 func_80225560(void *arg0, u8 arg1);
void *func_80225664(void *arg0, s32 arg1, s32 arg2);


void func_802256E4(s32 arg0, s32 arg1, s32 arg2)
{
    u32 selector = *(u32 *)&arg2;

    func_80225664((void *)arg0, arg1, func_80225560((void *)arg1, (u8)selector));
}
