#include "context.h"


extern s32 func_80016340(void *);
extern void func_80015F14(void *, s32, s32, s32);
extern s32 D_8008DC94;
extern s32 D_8008DC98;

void func_80015D9C(func_80015D9C_Struct *arg0) {
    u32 var_s2;
    s32 var_s4;
    s32 var_s0;
    s32 var_s1;
    s32 temp_v0;

    var_s0 = -1;
    var_s1 = 0;
    var_s4 = 0;
    for (;;) {
        for (var_s2 = func_800162EC() - 1; var_s2 != 0; var_s2 -= 1) {
            var_s0 += 1;
            if (var_s0 == D_8008DC94) {
                var_s1 += 1;
                var_s0 = 0;
                if (var_s1 == D_8008DC98) {
                    return;
                }
            }
            temp_v0 = arg0->unk28(arg0, var_s0, var_s1);
            if (temp_v0 != 0) {
                if (arg0->unk8 == 0x10) {
                    var_s4 = temp_v0;
                } else {
                    var_s4 = temp_v0 & 0xFFFE;
                }
            }
            arg0->unk24(arg0, var_s0, var_s1, var_s4);
        }
        var_s0 += 1;
        if (var_s0 == D_8008DC94) {
            var_s1 += 1;
            var_s0 = 0;
            if (var_s1 == D_8008DC98) {
                return;
            }
        }
        var_s4 = func_80016340(arg0);
        arg0->unk24(arg0, var_s0, var_s1, var_s4);
        if (func_80016CE4() != 0) {
            func_80015F14(arg0, var_s0, var_s1, var_s4);
        }
    }
}
