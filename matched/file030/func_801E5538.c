#include "common.h"

s32 func_801CE284(void);
s32 func_801CE2D0(s32 a0, s32 a1);
void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
void func_8038D33C(f32 f0, f32 f1, s32 a2, s32 a3, f32 f4, f32 f5);
extern f32 D_801EC710;
extern u8 func_801DAAF0[];

s32 func_801E5538(s32 arg0, s32 arg1) {
    void *temp_v0;
    void *temp_t6;

    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x01B8000B, 0, 0, 15.0f);
        return 4;
    }
    if ((func_801CE2D0(0x0168003F, 0xA) != 0) || (func_801CE2D0(0x0168003F, 0x16) != 0)) {
        temp_v0 = *(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)*(void **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)((u8 *)temp_v0 + 0x4), *(f32 *)((u8 *)temp_v0 + 0x8),
                      *(s32 *)((u8 *)temp_v0 + 0xC), 0x67B, D_801EC710, 1.0f);
    }
    return 3;
}
