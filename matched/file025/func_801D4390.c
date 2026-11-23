#include "common.h"
f32 func_801D44A4(f32 arg0, f32 arg1);

extern f32 func_8002FC20(f32);

struct func_801D4390_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    u8 pad1C[0xC];
    f32 unk28;
};

void func_801D4390(struct func_801D4390_Struct *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 sp24;
    f32 sp20;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;

    temp_fv0 = arg0->unk4;
    temp_fv1 = arg0->unk0;
    sp24 = func_801D44A4(-arg0->unk8, func_8002FC20((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)));
    sp20 = func_801D44A4(arg0->unk18, arg0->unk28);
    temp_fv0_2 = func_801D44A4(arg0->unk4, arg0->unk0);
    *arg1 = (sp20 * 180.0f) / 3.1415927f;
    *arg2 = (sp24 * 180.0f) / 3.1415927f;
    *arg3 = (temp_fv0_2 * 180.0f) / 3.1415927f;
}
