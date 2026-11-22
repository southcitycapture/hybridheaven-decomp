#include "common.h"

extern s32 D_801EB924;
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern s32 func_801C0EB0(s32 arg0, s32 arg1);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CE2D0(s32 a0, s32 a1);
extern u8 func_801DAAF0[];
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
s32 func_801E572C(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (func_801C0DE4(4, 0, 0x3F800000) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x03480019, 0, 0, 15.0f);
        D_801EB924 = 0;
        return 7;
    }
    if ((func_801CE2D0(0x0168003F, 0xA) != 0) || (func_801CE2D0(0x0168003F, 0x16) != 0)) {
        temp_v0 = *(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)*(void **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)((u8 *)temp_v0 + 0x4), *(f32 *)((u8 *)temp_v0 + 0x8), *(s32 *)((u8 *)temp_v0 + 0xC), 0x67B, 1.20000005f, 1.0f);
    }
    return 6;
}
