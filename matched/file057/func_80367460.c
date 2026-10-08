#include "context.h"

typedef struct func_80367460_Struct {
    u8 pad0[0x365];
    u8 unk365;
    u8 pad366[2];
    f32 unk368;
    u8 pad36C[4];
    f32 unk370;
} func_80367460_Struct;

typedef struct func_80367460_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80367460_Inner;

typedef struct func_80367460_Outer {
    u8 pad0[0x2C];
    func_80367460_Inner *unk2C;
} func_80367460_Outer;

extern void func_801CD3FC(s32, u8, void **);

void func_80367460(s32 arg0, void **arg1) {
    func_80367460_Struct *var_v0;
    f32 temp_fv0;
    u8 temp_a1;
    func_80367460_Inner *temp_v1;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_80367460_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_80367460_Struct *) &D_801BC3D8;
    }
    temp_a1 = var_v0->unk365;
    temp_v1 = ((func_80367460_Outer *) *arg1)->unk2C;
    if ((s32) temp_a1 > 0) {
        temp_fv0 = (f32) ((f64) (f32) temp_a1 / 15.0);
        temp_v1->unk4 = (f32) (temp_v1->unk4 + (var_v0->unk368 * temp_fv0));
        temp_v1->unkC = (f32) (temp_v1->unkC + (var_v0->unk370 * temp_fv0));
        var_v0->unk365 = (u8) (var_v0->unk365 - 1);
        func_801CD3FC(arg0, temp_a1, arg1);
    }
}
