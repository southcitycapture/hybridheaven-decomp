#include "context.h"

typedef struct func_8038DB8C_StructA {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0x6];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038DB8C_StructA;

typedef struct func_8038DB8C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x6A];
    u8 unkA6;
    u8 padA7[0x231];
    u8 unk2D8;
    u8 unk2D9;
} func_8038DB8C_StructB;

typedef struct func_8038DB8C_StructC {
    u8 pad0[0x30];
    struct {
        u32 a : 11;
        u32 b : 2;
        u32 c : 19;
    } unk30;
} func_8038DB8C_StructC;

extern void func_802294BC();
extern void func_80229CE0();
extern s32 func_8022B640();
extern u8 D_801BC3D8;

s32 func_8038DB8C(func_8038DB8C_StructA *arg0, func_8038DB8C_StructB *arg1, func_8038DB8C_StructC *arg2) {
    u8 v;
    u8 w;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 4;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A |= 0x20;
    } else if (arg2->unk30.b != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, 0);
    } else if (*(f32 *)((u8 *)&D_801BC3D8 + 0x3A8) > 25.0f) {
        if (!(arg1->unkA6 & 1)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x1E;
        } else if (!(arg1->unkA6 & 4)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x1F;
        } else if (!(arg1->unkA6 & 0x10)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x20;
        } else {
            arg0->unk92 = w = func_8022B640(5);
            if (w == 0) goto case0;
            if (w == 1) goto case0;
            if (w == 2) goto case0;
            if (w != 3) goto other;
case0:
            arg1->unk2D8 = 0xC;
            arg1->unk2D9 = 0x1C;
            goto done;
other:
            arg1->unk2D8 = 0xC;
            arg1->unk2D9 = 0x1D;
done:;
        }
        arg0->unk9A |= 0x100;
    } else {
        arg0->unk92 = v = func_8022B640(2);
        if (v == 0) {
            arg1->unk2D8 = 0;
            func_80229CE0(arg0, arg1, 1);
        } else {
            arg1->unk2D8 = 1;
            func_80229CE0(arg0, arg1, 1);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}
