#include "common.h"
extern void *func_80005670(s32, void *);
extern u8 func_8038D8B8[];


extern u8 D_801DA760[];

typedef struct func_801C89DC_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    u8 padAC[4];
    u16 unkB0;
    u16 unkB2;
} func_801C89DC_Struct;

s32 func_801C89DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6) {
    func_801C89DC_Struct *temp_v0;
    f32 duration;

    temp_v0 = func_80005670(*(s32 *)(func_8038D8B8 + 0x14), D_801DA760);
    if (temp_v0 == NULL) {
        return 0;
    }
    duration = (f32)(u32)arg6;
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unkA0 = arg4;
    temp_v0->unkA4 = (4.0f * arg5) / duration;
    temp_v0->unkB0 = 0;
    temp_v0->unkB2 = arg6;
    temp_v0->unkA8 = (8.0f * arg5) / (f32)(arg6 * arg6);
    return 1;
}
