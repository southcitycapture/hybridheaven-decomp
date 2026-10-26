#include "common.h"
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern void func_800058DC(s32 arg0, void *arg1);
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
struct func_8021DC6C_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2];
    s16 unk6;
    u8 pad8[0x28];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 rest : 29;
        } f;
        struct {
            u8 b0;
            u8 x1 : 1;
            u8 c : 2;
            u8 r1 : 5;
            u8 d : 3;
            u8 r2 : 5;
        } g;
    } unk30;
    u8 pad34[0x38 - 0x34];
    union {
        u8 v;
        struct {
            u8 top : 1;
            u8 r : 7;
        } g;
    } unk38;
    u8 pad39[0x312 - 0x39];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
};
typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x6 - 0x4];
    s16 unk6;
    u8 pad8[0xA - 0x8];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 pad13 : 19;
        } f;
        struct {
            u16 pad0 : 13;
            u16 e : 3;
            u8 b2;
            u8 top : 1;
            u8 pad1 : 7;
        } g;
    } unk30;
    u8 pad34[0x42 - 0x34];
    s16 unk42;
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 pad391[0x3A8 - 0x391];
    f32 unk3A8;
} func_8021E59C_Player;
struct func_8021F9C8_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};
struct func_80221070_StructS {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u32 a : 3;
            u32 t : 4;
            u32 p : 2;
            u32 m : 2;
            u32 n : 2;
            u32 rest : 19;
        } f;
    } u30;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[0x2F1 - 0x2D9];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x391 - 0x2FA];
    u8 unk391;
    u8 unk392;
    u8 unk393;
};
struct func_80221720_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};
void func_80222370(s32 arg0, s32 arg1);
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);


void func_80221FF0(s32 arg0, s32 arg1);

void func_80221E9C(s32 arg0, s32 arg1) {
    struct func_80221070_StructS *p;
    struct func_8021F9C8_Struct *q;
    s32 sp3C;
    s32 pad;
    struct func_8021E52C_Struct sp2C;

    p = (struct func_80221070_StructS *)(arg0 == D_801BBBF0.unkDC ? &D_801BC03C : &D_801BC3D8);
    q = arg0 != D_801BBBF0.unkDC ? &D_801BC03C : &D_801BC3D8;
    sp3C = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        if (!(((struct func_8021DC6C_Struct *)q)->unk30.b[0] & 1)) {
            func_800058DC(arg0, func_80222370);
            return;
        }
        p->unk2F1 = 0;
        *(u8 *)((u8 *)p + 0x365) = 0;
        *(f32 *)((u8 *)p + 0x370) = 0.0f;
        *(f32 *)((u8 *)p + 0x36C) = 0.0f;
        *(f32 *)((u8 *)p + 0x368) = 0.0f;
        if (((func_8021E59C_Player *)p)->unk30.f.c == 0) {
            ((struct func_80221720_Struct *)p)->u30.b.f = p->unk2F9 + 2;
        }
        func_802256E4(&sp2C, arg0, 0);
        if (func_80011140(arg1, sp3C, sp2C, 3) != 0) {
            func_80221CA0(arg0);
            func_800058DC(arg0, func_80221FF0);
        }
    }
}
