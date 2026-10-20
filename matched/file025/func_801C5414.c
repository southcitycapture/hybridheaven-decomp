#include "context.h"
typedef struct func_801C5414_Struct {
    u8 pad0[0x90];
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
    u8 unkA8;
    u8 unkA9;
    u8 unkAA;
    u8 padAB;
    u16 unkAC;
    u8 padAE[2];
    u16 unkB0;
    u16 unkB2;
} func_801C5414_Struct;
extern u8 D_801DA4E4[];
extern f32 D_801DA500;
s32 func_801C5414(s32 arg0, f32 arg1, f32 arg2, f32 arg3, u16 arg4, u16 arg5, u16 arg6, f32 arg7, f32 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u16 arg15, s32 arg16) {
    func_801C5414_Struct *p;
    p = func_80005670(D_8038D8CC, D_801DA4E4);
    if (p == NULL) {
        return 0;
    }
    p->unk90 = ((arg1 - D_801DA4F8) * D_801DA500) + D_801DA4F8;
    p->unk94 = arg2;
    p->unk98 = ((arg3 - D_801DA4FC) * D_801DA500) + D_801DA4FC;
    p->unk9C = arg6;
    p->unk9E = arg4;
    p->unkAC = arg5;
    p->unkA0 = arg9;
    p->unkA1 = arg10;
    p->unkA2 = arg11;
    p->unkA4 = arg12;
    p->unkA5 = arg13;
    p->unkA6 = arg14;
    p->unkA3 = (u32)(arg7 * 16.0f);
    p->unkA7 = (u32)(arg8 * 16.0f);
    p->unkA8 = arg0;
    p->unkA9 = 0;
    p->unkAA = arg16;
    p->unkB0 = 0;
    p->unkB2 = arg15;
    return 1;
}
