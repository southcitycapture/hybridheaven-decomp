#include "common.h"

extern f32 D_8002FC20(f32);
extern f32 D_8023EF68;
extern f32 func_8002FC20(f32, f32);
extern f32 func_80223AB8(u8 arg0);
extern f32 func_80223D0C(void *, s16);
extern f64 D_8023EF80;
extern f64 D_8023EF88;
extern f64 D_8023EF90;
extern f64 D_8023EF98;
extern f64 D_8023EFA0;
extern f64 D_8023EFE0;
extern f64 D_8023EFE8;
extern f64 D_8023EFF0;
extern f64 D_8023F008;
extern f64 D_8023F010;
extern s16 func_8001EF38(f32, f32);
extern s32 *D_8023C8D0[];
extern s32 D_801BBCCC;
extern s32 func_80002A94(u8);
extern s32 func_80002B44(u8);
extern s32 func_80002BAC(u8);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80108480(f32, f32, f32, f32, f32, f32);
extern s32 func_80126944();
extern s32 func_80151870(s32);
extern s32 func_801518D4(s32, u8, u16);                    /* extern */
extern s32 func_802243B4(s32 arg0, s16 arg1);
extern s32 func_8022474C(s32, s16);
extern s32 func_802253B8(s32 arg0);
extern s32 func_802257F4(s32, s16, s16);
extern s32 func_80225930(s32, s16, s16);
extern u16 D_801BBC1C;
extern u16 D_80224AC4(s32, u8);
extern u16 D_8022560C(u8 *);
extern u8 D_801BBE1A[];
extern u8 D_801BCC21;
extern u8 D_8023C8F8[];
extern u8 D_8023E3C4[];
extern u8 func_802208B0[];
extern void *func_80005670(void *arg0, void *arg1);
extern void *func_80242E58(void *);
extern void func_80005700(s32 arg0, s32 arg1);
extern void func_800058DC(void *, void *);
extern void func_8001EAD0(s16, s32);
extern void func_8001EB64(s16);
extern void func_80223CB8(void *, void *);
extern void func_802256E4(s32 arg0, s32 arg1, s32 arg2);
extern void func_8022693C(s32 arg0, s32 arg1);
extern void func_8022696C(void);



struct func_802237B0_Struct {
    u8 pad0[0x74];
    u8 unk74;
};

struct func_802237B0_Arg {
    u8 pad0[0x5C];
    struct func_802237B0_Struct *unk5C;
};

void func_802237B0(struct func_802237B0_Arg *arg0, u8 arg1) {
    struct func_802237B0_Struct *temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unk5C;
    temp_v1 = temp_v0->unk74;
    if (temp_v1 == 0 || temp_v1 == 2) {
        D_801BBE1A[6] = arg1;
        return;
    }
    D_801BBE1A[7] = arg1;
}

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

typedef struct func_802237EC_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1030 - 0xE0];
    u8 unk1030;
} func_802237EC_G;

typedef struct func_802237EC_W { s32 v; } func_802237EC_W;
typedef struct func_802237EC_C {
    u8 pad0[0x30];
    func_802237EC_W unk30;
    func_802237EC_W unk34;
    func_802237EC_W unk38;
    func_802237EC_W unk3C;
} func_802237EC_C;

typedef struct func_802237EC_S {
    u8 pad0[0x30];
    u8 a30:1;
    u8 m30:6;
    u8 b30:1;
    u8 m31:5;
    u8 l31:3;
    u8 pad32[0x324 - 0x32];
    s32 unk324;
} func_802237EC_S;

typedef struct func_802237EC_T {
    u8 pad0[0x2C];
    void *unk2C;
    u8 pad30[0x90 - 0x30];
    void *unk90;
    s32 unk94;
    void *unk98;
    void *unk9C;
} func_802237EC_T;

typedef struct func_802237EC_P {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x5C - 0x20];
    struct func_802237B0_Struct *unk5C;
    u8 pad60[0x68 - 0x60];
    s32 unk68;
} func_802237EC_P;

extern struct func_802253B8_Struct D_801BBBF0;

void func_802237EC(func_802237EC_P *arg0) {
    struct func_802237B0_Struct *sp34;
    s32 sp30;
    func_802237EC_S *a2;
    func_802237EC_S *v1;
    func_802237EC_T *r;
    func_802237EC_T *sp20;

    sp34 = arg0->unk5C;
    sp30 = arg0->unk68;
    if ((s32)arg0 == D_801BBCCC) {
        a2 = (func_802237EC_S *)&D_801BC03C;
    } else {
        a2 = (func_802237EC_S *)&D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        v1 = (func_802237EC_S *)&D_801BC03C;
    } else {
        v1 = (func_802237EC_S *)&D_801BC3D8;
    }
    sp20 = NULL;
    func_8022696C();
    a2->unk324 = arg0->unk1C;
    func_802237B0((struct func_802237B0_Arg *)arg0, 0);
    if (sp34->unk74 == 2) {
        sp20 = func_80242E58(arg0);
    }
    r = func_80005670(*(void **)sp34, D_8023E3C4);
    if (r != NULL) {
        if (sp20 != NULL) {
            sp20->unk2C = r;
        }
        ((func_802237EC_C *)a2)->unk34 = ((func_802237EC_C *)a2)->unk30;
        ((func_802237EC_C *)a2)->unk3C = ((func_802237EC_C *)a2)->unk38;
        ((func_802237EC_C *)v1)->unk34 = ((func_802237EC_C *)v1)->unk30;
        ((func_802237EC_C *)v1)->unk3C = ((func_802237EC_C *)v1)->unk38;
        r->unk90 = sp34;
        r->unk94 = sp30;
        r->unk98 = a2;
        r->unk9C = v1;
        a2->l31 = 2;
        v1->l31 = 5;
        if ((s32)arg0 == ((func_802237EC_G *)&D_801BBBF0)->unkDC) {
            ((func_802237EC_G *)&D_801BBBF0)->unk1030 = 0;
        } else {
            ((func_802237EC_G *)&D_801BBBF0)->unk1030 = 1;
        }
        func_800058DC(arg0, func_802208B0);
    }
}

typedef struct func_80225664_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x30 - 0x14];
    s32 unk30;
} func_80225664_Struct;

struct func_8022397C_Bits {
    u32 a:1;
    u32 b:7;
    u32 c:5;
    u32 d:3;
};
struct func_8022397C_S {
    u8 pad0[0x30];
    u8 a30:1;
    u8 m30:6;
    u8 b30:1;
    u8 m31:5;
    u8 l31:3;
    u8 pad32[0x324 - 0x32];
    s32 unk324;
};
struct func_8022397C_T {
    u8 pad0[0x2C];
    void *unk2C;
    u8 pad30[0x90 - 0x30];
    void *unk90;
    s32 unk94;
    void *unk98;
    void *unk9C;
};
struct func_8022397C_P {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x5C - 0x20];
    struct func_802237B0_Struct *unk5C;
    u8 pad60[0x68 - 0x60];
    s32 unk68;
};

void func_8022397C(struct func_8022397C_P *arg0) {
    struct func_802237B0_Struct *sp34;
    s32 sp30;
    u8 padB[4];
    void *sp28;
    u8 padA[4];
    struct func_8022397C_T *sp20;
    struct func_8022397C_S *s0;
    struct func_8022397C_T *v;

    sp34 = arg0->unk5C;
    sp30 = arg0->unk68;
    if ((s32)arg0 == D_801BBCCC) {
        s0 = (struct func_8022397C_S *)&D_801BC03C;
    } else {
        s0 = (struct func_8022397C_S *)&D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        sp28 = &D_801BC03C;
    } else {
        sp28 = &D_801BC3D8;
    }
    sp20 = NULL;
    func_8022696C();
    s0->unk324 = arg0->unk1C;
    func_802237B0((void *)arg0, 0);
    if (sp34->unk74 == 2) {
        sp20 = func_80242E58(arg0);
    }
    v = func_80005670(*(void **)sp34, D_8023E3C4);
    if (v != NULL) {
        if (sp20 != NULL) {
            sp20->unk2C = v;
        }
        D_801BCC21 = 6;
        s0->l31 = 4;
        s0->a30 = 1;
        s0->b30 = 0;
        v->unk90 = sp34;
        v->unk94 = sp30;
        v->unk98 = s0;
        v->unk9C = sp28;
        func_800058DC(arg0, func_802208B0);
    }
}



f32 func_80223AB8(u8 arg0) {
    s32 temp_a0;

    temp_a0 = arg0;
    if ((temp_a0 == 0) || (temp_a0 == 1)) {
        return 1.0f;
    }
    if ((temp_a0 == 4) || (temp_a0 == 5)) {
        return D_8023EF68;
    }
    if ((temp_a0 == 2) || (temp_a0 == 3)) {
        return 0.5f;
    }
    return 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80223D0C.s")



struct func_80223DD0_Struct {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80223DD0_Struct2 {
    f32 unk0;
    f32 unk4;
};

s32 func_80223DD0(struct func_80223DD0_Struct *arg0, struct func_80223DD0_Struct *arg1, struct func_80223DD0_Struct2 *arg2, struct func_80223DD0_Struct2 *arg3, f32 arg4, f32 arg5) {
    f32 sp2C;
    u8 pad[4];
    f32 temp_fv0;
    f32 temp_fa1;
    f32 sp1C;
    s16 temp_v0;
    f32 t2;

    temp_fv0 = (arg1->unk4 + arg3->unk0) - (arg0->unk4 + arg2->unk0);
    temp_fa1 = (arg1->unkC + arg3->unk4) - (arg0->unkC + arg2->unk4);
    sp1C = func_8002FC20((temp_fv0 * temp_fv0) + (temp_fa1 * temp_fa1), temp_fa1);
    temp_v0 = func_8001EF38(temp_fv0, temp_fa1);
    sp2C = func_80223D0C(arg2, (s16) (temp_v0 - arg0->unk12));
    t2 = func_80223D0C(arg3, (s16) ((temp_v0 - arg1->unk12) + 0x1000));
    if (((sp2C * arg4) + (t2 * arg5)) < sp1C) {
        return 0;
    }
    return 1;
}

struct func_802253B8_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xDC - 0x2E];
    s32 unkDC;
};

typedef struct func_80223ED4_Vec { f32 x, y, z; } func_80223ED4_Vec;
typedef struct func_80223ED4_Q { f32 a, b, c, d; } func_80223ED4_Q;
typedef struct func_80223ED4_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80223ED4_Pos;
typedef struct func_80223ED4_Unit { u8 pad0[0x2C]; func_80223ED4_Pos *unk2C; } func_80223ED4_Unit;
typedef struct func_80223ED4_G {
    u8 pad0[0xDC];
    struct func_802237B0_Arg *unkDC;
    func_80223ED4_Unit *unkE0;
    u8 padE4[0xEC - 0xE4];
    struct func_802237B0_Arg *unkEC;
    func_80223ED4_Unit *unkF0;
} func_80223ED4_G;


#define G (*(func_80223ED4_G *)&D_801BBBF0)
#define FN_DD0(a, b, c, d, e, f) func_80223DD0((struct func_80223DD0_Struct *)(a), (struct func_80223DD0_Struct *)(b), \
    (struct func_80223DD0_Struct2 *)(c), (struct func_80223DD0_Struct2 *)(d), e, f)

void func_80223ED4(struct func_802237B0_Arg *arg0, func_80223ED4_Pos *s0) {
    struct func_802237B0_Arg *sp8C;
    u8 *a1;
    u8 *a2;
    u8 *sp80;
    struct func_802237B0_Arg *cur;
    func_80223ED4_Pos *s1;
    func_80223ED4_Vec sp6C;
    func_80223ED4_Q sp5C;
    func_80223ED4_Q sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    u8 unused;
    u8 flag;
    u8 t;

    if (arg0 != G.unkDC) {
        sp8C = G.unkDC;
    } else {
        sp8C = G.unkEC;
    }
    a1 = (u8 *)arg0->unk5C;
    if (arg0 == G.unkDC) {
        a2 = (u8 *)&D_801BC03C;
    } else {
        a2 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != G.unkDC) {
        sp80 = (u8 *)&D_801BC03C;
    } else {
        sp80 = (u8 *)&D_801BC3D8;
    }
    s1 = (*(func_80223ED4_Unit **)s0)->unk2C;
    if (arg0 == G.unkDC) {
        s0 =G.unkF0->unk2C;
    } else {
        s0 = G.unkE0->unk2C;
    }
    sp6C = *(func_80223ED4_Vec *)(a1 + 0xA4);
    t = a2[0x392];
    if (t == 6) {
        return;
    }
    sp40 = func_80223AB8(t);
    sp3C = func_80223AB8(sp80[0x392]);
    if ((f64)sp3C == 0.0) {
        return;
    }
    if (t == 1 || t == 3 || t == 5) {
        flag = 1;
    } else {
        flag = 0;
    }
    func_80223CB8(arg0, &sp5C);
    if (a2[0x392] == 4 || a2[0x392] == 5) {
        sp5C.d = sp5C.d * 0.5;
    }
    func_80223CB8(sp8C, &sp4C);
    if (sp80[0x392] == 4 || sp80[0x392] == 5) {
        sp4C.d = sp4C.d * D_8023EF80;
    }
    if (FN_DD0(s1, s0, &sp5C, &sp4C, sp40, sp3C) == 0) {
        return;
    }
    if (flag && func_8010843C(s0->unk4, s0->unk8, s0->unkC, (s0->unk4 + s1->unk4) - sp6C.x, s0->unk8, (s0->unkC + s1->unkC) - sp6C.z)) {
        s0->unk4 = s0->unk4 + (s1->unk4 - sp6C.x);
        s0->unkC = s0->unkC + (s1->unkC - sp6C.z);
        func_802237B0(sp8C, 1);
    } else {
        s1->unk4 = sp6C.x;
        s1->unkC = sp6C.z;
        func_802237B0(arg0, 1);
    }
    if (FN_DD0(s1, s0, &sp5C, &sp4C, sp40, sp3C) == 0) {
        return;
    }
    if (flag) {
        sp48 = s1->unk4 + (s0->unk4 - s1->unk4) * D_8023EF88;
        sp44 = s1->unkC + (s0->unkC - s1->unkC) * D_8023EF90;
        if (!func_80108480(s0->unk4, s0->unk8, s0->unkC, sp48, s0->unk8, sp44)) {
            s0->unk4 = sp48;
            s0->unkC = sp44;
            func_802237B0(sp8C, 1);
        }
    } else {
        sp48 = s0->unk4 + (s1->unk4 - s0->unk4) * D_8023EF98;
        sp44 = s0->unkC + (s1->unkC - s0->unkC) * D_8023EFA0;
        if (!func_80108480(s1->unk4, s1->unk8, s1->unkC, sp48, s1->unk8, sp44)) {
            s1->unk4 = sp48;
            s1->unkC = sp44;
            func_802237B0(arg0, 1);
        }
    }
}

struct func_80224B64_Globals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};

struct func_802242D0_StructC {
    u8 pad[0x12];
    s16 angle;
};
struct func_802242D0_StructB {
    u8 pad[0x2C];
    struct func_802242D0_StructC *unk2C;
};
struct func_802242D0_StructA {
    u8 pad[0x24];
    struct func_802242D0_StructB *unk24;
};

s32 func_802242D0(struct func_802242D0_StructA *arg0) {
    u8 *var_v1;
    s16 temp_a0;
    s16 var_v0;
    s16 angle;
    s32 temp_a2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0_2;
    s32 var_v0_3;

    if (arg0 == (void *)D_801BBBF0.unkDC) {
        var_v1 = (u8 *)&D_801BC03C;
    } else {
        var_v1 = (u8 *)&D_801BC3D8;
    }
    angle = arg0->unk24->unk2C->angle;
    if (arg0 == (void *)D_801BBBF0.unkDC) {
        var_v0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkB98;
    } else {
        var_v0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkB98 + 0x1000;
    }
    temp_a0 = var_v0 - angle;
    temp_a2 = temp_a0 & 0x1000;
    if (temp_a2 != 0) {
        var_a1 = temp_a0 & 0x1FFF;
        var_v0_2 = var_a1 - 0x2000;
    } else {
        var_a1 = temp_a0 & 0x1FFF;
        var_v0_2 = var_a1;
    }
    var_a0 = var_v0_2 < 0
        ? -(temp_a2 ? var_a1 - 0x2000 : var_a1)
        : (temp_a2 ? var_a1 - 0x2000 : var_a1);
    if (var_a0 < (*(s16 *)(var_v1 + 0x310) / 2)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802243B4.s")


struct func_8022474C_Mid {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8022474C_Obj {
    u8 pad0[0x24];
    struct {
        u8 pad0[0x2C];
        struct func_8022474C_Mid *unk2C;
    } *unk24;
};

#define SPD(p) ((s14 > 0.0 ? s14 : (p)->unk10))
#define RAW(p) ((s16)(s32)(SPD(p) * 128.0f))
#define WRAP(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

s32 func_8022474C(s32 arg0, s16 arg1) {
    func_80225664_Struct *p;
    struct func_8022474C_Mid *m;
    s16 cur;
    s16 d;
    s16 a;
    s16 lim;
    s32 q;
    s32 t;
    f32 s14;

    if (arg0 == D_801BBCCC) {
        p = &D_801BC03C;
    } else {
        p = &D_801BC3D8;
    }
    m = ((struct func_8022474C_Obj *)arg0)->unk24->unk2C;
    cur = m->unk12;
    d = cur - arg1;
    a = WRAP(d);
    s14 = *(f32 *)&p->pad14;
    lim = (WRAP(RAW(p)) < 0) ? -WRAP(RAW(p)) : WRAP(RAW(p));
    if (a < -lim) {
        m->unk12 = (s16)(cur + lim) & 0x1FFF;
    } else if (lim < a) {
        m->unk12 = (s16)(cur - lim) & 0x1FFF;
    } else {
        m->unk12 = arg1 & 0x1FFF;
    }
    return (u8)((a / lim < 0) ? -(a / lim) : (a / lim));
}
#undef SPD
#undef RAW
#undef WRAP

struct func_80224B64_Inner {
    u8 pad0[0x9C];
    u8 unk9C;
};
struct func_80224B64_Outer {
    u8 pad0[0x5C];
    struct func_80224B64_Inner *unk5C;
};


s32 func_80224AC4(s32 arg0, u8 arg1)
{
  s32 var_a0;
  s32 var_v0;
  s16 angle;
  struct func_80224B64_Inner *var_v1;
  if (arg0 != D_801BBBF0.unkDC)
  {
    var_v1 = ((struct func_80224B64_Outer *) D_801BBBF0.unkDC)->unk5C;
  }
  else
  {
    var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) (&D_801BBBF0))->unkEC)->unk5C;
  }
  var_a0 = (arg0 == D_801BBBF0.unkDC) ? (0) : (0x1000);
  var_v0 = (arg1) ? (0x1000) : (0);
  angle = ((s16) ((var_v0 + (((struct func_80224B64_Globals *) (&D_801BBBF0))->unkB98 & 0xFFFFFFFFu)) + var_a0)) & 0x1FFF;
  if (var_v1->unk9C == 2)
  {
    return 0;
  }
  return func_8022474C(arg0, angle);
}






s32 func_80224B64(s32 arg0) {
    struct func_80224B64_Inner *var_v1;
    s16 var_v0;
    s16 arg1;

    if (arg0 != ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC) {
        var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC)->unk5C;
    } else {
        var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) &D_801BBBF0)->unkEC)->unk5C;
    }
    if (arg0 == ((struct func_80224B64_Globals *) &D_801BBBF0)->unkDC) {
        var_v0 = 0;
    } else {
        var_v0 = 0x1000;
    }
    arg1 = (s16) (((s16) (var_v0 + ((struct func_80224B64_Globals *) &D_801BBBF0)->unkB98)) & 0x1FFF);
    if (var_v1->unk9C == 2) {
        return 0;
    }
    return func_802243B4(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80224BEC.s")


typedef struct func_80224E00_Struct {
    u8 pad0[0xB0];
    f32 unkB0;
    u8 padB4[4];
    f32 unkB8;
    f32 unkBC;
    u8 padC0[4];
    f32 unkC4;
    f32 unkC8;
    u8 padCC[4];
    f32 unkD0;
    f32 unkD4;
    u8 padD8[4];
    f32 unkDC;
} func_80224E00_Struct;

typedef struct func_80224E00_Arg {
    u8 pad0[0x5C];
    func_80224E00_Struct *unk5C;
} func_80224E00_Arg;

struct func_80224F5C_Arg0;


void func_80224E00(struct func_80224F5C_Arg0 *arg0, s16 arg1) {
    func_80224E00_Struct *p;
    f32 b0, bc, c8, d4, b8, c4, d0, dc;
    s16 a;

    p = ((func_80224E00_Arg *)arg0)->unk5C;
    func_8001EAD0(arg1, arg1);
    func_8001EB64(arg1);
    b0 = p->unkB0;
    bc = p->unkBC;
    b8 = p->unkB8;
    c4 = p->unkC4;
    c8 = p->unkC8;
    d4 = p->unkD4;
    d0 = p->unkD0;
    dc = p->unkDC;
    arg1 &= 0x1FFF;
    if (arg1 != 0) {
        if (arg1 == 0x1000) {
            p->unkC8 = -d4;
            p->unkD4 = -c8;
            p->unkD0 = -dc;
            p->unkDC = -d0;
        } else if (arg1 == 0x800) {
            p->unkB0 = b8;
            p->unkBC = c4;
            p->unkB8 = b0;
            p->unkC4 = bc;
            p->unkC8 = d0;
            p->unkD4 = dc;
            p->unkD0 = c8;
            p->unkDC = d4;
            func_802260C8((struct func_802260C8_Struct *)arg0);
        } else if (arg1 == 0x1800) {
            p->unkB0 = -c4;
            p->unkBC = -b8;
            p->unkB8 = -bc;
            p->unkC4 = -b0;
            p->unkC8 = -dc;
            p->unkD4 = -d0;
            p->unkD0 = -d4;
            p->unkDC = -c8;
            func_802260C8((struct func_802260C8_Struct *)arg0);
        }
    }
}


struct func_80224F5C_Bits {
    u8 pad0[0x30];
    u32 : 9;
    u32 f : 2;
    u32 : 21;
};
struct func_80224F5C_In {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80224F5C_Mid {
    u8 pad0[0x2C];
    struct func_80224F5C_In *unk2C;
};
struct func_80224F5C_Arg1 {
    struct func_80224F5C_Mid *unk0;
};
struct func_80224F5C_Arg0 {
    u8 pad0[0x5C];
    u8 *unk5C;
};
typedef struct func_80224F5C_V {
    s32 a;
    s32 b;
    s32 c;
} func_80224F5C_V;

extern u16 func_80010550(struct func_80224F5C_Arg1 *, u8 *);
extern void func_8013A28C(struct func_80224F5C_Arg1 *, func_80224F5C_V);
extern void func_80224BEC(struct func_80224F5C_Arg0 *, struct func_80224F5C_Arg1 *, struct func_80224F5C_Bits *);

u16 func_80224F5C(struct func_80224F5C_Arg0 *arg0, struct func_80224F5C_Arg1 *arg1) {
    u8 *sp34;
    struct func_80224F5C_Bits *sp30;
    s16 sp2E;
    u16 sp2C;
    u16 sp2A;
    func_80224F5C_V sp1C;

    sp34 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        sp30 = (struct func_80224F5C_Bits *)&D_801BC03C;
    } else {
        sp30 = (struct func_80224F5C_Bits *)&D_801BC3D8;
    }
    sp2E = 0;
    func_80224BEC(arg0, arg1, sp30);
    sp2C = func_80010550(arg1, sp34);
    if ((sp2A = D_8022560C(sp34)) == 6 || (u8)sp2A == 4 || (u8)sp2A == 5) {
        if (sp2C == 0) {
            return 1;
        }
        if ((u8)sp2A == 6) {
            sp2E = 0x1000;
            sp30->f = sp30->f ^ 1;
        } else if ((u8)sp2A == 4) {
            sp2E = (sp30->f == 3) ? 0x800 : 0x1800;
        } else if ((u8)sp2A == 5) {
            sp2E = (sp30->f == 3) ? 0x1800 : 0x800;
        }
        arg1->unk0->unk2C->unk12 = arg1->unk0->unk2C->unk12 + sp2E;
        arg1->unk0->unk2C->unk12 = arg1->unk0->unk2C->unk12 & 0x1FFF;
        func_802256E4((s32)&sp1C, (s32)arg0, 0);
        func_8013A28C(arg1, sp1C);
        func_80224E00(arg0, sp2E);
        func_80010550(arg1, sp34);
        return 0;
    }
    sp2A = D_80224AC4((s32)arg0, 0);
    if (sp2A == 0) {
        func_802256E4((s32)&sp1C, (s32)arg0, 0);
        func_8013A28C(arg1, sp1C);
        func_80010550(arg1, sp34);
    }
    return sp2A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_8022518C.s")




s32 func_802253B8(s32 arg0) {
    if ((arg0 == D_801BBBF0.unkDC) && (D_801BBBF0.unk2C != 0xF)) {
        return 0;
    }
    if ((D_801BBBF0.unk2C == 0xA) || (D_801BBBF0.unk2C == 0xB)) {
        return 1;
    }
    return 0x80;
}



s32 func_80225410(s32 arg0) {
    s32 temp_v0;
    s32 temp_a0;

    temp_v0 = func_802253B8(arg0);
    temp_a0 = temp_v0 & 0xFF;
    if (!(temp_v0 & 0x80)) {
        return func_80151870(temp_a0) & 0xFF;
    }
    return 5;
}



u8 func_80225450(s32 arg0, u8 arg1) {
    u8 s0;
    u8 ret;

    s0 = arg0 = func_802253B8(arg0);
    ret = 0;
    if (!(arg0 & 0x80)) {
        if (arg1 == 1) {
            ret = arg0 = func_80002B44(s0);
        } else {
            ret = arg0 = func_80002BAC(s0);
        }
        if (arg0 != 0) {
            ret = arg0 = func_80002A94(s0);
            if (arg0 == 0) {
                if (arg1 == 1) {
                    ret = func_80002B44(s0);
                } else {
                    ret = func_80002BAC(s0);
                }
            }
        }
    }
    return ret;
}



s32 func_802254F8(s32 arg0, u16 arg1, u8 arg2) {
    s32 temp_v0;

    temp_v0 = func_802253B8(arg0);
    if (!(temp_v0 & 0x80)) {
        return func_801518D4(temp_v0 & 0xFF, arg2, arg1) & 0xFF;
    }
    return 0;
}



void func_80225540(s32 a0) {
    func_80225450(a0, 0);
}



s32 func_80225560(void *arg0, u8 arg1) {
    u8 *var_v1;

    var_v1 = *(u8 **)((u8 *)arg0 + 0x5C);
    arg1 = arg1;
    if (arg1 >= 0x26) {
        arg1 = 0;
    }
    return D_8023C8D0[var_v1[0x75]][arg1];
}



s32 func_8022559C(s32 arg0) {
    s32 *row;
    u16 var_v0;
    u8 var_a0;

    for (var_v0 = 0; var_v0 < 0xA; var_v0++) {
        row = (s32 *) D_8023C8D0[var_v0];
        for (var_a0 = 0; var_a0 < 0x26; var_a0++) {
            if (arg0 == row[var_a0]) {
                return var_a0;
            }
        }
    }
    return 0xFF;
}



s32 func_8022560C(u8 *arg0) {
    s32 *row;
    s32 var_a1;
    s32 val;

    row = (s32 *)D_8023C8D0[arg0[0x75]];
    val = *(s32 *)(arg0 + 0x1C);
    var_a1 = 0;
    do {
        if (val == row[var_a1]) {
            return var_a1;
        }
        var_a1 = (var_a1 + 1) & 0xFF;
    } while (var_a1 < 0x26);
    return 0xFF;
}



typedef struct func_80225664_Local {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_80225664_Local;


void *func_80225664(void *arg0, s32 arg1, s32 arg2) {
    func_80225664_Struct *var_v0;
    func_80225664_Local sp;

    if (arg1 == D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    sp.unk0 = arg2;
    sp.unk4 = 0;
    sp.unk8 = var_v0->unk10;
    sp.unk6 = 0;
    if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
        sp.unk6 = 0x10;
    }
    *(func_80225664_Local *) arg0 = sp;
    return arg0;
}


void func_802256E4(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *unused;
  unused = &arg2;
 do { } while (0);
  func_80225664(arg0, arg1, func_80225560(arg1, arg2 ^ 0));
}


typedef struct func_80225724_Struct {
    u8 pad0[0x35C];
    f32 unk35C;
    u8 pad360[4];
    f32 unk364;
} func_80225724_Struct;

void func_80225724(f32 *arg0, f32 *arg1) {
    f32 s;
    f32 d;
    f32 a;
    f32 t;

    s = D_8002FC20(((func_80225724_Struct *)&D_801BBBF0)->unk35C * ((func_80225724_Struct *)&D_801BBBF0)->unk35C + ((func_80225724_Struct *)&D_801BBBF0)->unk364 * ((func_80225724_Struct *)&D_801BBBF0)->unk364);
    d = s;
    if ((f64)s <= 0.0) {
        d = 1.0f;
    }
    t = *arg0 * ((func_80225724_Struct *)&D_801BBBF0)->unk35C + *arg1 * ((func_80225724_Struct *)&D_801BBBF0)->unk364;
    if (t < 0.0f) {
        a = -t;
    } else {
        a = t;
    }
    a = a / d;
    *arg0 = (a * 1.0f * ((func_80225724_Struct *)&D_801BBBF0)->unk35C) / d;
    *arg1 = (a * 1.0f * ((func_80225724_Struct *)&D_801BBBF0)->unk364) / d;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802257F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225930.s")



struct func_80225A68_Struct {
    u8 pad0[0x68];
    f32 unk68;
    f32 unk6C;
    u8 pad70[4];
    u8 unk74;
};
struct func_80225A68_Arg {
    u8 pad0[0x5C];
    struct func_80225A68_Struct *unk5C;
};

u8 func_80225A68(struct func_80225A68_Arg *arg0) {
    struct func_80225A68_Struct *s = arg0->unk5C;
    if (s->unk74 == 0) {
        return 3;
    }
    if (s->unk68 < s->unk6C) {
        return (u32)(s->unk6C + D_8023EFE0);
    }
    return (u32)(s->unk68 + D_8023EFE8);
}



typedef struct func_80225BF0_StructInner {
    u8 pad0[0x68];
    f32 unk68;
    u8 pad6C[0x74 - 0x6C];
    u8 unk74;
} func_80225BF0_StructInner;

typedef struct func_80225BF0_Struct {
    u8 pad0[0x5C];
    func_80225BF0_StructInner *unk5C;
} func_80225BF0_Struct;

s32 func_80225BF0(func_80225BF0_Struct *arg0) {
    func_80225BF0_StructInner *temp_v1;

    temp_v1 = arg0->unk5C;
    if (temp_v1->unk74 == 0) {
        return 3;
    }
    return (u32) ((f64) temp_v1->unk68 + D_8023EFF0) & 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_80225CB4.s")

struct func_80225F58_B { u8 pad[0x2C]; s32 unk2C; };
struct func_80225F58_A { u8 pad[0x24]; struct func_80225F58_B *unk24; u8 pad2[0x4C-0x28]; u8 unk4C; u8 pad3; u8 unk4E; };
extern u8 func_80225CB4(struct func_80225F58_A *, f32);

s32 func_80225F58(struct func_80225F58_A *arg0, f32 arg1) {
    s32 sp2C;
    u8 sp2B;

    sp2C = arg0->unk24->unk2C;
    sp2B = arg0->unk4E;
    arg0->unk4E = func_80225CB4(arg0, arg1);
    arg0->unk4C = func_80225BF0((void *)arg0);
    if (func_80225930(sp2C, sp2B, arg0->unk4E) != 0) {
        return 2;
    }
    if (func_80225930(sp2C, -sp2B, (s16)-arg0->unk4E) != 0) {
        return 1;
    }
    return 0;
}


s32 func_80226010(struct func_80225F58_A *arg0, f32 arg1) {
    s32 sp2C;
    u8 sp2B;

    sp2C = arg0->unk24->unk2C;
    sp2B = arg0->unk4C;
    arg0->unk4C = func_80225CB4(arg0, arg1);
    arg0->unk4E = func_80225BF0((func_80225BF0_Struct *)arg0);
    if (func_802257F4(sp2C, (s16)sp2B, arg0->unk4C) != 0) {
        return 1;
    }
    if (func_802257F4(sp2C, (s16)-sp2B, (s16)-arg0->unk4C) != 0) {
        return 2;
    }
    return 0;
}



struct func_802260C8_StructInner {
    u8 pad[0x2C];
    s32 unk2C;
};
struct func_802260C8_Struct {
    u8 pad[0x24];
    struct func_802260C8_StructInner *unk24;
    u8 pad28[0x4C - 0x28];
    u8 unk4C;
    u8 pad4D;
    u8 unk4E;
};

s32 func_802260C8(struct func_802260C8_Struct *arg0) {
    s32 inner;
    u8 first;
    u8 second;

    first = arg0->unk4C;
    second = arg0->unk4E;
    inner = arg0->unk24->unk2C;
    arg0->unk4E = first;
    arg0->unk4C = second;
    if (func_802257F4(inner, (s16) first, arg0->unk4C)) {
        return 1;
    }
    if (func_802257F4(inner, (s16) -first, (s16) -arg0->unk4C)) {
        return 2;
    }
    if (func_80225930(inner, (s16) second, arg0->unk4E)) {
        return 1;
    }
    if (func_80225930(inner, (s16) -second, (s16) -arg0->unk4E)) {
        return 2;
    }
    return 0;
}

struct func_802261CC_V {
    s32 a, b, c;
};
struct func_802261CC_In {
    u8 pad0[0xC];
    u16 unkC;
    u8 padE[0xB0 - 0xE];
    struct func_802261CC_V unkB0;
    struct func_802261CC_V unkBC;
};
struct func_802261CC_Arg {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x4C - 0x28];
    u8 unk4C;
    u8 pad4D;
    u8 unk4E;
    u8 pad4F[0x5C - 0x4F];
    struct func_802261CC_In *unk5C;
    u8 pad60[3];
    u8 unk63;
};
struct func_802261CC_Out {
    u8 pad0[8];
    f32 unk8;
    f32 unkC;
};
struct func_802261CC_G {
    u8 pad0[0x2C];
    s32 unk2C;
};
extern void func_80223B2C(struct func_802261CC_Arg *, struct func_802261CC_Out *, struct func_802261CC_V, struct func_802261CC_V);

s32 func_802261CC(struct func_802261CC_Arg *arg0, struct func_802261CC_G **arg1) {
    struct func_802261CC_In *in;
    s32 a0;
    struct func_802261CC_Out sp;
    u8 old;
    u8 s1;

    in = arg0->unk5C;
    s1 = 0;
    if (func_80126944() != 1) return 0;
    if (in == NULL) return 0;
    if (arg0->unk63 == 0) return 0;
    if (arg0->unk24 == 0) return 0;
    if (*arg1 == NULL) return 0;
    if (((s32 *)arg1)[in->unkC - 1] == 0) return 0;
    func_80223B2C(arg0, &sp, in->unkB0, in->unkBC);
    old = arg0->unk4C;
    a0 = (*arg1)->unk2C;
    arg0->unk4C = (u32)((f64)sp.unk8 + D_8023F008);
    if (func_802257F4(a0, old, arg0->unk4C)) s1 = 2;
    if (func_802257F4(a0, -old, -arg0->unk4C)) s1 |= 1;
    old = arg0->unk4E;
    arg0->unk4E = (u32)((f64)sp.unkC + D_8023F010);
    if (func_80225930(a0, old, arg0->unk4E)) s1 |= 8;
    if (func_80225930(a0, -old, -arg0->unk4E)) s1 |= 4;
    return s1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/802237B0/func_802264D0.s")


extern void func_802264D0(s32 a0, u16 a1);

void func_802266CC(s32 arg0, u16 arg1) {
    s32 var_a0;

    if (arg0 != D_801BBBF0.unkDC) {
        var_a0 = D_801BBBF0.unkDC;
    } else {
        var_a0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkEC;
    }
    func_802264D0(var_a0, arg1);
}


typedef struct func_80226710_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80226710_StructVec;

typedef struct func_80226710_StructC {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
} func_80226710_StructC;

typedef struct func_80226710_StructB {
    u8 pad0[0x2C];
    func_80226710_StructC *unk2C;
} func_80226710_StructB;

typedef struct func_80226710_StructA {
    u8 pad0[0x24];
    func_80226710_StructB *unk24;
} func_80226710_StructA;

extern void func_801DC9C4(func_80226710_StructVec v, u16 w, f32 f);

void func_80226710(func_80226710_StructA *arg0, u16 arg1, f32 arg2) {
    func_80226710_StructC *temp_v0;
    func_80226710_StructVec sp20;

    temp_v0 = arg0->unk24->unk2C;
    sp20.x = temp_v0->x;
    sp20.y = temp_v0->y;
    sp20.z = temp_v0->z;
    func_801DC9C4(sp20, arg1, arg2);
}


typedef struct func_80226780_StructInner {
    u8 pad0[0x6C];
    u16 unk6C;
    u8 pad6E[0x70 - 0x6E];
    void *unk70;
} func_80226780_StructInner;

typedef struct func_80226780_StructTail {
    u8 pad0[0x74];
    u8 unk74;
} func_80226780_StructTail;

typedef struct func_80226780_StructOuter {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80226780_StructTail *unk5C;
} func_80226780_StructOuter;


void func_80226780(func_80226780_StructOuter *arg0) {
    func_80226780_StructInner *temp_v0;
    func_80226780_StructTail *temp_v1;

    temp_v1 = arg0->unk5C;
    if ((D_801BBC1C != 0xA) && (temp_v1->unk74 == 3) && (arg0->unk36 == 0x11B)) {
        temp_v0 = func_80005670(arg0, D_8023C8F8);
        if (temp_v0 != NULL) {
            temp_v0->unk6C = 0;
            temp_v0->unk70 = arg0;
        }
    }
}


typedef struct func_802267E8_Bits {
    u32 a:1;
    u32 b:2;
    u32 pad:8;
    u32 c:2;
    u32 rest:19;
} func_802267E8_Bits;

void func_802267E8(u8 *arg0, s32 arg1) {
    u16 *p;
    s32 pad;

    p = (u16 *)(arg0 + 0x6C);

    if (((D_801BCC21 >= 10) && (D_801BCC21 != 0xF)) || (*(s16 *)((u8 *)&D_801BC3D8 + 2) <= 0) || (((func_802267E8_Bits *)((u8 *)&D_801BC3D8 + 0x30))->b != 0) || (*(s16 *)((u8 *)&D_801BC03C + 2) <= 0) || (((func_802267E8_Bits *)((u8 *)&D_801BC03C + 0x30))->b != 0)) {
        func_800058DC(arg0, func_8022693C);
    }
    if (D_801BCC21 == 7) {
        u8 t;

        t = *((u8 *)&D_801BC03C + 0x2D9);
        if (t != 0xB && t != 0xD && t != 0xE && t != 0x12 && t != 0x11 && t != 0x14) {
            *(u16 *)(arg0 + 0x6C) = 0;
        }
    }
    if (D_801BCC21 == 5) {
        if (((func_802267E8_Bits *)((u8 *)&D_801BC3D8 + 0x30))->c == 0) {
            *p = *p + 1;
            if (*p >= 0x12D) {
                func_80226710(*(void **)(arg0 + 0xC), 0x507, 1.0f);
                *p = 0;
            }
        }
    }
}



void func_8022693C(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}


void func_8022695C(s32 arg0) {

}


void func_80226964(s32 arg0) {

}


void func_8022696C(void) {
}

