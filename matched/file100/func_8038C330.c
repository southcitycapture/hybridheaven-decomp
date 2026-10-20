#include "context.h"

struct func_8038C330_StructB {
    u8 pad[0x1C];
    f32 unk1C;
    u8 pad2[0x10];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_8038C330_StructA {
    u8 pad[0x2C];
    struct func_8038C330_StructB *unk2C;
};
struct func_8038C330_StructG {
    u8 pad[0xE8];
    struct func_8038C330_StructA *unkE8;
};
extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);

s32 func_8038C330(u32 arg0, u32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14, f32 arg15) {
    f32 t;
#define G ((struct func_8038C330_StructG *)&D_801BBBF0)
    if (func_801C1088(0, 0x20FC, arg0) != 0) {
        t = (f32)(u32)(func_801C1134(0, 0x20FC) - arg0) / (f32)(arg1 - arg0);
        G->unkE8->unk2C->unk30 = (arg5 - arg2) * t + arg2;
        G->unkE8->unk2C->unk34 = (arg6 - arg3) * t + arg3;
        G->unkE8->unk2C->unk38 = (arg7 - arg4) * t + arg4;
        G->unkE8->unk2C->unk3C = (arg11 - arg8) * t + arg8;
        G->unkE8->unk2C->unk40 = (arg12 - arg9) * t + arg9;
        G->unkE8->unk2C->unk44 = (arg13 - arg10) * t + arg10;
        G->unkE8->unk2C->unk1C = (arg15 - arg14) * t + arg14;
    }
    if (func_801C1088(0, 0x20FC, arg1) != 0) {
        func_801C10D8(0, 0x20FC);
        return 1;
    }
    return 0;
}
