#include "context.h"

typedef struct { s32 w[5]; } func_80129FB8_Struct20;
typedef struct {
    u8 pad0[0x3C]; s16 u3C; u8 pad3E[2]; f32 u40; f32 u44; f32 u48;
    u8 pad4C[0x44]; u8 u90; u8 u91; s16 u92; f32 u94; f32 u98; f32 u9C; f32 uA0; f32 uA4;
    u8 uA8; u8 uA9; u8 uAA; u8 uAB; u8 uAC; u8 uAD; u8 uAE;
} func_80129FB8_Obj;

extern s32 func_80005C70();
extern func_80129FB8_Obj *func_8012C4D0(s32, func_80129FB8_Struct20, s32);
extern func_80129FB8_Struct20 D_80175C40;
extern s32 D_801BBC2C;

s32 func_80129FB8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 a7, u8 a8, u8 a9, u8 a10, u8 a11, u8 a12, u8 a13, s8 a14, f32 a15, u8 a16, u8 a17) {
    func_80129FB8_Obj *o;
    if (func_80005C70() < 0x21) return 0;
    o = func_8012C4D0(D_801BBC2C, D_80175C40, 4);
    if (o != NULL) {
        o->u40 = arg3; o->u44 = arg4; o->u48 = arg5; o->u94 = arg6;
        o->u92 = a14; o->u91 = a17; o->u90 = a16; o->u3C = 0;
        o->uA4 = a15; o->u98 = arg0; o->u9C = arg1; o->uA0 = arg2;
        o->uA8 = a7; o->uA9 = a8; o->uAA = a9; o->uAC = a10; o->uAD = a11; o->uAE = a12; o->uAB = a13;
        return 1;
    }
    return 0;
}
