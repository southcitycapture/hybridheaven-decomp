#include "common.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_801BBCCC;
extern s32 func_80010550();
extern s32 func_80011590(u16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_802233B0();
extern s32 func_80224AC4();
extern s32 func_80224F5C(s32, s32);
extern s32 func_80368E58(s32, s32, s16, u8);
extern s32 func_8036A680(s32, s32, s32, s32);              /* extern */
extern s32 func_8036AA8C(void *);
extern s32 func_8036AB2C(void *);
extern s8 D_8038CC60;
extern u8 D_8008DA88[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC21;
extern u8 D_80387A40[];
extern u8 D_80387AE0;
extern u8 D_8038CC61;
extern u8 D_8038CC62;
extern u8 func_8021E59C[];
extern u8 func_80222708[];
extern u8 func_80222E84[];
extern u8 func_8036E0A4[];
extern void *func_8035FEC8(u8, void *);
extern void func_800058DC(s32, void *);                    /* extern */
extern void func_80006214(void *);
extern void func_80011198(s32, s32);
extern void func_800111E0(s32, s32);
extern void func_80011258(s32, s32);
extern void func_8013AE20(s32, s32, s32);
extern void func_802237B0(void *, s32);
extern void func_8022397C();
extern void func_80226710(void *, s32, s32);
extern void func_803602D4(void *, s32);
extern void func_80360394(s32, s32, s32, u8);
extern void func_8036445C(s32, s32, u8, u8);
extern void func_80365FE0();
extern void func_80366278();
extern void func_80369F54(s32 *, s32, s32);                /* extern */
extern void func_8036A5AC(s32, s32, s32, s32);
extern void func_8036A8EC(s32 arg0, s32 arg1);
extern void func_8036AC14();
extern void func_8036B0D4(void *arg0, s32 arg1);
extern void func_8036C358(s32 *, s32, s32);
extern void func_8036C6E0(s32 arg0, s32 arg1);
extern void func_8036C744();
extern void func_8036D7FC();
extern void func_8036D9F8();
extern void func_8036DD64(s32 *, s32, void *);
extern void func_8036DF48();
extern void func_8036E578(void *);

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_803698D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369994.s")


struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};

struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};

struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};

extern struct func_80369C7C_Struct D_801BBBF0;

s32 func_80369C7C(struct func_80369C7C_Obj1 *arg0)
{
  s16 var_v0;
  s16 var_a0;
  s32 temp_v1;
  s32 temp_a1;
  struct func_80369C7C_Obj1 *var_v1;
  if (arg0 != D_801BBBF0.unkDC)
  {
    var_v1 = D_801BBBF0.unkDC;
  }
  else
  {
    var_v1 = D_801BBBF0.unkEC;
  }
  var_a0 = var_v1->unk24->unk2C->unk12;
  if (var_v1 == D_801BBBF0.unkDC)
  {
    var_v0 = 0;
  }
  else
  {
    var_v0 = 0x1000;
  }
  temp_v1 = (s16) (var_v0 + D_801BBBF0.unkB98);
  temp_v1 = (s16) temp_v1;
  temp_a1 = temp_v1 - var_a0;
  var_v0 = temp_a1;
  if ((var_v0 & 0x1FFF) >= 0x1000)
  {
    return 1;
  }
  return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369F54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A5AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A680.s")



void func_8036A874(s32 arg0, s32 arg1) {
    s32 sp24[3];

    if (func_80224F5C(arg0, arg1) == 0) {
        D_8038CC60 = func_80369C7C(arg0);
        func_80369F54(sp24, arg0, arg1);
        func_8036A5AC(arg0, arg1, sp24[0], sp24[2]);
        func_800058DC(arg0, func_8036A8EC);
    }
}



void func_8036A8EC(s32 arg0, s32 arg1) {
    s32 sp18[4];

    func_80369F54(&sp18[1], arg0, arg1);
    func_80224AC4(arg0, 0);
    if (func_8036A680(arg0, arg1, sp18[1], sp18[3]) != 0) {
        func_800058DC(arg0, func_8036AC14);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AA8C.s")


typedef struct func_8036AB2C_StructA { u8 pad[0x24]; struct func_8036AB2C_StructB *p; } func_8036AB2C_StructA;
typedef struct func_8036AB2C_StructB { u8 pad[0x2C]; struct func_8036AB2C_StructC *q; } func_8036AB2C_StructB;
typedef struct func_8036AB2C_StructC { u8 pad0[4]; f32 x; f32 y; f32 z; u8 pad1[2]; s16 a; } func_8036AB2C_StructC;


s32 func_8036AB2C(void *arg0) {
    u8 *base;
    func_8036AB2C_StructC *c;
    s16 ang;
    f32 dx;
    f32 dz;

    if ((s32)arg0 == D_801BBCCC) {
        base = D_801BC03C;
    } else {
        base = D_801BC3D8;
    }
    c = ((func_8036AB2C_StructA *)arg0)->p->q;
    ang = (base[0x2D9] != 0 ? 0x800 : -0x800) + c->a;
    dx = func_8001EAD0(ang) * 20.0;
    dz = func_8001EB64(ang) * 20.0;
    if (func_8010843C(c->x, c->y, c->z, c->x + dx, c->y, c->z + dz) != 0) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AC14.s")

typedef struct func_8036D9F8_Struct3 { s32 w[3]; } func_8036D9F8_Struct3;
struct func_8036D9F8_Arg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    s32 unk5C;
};
extern s32 func_80011140(s32, s32, func_8036D9F8_Struct3, s32);
extern func_8036D9F8_Struct3 func_80225664(s32, s32);

void func_8036AFBC(s32 arg0, s32 arg1) {
    s32 sp44;
    u8 *v1;
    u8 *v0;
    func_8036D9F8_Struct3 t;

    sp44 = ((struct func_8036D9F8_Arg *)arg0)->unk5C;
    if (arg0 == D_801BBCCC) {
        v1 = D_801BC03C;
    } else {
        v1 = D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        v0 = D_801BC03C;
    } else {
        v0 = D_801BC3D8;
    }
    if ((v0[0x2D8] == 6) || (v0[0x2D8] == 7)) {
        v1[0x31] = (v1[0x31] & 0xFFE7) | 0x10;
        t = func_80225664(arg0, 0x01900018);
    } else {
        v1[0x31] = (v1[0x31] & 0xFFE7) | 8;
        t = func_80225664(arg0, 0x01900017);
    }
    if (func_80011140(arg1, sp44, t, 5) != 0) {
        func_800058DC(arg0, func_8036B0D4);
    }
}



void func_8036B0D4(void *arg0, s32 arg1) {
    s32 sp1C;
    u8 *var_v0;

    sp1C = *(s32 *) ((u8 *) arg0 + 0x5C);
    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    var_v0[0x32] = var_v0[0x32] & 0xFF1F;
    func_8013AE20((s32) arg0, arg1, 0);
    func_800111E0(arg1, sp1C + 0x22);
    func_80010550(arg1, sp1C);
}


void func_8036B14C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

typedef struct func_8036B158_Struct { u8 pad[0x5C]; s32 unk5C; } func_8036B158_Struct;

void func_8036B158(func_8036B158_Struct *arg0, s32 arg1) {
    func_8036B158_Struct *a2;
    s32 v1;
    s32 sp24;
    s8 *v0;

    if ((void *)arg0 != (void *)D_801BBBF0.unkDC) {
        a2 = (func_8036B158_Struct *)D_801BBBF0.unkDC;
    } else {
        a2 = (func_8036B158_Struct *)D_801BBBF0.unkEC;
    }
    v1 = arg0->unk5C;
    sp24 = a2->unk5C;
    if ((void *)arg0 != (void *)D_801BBBF0.unkDC) {
        v0 = (s8 *)D_801BC03C;
    } else {
        v0 = (s8 *)D_801BC3D8;
    }
    D_8038CC62 += 1;
    v0[0x374] = v0[0x374] - 1;
    if (v0[0x374] < 0) {
        func_80011258(arg1, v1 + 0x22);
        func_80006214(a2);
        func_80011258((s32)D_8008DA88, sp24 + 0x22);
        func_80006214(arg0);
        v0[0x374] = 0;
        return;
    }
    func_800111E0(arg1, v1 + 0x22);
    func_80006214(a2);
    func_800111E0((s32)D_8008DA88, sp24 + 0x22);
    func_80006214(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B6D4.s")


typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;

extern func_8036B7EC_Struct *func_803698D0(void *);

void func_8036B7EC(s32 arg0, s32 arg1) {
    void *var_a0;
    func_8036B7EC_Struct *temp_v0;

    if (arg0 != D_801BBCCC) {
        var_a0 = D_801BC03C;
    } else {
        var_a0 = D_801BC3D8;
    }
    temp_v0 = func_803698D0(var_a0);
    func_80368E58(arg0, arg1, temp_v0->unkC, (temp_v0->unk0 << 13) >> 30);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036BA40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036BBBC.s")




void func_8036BF18(s32 arg0, s32 arg1) {
    u8 *var_v0;

    if (arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (var_v0[0x2F8] == 0) {
        D_80387AE0++;
        if (D_80387AE0 < 5) {
            return;
        }
    }
    D_80387AE0 = 0;
    var_v0[0x2F8] = 3;
    func_8036445C(arg0, arg1, var_v0[0x320], var_v0[0x321]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036BF98.s")


struct func_8036C054_Struct {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x2D9 - 0x34];
    u8 unk2D9;
};


void func_8036C054(s32 arg0, s32 arg1, s32 arg2) {
    struct func_8036C054_Struct *var_v1;
    u8 var_a0;
    u8 var_a3;

    if (arg1 == D_801BBCCC) {
        var_v1 = (struct func_8036C054_Struct *) D_801BC03C;
    } else {
        var_v1 = (struct func_8036C054_Struct *) D_801BC3D8;
    }
    var_a0 = var_v1->unk2D9;
    if ((var_a0 == 0x40) && (D_8038CC61 != 0)) {
        var_a0 = (var_a0 | 0x80) & 0xFF;
    }
    var_a3 = ((u8 *) func_8035FEC8(var_a0, D_80387A40))[1];
    if ((((u32) (var_v1->unk30 << 9) >> 0x1E) == 3) && ((s32) var_a3 < 4)) {
        var_a3 = (var_a3 ^ 1) & 0xFF;
    }
    func_80360394(arg0, arg1, arg2, var_a3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C110.s")


struct func_8036C2F8_Struct {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0xC - 0x8];
    f32 unkC;
};

f32 func_8036C2F8(struct func_8036C2F8_Struct *arg0, struct func_8036C2F8_Struct *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_ft4;
    f32 temp_fv1;

    temp_fv1 = (arg1->unk4 + ((arg4 * arg3) + (arg5 * arg2))) - arg0->unk4;
    temp_ft4 = (arg1->unkC + ((arg5 * arg3) - (arg4 * arg2))) - arg0->unkC;
    return (temp_fv1 * temp_fv1) + (temp_ft4 * temp_ft4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C358.s")



void func_8036C67C(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;

    func_8036C358(&sp1C, arg0, arg1);
    if (func_80224F5C(arg0, arg1) == 0) {
        func_8036A5AC(arg0, arg1, sp1C, sp24);
        func_800058DC(arg0, func_8036C6E0);
    }
}



void func_8036C6E0(s32 arg0, s32 arg1) {
    s32 sp18[4];

    func_8036C358(&sp18[1], arg0, arg1);
    func_80224AC4(arg0, 0);
    if (func_8036A680(arg0, arg1, sp18[1], sp18[3]) != 0) {
        func_800058DC(arg0, func_8036C744);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036CA40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036CC5C.s")


typedef struct func_8036D30C_Anim {
    s32 id;
    u16 frame;
    u8 pad6[2];
    f32 speed;
} func_8036D30C_Anim;

typedef struct func_8036D30C_Obj {
    u8 pad0[0x1C];
    func_8036D30C_Anim anim;
} func_8036D30C_Obj;

typedef struct func_8036D30C_Arg {
    u8 pad0[0x5C];
    func_8036D30C_Obj *unk5C;
} func_8036D30C_Arg;

typedef struct func_8036D30C_State {
    u8 pad0[0x30];
    u32 b30_7 : 1;
    u32 b30_pad : 6;
    u32 b30_0 : 1;
    u32 b31_7 : 1;
    u32 b31_65 : 2;
    u32 b31_43 : 2;
    u32 b31_pad : 3;
    u32 rest30 : 16;
    u8 pad34[4];
    u32 b38_7 : 1;
    u32 b38_65 : 2;
    u32 b38_4 : 1;
    u32 b38_pad : 4;
    u32 rest38 : 24;
} func_8036D30C_State;

extern void func_8013A28C(void *, func_8036D30C_Anim);
extern func_8036D30C_Anim D_80387AF0;

void func_8036D30C(s32 arg0, struct func_80369C7C_Obj2 **arg1) {
    func_8036D30C_State *st;
    func_8036D30C_Obj *obj;
    func_8036D30C_Anim *a;
    func_8036D30C_Anim anim;

    if (arg0 == D_801BBCCC) {
        st = (func_8036D30C_State *)D_801BC03C;
    } else {
        st = (func_8036D30C_State *)D_801BC3D8;
    }
    obj = ((func_8036D30C_Arg *)arg0)->unk5C;
    anim = D_80387AF0;
    a = &obj->anim;
    if ((a->id == 0x190001F || a->id == 0x1900020 || a->id == 0x1900022 || a->id == 0x1900023) &&
        func_80011590(a->speed * 4.0f) < a->frame && a->frame < func_80011590(a->speed * 20.0f)) {
        st->b31_43 = 1;
        (*arg1)->unk2C->unk12 += 0x1000;
        (*arg1)->unk2C->unk12 &= 0x1FFF;
    } else if ((a->id == 0x190001E || a->id == 0x1900021) &&
               func_80011590(a->speed * 7.0f) < a->frame && a->frame < func_80011590(a->speed * 21.0f)) {
        st->b31_43 = 3;
        (*arg1)->unk2C->unk12 += 0x1000;
        (*arg1)->unk2C->unk12 &= 0x1FFF;
    }
    if (st->b31_43 == 2) {
        anim.id = 0x190013B;
    } else if (st->b31_43 == 3) {
        anim.id = 0x190013D;
    } else {
        anim.id = 0x190013A;
    }
    st->b31_65 = 0;
    st->b38_7 = 0;
    st->b38_4 = 0;
    st->b38_65 = 0;
    st->b30_0 = 1;
    st->b30_7 = 1;
    *a = anim;
    func_8013A28C(arg1, *a);
    func_800058DC(arg0, func_8036D7FC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036D7FC.s")


struct func_8036D938_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
};

struct func_8036D938_StructState {
    u8 pad[0x30];
    u32 high : 1;
    u32 middle : 6;
    u32 low : 1;
    u32 rest : 24;
    u8 pad34[0x2DB - 0x34];
    u8 unk2DB;
};


void func_8036D938(struct func_8036D938_StructArg *arg0, s32 arg1) {
    s32 sp24;
    struct func_8036D938_StructState *state;

    sp24 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        state = (struct func_8036D938_StructState *)D_801BC03C;
    } else {
        state = (struct func_8036D938_StructState *)D_801BC3D8;
    }
    if (func_8036AA8C(arg0) != 0) {
        if (func_8036AB2C(arg0) != 0) {
            func_80011198(arg1, sp24);
            func_800058DC((s32)arg0, func_8036D9F8);
            return;
        }
    }
    state->unk2DB = 0;
    state->low = 0;
    state->high = 0;
    func_80365FE0(arg0, arg1);
}


typedef struct func_8036D9F8_Struct6 { s32 w[2][3]; } func_8036D9F8_Struct6;


struct func_8036D9F8_Obj {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x2D9 - 0x34];
    u8 unk2D9;
};

extern func_8036D9F8_Struct3 D_80387AFC;
extern func_8036D9F8_Struct6 D_80387B08;
extern void func_8036DB90(struct func_8036D9F8_Arg *arg0, s32 arg1);

void func_8036D9F8(struct func_8036D9F8_Arg *arg0, s32 arg1) {
    s32 sp5C;
    struct func_8036D9F8_Obj *sp58;
    func_8036D9F8_Struct3 sp4C;
    func_8036D9F8_Struct6 sp34;
    s32 v;

    sp5C = arg0->unk5C;
    if ((s32) arg0 == D_801BBCCC) {
        sp58 = (struct func_8036D9F8_Obj *) D_801BC03C;
    } else {
        sp58 = (struct func_8036D9F8_Obj *) D_801BC3D8;
    }
    sp4C = D_80387AFC;
    sp34 = D_80387B08;
    {
        struct { u8 g; u8 h; u8 f; } s2;
#define sp2E s2.f
        sp2E = 0;
        func_802237B0(arg0, 1);
        if (sp58->unk2D9 == 0) {
            sp2E = 1;
        }
        v = (((u32) (sp58->unk30 << 0xB) >> 0x1E) - 1) & 0xFF;
        if (v >= 3) {
            v = 2;
        }
        sp4C.w[0] = sp34.w[sp2E][v];
    }
    if (func_80011140(arg1, sp5C, sp4C, 3) != 0) {
        if ((arg0->unk36 == 0xF6) || (arg0->unk36 == 0xF4) || (arg0->unk36 == 0xF5)) {
            func_80226710(arg0, 0x230, 0x3F800000);
        }
        func_800058DC((s32) arg0, (void *) func_8036DB90);
    }
}


extern func_8036D30C_Anim D_80387B20;

void func_8036DB90(struct func_8036D9F8_Arg *arg0, s32 arg1) {
    s32 obj;
    func_8036D30C_State *state;
    func_8036D30C_Anim anim;

    obj = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        state = (func_8036D30C_State *)D_801BC03C;
    } else {
        state = (func_8036D30C_State *)D_801BC3D8;
    }
    anim = D_80387B20;
    func_802237B0(arg0, 1);
    if (func_80010550(arg1, obj)) {
        *((u8 *)state + 0x30) &= 0xFFFE;
        state->b30_7 = 0;
        state->b31_65 = 0;
        state->b38_7 = 0;
        state->b38_4 = 0;
        *((u8 *)state + 0x2FA) = 0;
        func_803602D4(arg0, arg1);
        if (state->b31_43 == 2) {
            state->b31_43 = 3;
            anim.id = 0x0190001D;
        }
        if (state->b31_43 == 3) {
            anim.id = 0x0190001D;
        } else {
            anim.id = 0x0190001B;
        }
        func_8013A28C((void *)arg1, anim);
        func_800058DC((s32)arg0, func_80366278);
    }
}



void func_8036DD08(s32 arg0, s32 arg1) {
    u8 *var_v0;

    if (arg0 == D_801BBCCC) {
        var_v0 = D_801BC3D8;
    } else {
        var_v0 = D_801BC03C;
    }
    if ((((u32) *(u32 *) (var_v0 + 0x30)) << 0xB) >> 0x1E != 0) {
        func_800058DC(arg0, func_8036DF48);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036DD64.s")

struct func_8036DF48_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 a:1, b:2, p:8, c:2, d:3, rest:16;
};

void func_8036DF48(s32 arg0, s32 arg1) {
    struct func_8036DF48_Struct *v1;
    struct func_8036DF48_Struct *a2;
    s32 sp24[3];

    if (arg0 == D_801BBCCC) {
        v1 = (void *)D_801BC03C;
    } else {
        v1 = (void *)D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        a2 = (void *)D_801BC03C;
    } else {
        a2 = (void *)D_801BC3D8;
    }
    func_8036DD64(sp24, arg0, a2);
    if (D_801BCC21 != 0xF) {
        if (v1->unk2 <= 0 || v1->b != 0) {
            func_802233B0(arg0, arg1, a2);
            return;
        }
        if ((*(u16 *)v1 ,(((u16 *)v1)[0x18]) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if (a2->c == 0 || a2->b != 0 || a2->unk2 <= 0) {
            func_800058DC(arg0, func_8021E59C);
            return;
        }
        if (func_80224F5C(arg0, arg1) == 0) {
            func_8036A5AC(arg0, arg1, sp24[0], sp24[2]);
            func_800058DC(arg0, func_8036E0A4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E0A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E204.s")


struct func_8036E39C_Bits { u8 pad[0x30]; u32 a:1; u32 b:2; u32 c:8; u32 d:2; u32 e:19; };
struct func_8036E39C_Obj { u8 pad0[0x20]; u16 unk20; u8 pad1[2]; f32 unk24; };
struct func_8036E39C_Arg { u8 pad[0x5C]; struct func_8036E39C_Obj *unk5C; };

void func_8036E39C(struct func_8036E39C_Arg *arg0, s32 arg1)
{
  struct func_8036E39C_Obj *o;
  u8 *a;
  u8 *b;
  s32 r;
  o = arg0->unk5C;
  if (((void *) arg0) == ((void *) D_801BBBF0.unkDC))
  {
    a = D_801BC03C;
  }
  else
  {
    a = D_801BC3D8;
  }
  if (((void *) arg0) != ((void *) D_801BBBF0.unkDC))
  {
    b = D_801BC03C;
  }
  else
  {
    b = D_801BC3D8;
  }
  if ((*(((u8 *) (&D_801BBBF0)) + 0x1031)) != 0xF)
  {
    if (((*((s16 *) (a + 2))) <= 0) || ((((u32) ((*((s32 *) (a + 0x30))) << 1)) >> 30) != 0))
    {
      func_802233B0(arg0, arg1);
      return;
    }
    if (((*((u16 *) (a + 0x30))) & 7) == 5)
    {
      func_8022397C(arg0);
      return;
    }
    r = func_80011590((u32) (o->unk24 * 7.0f));
    if (((r ^ 0) == o->unk20) && ((((u32) ((*((s32 *) (b + 0x30))) << 11)) >> 30) != 0))
    {
      func_8036E578(arg0);
    }
    if (func_80010550(arg1, o) != 0)
    {
      func_800058DC((s32) arg0, func_80222708);
    }
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E578.s")


typedef struct func_8036E780_State {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 a : 1;
    u32 m : 2;
    u32 p1 : 4;
    u32 b : 1;
    u32 p2 : 3;
    u32 f : 2;
    u32 g : 3;
} func_8036E780_State;
extern func_8036D30C_Anim D_80387B38;

void func_8036E780(void *arg0, struct func_80369C7C_Obj2 **arg1) {
    s32 sp34;
    func_8036E780_State *st;
    func_8036D30C_Anim sp24;

    sp34 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (arg0 == (void *)D_801BBBF0.unkDC) {
        st = (func_8036E780_State *)D_801BC03C;
    } else {
        st = (func_8036E780_State *)D_801BC3D8;
    }
    sp24 = D_80387B38;
    st->b = 1;
    st->a = 1;
    if (st->unk2 <= 0 || st->m != 0) {
        func_800058DC((s32)arg0, func_80222E84);
        return;
    }
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        if (st->g == 5) {
            func_8022397C(arg0);
            return;
        }
        func_802237B0(arg0, 1);
        if (func_80010550(arg1, sp34) != 0) {
            if (st->f == 1) {
                st->f = 2;
                *(u32 *)&sp24 = 0x0190001C;
            } else {
                st->f = 1;
                *(u32 *)&sp24 = 0x0190001B;
            }
            (*arg1)->unk2C->unk12 += 0x1000;
            (*arg1)->unk2C->unk12 &= 0x1FFF;
            func_8013A28C(arg1, sp24);
            func_80010550(arg1, sp34);
            func_802237B0(arg0, 0);
            func_80365FE0(arg0, arg1);
        }
    }
}

