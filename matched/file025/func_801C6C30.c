#include "common.h"

typedef struct func_801C6C30_Struct {
    f32 f0;
    f32 f4;
    s32 w8;
    s32 wC;
    f32 f10;
    f32 f14;
    s32 w18;
    s32 w1C;
} func_801C6C30_Struct;

extern void func_801C6CC4(f32, f32, s32, s32, f32, f32, s32, s32);

void func_801C6C30(u32 arg0, void *arg1) {
    u32 var_s2;
    func_801C6C30_Struct *var_s0;
    func_801C6C30_Struct *var_s1;

    if (arg0 != 0) {
        var_s2 = 0;
        if (arg0 != 0) {
            var_s0 = arg1;
            var_s1 = arg1;
            do {
                func_801C6CC4(var_s0->f0, var_s0->f4, var_s0->w8, var_s0->wC, var_s0->f10, var_s0->f14, var_s1->w18, var_s1->w1C);
                var_s2 += 1;
                var_s0++;
                var_s1++;
            } while (var_s2 < arg0);
        }
    }
}
