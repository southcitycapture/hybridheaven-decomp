#include "context.h"

typedef struct func_8038DE50_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x81];
    u8 unk91;
    u8 pad2[0x8];
    s16 unk9A;
    u8 pad3[0x4];
    u8 unkA0;
    u8 pad4[0x7];
    u8 unkA8;
    u8 pad5[0x7];
    s32 unkB0;
} func_8038DE50_Struct;

typedef struct func_8038DE50_Bits38 {
    u32 hi : 1;
    u32 pad : 2;
    u32 b28 : 1;
    u32 rest : 28;
} func_8038DE50_Bits38;

typedef struct func_8038DE50_Ctl {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad32[6];
    func_8038DE50_Bits38 unk38;
} func_8038DE50_Ctl;

typedef struct func_8038DE50_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xAB0];
    f32 unkB90;
    u8 pad2[0x49D];
    u8 unk1031;
} func_8038DE50_Glob;

extern func_8038DE50_Glob D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();

#define CALL() func_8038DB8C((func_8038DB8C_StructA *)arg0, (func_8038DB8C_StructB *)a, b)

void func_8038DE50(func_8038DE50_Struct *arg0, s32 arg1) {
    func_8038DE50_Ctl *a;
    func_8038DB8C_StructC *b;
    u32 sub;
    s32 cur;
    func_8038DE50_Bits38 w;

    a = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DE50_Ctl *)&D_801BC03C : (func_8038DE50_Ctl *)&D_801BC3D8;
    b = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DB8C_StructC *)&D_801BC3D8 : (func_8038DB8C_StructC *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if (((a->unk30 & 7) != 0) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (s32)func_8038DE50;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a->unk2 < a->unk0 / 5) && (arg0->unkA0 != 0) && !(arg0->unk9A & 0x20)) {
        CALL();
        return;
    }
    if (func_8022AB58() != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    sub = b->unk30.b;
    if (sub != 0 && !(arg0->unk9A & 8)) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f && arg0->unk9A == 0) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        s32 f = arg0->unk9A;
        if (f & 0x100) {
            arg0->unk9A = f ^ 0x100;
            CALL();
            return;
        }
    }
    if (a->unk38.hi && !a->unk38.b28 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a->unk38.hi && a->unk38.b28 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (!a->unk38.hi && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        CALL();
        return;
    }
    if (sub == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        CALL();
    }
}
