#include "context.h"

extern void func_801339D0(s32);
extern void func_80251F80();

typedef struct func_80251E6C_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80251E6C_Inner;

typedef struct func_80251E6C_Mid {
    u8 pad0[0x30];
    func_80251E6C_Inner *unk30;
} func_80251E6C_Mid;

typedef struct func_80251E6C_Args {
    u8 pad0[0x1C];
    func_80251E6C_Mid *unk1C;
} func_80251E6C_Args;

typedef struct func_80251E6C_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    u16 unk3C;
    u8 pad2[0x36];
    s32 unk74;
    u8 pad3[0x20];
    u8 unk98;
} func_80251E6C_Obj;

void func_80251E6C(func_80251E6C_Obj *arg0, func_80251E6C_Args *arg1) {
    if (func_80126944() == 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
    } else {
        arg0->unk2C = arg0->unk2C & ~0x800;
    }
    if (func_80133A24(0x130) != 0) {
        func_801339D0(0x130);
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        arg1->unk1C->unk30->unk4 = 150.0f;
        arg1->unk1C->unk30->unk8 = 0.0f;
        arg1->unk1C->unk30->unkC = 125.0f;
        D_801BBBF0[0x204] = 0xFF;
        D_801BBBF0[0x205] = 0xFF;
        D_801BBBF0[0x206] = 0xFF;
        D_801BBBF0[0x207] = 0xFF;
        D_801BBBF0[0x208] = 0;
        D_801BBBF0[0x209] = 0xFF;
        D_801BBBF0[0x20A] = 0;
        arg0->unk74 = 0;
        arg0->unk3C = 0;
        arg0->unk98 = 0;
        func_801339D0(0x131);
        func_801339D0(0x132);
        func_800058DC(arg0, func_80251F80);
    }
}
