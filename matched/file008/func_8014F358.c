#include "context.h"

typedef struct func_8014F358_Struct_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x14];
    f32 unk44;
} func_8014F358_Struct_Obj;

typedef struct func_8014F358_Struct_G {
    u8 pad0[0xDC];
    func_8014F358_Struct_Obj *unkDC;
} func_8014F358_Struct_G;

typedef struct func_8014F358_Struct_Arg {
    f32 x;
    f32 y;
    f32 z;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    s32 unk1C;
} func_8014F358_Struct_Arg;

extern void func_801C3C3C(s32);
extern f32 D_80190680;

s32 func_8014F358(f32 arg0, f32 arg1) {
    func_8014F358_Struct_Arg s;

    s.x = arg0;
    s.y = arg1;
    s.unkC = 0x1100;
    s.unk10 = 0x0168003F;
    s.unk18 = 0;
    s.unk1A = 0x3C;
    s.z = D_80190680;
    s.unk14 = 1.0f;
    if (D_801C2F0C(2, &s) != 0) {
        func_801C3C3C(0);
        ((func_8014F358_Struct_G *)D_801BBBF0)->unkDC->unk2C &= ~0x40;
        ((func_8014F358_Struct_G *)D_801BBBF0)->unkDC->unk44 = 0.0f;
        return 1;
    }
    return 0;
}
