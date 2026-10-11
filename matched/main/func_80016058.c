#include "context.h"

typedef struct func_80016058_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x1C];
    void (*unk24)(struct func_80016058_Struct *, s32, s32, s32);
} func_80016058_Struct;

void func_80016058(func_80016058_Struct *arg0) {
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;

    arg0->unk24(arg0, 0, 0, 0);
    var_s2 = -1;
    temp_lo = arg0->unk0 * arg0->unk4;
    if (temp_lo >= 0) {
        do {
            var_s0 = 1;
            if (func_80016CE4() != 0) {
                do {
                    var_s0 += 1;
                } while (func_80016CE4() != 0);
            }
            temp_v0_2 = func_80016D50(var_s0) + (1 << var_s0);
            var_s2 = (var_s2 + temp_v0_2) - 1;
            if (var_s2 < temp_lo) {
                temp_s0 = var_s2 % arg0->unk0;
                temp_s1 = var_s2 / arg0->unk0;
                temp_v0_2 = func_80016340(arg0);
                arg0->unk24(arg0, temp_s0, temp_s1, temp_v0_2);
                if (func_80016CE4() != 0) {
                    func_800161A0(arg0, temp_s0, temp_s1, temp_v0_2);
                }
            }
        } while (var_s2 < temp_lo);
    }
}
