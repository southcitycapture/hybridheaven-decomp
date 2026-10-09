#include "context.h"

struct func_80241790_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};

struct func_80241790_Vals {
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
};

void *func_8012C4D0(s32, struct func_80241790_Vals, s32);
extern s32 D_801BBC2C;
extern struct func_80241790_Vals D_80258590;

void *func_80241790(f32 arg0, f32 arg1, f32 arg2, u16 arg3, u16 arg4, u16 arg5, u16 arg6, u16 arg7) {
    struct func_80241790_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80258590, 2);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
        temp_v0->unk9E = arg4;
        temp_v0->unkA0 = arg5;
        temp_v0->unkA2 = arg6;
        temp_v0->unkA4 = arg7;
        return temp_v0;
    }
    return NULL;
}
