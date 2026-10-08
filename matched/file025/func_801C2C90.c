#include "context.h"

extern u8 D_801DA270[];
extern f32 D_801DEF80;
extern f32 D_801DEF84;
extern f32 D_801DEF88;

s32 func_801C2C90(f32 arg0, f32 arg1, f32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, u16 arg8) {
    func_801C2980_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA270);
    if (temp_v0 == NULL) {
        return 0;
    }
    D_801DEF80 = arg0;
    D_801DEF84 = arg1;
    D_801DEF88 = arg2;
    temp_v0->unk94 = arg3;
    temp_v0->unk95 = arg4;
    temp_v0->unk96 = arg5;
    temp_v0->unk97 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = 0;
    temp_v0->unkA0 = arg8;
    return 1;
}
