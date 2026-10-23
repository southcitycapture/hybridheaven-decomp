#include "context.h"

typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 p3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 p13 : 14;
            u32 e : 2;
            u32 p29 : 3;
        } f;
        struct {
            u16 p : 13;
            u16 st : 3;
        } h;
        struct {
            u8 b30_7 : 1;
            u8 b30_m : 6;
            u8 b30_0 : 1;
            u8 b31_7 : 1;
            u8 b31_f : 2;
            u8 b31_r : 5;
            u8 b32_d : 3;
            u8 b32_4 : 1;
            u8 b32_m : 2;
            u8 b32_lo : 2;
            u8 b33_7 : 1;
            u8 b33_x : 2;
            u8 b33_y : 2;
            u8 b33_r : 3;
        } b;
    } u30;
    u8 pad34[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2FA[0x390 - 0x2FA];
    u8 unk390;
    u8 unk391;
    u8 unk392;
} func_802227A4_Struct;

typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    s32 unk5C;
} func_802227A4_Actor;

extern void func_8036F528(s32, s32);
extern void D_80226710(s32, u16, f32);

void func_802227A4(s32 arg0, s32 arg1) {
    s32 sp24;
    func_802227A4_Struct *p;
    func_802227A4_Struct *q;

    sp24 = ((func_802227A4_Actor *)arg0)->unk5C;
    if (arg0 == DEV->unkDC) {
        p = (func_802227A4_Struct *)&D_801BC03C;
    } else {
        p = (func_802227A4_Struct *)&D_801BC3D8;
    }
    if (arg0 != DEV->unkDC) {
        q = (func_802227A4_Struct *)&D_801BC03C;
    } else {
        q = (func_802227A4_Struct *)&D_801BC3D8;
    }
    p->unk392 = 0;
    if (p->u30.f.c == 0) {
        p->u30.b.b31_f = p->unk2F9 + 2;
    }
    p->u30.b.b30_7 = 0;
    p->u30.b.b31_7 = 0;
    p->u30.b.b30_0 = 0;
    p->u30.b.b32_d = 0;
    if (p->unk2 <= 0 || p->u30.f.b != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (DEV->unk1031 != 5 && q->unk2 > 0 && q->u30.f.b == 0) {
        return;
    }
    if (p->u30.f.e != 0) {
        if (((func_802227A4_Actor *)arg0)->unk36 == 0x11D && p->unk390 == 2) {
            p->u30.b.b33_y = 1;
        } else if (((func_802227A4_Actor *)arg0)->unk36 == 0x148 && p->unk390 == 5) {
            p->u30.b.b33_y = 0;
        } else {
            p->unk390 = 0;
            p->u30.b.b33_y = 0;
        }
    }
    if (p->u30.h.st == 5U) {
        func_8022397C(arg0);
        return;
    }
    if (p->u30.b.b32_lo != 0) {
        p->u30.b.b32_lo = 2;
        p->u30.b.b32_m = 0;
    }
    if (p->u30.f.e != 0 && ((func_802227A4_Actor *)arg0)->unk36 == 0x11D && p->unk390 == 2) {
        func_8036F528(arg0, arg1);
        return;
    }
    func_80010550(arg1, sp24);
    if (DEV->unk1031 >= 10 && DEV->unk1031 != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (p->u30.b.b33_7 == 1 && q->unk2 > 0 && q->u30.f.b == 0) {
        func_800058DC(arg0, func_8021DC6C);
        return;
    }
    if (((func_8021E59C_Struct3C *)sp24)->unk74 == 3 && ((func_802227A4_Actor *)arg0)->unk36 == 0x11B && q->u30.f.d != 0) {
        D_80226710(arg0, 0x509, 1.0f);
    }
    if (p->u30.f.c == 0) {
        p->u30.b.b31_f = p->unk2F9 + 2;
    }
    func_800058DC(arg0, func_8021E59C);
}
