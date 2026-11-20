#include "context.h"
#undef func_80240FC8

typedef struct func_80240FC8_StructValue {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[8];
    f32 scale_x;
    f32 scale_y;
    f32 scale_z;
    s32 flags;
    u8 pad28[8];
    s32 data;
    u8 pad34[0x14];
    u8 r;
    u8 g;
    u8 b;
    u8 alpha;
    u8 r2;
    u8 g2;
    u8 b2;
} func_80240FC8_StructValue;

typedef struct func_80240FC8_StructObject {
    u8 pad0[0x30];
    func_80240FC8_StructValue *value;
} func_80240FC8_StructObject;

typedef struct func_80240FC8_StructArg0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80240FC8_StructArg0;

extern u8 D_8024BBD8[];
extern u8 D_8024BC28[];
extern u8 D_8024BC88[];
extern f32 D_80252528;

void func_80240FC8(func_80240FC8_StructArg0 *arg0, func_80240FC8_StructObject **arg1)
{
    f32 temp_fs1;
    f32 temp_small;
    s32 temp_mode;
    s32 var_s1_2;
    s32 var_s2;
    func_80240FC8_StructObject **var_s0;
    func_80240FC8_StructValue *temp_v0;
    func_80240FC8_StructValue *temp_v0_2;
    func_80240FC8_StructValue *temp_v0_3;
    void *global_addr;

    func_8001F74C();
    global_addr = D_80164F40;
    for (var_s1_2 = 0; var_s1_2 < 7; var_s1_2++) {
        if (arg1) {}
        func_80005F6C((s32)arg0, global_addr);
    }
    func_80006214((s32)arg0);
    temp_mode = 0x80000500;
    temp_fs1 = 0.01f;
    for (var_s1_2 = 0, var_s0 = arg1, var_s2 = -0x265; var_s1_2 != 5; var_s1_2++) {
        func_8012C89C((s32)arg0, var_s1_2, 9, 1);
        func_800062F8(*var_s0, temp_mode);
        temp_v0 = (*var_s0)->value;
        temp_v0->flags |= 0x100;
        (*var_s0)->value->data = (s32)D_8024BBD8 | 0x40000000;
        (*var_s0)->value->r = 0;
        (*var_s0)->value->g = 0xFF;
        (*var_s0)->value->b = 0;
        (*var_s0)->value->alpha = 0x40;
        (*var_s0)->value->x = 240.0f;
        (*var_s0)->value->y = (f32)var_s2;
        var_s2 += 3;
        (*var_s0)->value->z = -49.0f;
        (*var_s0)->value->scale_x = 0.005f;
        (*var_s0)->value->scale_y = temp_fs1;
        (*var_s0)->value->scale_z = 0.005f;
        var_s0 += 1;
    }
    func_8012C89C((s32)arg0, 5, 9, 3);
    func_8012D8C8((s32)arg0, 9, 0, 1.0f, 1, 5);
    temp_small = D_80252528;
    temp_v0_2 = arg1[5]->value;
    temp_v0_2->flags |= 0x300;
    arg1[5]->value->data = (s32)D_8024BC28 | 0x40000000;
    arg1[5]->value->r = 0;
    if (1) {
        arg1[5]->value->g = 0xFF;
        arg1[5]->value->b = 0;
        arg1[5]->value->r2 = 0;
        arg1[5]->value->g2 = 0xFF;
        arg1[5]->value->b2 = 0;
        arg1[5]->value->alpha = 0x80;
        arg1[5]->value->x = 240.0f;
        arg1[5]->value->y = -616.0f;
        arg1[5]->value->z = -49.0f;
    }
    arg1[5]->value->scale_x = temp_small;
    arg1[5]->value->scale_y = 0.0f;
    arg1[5]->value->scale_z = temp_small;
    func_8012C89C((s32)arg0, 6, 9, 4);
    temp_v0_3 = arg1[6]->value;
    temp_v0_3->flags |= 0x100;
    func_800062F8(arg1[6], 0x80000A0A);
    arg1[6]->value->data = (s32)D_8024BC88 | 0x40000000;
    arg1[6]->value->r = (long long)0xFF;
    arg1[6]->value->g = 0xFF;
    arg1[6]->value->b = 0xFF;
    arg1[6]->value->alpha = 0;
    arg1[6]->value->scale_x = temp_fs1;
    arg1[6]->value->scale_y = temp_fs1;
    arg1[6]->value->scale_z = temp_fs1;
    arg1[6]->value->x = 240.0f;
    arg1[6]->value->y = -616.0f;
    arg1[6]->value->z = -49.0f;
    func_80020744(0x233);
    arg0->unk92 = 0x14;
    func_800058DC((s32)arg0, (void *)func_802413B8);
}
