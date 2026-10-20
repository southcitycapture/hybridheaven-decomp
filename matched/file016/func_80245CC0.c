#include "context.h"

typedef struct func_80245CC0_Struct2 {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80245CC0_Struct2;
typedef struct func_80245CC0_Struct1 {
    u8 pad[0x30];
    func_80245CC0_Struct2 *unk30;
} func_80245CC0_Struct1;
typedef struct func_80245CC0_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x45];
    u8 unk91;
    u8 pad92[2];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80245CC0_Obj;

extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern f32 D_8024F0BC;
extern f32 D_8024F0C0;
extern f32 D_8024F0C4;

s32 func_80245CC0(func_80245CC0_Obj *arg0, func_80245CC0_Struct1 **arg1) {
    if (D_801BBCD0->unk2C->unk4 + 50.0f <= arg0->unk94) {
        return 0;
    }
    if (func_8010843C(arg0->unk94 - arg0->unk40, arg0->unk98 - arg0->unk44, arg0->unk9C - arg0->unk48, arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, D_8024F0BC, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0xA0, -2, D_8024F0C0, 9, 0);
        return 0;
    }
    if (arg0->unk3C++ >= 0x258) {
        return 0;
    }
    if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 0.45f, 0x800, 2.0f, 1.0f, (u32)(func_801FD780(arg0->unk91) * 60.0f)) != 0) {
        func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0xD2, -6, D_8024F0C4, 0x16, 0);
        return 0;
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    return 1;
}
