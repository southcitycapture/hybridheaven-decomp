#include "context.h"

struct func_801FD884_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
};
s32 func_80108590(f32, f32, f32, f32, f32, f32);

void func_801FD884(struct func_801FD884_Struct *arg0, s32 arg1) {
    volatile f32 pad[3];
    f32 sp28[1];
    f32 sp24[1];
    f32 two;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv1;

    two = 2.0f;
    arg0->unk90 += (temp_ft5 = arg0->unk40);
    sp28[0] = arg0->unk44;
    arg0->unk94 += sp28[0];
    sp24[0] = arg0->unk48;
    arg0->unk98 += sp24[0];
    arg0->unkA0 = arg0->unkA0 + arg0->unk9C;
    if ((arg0->unkA0 >= 150.0f) || (temp_fv0 = arg0->unk90, temp_fv1 = arg0->unk94, temp_ft4 = arg0->unk98, (func_80108590(temp_fv0 - (temp_ft5 * two), temp_fv1 - (sp28[0] * two), temp_ft4 - (sp24[0] * two), temp_fv0 - temp_ft5, temp_fv1 - sp28[0], temp_ft4 - sp24[0]) != 0))) {
        func_801FDB3C((s32)arg0);
    }
}
