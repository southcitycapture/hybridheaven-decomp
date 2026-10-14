#include "context.h"

typedef struct func_8024ABC0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8024ABC0_Inner;

typedef struct func_8024ABC0_Node {
    u8 pad0[0x30];
    func_8024ABC0_Inner *unk30;
} func_8024ABC0_Node;

typedef struct func_8024ABC0_Args {
    u8 pad0[0x18];
    func_8024ABC0_Node *unk18;
} func_8024ABC0_Args;

typedef struct func_8024ABC0_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x0C];
    u16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    u8 pad78[0x20];
    u8 unk98;
} func_8024ABC0_Ctx;

extern void func_801339D0(s32);
extern void func_8024ACD8();

void func_8024ABC0(func_8024ABC0_Ctx *arg0, func_8024ABC0_Args *arg1) {
    if (func_80126944() == 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
    } else {
        arg0->unk2C = arg0->unk2C & ~0x800;
    }
    if (func_80133A24(0x12D) != 0) {
        func_801339D0(0x12D);
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        arg1->unk18->unk30->unk4 = -128.0f;
        arg1->unk18->unk30->unk8 = 0.0f;
        arg1->unk18->unk30->unkC = 150.0f;
        D_801BBBF0[0x204] = 0xFF;
        D_801BBBF0[0x205] = 0xFF;
        D_801BBBF0[0x206] = 0xFF;
        D_801BBBF0[0x207] = 0xFF;
        D_801BBBF0[0x208] = 0;
        D_801BBBF0[0x209] = 0xC0;
        D_801BBBF0[0x20A] = 0xFF;
        arg0->unk74 = 0;
        arg0->unk3C = 0;
        arg0->unk98 = 0;
        func_801339D0(0x131);
        func_801339D0(0x132);
        func_800058DC((s32) arg0, func_8024ACD8);
    }
}
