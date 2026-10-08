#include "context.h"

typedef struct func_801C645C_Struct {
    f32 f0;
    f32 f4;
    s32 w8;
    s32 wC;
    f32 f10;
    f32 f14;
    s32 w18;
} func_801C645C_Struct;

extern void func_801C64F4(f32, f32, s32, s32, f32, f32, s32);

void func_801C645C(u32 arg0, void *arg1) {
    u32 var_s1;
    func_801C645C_Struct *var_s0;
    func_801C645C_Struct *var_s2;

    if (arg0 != 0) {
        var_s1 = 0;
        if (arg0 != 0) {
            var_s0 = arg1;
            var_s2 = arg1;
            do {
                func_801C64F4(var_s0->f0, var_s0->f4, var_s0->w8, var_s0->wC, var_s0->f10, var_s0->f14, var_s2->w18);
                var_s1 += 1;
                var_s0++;
                var_s2++;
            } while (var_s1 < arg0);
        }
    }
}
