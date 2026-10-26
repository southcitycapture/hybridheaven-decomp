#include "common.h"

extern s32 D_801BBCCC;
extern s32 D_8038CC14;
extern s32 func_80010550(s32, s32, void *);
extern s32 func_802233B0();
extern s32 func_8022397C();
extern s32 func_80224AC4(void *, s32);
extern s32 func_80224F5C();
extern u16 func_80011590(u16);
extern u8 D_8008DA88[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387B60[];
extern u8 D_80387B70[];
extern u8 D_80387B88[];
extern u8 D_80387B94[];
#define func_8036F0F0 func_8036F0F0__decl
extern u8 func_8036F0F0[];
extern void func_80005700(s32 arg0, s32 arg1);
extern void func_800058DC(s32, void *);
extern void func_80006214();
extern void func_80011198(s32, void *);
extern void func_80020718(s32);
extern void func_8013A1B4();
extern void func_8013A2E0();
extern void func_8013AE20(void *, s32, s32);
extern void func_8013B808(void *, s32, s32);
extern void func_8021E59C();
extern void func_80222708();
extern void func_8035A734(void *, s32, u16);
extern void func_8035A8F0(void *, s32);
extern void func_8035A914(void *, s32);
extern void func_8035C4C0();
extern void func_803602D4(void *, s32, void *);
extern void func_8036445C(void *, void *, u8, s32);
extern void func_8036EA80();
extern void func_8036EBB8();
extern void func_8036F40C();
extern void func_8036F5E8();
extern void func_8036F898(void *arg0, s32 arg1);
extern void func_8036FAA0();
extern void func_8036FB74();
extern void func_80370500(void *);
extern void func_8037073C();
extern void func_80370884(void *arg0, s32 arg1);
extern void func_803709A8();
extern void func_80372388(void *, s32);
extern void func_80372A48();

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/D_8038B140.s")
#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036E960.s")

#define func_80011198 func_80011198__func_8036EA3C
#define func_8036EA80 func_8036EA80__func_8036EA3C

extern void func_80011198(void *arg0, s32 arg1, void *arg2, s32 arg3);
extern void func_8036EA80();

void func_8036EA3C(void *arg0, void *arg1)
{
  s32 temp_a3;
  void *temp_a0;
  u8 *new_var;
  u8 *new_var2;
  temp_a0 = arg1;
  temp_a3 = *((s32 *) (((u8 *) arg0) + 0x5C));
  new_var = ((u8 *) arg0) + 0x5C;
  new_var2 = new_var;
  func_80011198(temp_a0, temp_a3 ^ 0, arg0, *((s32 *) new_var2));
  func_800058DC(arg0, func_8036EA80);
}
#undef func_80011198
#undef func_8036EA80

#define func_800058DC func_800058DC__func_8036EA80
#define func_80011198 func_80011198__func_8036EA80
#define func_8036EBB8 func_8036EBB8__func_8036EA80
extern void func_80011198();
extern void func_800058DC();
struct func_8036F898_StructA;
extern struct func_8036F898_StructA D_801BBBF0;
typedef struct func_8036EA80_Vec { s32 x; s32 y; s32 z; } func_8036EA80_Vec;
typedef struct func_8036EA80_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 6;
    u32 b7 : 2;
    u32 b11 : 2;
    u32 b13 : 3;
    u32 b16 : 3;
    u32 b19 : 8;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad2[0x392 - 0x34];
    u8 unk392;
} func_8036EA80_StructS;
typedef struct func_8036EA80_Actor {
    u8 pad0[0x5C];
    void *unk5C;
} func_8036EA80_Actor;
extern void func_80225664(func_8036EA80_Vec *, void *, s32);
extern s32 func_80011140(s32, void *, func_8036EA80_Vec, s32);
extern void func_8036EBB8();
typedef struct func_8036EA80_StructD {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036EA80_StructD;
#define DA ((func_8036EA80_StructD *)&D_801BBBF0)

void func_8036EA80(void *arg0, s32 arg1) {
    void *sp3C;
    u8 pad[4];
    func_8036EA80_Vec sp2C;
    func_8036EA80_StructS *s;

    sp3C = ((func_8036EA80_Actor *)arg0)->unk5C;
    if (arg0 == DA->unkDC) {
        s = (func_8036EA80_StructS *)D_801BC03C;
    } else {
        s = (func_8036EA80_StructS *)D_801BC3D8;
    }
    s->unk392 = 0;
    if ((s->unk2 <= 0) || (s->b1 != 0)) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (DA->unk1031 != 0xF) {
        if (s->b13 == 5) {
            func_8022397C(arg0);
            return;
        }
        s->b27 = 1;
        s->b16 = 1;
        func_80225664(&sp2C, arg0, 0x190013C);
        if (func_80011140(arg1, sp3C, sp2C, 6) != 0) {
            func_800058DC((s32)arg0, func_8036EBB8);
        }
    }
}
#undef func_800058DC
#undef func_80011198
#undef func_8036EBB8

#define D_801BBBF0 D_801BBBF0__func_8036EBB8
typedef struct func_8036F898_StructA {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036F898_StructA;
extern func_8036F898_StructA D_801BBBF0;

typedef struct func_8036EBB8_StructD {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0xEC - 0xE0];
    void *unkEC;
    u8 pad2[0xB90 - 0xF0];
    f32 unkB90;
    u8 pad3[0xB98 - 0xB94];
    s16 unkB98;
    u8 pad4[0x1031 - 0xB9A];
    u8 unk1031;
} func_8036EBB8_StructD;

typedef struct func_8036EBB8_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 6;
    u32 b7 : 2;
    u32 b11 : 2;
    u32 b13 : 3;
    u32 b16 : 3;
    u32 b19 : 8;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad2[0x2F8 - 0x34];
    u8 unk2F8;
    u8 pad3[0x320 - 0x2F9];
    u8 unk320;
    u8 pad4[0x392 - 0x321];
    u8 unk392;
} func_8036EBB8_StructS;

typedef struct func_8036EBB8_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[2];
    f32 unk8;
} func_8036EBB8_Sub;

typedef struct func_8036EBB8_Obj5C {
    u8 pad0[0x1C];
    func_8036EBB8_Sub sub;
    u8 pad1[0x58 - 0x28];
    f32 unk58;
    f32 unk5C;
} func_8036EBB8_Obj5C;

typedef struct func_8036EBB8_Inner {
    u8 pad0[0x12];
    s16 unk12;
} func_8036EBB8_Inner;

typedef struct func_8036EBB8_Mid {
    u8 pad0[0x2C];
    func_8036EBB8_Inner *unk2C;
} func_8036EBB8_Mid;

typedef struct func_8036EBB8_Other5C {
    u8 pad0[0x1C];
    s32 unk1C;
} func_8036EBB8_Other5C;

typedef struct func_8036EBB8_Actor {
    u8 pad0[0x24];
    func_8036EBB8_Mid *unk24;
    u8 pad1[0x5C - 0x28];
    void *unk5C;
} func_8036EBB8_Actor;

#define DB ((func_8036EBB8_StructD *)&D_801BBBF0)


void func_8036EBB8(void *arg0, s32 arg1) {
    func_8036EBB8_Actor *other;
    func_8036EBB8_Obj5C *obj;
    func_8036EBB8_Other5C *other5c;
    func_8036EBB8_StructS *st;
    s32 ang;
    f32 dist;
    func_8036EBB8_Inner *inner;
    func_8036EBB8_StructS *st2;
    s16 ofs;
    func_8036EBB8_Sub *sub;
    extern s32 func_80010550();

    if (arg0 != DB->unkDC) {
        other = DB->unkDC;
    } else {
        other = DB->unkEC;
    }
    obj = ((func_8036EBB8_Actor *)arg0)->unk5C;
    other5c = other->unk5C;
    st = (arg0 == DB->unkDC) ? (func_8036EBB8_StructS *)D_801BC03C : (func_8036EBB8_StructS *)D_801BC3D8;
    st->unk392 = 0;
    if (st->unk2 <= 0 || st->b1 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (DB->unk1031 == 0xF) {
        return;
    }
    if (st->b13 == 5) {
        func_8022397C(arg0);
        return;
    }
    sub = &obj->sub;
    if (st->b7 == 3) {
        dist = obj->unk5C;
    } else {
        dist = obj->unk58;
    }
    if (sub->unk4 == func_80011590(sub->unk8 * 3.0f)) {
        func_8013B808(arg0, arg1, 4);
    }
    if (sub->unk4 >= func_80011590(sub->unk8 * 3.0f)) {
        if (func_80011590(sub->unk8 * 13.0f) >= sub->unk4) {
            func_80372388(arg0, arg1);
        }
    }
    if (st->b27 != 2 && DB->unkB90 < dist * 2.0) {
        if (other5c->unk1C != 0x01900056 && other5c->unk1C != 0x01900057 &&
            other5c->unk1C != 0x01900058 && other5c->unk1C != 0x01900059) {
            inner = other->unk24->unk2C;
            if (arg0 != DB->unkDC) {
                st2 = (func_8036EBB8_StructS *)D_801BC03C;
            } else {
                st2 = (func_8036EBB8_StructS *)D_801BC3D8;
            }
            ofs = (arg0 == DB->unkDC) ? 0 : 0x1000;
            ang = (s16)(ofs + DB->unkB98);
            ang = (s16)ang;
            st2->unk320 = ((s16)(inner->unk12 - ang + 0x400) & 0x1FFF) / 2048;
            st2->unk2F8 = 4;
            func_80006214(other, ofs, inner);
            func_8036445C(other, D_8008DA88, st2->unk320, 1);
            func_80006214(arg0);
            st->b27 = 2;
        }
    }
    if (func_80010550(arg1, obj) != 0) {
        st->b16 = 0;
        func_800058DC((s32)arg0, func_80222708);
    }
}
#undef D_801BBBF0

void func_8036F084(func_8036EA80_Actor *arg0, void *arg1) {
    extern void func_80011198();
    u8 *s = arg0->unk5C;
    func_80011198(arg1, s);
    *(u8 **)(s + 0x7C) = D_80387B60;
    *(s16 *)(s + 0x82) = 5;
    *(s16 *)(s + 0x80) = 3;
    func_80224AC4(arg0, 0);
    func_800058DC(arg0, func_8036F0F0);
}

#undef func_8036F0F0
#undef DA
#define func_801DB480 func_801DB480__func_8036F0F0
#define func_802237EC func_802237EC__func_8036F0F0
#define func_8036E960 func_8036E960__func_8036F0F0
#define func_8036EA80_StructD func_8036EA80_StructD__func_8036F0F0
#define func_8036F0F0 D_8036F0F0
typedef struct func_8036EA80_StructD {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036EA80_StructD;
#define DA ((func_8036EA80_StructD *)&D_801BBBF0)
extern void func_802237EC();
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
#undef DA
#undef func_801DB480
#undef func_802237EC
#undef func_8036E960
#undef func_8036EA80_StructD
#define DA ((func_8036EA80_StructD *)&D_801BBBF0)
#define func_8036F0F0 func_8036F0F0__decl

typedef struct func_8036F528_Vec {
    s32 x;
    s32 y;
    f32 z;
} func_8036F528_Vec;

typedef struct func_8036F348_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad1[0x31 - 0x14];
    u8 unk31;
} func_8036F348_Struct;


void func_8036F348(void *arg0, s32 arg1) {
    func_8036F348_Struct *var_v0;
    func_8036F528_Vec sp18;

    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = (func_8036F348_Struct *) D_801BC03C;
    } else {
        var_v0 = (func_8036F348_Struct *) D_801BC3D8;
    }
    sp18 = *(func_8036F528_Vec *) D_80387B70;
    if (*(u16 *) ((u8 *) arg0 + 0x36) == 0x11D) {
        sp18.z = var_v0->unk10;
        var_v0->unk31 = (var_v0->unk31 & 0xFF9F) | 0x40;
        func_8013A2E0(arg1, sp18);
        func_800058DC((s32) arg0, func_8036F40C);
    }
}

#define func_80011258 func_80011258__func_8036F40C
#define func_8036EBB8_Actor func_8036EBB8_Actor__func_8036F40C
#define func_8036EBB8_Inner func_8036EBB8_Inner__func_8036F40C
#define func_8036EBB8_Mid func_8036EBB8_Mid__func_8036F40C
#define func_8036EBB8_StructS func_8036EBB8_StructS__func_8036F40C
#define func_8036F528 func_8036F528__func_8036F40C
#define func_8036FF7C_State func_8036FF7C_State__func_8036F40C
typedef struct func_8036FF7C_State {
    u8 pad0[0x32D];
    u8 unk32D;
    u8 pad32E[0x374 - 0x32E];
    s8 unk374;
    u8 pad375[0x392 - 0x375];
    u8 unk392;
} func_8036FF7C_State;
extern void func_80011258(s32, void *, func_8036FF7C_State *);
typedef struct func_8036EBB8_Inner {
    u8 pad0[0x12];
    s16 unk12;
} func_8036EBB8_Inner;
typedef struct func_8036EBB8_Mid {
    u8 pad0[0x2C];
    func_8036EBB8_Inner *unk2C;
} func_8036EBB8_Mid;
typedef struct func_8036EBB8_Actor {
    u8 pad0[0x24];
    func_8036EBB8_Mid *unk24;
    u8 pad1[0x5C - 0x28];
    void *unk5C;
} func_8036EBB8_Actor;
typedef struct func_8036EBB8_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 6;
    u32 b7 : 2;
    u32 b11 : 2;
    u32 b13 : 3;
    u32 b16 : 3;
    u32 b19 : 8;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad2[0x2F8 - 0x34];
    u8 unk2F8;
    u8 pad3[0x320 - 0x2F9];
    u8 unk320;
    u8 pad4[0x392 - 0x321];
    u8 unk392;
} func_8036EBB8_StructS;
extern void func_8036F528(s32 arg0, s32 arg1);

void func_8036F40C(arg0, arg1)
    void *arg0;
    s32 volatile arg1;
{
    func_8036EBB8_StructS *s;
    u8 *a3;
    u8 *b;
extern s32 func_80010550();
extern void func_8036F528();

    if (arg0 == D_801BBBF0.unkDC) {
        s = (func_8036EBB8_StructS *)D_801BC03C;
    } else {
        s = (func_8036EBB8_StructS *)D_801BC3D8;
    }
    b = (u8 *)s;
    a3 = ((func_8036EBB8_Actor *)arg0)->unk5C;
    if (s->unk2 <= 0 || s->b1 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        if ((*(u16 *)(b + 0x30) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        b[0x390] = 2;
        b[0x33] = (b[0x33] & 0xFFE7) | 8;
        b[0x32] = (b[0x32] & 0xFF1F) | 0x20;
        func_80011258(arg1, a3 + 0x22, arg0);
        if (func_80010550(arg1, a3) != 0) {
            func_8036F528((s32)arg0, arg1);
        }
        s->unk392 = 0;
    }
}
#undef func_80011258
#undef func_8036EBB8_Actor
#undef func_8036EBB8_Inner
#undef func_8036EBB8_Mid
#undef func_8036EBB8_StructS
#undef func_8036F528
#undef func_8036FF7C_State


typedef struct func_8036F528_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad1[0x33 - 0x14];
    u8 unk33;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
} func_8036F528_Struct;


extern func_8036F528_Vec D_80387B7C;

void func_8036F528(s32 arg0, s32 arg1) {
    func_8036F528_Struct *var_v0;
    s32 sp28;
    func_8036F528_Vec sp1C;
    s32 sp18;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_8036F528_Struct *) D_801BC03C;
    } else {
        var_v0 = (func_8036F528_Struct *) D_801BC3D8;
    }
    sp1C = D_80387B7C;
    sp1C.z = var_v0->unk10;
    func_8013A2E0(arg1, sp1C);
    var_v0->unk390 = 2;
    var_v0->unk33 = (u8) ((var_v0->unk33 & 0xFFE7) | 0x10);
    func_800058DC(arg0, &func_8036F5E8);
}

#undef DA
#define func_802237EC func_802237EC__func_8036F5E8
#define func_8036EA80_StructD func_8036EA80_StructD__func_8036F5E8
#define func_8036F7D4 func_8036F7D4__func_8036F5E8
typedef struct func_8036EA80_StructD {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036EA80_StructD;
#define DA ((func_8036EA80_StructD *)&D_801BBBF0)
typedef struct func_8036F5E8_S {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[2];
    s16 unk6;
    u8 pad8[0x30 - 8];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 4;
    u32 b7 : 1;
    u32 b8 : 5;
    u32 b13 : 3;
    u32 b16 : 11;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad34[0x328 - 0x34];
    u8 unk328;
    u8 pad329[0x392 - 0x329];
    u8 unk392;
} func_8036F5E8_S;
typedef struct func_8036F5E8_Obj { u8 pad0[2]; u16 unk2; u16 unk4; } func_8036F5E8_Obj;
typedef struct func_8036F5E8_Arg { u8 pad0[0x5C]; s32 unk5C; u8 pad1[8]; func_8036F5E8_Obj *unk68; } func_8036F5E8_Arg;
extern void func_802237EC();
void func_8036F7D4(void *arg0, s32 arg1);

void func_8036F5E8(void *arg0, s32 arg1) {
    func_8036F5E8_Obj *t0;
    func_8036F5E8_S *v1;
    func_8036F5E8_S *a2;
    s32 sp18;
extern s32 func_80010550();

    t0 = ((func_8036F5E8_Arg *)arg0)->unk68;
    if (arg0 == DA->unkDC) {
        v1 = (func_8036F5E8_S *)D_801BC03C;
    } else {
        v1 = (func_8036F5E8_S *)D_801BC3D8;
    }
    if (arg0 != DA->unkDC) {
        a2 = (func_8036F5E8_S *)D_801BC03C;
    } else {
        a2 = (func_8036F5E8_S *)D_801BC3D8;
    }
    sp18 = ((func_8036F5E8_Arg *)arg0)->unk5C;
    if (v1->unk2 <= 0 || v1->b1 != 0) {
        func_802233B0(arg0, arg1, a2);
        return;
    }
    if ((DA->unk1031 == 5 || a2->unk2 <= 0 || a2->b1 != 0) && v1->b0 == 0) {
        if (v1->b13 == 5) {
            func_8022397C(arg0);
            return;
        }
        if (v1->b3 != 1 || a2->unk2 <= 0 || a2->b1 != 0) {
            func_80224AC4(arg0, 0);
            func_80010550(arg1, sp18);
            if (!(t0->unk2 & 0x2000)) {
                v1->b27 = 3;
            }
            if ((t0->unk4 & 0x8000) && !a2->b7 && v1->unk6 >= 0x1F) {
                v1->unk328 = 0;
                func_802237EC(arg0);
            } else if (v1->b27 == 3) {
                func_8036F7D4(arg0, arg1);
            }
            v1->unk392 = 0;
        }
    }
}
#undef DA
#undef func_802237EC
#undef func_8036EA80_StructD
#undef func_8036F7D4
#define DA ((func_8036EA80_StructD *)&D_801BBBF0)

#define func_8036F898 func_8036F898__func_8036F7D4
void func_8036F898(void *arg0, s32 arg1);

typedef struct func_8036F7D4_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad1[0x31 - 0x14];
    u8 unk31;
} func_8036F7D4_Struct;


void func_8036F7D4(void *arg0, s32 arg1) {
    func_8036F7D4_Struct *var_v0;
    func_8036F528_Vec sp18;

    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = (func_8036F7D4_Struct *) D_801BC03C;
    } else {
        var_v0 = (func_8036F7D4_Struct *) D_801BC3D8;
    }
    sp18 = *(func_8036F528_Vec *) D_80387B88;
    if (*(u16 *) ((u8 *) arg0 + 0x36) == 0x11D) {
        sp18.z = var_v0->unk10;
        var_v0->unk31 = (var_v0->unk31 & 0xFF9F) | 0x40;
        func_8013A2E0(arg1, sp18);
        func_800058DC((s32) arg0, func_8036F898);
    }
}
#undef func_8036F898

#define D_801BBBF0 D_801BBBF0__func_8036F898

typedef struct func_8036F898_StructB {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 unk30;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
    u8 pad3;
    u8 unk392;
} func_8036F898_StructB;
extern func_8036F898_StructA D_801BBBF0;

void func_8036F898(void *arg0, s32 arg1) {
    func_8036F898_StructB *v;
    s32 a5c;

    if (arg0 == D_801BBBF0.unkDC) {
        v = (func_8036F898_StructB *)D_801BC03C;
    } else {
        v = (func_8036F898_StructB *)D_801BC3D8;
    }
    a5c = *(s32 *)((u8 *)arg0 + 0x5C);
    if (v->unk2 <= 0 || ((v->unk30 << 1) >> 30) != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        if ((*(u16 *)((u8 *)v + 0x30) & 7) == 5) {
            func_8022397C(arg0, a5c);
            return;
        }
        *((u8 *)v + 0x33) = (*((u8 *)v + 0x33) & 0xFFE7) | 8;
        *((u8 *)v + 0x32) = (*((u8 *)v + 0x32) & 0xFF1F) | 0x20;
        if (func_80010550(arg1, a5c, arg0) != 0) {
            v->unk390 = 0;
            *((u8 *)v + 0x33) = *((u8 *)v + 0x33) & 0xFFE7;
            func_800058DC((s32)arg0, func_8021E59C);
        }
        v->unk392 = 0;
    }
}
#undef D_801BBBF0

#define func_8036FAA0 func_8036FAA0__func_8036F9B0

extern void func_8036FAA0();

void func_8036F9B0(void *arg0, s32 arg1) {
    u8 *var_v0;
    u8 *var_v1;
    u8 *temp_a2;

    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if ((s32) arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    temp_a2 = *(u8 **) ((u8 *) arg0 + 0x5C);
    D_8038CC14 = 0;
    var_v0[0x32] = (u8) (var_v0[0x32] & 0xFF1F);
    var_v0[0x2E8] = 0;
    var_v0[0x32C] = 0;
    var_v0[0x2DE] = 0;
    *(f32 *) (var_v0 + 0x2EC) = 1.0f;
    var_v1[0x2F8] = 0;
    var_v0[0x2F8] = 0;
    var_v0[0x2FA] = 0;
    var_v0[0x394] = 0;
    func_803602D4(arg0, arg1, temp_a2);
    temp_a2[0x84] = 0;
    *(f32 *) (var_v0 + 0x2F4) = 0.0f;
    func_80011198(arg1, temp_a2);
    func_8013AE20(arg0, arg1, 0);
    func_800058DC((s32) arg0, (void *) func_8036FAA0);
}
#undef func_8036FAA0



typedef struct func_8036FAA0_StructActor {
    u8 pad[0x36];
    u16 unk36;
} func_8036FAA0_StructActor;

void func_8036FAA0(func_8036FAA0_StructActor *arg0) {
    u8 *state;
    s32 result;

    if (arg0 == (void *)D_801BBCCC) {
        state = D_801BC03C;
    } else {
        state = D_801BC3D8;
    }
    state[0x392] = 0;
    result = arg0->unk36;
    if (result == 0x11D) {
        if (state[0x2D9] < 5) {
            result = (u16)func_80224AC4(arg0, 0);
        } else {
            result = 0;
        }
    } else if (result == 0x148 && state[0x2D9] < 5) {
        result = (u16)func_80224AC4(arg0, 0);
    } else {
        result = (u16)func_80224F5C(arg0);
    }
    if (result == 0) {
        func_800058DC(arg0, func_8036FB74);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036FB74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036FEA4.s")


typedef struct func_8036FF7C_Anim {
    s32 id;
    u16 frame;
    u16 flags;
    f32 speed;
} func_8036FF7C_Anim;

typedef struct func_8036FF7C_Obj {
    u8 pad0[0xC];
    u16 unkC;
    u8 padE[0x1C - 0xE];
    func_8036FF7C_Anim anim;
} func_8036FF7C_Obj;

typedef struct func_8036FF7C_Arg {
    u8 pad0[0x5C];
    func_8036FF7C_Obj *unk5C;
} func_8036FF7C_Arg;

typedef struct func_8036FF7C_State {
    u8 pad0[0x32D];
    u8 unk32D;
    u8 pad32E[0x374 - 0x32E];
    s8 unk374;
    u8 pad375[0x392 - 0x375];
    u8 unk392;
} func_8036FF7C_State;

extern void func_802237B0(void *, s32, func_8036FF7C_State *);
extern void func_80011258(s32, void *, func_8036FF7C_State *);
typedef struct func_8036FF7C_Vec {
    s32 x;
    s32 y;
    s32 z;
} func_8036FF7C_Vec;

extern func_8036FF7C_Vec func_8013BD84(void *);

void func_8036FF7C(void *arg0, s32 arg1) {
    func_8036FF7C_State *st;
    func_8036FF7C_Obj *obj;
    func_8036FF7C_Anim *a;
    extern s32 func_80010550();

    if ((s32)arg0 == D_801BBCCC) {
        st = (func_8036FF7C_State *)D_801BC03C;
    } else {
        st = (func_8036FF7C_State *)D_801BC3D8;
    }
    obj = ((func_8036FF7C_Arg *)arg0)->unk5C;
    a = &obj->anim;
    st->unk392 = 0;
    func_802237B0(arg0, 1, st);
    if ((a->id == 0x3200064 && a->frame == func_80011590(a->speed * 4.0f)) ||
        (a->id == 0x19100AF && a->frame == func_80011590(a->speed * (f32)2.0)) ||
        (a->id != 0x3200064 && a->id != 0x19100AF && a->frame == func_80011590(a->speed * 16.0f))) {
        if (st->unk374 < ++st->unk32D) {
            func_80011258(arg1, &a->flags, st);
        }
        if (a->id == 0x1910004 || a->id == 0x19100A1) {
            func_8035A914(arg0, arg1);
        } else if (a->id == 0x3200064) {
            func_8035A8F0(arg0, arg1);
        } else {
            func_8035A734(arg0, arg1, (a->flags & 0x10) ? 0x1D : 0x1C);
        }
        func_80020718(0x3A6);
    }
    if (func_80010550(arg1, obj) != 0) {
        if (obj->unkC >= 0x16) {
            func_8013A1B4(arg1, func_8013BD84(arg0), 0x180000);
        }
        func_800058DC((s32)arg0, func_8035C4C0);
    }
}



void func_8037036C(void *arg0, s32 arg1) {
    u8 *s;
    func_8036FF7C_Obj *o;
    extern s32 func_80010550();
    extern void func_802237B0();

    if ((s32)arg0 == D_801BBCCC) {
        s = D_801BC03C;
    } else {
        s = D_801BC3D8;
    }
    o = ((func_8036FF7C_Arg *)arg0)->unk5C;
    s[0x392] = 0;
    func_802237B0(arg0, 1);
    if (o->anim.frame == 0) {
        s[0x2DA] = 0;
        if (((u16 *)arg0)[0x36 / 2] == 0x11D) {
            func_8013B808(arg0, arg1, 1);
        }
        if (s[0x2D9] == 5) {
            func_80020718(0x105);
        } else if (s[0x2D9] == 6) {
            func_80020718(0x106);
        } else {
            func_80020718(0x107);
        }
        func_80372A48(arg0, arg1);
        *(s16 *)(s + 0x312) = 0x3C;
    }
    func_80010550(arg1, o);
    *(s16 *)(s + 0x312) -= 1;
    if (*(s16 *)(s + 0x312) == 0) {
        if (o->unkC >= 0x16) {
            func_8013A1B4(arg1, func_8013BD84(arg0), 0x180000);
        }
        func_800058DC(arg0, func_8035C4C0);
    }
}


void func_80005670(s32 a, void *p);

void func_803704DC(s32 a) {
    func_80005670(a, D_80387B94);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_80370500.s")

#define func_80370884 func_80370884__func_8037073C
#define func_803709A8 func_803709A8__func_8037073C
extern void func_803709A8();
void func_80370884(void *arg0, s32 arg1);
void func_803709A8(s32 arg0, s32 arg1);

typedef struct func_8037073C_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 24;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
} func_8037073C_StructS;

void func_8037073C(arg0, arg1) void *arg0; s32 arg1; {
    func_8037073C_StructS *a;
    func_8037073C_StructS *b;

    a = (func_8037073C_StructS *)(DA->unkDC == *(void **)((u8 *)arg0 + 0xC) ? D_801BC03C : D_801BC3D8);
    b = (func_8037073C_StructS *)(DA->unkDC != *(void **)((u8 *)arg0 + 0xC) ? D_801BC03C : D_801BC3D8);
    if ((DA->unk1031 >= 0xB && DA->unk1031 != 0xF) || a->unk2 <= 0 || a->b1 != 0 || b->unk2 <= 0 || b->b1 != 0) {
        func_80020718(0x6B8);
        func_800058DC(arg0, func_803709A8);
        return;
    }
    if (a->unk390 == 5 && a->b27 == 2) {
        func_80020718(0x5C3);
        func_80370500(*(void **)((u8 *)arg0 + 0xC));
        func_80006214(*(void **)((u8 *)arg0 + 0xC));
        func_80372708(*(void **)((u8 *)arg0 + 0xC), D_8008DA88);
        func_80006214(arg0);
        func_800058DC(arg0, func_80370884);
    }
}
#undef func_80370884
#undef func_803709A8

#define func_803709A8 func_803709A8__func_80370884

extern void func_803709A8();

void func_80370884(void *arg0, s32 arg1) {
    func_8036F898_StructB *a;
    func_8036F898_StructB *b;
    void *p = *(void **)((u8 *)arg0 + 0xC);
    void *d = D_801BBBF0.unkDC;

    a = (d == p) ? (func_8036F898_StructB *)D_801BC03C : (func_8036F898_StructB *)D_801BC3D8;
    b = (d != p) ? (func_8036F898_StructB *)D_801BC03C : (func_8036F898_StructB *)D_801BC3D8;
    if ((D_801BBBF0.unk1031 >= 0xB && D_801BBBF0.unk1031 != 0xF) || a->unk2 <= 0 || ((a->unk30 << 1) >> 30) != 0 || b->unk2 <= 0 || ((b->unk30 << 1) >> 30) != 0) {
        func_80020718(0x6B8);
        func_800058DC((s32)arg0, func_803709A8);
        return;
    }
    if (a->unk390 != 5 || ((a->unk30 << 27) >> 30) != 2) {
        func_80020718(0x6B8);
        func_800058DC((s32)arg0, func_8037073C);
        return;
    }
    func_80370500(p);
}
#undef func_803709A8



void func_803709A8(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

