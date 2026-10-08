#include "common.h"

typedef struct func_80235B40_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
} func_80235B40_Struct;

extern void func_801451C0(s32, s32);
extern void func_80235AD4(s32);
extern void func_80235AF8(s32);
extern s32 D_8024086C;
extern s32 D_80240870;

void func_80235B40(func_80235B40_Struct *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s8 var_s1;

    var_s1 = 0;
    if (arg0->unkA4 > 0) {
        do {
            if (var_s1 == arg0->unkA5) {
                temp_s0 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0), 1);
                func_80235AD4(*(s32 *)(D_8024086C + temp_s0));
            } else {
                temp_s0_2 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0_2), 2);
                func_80235AF8(*(s32 *)(D_8024086C + temp_s0_2));
            }
            var_s1 += 1;
        } while (var_s1 < arg0->unkA4);
    }
}
