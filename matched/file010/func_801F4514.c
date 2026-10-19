#include "context.h"

typedef struct func_801F4514_StructSub {
    u8 pad[6];
    s16 unk6;
    u8 pad8[2];
    s16 unkA;
} func_801F4514_StructSub;
typedef struct func_801F4514_Struct {
    u8 pad[0x38];
    func_801F4514_StructSub *unk38;
} func_801F4514_Struct;
typedef struct func_801F4514_StructPos {
    u8 pad[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801F4514_StructPos;

s32 func_801F4514(func_801F4514_Struct *arg0, f32 arg1) {
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fa1;
    func_801F4514_StructSub *temp_v0;
    func_801F4514_StructPos *temp_v1;

    temp_v0 = arg0->unk38;
    temp_fv0 = (f32) ((f64) (f32) temp_v0->unk6 / 10.0);
    temp_fv1 = (f32) ((f64) (f32) temp_v0->unkA / 10.0);
    temp_v1 = (func_801F4514_StructPos *)D_801BBCD0->unk2C;
    temp_fa0 = temp_v1->unk4;
    if (temp_fa0 < temp_fv0) {
        var_fa1 = -(temp_fa0 - temp_fv0);
    } else {
        var_fa1 = temp_fa0 - temp_fv0;
    }
    if (var_fa1 < arg1) {
        temp_fv0_2 = temp_v1->unkC;
        if (temp_fv0_2 < temp_fv1) {
            var_fa0 = -(temp_fv0_2 - temp_fv1);
        } else {
            var_fa0 = temp_fv0_2 - temp_fv1;
        }
        if (var_fa0 < arg1) {
            return 1;
        }
    }
    return 0;
}
