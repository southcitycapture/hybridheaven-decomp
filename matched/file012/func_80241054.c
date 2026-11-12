#include "common.h"
extern u8 D_80248DC0[][3];


void func_80241054(void *arg0, void *arg1, void *arg2, u8 arg3, s32 arg4, f32 arg5) {
    u8 *p;
    u8 *q;
    u8 b0, b1, b2;
    u8 a;
    u8 index4;
    if (arg3 >= 9) {
        arg3 = 0;
    }
    index4 = *((u8 *)&arg4 + 3);
    if (index4 >= 9) {
        index4 = 0;
    }
    if (arg0) {
    }
    q = D_80248DC0[index4];
    p = D_80248DC0[arg3];
    *(u8 *)arg0 = (u32)((f32)p[0] + (f32)(q[0] - p[0]) * arg5);
    *(u8 *)arg1 = (u32)((f32)p[1] + (f32)(q[1] - p[1]) * arg5);
    *(u8 *)arg2 = (u32)((f32)p[2] + (f32)(q[2] - p[2]) * arg5);
}
