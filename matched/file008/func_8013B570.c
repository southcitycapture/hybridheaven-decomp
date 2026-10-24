#define func_8013B570 func_8013B570_ctx
#include "context.h"
#undef func_8013B570

extern void D_8013B268(void *, u16, u8, u8, s32, s32);

void func_8013B570(void *arg0, u16 arg1, u8 arg2, u8 arg3, s32 arg4) {
    D_8013B268(arg0, arg1, arg2, arg3, arg4, 0x1000);
}

extern void D_8013B570(void *, u16, s32, s32, s32);
#define func_8013B570 D_8013B570
