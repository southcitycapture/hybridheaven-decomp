#include "context.h"

extern void func_801C276C(void);
extern void func_8001E978(s32, u8, u8, u8, s32, s32, s32, s32);

void func_8038C97C(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u16 arg4, u16 arg5, u8 arg6) {
    func_801C276C();
    func_8001E978(arg0, arg1, arg2, arg3, (s32) arg4, (s32) arg5, (s32) arg6, 0);
}
