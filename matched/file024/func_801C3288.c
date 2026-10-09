#include "context.h"

typedef struct func_801C3288_Sub {
    u8 pad[0x8];
    f32 unk8;
    u8 pad2[0x6];
    s16 unk12;
} func_801C3288_Sub;

typedef struct func_801C3288_Obj {
    u8 pad[0x30];
    func_801C3288_Sub *unk30;
} func_801C3288_Obj;

void func_801C3288(func_801C3288_Sub *arg0, func_801C3288_Obj **arg1) {
    s32 var_v0;
    s32 temp_t6;
    s32 temp_t0;
    func_801C3288_Obj **temp_v1;

    temp_t6 = 0xAA;
    temp_t0 = -0x136;
    var_v0 = 0;
    do {
        temp_v1 = (func_801C3288_Obj **) ((s32) arg1 + (var_v0 << 2));
        arg0 = (*temp_v1)->unk30;
        arg0->unk8 = arg0->unk8 + 0.625f;
        arg0 = (*temp_v1)->unk30;
        if ((f32) temp_t6 <= arg0->unk8) {
            arg0->unk8 = (f32) temp_t0;
            arg0 = (*temp_v1)->unk30;
        }
        var_v0 = (var_v0 + 1) & 0xFF;
        arg0->unk12 = (s16) (s32) ((f32) arg0->unk12 + 16.0f);
    } while (var_v0 < 3);
}
