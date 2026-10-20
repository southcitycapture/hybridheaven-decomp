#include "context.h"

typedef struct func_801C48A4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    s32 unkA8;
    u16 unkAC;
    u16 unkAE;
    u16 unkB0;
    u16 unkB2;
} func_801C48A4_Struct;

extern u8 D_801DA368[];

s32 func_801C48A4(f32 arg0, f32 arg1, f32 arg2, u16 arg3, u16 arg4, u16 arg5, f32 arg6, f32 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, s32 arg14, u16 arg15) {
    func_801C48A4_Struct *p;

    p = func_80005670(D_8038D8CC, D_801DA368);
    if (p == NULL) {
        return 0;
    }
    p->unk90 = arg0;
    p->unk94 = arg1;
    p->unk98 = arg2;
    p->unk9C = arg5;
    p->unk9E = arg3;
    p->unkA0 = arg8;
    p->unkA1 = arg9;
    p->unkA2 = arg10;
    p->unkA4 = arg11;
    p->unkA5 = arg12;
    p->unkA6 = arg13;
    p->unkA3 = (u32) (arg6 * 16.0f);
    p->unkA7 = (u32) (arg7 * 16.0f);
    p->unkA8 = arg14;
    p->unkAC = arg4;
    p->unkB0 = 0;
    p->unkB2 = arg15;
    p->unkAE = 1;
    return 1;
}
