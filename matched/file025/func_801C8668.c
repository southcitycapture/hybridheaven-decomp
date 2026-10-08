#include "common.h"

struct func_801C8668_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
    u16 unkB0;
    u16 unkB2;
};

extern void *func_80005670(s32, void *);
extern u8 D_801DA6F0[];
extern void *D_8038D8CC;

s32 func_801C8668(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, u16 arg5) {
    struct func_801C8668_Struct *temp_v0;

    temp_v0 = func_80005670((s32) D_8038D8CC, D_801DA6F0);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = 0.0f;
    temp_v0->unkA0 = 0.0f;
    temp_v0->unkA4 = 0.0f;
    temp_v0->unkA8 = arg3;
    temp_v0->unkAC = arg4;
    temp_v0->unkB0 = 0;
    temp_v0->unkB2 = arg5;
    return 1;
}
