#define func_8036F0F0 D_8036F0F0
#include "context.h"
#undef func_8036F0F0

typedef struct func_8036F0F0_StructS {
    u8 pad0[2];
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 pad1[0x30 - 8];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 4;
    u32 b7 : 1;
    u32 b8 : 1;
    u32 b9 : 2;
    u32 b11 : 2;
    u32 b13 : 3;
    u32 b16 : 3;
    u32 b19 : 8;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad2[0x328 - 0x34];
    u8 unk328;
    u8 pad3[0x390 - 0x329];
    u8 unk390;
    u8 pad4;
    u8 unk392;
} func_8036F0F0_StructS;
typedef struct func_8036F0F0_Obj {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad1[0x1C - 6];
    s32 unk1C;
    u8 pad2[0x80 - 0x20];
    u16 unk80;
} func_8036F0F0_Obj;
typedef struct func_8036F0F0_Arg {
    u8 pad0[0x5C];
    func_8036F0F0_Obj *unk5C;
    u8 pad1[0x68 - 0x60];
    func_8036F0F0_Obj *unk68;
} func_8036F0F0_Arg;
extern void func_8036E960();
extern void func_801DB480(void *, s32, f32, u8);

void func_8036F0F0(func_8036F0F0_Arg *arg0, s32 arg1) {
    func_8036F0F0_Obj *a2;
    func_8036F0F0_Obj *t0;
    func_8036F0F0_StructS *s;
    func_8036F0F0_StructS *o;
    s32 v;
    s32 k;

    a2 = arg0->unk68;
    t0 = arg0->unk5C;
    if ((void *)arg0 == DA->unkDC) {
        s = (func_8036F0F0_StructS *)D_801BC03C;
    } else {
        s = (func_8036F0F0_StructS *)D_801BC3D8;
    }
    if ((void *)arg0 != DA->unkDC) {
        o = (func_8036F0F0_StructS *)D_801BC03C;
    } else {
        o = (func_8036F0F0_StructS *)D_801BC3D8;
    }
    if (s->unk2 <= 0 || s->b1 != 0) {
        func_802233B0(arg0, arg1, a2, DA);
        return;
    }
    if (DA->unk1031 != 0xF) {
        func_80224AC4(arg0, 0);
        if (s->b13 == 5) {
            func_8022397C(arg0, arg1, a2);
            return;
        }
        if (s->unk390 != 5) {
            s->unk328 = 0;
            s->b27 = 0;
            func_8036E960(arg0, arg1, a2);
            return;
        }
        if ((a2->unk4 & 0x8000) && !o->b7 && t0->unk1C == 0x03200062 && s->unk6 >= 0x1F) {
            func_802237EC(arg0, arg1);
            return;
        }
        v = (s->b9 == 3) ? 1 : 0;
        func_801DB480(arg0, arg1, 4.0f, v);
        if (t0->unk80 == 2) {
            s->b27 = 2;
        }
        if (s->b27 == 3) {
            s->unk390 = 0;
            s->b27 = 0;
            func_800058DC(arg0, func_8021E59C);
        } else if (t0->unk1C == 0x03200062) {
            s->b27 = 2;
        } else {
            s->b27 = 1;
        }
        s->unk392 = 0;
    }
}
