#include "context.h"

struct func_8038C17C_Struct { u8 pad[0x1C]; f32 unk1C; u8 pad2[0x10]; f32 unk30; f32 unk34; f32 unk38; f32 unk3C; f32 unk40; f32 unk44; };
struct func_8038C17C_Outer { u8 pad[0x2C]; struct func_8038C17C_Struct *unk2C; };
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24(u64);
extern f64 D_8038DD08;

s32 func_8038C17C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14, f32 arg15) {
    f32 t;
    u64 r;

    if (func_801C0DE4(0, 0x1F40, arg1) != 0) {
        func_801C0EB0(0, 0x1F40);
        return 1;
    }
    if (func_801C0DE4(0, 0x1F40, arg0) != 0) {
        r = func_801C0F18(0, 0x1F40);
        t = (f32) ((func_80034C24(r) / D_8038DD08) - (f64) arg0) / (arg1 - arg0);
        ((struct func_8038C17C_Outer *)D_801BBBF0.unkE8)->unk2C->unk30 = (arg5 - arg2) * t + arg2;
        ((struct func_8038C17C_Outer *)D_801BBBF0.unkE8)->unk2C->unk34 = (arg6 - arg3) * t + arg3;
        ((struct func_8038C17C_Outer *)D_801BBBF0.unkE8)->unk2C->unk38 = (arg7 - arg4) * t + arg4;
        ((struct func_8038C17C_Outer *)D_801BBBF0.unkE8)->unk2C->unk3C = (arg11 - arg8) * t + arg8;
        ((struct func_8038C17C_Outer *)D_801BBBF0.unkE8)->unk2C->unk40 = (arg12 - arg9) * t + arg9;
        ((struct func_8038C17C_Outer *)D_801BBBF0.unkE8)->unk2C->unk44 = (arg13 - arg10) * t + arg10;
        ((struct func_8038C17C_Outer *)D_801BBBF0.unkE8)->unk2C->unk1C = (arg15 - arg14) * t + arg14;
    }
    return 0;
}
