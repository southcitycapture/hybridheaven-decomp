#include "common.h"

extern u8 D_80248DC0[][3];


void func_80241054(void *arg0, void *arg1, void *arg2, u8 arg3, s32 arg4, f32 arg5) {
    u8 index4;
    if (arg3 >= 9) {
        arg3 = 0;
    }
    index4 = *((u8 *)&arg4 + 3);
    if (index4 >= 9) {
        index4 = 0;
    }
    *(u8 *)arg0 = (u32)((f32)D_80248DC0[arg3][0] + (f32)(D_80248DC0[index4][0] - D_80248DC0[arg3][0]) * arg5);
    *(u8 *)arg1 = (u32)((f32)D_80248DC0[arg3][1] + (f32)(D_80248DC0[index4][1] - D_80248DC0[arg3][1]) * arg5);
    *(u8 *)arg2 = (u32)((f32)D_80248DC0[arg3][2] + (f32)(D_80248DC0[index4][2] - D_80248DC0[arg3][2]) * arg5);
}
