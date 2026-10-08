#include "common.h"

u8 func_801CD500(s32, u8, s32);
void func_801CBC70(u8, u8, s32);

void func_801CD924(u8 arg0, u8 arg1, u8 arg2, s32 arg3) {
    u8 sp1F;
    u8 sp1E;

    sp1F = func_801CD500(0x80, arg0, arg3);
    sp1E = func_801CD500(0x80, arg1, arg3);
    func_801CBC70(sp1F, sp1E, func_801CD500(0x80, arg2, arg3) & 0xFF);
}
