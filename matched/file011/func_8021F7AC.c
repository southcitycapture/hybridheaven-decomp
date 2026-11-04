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
extern void func_8013A28C();
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
void func_8021F9C8(s32 arg0, s32 arg1);
extern void func_802237B0(s32, s32);
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);


struct func_8021F7AC_StructP {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021F7AC_StructQ {
    u8 pad0[0x2C];
    struct func_8021F7AC_StructP *unk2C;
};
struct func_8021F7AC_StructA {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    s32 unk5C;
};
struct func_8021F7AC_StructS {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad : 6;
            u32 c : 2;
            u32 rest : 21;
        } f;
        struct {
            u16 pad : 13;
            u16 e : 3;
            u8 d : 3;
            u8 rest : 5;
            u8 last;
        } g;
    } unk30;
    u8 unk34[0x44 - 0x34];
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x32A - 0x329];
    s16 unk32A;
    u8 pad32C[0x392 - 0x32C];
    u8 unk392;
};
struct func_8021F7AC_StructD {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
};
typedef struct {
    u8 b[4];
} func_8021F7AC_Tbl;
extern func_8021F7AC_Tbl D_8023C298;

void func_8021F7AC(s32 arg0, s32 arg1) {
    struct func_8021F7AC_StructS *s1;
    s32 t0;
    struct func_8021E52C_Struct *s0;
    s16 w;
    s16 a3;
    s16 v1;
    s32 v;
    func_8021F7AC_Tbl sp2C;

    t0 = ((struct func_8021F7AC_StructA *)arg0)->unk5C;
    if (arg0 == ((struct func_8021F7AC_StructD *)&D_801BBBF0)->unkDC) {
        s1 = (struct func_8021F7AC_StructS *)&D_801BC03C;
    } else {
        s1 = (struct func_8021F7AC_StructS *)&D_801BC3D8;
    }
    w = 0x2800 - ((struct func_8021F7AC_StructD *)&D_801BBBF0)->unk232;
    v1 = (*(struct func_8021F7AC_StructQ **)arg1)->unk2C->unk12;
    sp2C = D_8023C298;
    w &= 0x1FFF;
    a3 = s1->unk32A + w;
    if (((struct func_8021F7AC_StructA *)arg0)->unk36 == 0x11D) {
        s0 = (struct func_8021E52C_Struct *)(t0 + 0x1C);
        func_802256E4(s0, arg0, 0x1F);
        if ((((s16)((s16)((s16)(a3 - v1) & 0xFFFF) + 0x800) & 0x1FFF) / 4096) & 0xFF) {
            ((u16 *)s0)[3] |= 0x10;
        }
    } else {
        w = a3 - v1;
        w = w * 1;
        v = (u8)(((s16)(w + 0x400) & 0x1FFF) / 2048);
        if (s1->unk30.f.c == 3) {
            v = ((4 - ((((s16)(w + 0x400) & 0x1FFF) / 2048) & 0xFF)) % 4) & 0xFF;
        }
        s0 = (struct func_8021E52C_Struct *)(t0 + 0x1C);
        func_802256E4(s0, arg0, sp2C.b[v]);
    }
    func_8013A28C(arg1, *s0);
    s1->unk30.g.d = 3;
    s1->unk328 = 4;
    func_802237B0(arg0, 1);
    s1->unk44 += 0xA;
    func_800058DC(arg0, (void *)func_8021F9C8);
    s1->unk392 = 0;
}
