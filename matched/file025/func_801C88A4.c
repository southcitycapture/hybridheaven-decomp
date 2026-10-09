#include "context.h"

extern s32 D_801DA738;

typedef struct func_801C88A4_Struct {
    u8 pad[0x90];
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
} func_801C88A4_Struct;

s32 func_801C88A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u16 arg8) {
    func_801C88A4_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, &D_801DA738);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unkA0 = arg4;
    temp_v0->unkA4 = arg5;
    temp_v0->unkA8 = arg6;
    temp_v0->unkAC = arg7;
    temp_v0->unkB0 = 0;
    temp_v0->unkB2 = arg8;
    return 1;
}
