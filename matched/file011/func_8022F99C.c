#include "context.h"

typedef struct {
    u8 pad0[0xA];
    s16 unkA;
    u8 padC[0x2C - 0xC];
    u8 unk2C;
    u8 pad2D[0x32 - 0x2D];
    u16 unk32;
    u8 pad34[0x36 - 0x34];
    u16 unk36;
    u32 unk38;
    u8 pad3C[0x4A - 0x3C];
    s16 unk4A;
    u8 pad4C[0x60 - 0x4C];
    u16 unk60;
    u8 pad62[0x64 - 0x62];
    u16 unk64;
    u8 pad66[0x68 - 0x66];
    u16 unk68;
    u8 pad6A[0x9E - 0x6A];
    u16 unk9E;
    u8 padA0[0xA6 - 0xA0];
    u8 unkA6;
    u8 padA7[0x2BA - 0xA7];
    s16 unk2BA;
} func_8022F99C_Struct;

typedef struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0x30 - 0x2E];
    u16 unk30;
    u8 pad32[0xDC - 0x32];
    func_8022F99C_Struct *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8022F99C_Struct *unkEC;
} func_8022F99C_G;

void func_8022F99C(func_8022F99C_Struct *arg0) {
    func_8022F99C_Struct *other;
    func_8022F99C_Struct *obj;
    s32 div;
    u8 c;
    u16 v;
    s32 sum;
    u8 *base;
    u32 w;

    base = (u8 *)arg0 - 0x44C;
    if (base == D_801BBBF0) {
        other = (func_8022F99C_Struct *)D_801BC3D8;
    } else {
        other = (func_8022F99C_Struct *)D_801BC03C;
    }
    if (base == D_801BBBF0) {
        obj = ((func_8022F99C_G *)D_801BBBF0)->unkDC;
    } else {
        obj = ((func_8022F99C_G *)D_801BBBF0)->unkEC;
    }
    if (arg0->unkA6 & 0x80) {
        div = 1;
        goto block_25;
    }
    w = arg0->unk38;
    if ((w << 1 >> 30) == 1 || (w << 1 >> 30) == 2 || (other->unk38 << 1 >> 30) == 1 || (other->unk38 << 1 >> 30) == 2) {
        div = 0xFFFF;
        goto block_25;
    }
    if (w >> 31) {
        div = 0x80;
        goto block_25;
    }
    if (arg0->unk2BA < 0) {
        div = 0x10;
        goto block_25;
    }
    if (((u32)arg0->unk32 >> 13) == 4 &&
        ((obj->unk36 != 0xF5 && obj->unk36 != 0xF6) || ((func_8022F99C_G *)D_801BBBF0)->unk2C == 10)) {
        if (arg0->unk2C++ % 10 == 9) {
            arg0->unk60 = 0xFFFF;
        } else {
            arg0->unk60 = 0;
        }
        return;
    }
    div = 8;
block_25:
    if (arg0->unkA >= arg0->unk4A) {
        arg0->unk60 = 0;
        arg0->unk68 = 0;
        return;
    }
    if (arg0->unk9E != 0) {
        arg0->unk60 = 0;
        arg0->unk68 = 0;
        return;
    }
    if (((func_8022F99C_G *)D_801BBBF0)->unk30 % div == 0) {
        arg0->unk68 += arg0->unk64 % 10;
        arg0->unk60 = arg0->unk64 / 10 + arg0->unk68 / 10;
        if (arg0->unk68 >= 10) {
            arg0->unk68 %= 10;
        }
    } else {
        arg0->unk60 = 0;
    }
}
