#include "common.h"

extern s32 D_801BBCCC;
extern s32 D_8038CC14;
extern s32 func_80010550(s32, s32, void *);
extern s32 func_802233B0();
extern s32 func_8022397C();
extern u16 func_80011590(u16);
extern u8 D_8008DA88[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387B70[];
extern u8 D_80387B88[];
extern u8 D_80387B94[];
extern void func_80005700(s32 arg0, s32 arg1);
extern void func_800058DC(s32, void *);
extern void func_80006214();
extern void func_80011198();
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
extern void func_8036F40C();
extern void func_8036F5E8();
extern void func_8036F898(void *arg0, s32 arg1);
extern void func_8036FAA0();
extern void func_80370500(void *);
extern void func_8037073C();
extern void func_803709A8();
extern void func_80372388(void *, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036E960.s")



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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036EA80.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F084.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F0F0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F40C.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036F5E8.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8036FAA0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8037036C.s")


void func_80005670(s32 a, void *p);

void func_803704DC(s32 a) {
    func_80005670(a, D_80387B94);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_80370500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8036E960/func_8037073C.s")



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



void func_803709A8(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}

