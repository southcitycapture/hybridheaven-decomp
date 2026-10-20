#include "context.h"

extern f64 D_8023F970;
extern f64 D_8023F978;

struct func_8022C010_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x20 - 0x14];
    f32 unk20;
    u8 pad24[0xA0 - 0x24];
    u16 unkA0;
    u8 padA2[4];
    u8 unkA6;
};

void func_8022C010(struct func_8022C010_Struct *arg0) {
    f64 var_fv0;
    f64 var_fv1;
    f64 var_fa0;
    f64 var_fa1;
    f64 sum;
    s32 temp_v0;

    var_fv0 = 0.0;
    var_fv1 = 0.0;
    var_fa0 = 0.0;
    temp_v0 = arg0->unkA6;
    if (temp_v0 & 0x20) {
        var_fa1 = D_8023F970;
        var_fv0 = var_fa1;
    } else {
        var_fa1 = D_8023F978;
        var_fv0 = 0.0;
    }
    if (temp_v0 & 0x10) {
        var_fv1 = var_fa1;
    } else {
        var_fv1 = 0.0;
    }
    sum = (1.0 - var_fv1) + var_fv0;
    if ((s32) arg0->unkA0 > 0) {
        var_fa0 = var_fa1;
    } else {
        var_fa0 = 0.0;
    }
    arg0->unk10 = (f32) ((var_fa0 + sum) * (f64) arg0->unk20);
}
