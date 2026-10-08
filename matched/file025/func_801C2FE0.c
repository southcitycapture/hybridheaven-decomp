#include "context.h"

typedef struct func_801C2FE0_Struct {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    s8 unk92;
    u8 pad93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    s32 unk98;
    s16 unk9C;
    u8 pad9E[2];
    u16 unkA0;
    u8 padA2[2];
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    s32 unkA8;
} func_801C2FE0_Struct;

extern u8 D_801DA28C[];

s32 func_801C2FE0(s32 arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, s32 arg12, u16 arg13) {
    func_801C2FE0_Struct *temp_v0;
    func_801C2FE0_Struct *temp_v1;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA28C);
    temp_v1 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg1;
    temp_v0->unk91 = arg2;
    temp_v0->unk92 = arg3;
    temp_v0->unk94 = arg4;
    temp_v0->unk95 = arg5;
    temp_v0->unk96 = arg6;
    temp_v0->unk97 = arg7;
    temp_v0->unkA4 = arg8;
    temp_v0->unkA5 = arg9;
    temp_v0->unkA6 = arg10;
    temp_v1->unkA7 = arg11;
    temp_v1->unk98 = arg12;
    temp_v1->unk9C = 0;
    temp_v1->unkA0 = arg13;
    temp_v1->unkA8 = arg0;
    return 1;
}
