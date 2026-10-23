#define func_80241FBC func_80241FBC_ctx
#define func_8020394C func_8020394C_ctx
#include "context.h"
#undef func_80241FBC
#undef func_8020394C

extern u8 D_8024F26C[];
extern void func_8020394C();

void func_80241FBC(s32 arg0, s32 arg1) {
    func_8001F74C();
    func_80203830(arg0, D_8024F26C);
    *(s32 *)((u8 *)&D_801BBBF0 + 0x1088) = arg0;
    *(s32 *)((u8 *)&D_801BBBF0 + 0x10A0) = *(s32 *)((u8 *)&D_801BBBF0 + 0x40);
    func_8020394C();
    func_800058DC((void *)arg0, (void *)func_8024201C);
}
