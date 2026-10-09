#include "context.h"
extern u8 D_801BBBF0[];

s32 func_8010843C(f32, f32, s32, s32, f32, f32);

void func_8012C148(f32 arg0, f32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5) {
    s32 *p2;
    f32 *p4;
    f32 *p5;
    f32 *p3;

    p2 = &arg2;
    p4 = arg4;
    p5 = arg5;
    p3 = arg3;
    if (func_8010843C(arg0, arg1, *p2, *(s32 *)p3, *p4, *p5) == 1) {
        *p3 = *(f32 *)(D_801BBBF0 + 0x374);
        *p4 = *(f32 *)(D_801BBBF0 + 0x378);
        *p5 = *(f32 *)(D_801BBBF0 + 0x37C);
    }
}
