#include "context.h"

s32 func_8010843C(f32, f32, s32, s32, f32, f32);

void func_801C7FEC(f32 arg0, f32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5) {
    s32 *p2;

    p2 = &arg2;
    if (func_8010843C(arg0, arg1, arg2, *(s32 *)arg3, *(f32 *)arg4, *(f32 *)arg5) == 1) {
        *(f32 *)arg3 = *(f32 *)((u8 *)&D_801BBBF0 + 0x374);
        *(f32 *)arg4 = *(f32 *)((u8 *)&D_801BBBF0 + 0x378);
        *(f32 *)arg5 = *(f32 *)((u8 *)&D_801BBBF0 + 0x37C);
    }
}
