#include "context.h"

extern s32 D_801BBCCC;
extern u8 D_801E179E[];
extern f32 D_801E3F30;
extern s32 D_801DC250();

void func_801DE5E4(s32 arg0, s32 *arg1, u16 *arg2, f32 *arg3, u8 arg4) {
    s32 temp_v0;
    s32 sw;
    u8 var_a0;
    s32 var_a1;

    var_a0 = temp_v0 = D_801DC250(arg1);
    var_a1 = 1;
    if (arg0 == D_801BBCCC) {
        var_a1 = 0;
    }
    if (temp_v0 != 0) {
        sw = temp_v0;
        if (temp_v0 == 2) {
            *arg3 = 0.75f;
            sw = sw | 0;
        }
        if (3 == sw * 1) {
            var_a0 = temp_v0 - 1;
        }
        arg4 = arg4 % 3;
        *arg2 = *(u16 *)(D_801E179E + (var_a1 << 4) + (arg4 << 2) + (var_a0 << 1));
        if ((*arg1 == 0x01900220) || (*arg1 == 0x019001E6)) {
            *arg3 = D_801E3F30;
        }
    } else {
        *arg2 = 0;
    }
}
