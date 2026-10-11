#include "context.h"

typedef struct func_80235C1C_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
} func_80235C1C_Struct;

extern u8 D_802407E0[];
extern void func_80235B1C(s32);

void func_80235C1C(func_80235C1C_Struct *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s8 var_s1;

    var_s1 = 0;
    if (arg0->unkA4 > 0) {
        do {
            if (var_s1 == arg0->unkA5) {
                temp_s0 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0), 1);
                func_80235AD4(*(s32 *)(D_8024086C + temp_s0));
            } else if (D_802407E0[var_s1] != 0) {
                temp_s0_2 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0_2), 2);
                func_80235B1C(*(s32 *)(D_8024086C + temp_s0_2));
            } else {
                temp_s0_3 = var_s1 * 4;
                func_801451C0(*(s32 *)(D_80240870 + temp_s0_3), 2);
                func_80235AF8(*(s32 *)(D_8024086C + temp_s0_3));
            }
            var_s1 += 1;
        } while (var_s1 < arg0->unkA4);
    }
}
