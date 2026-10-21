#include "context.h"

typedef struct func_801C42DC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad2A4[0xF20 - 0x2A4];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    s8 unkF2C;
    s8 unkF2D;
    s8 unkF2E;
    u8 padF2F[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_801C42DC_Struct;

extern s32 D_801C4700(s32, s32, u32);
f32 func_801C4750(f32 arg0, f32 arg1, f32 arg2);

#define D (*(func_801C42DC_Struct *)&D_801BBBF0)

s32 func_801C42DC(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, s8 arg6, s8 arg7, s8 arg8, u8 arg9, u8 arg10, u8 arg11, s8 arg12, s8 arg13, s8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, f32 arg19, f32 arg20, u8 arg21, f32 arg22) {
    D.unkF20 = D_801C4700(D.unkF20, arg0, arg21);
    D.unkF21 = D_801C4700(D.unkF21, arg1, arg21);
    D.unkF22 = D_801C4700(D.unkF22, arg2, arg21);
    D.unkF23 = D_801C4700(D.unkF23, arg3, arg21);
    D.unkF24 = D_801C4700(D.unkF24, arg4, arg21);
    D.unkF25 = D_801C4700(D.unkF25, arg5, arg21);
    D.unkF26 = D_801C4700(D.unkF26, arg6, arg21);
    D.unkF27 = D_801C4700(D.unkF27, arg7, arg21);
    D.unkF28 = D_801C4700(D.unkF28, arg8, arg21);
    D.unkF29 = D_801C4700(D.unkF29, arg9, arg21);
    D.unkF2A = D_801C4700(D.unkF2A, arg10, arg21);
    D.unkF2B = D_801C4700(D.unkF2B, arg11, arg21);
    D.unkF2C = D_801C4700(D.unkF2C, arg12, arg21);
    D.unkF2D = D_801C4700(D.unkF2D, arg13, arg21);
    D.unkF2E = D_801C4700(D.unkF2E, arg14, arg21);
    D.unkF32 = D_801C4700(D.unkF32, arg15, arg21);
    D.unkF33 = D_801C4700(D.unkF33, arg16, arg21);
    D.unkF34 = D_801C4700(D.unkF34, arg17, arg21);
    D.unkF35 = D_801C4700(D.unkF35, arg18, arg21);
    D.unk29C = func_801C4750(D.unk29C, arg19, arg22);
    D.unk2A0 = func_801C4750(D.unk2A0, arg20, arg22);
    return arg0 == D.unkF20 && arg1 == D.unkF21 && arg2 == D.unkF22 && arg3 == D.unkF23
        && arg4 == D.unkF24 && arg5 == D.unkF25 && arg6 == D.unkF26 && arg7 == D.unkF27
        && arg8 == D.unkF28 && arg9 == D.unkF29 && arg10 == D.unkF2A && arg11 == D.unkF2B
        && arg12 == D.unkF2C && arg13 == D.unkF2D && arg14 == D.unkF2E && arg15 == D.unkF32
        && arg16 == D.unkF33 && arg17 == D.unkF34 && arg18 == D.unkF35
        && arg19 == D.unk29C && arg20 == D.unk2A0;
}
