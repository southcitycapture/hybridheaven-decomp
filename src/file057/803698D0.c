#include "common.h"

extern f32 D_8038B138;
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
extern void D_802233B0(s32, s32, void *, void *);
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
#define func_8036A5AC func_8036A5AC__decl
extern void func_8036A5AC(s32, s32, s32, s32);
extern void func_8036A8EC(s32 arg0, s32 arg1);
extern void func_8036AC14();
extern void func_8036B0D4(void *arg0, s32 arg1);
extern void func_8036C358(s32 *, s32, s32);
extern void func_8036C67C(s32 arg0, s32 arg1);
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

typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;
extern func_8036B7EC_Struct *func_803698D0(void *);

typedef struct func_80369CF4_Struct {
    u32 unk0;
} func_80369CF4_Struct;

s32 func_80369CF4(struct func_80369C7C_Obj1 *arg0, s16 arg1) {
    u8 *p;
    s16 v1;
    u32 t;
    s16 s;
    s32 x;
    s32 ret;

    if (arg0 == D_801BBBF0.unkDC) {
        p = D_801BC03C;
    } else {
        p = D_801BC3D8;
    }
    if (p[0x2D8] == 6 || p[0x2D8] == 8) {
        if (arg0 != D_801BBBF0.unkDC) {
            v1 = 0;
        } else {
            v1 = 0x1000;
        }
        s = v1 + D_801BBBF0.unkB98;
        s = s * 1;
        if (((s16)(s - arg1) & 0x1FFF) >= 0x1001) {
            return 1;
        }
        return 0;
    }
    t = (((func_80369CF4_Struct *)func_803698D0(p))->unk0 << 11) >> 30;
    if (t == 0) {
        return 0;
    }
    if ((t & 0xFF) == (u8)D_8038CC60) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_80369F54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036A4AC.s")

#undef func_8036A5AC
#define func_802256E4 func_802256E4__func_8036A5AC
#define func_8036D30C_Anim func_8036D30C_Anim__func_8036A5AC
typedef struct func_8036D30C_Anim {
    s32 id;
    u16 frame;
    u8 pad6[2];
    f32 speed;
} func_8036D30C_Anim;
#define func_8036A5AC func_8036A5AC_ctx_decl
#undef func_8036A5AC

struct func_8036A5AC_Vec {
    f32 x;
    f32 y;
    f32 z;
};

struct func_8036A5AC_Q {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
};

struct func_8036A5AC_P {
    u8 pad0[0x2C];
    struct func_8036A5AC_Q *unk2C;
};

union func_8036A5AC_Anim8 {
    f64 d;
    func_8036D30C_Anim a;
};

extern struct func_8036A5AC_Vec func_8036A134(s32, f32, f32);
extern f32 func_8002FC20(f32);
extern s32 func_8036A4AC(s32, void *, f32, f32, f32);
extern func_8036D30C_Anim func_802256E4(s32, s32);

void func_8036A5AC(s32 arg0, struct func_8036A5AC_P **arg1, f32 arg2, f32 arg3) {
    struct func_8036A5AC_Q *v;
    struct func_8036A5AC_Vec out;
    f32 sp3C;
    f32 sp38;
    union func_8036A5AC_Anim8 anim;

    v = (*arg1)->unk2C;
    out = func_8036A134(arg0, arg2, arg3);
    sp3C = out.x - v->unk4;
    sp38 = out.z - v->unkC;
    anim.a = func_802256E4(arg0, func_8036A4AC(arg0, arg1, sp3C, sp38, func_8002FC20(sp3C * sp3C + sp38 * sp38)) & 0xFF);
    func_8013A28C(arg1, anim.a);
}
#undef func_802256E4
#undef func_8036D30C_Anim
#define func_8036A5AC func_8036A5AC__decl

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


s32 func_8036A950(struct func_80369C7C_Obj1 *arg0) {
    u8 *p;
    u8 *q;
    struct func_80369C7C_Obj1 *o;
    s32 a;
    s16 x;
    s16 y;
    s16 d;
    s32 t;

    if (arg0 == D_801BBBF0.unkDC) {
        p = D_801BC03C;
    } else {
        p = D_801BC3D8;
    }
    if (arg0 != D_801BBBF0.unkDC) {
        q = D_801BC03C;
    } else {
        q = D_801BC3D8;
    }
    t = p[0x2D8];
    if (t == 6) {
        return 1;
    }
    if (t == 8 || t == 0xC || t == 0x13) {
        if (arg0 != D_801BBBF0.unkDC) {
            o = D_801BBBF0.unkDC;
        } else {
            o = D_801BBBF0.unkEC;
        }
        x = ((((u32)(*(s32 *)(q + 0x30) << 11) >> 30) == 1) ? 0x1000 : 0) + o->unk24->unk2C->unk12;
        x &= 0x1FFF;
        y = (a = ((arg0 != D_801BBBF0.unkDC) ? 0 : 0x1000)) + D_801BBBF0.unkB98;
        y &= 0x1FFF;
        d = y - x;
        if (((d & 0x1000) ? (d & 0x1FFF) - 0x2000 : d & 0x1FFF) < 0x800) {
            return 1;
        }
    }
    return 0;
}


extern u8 func_80369DEC(struct func_80369C7C_Obj1 *, s16, void *);

s32 func_8036AA8C(void *arg0) {
    struct func_80369C7C_Obj1 *var_a0;
    u8 *var_v1;

    if (arg0 != D_801BBBF0.unkDC) {
        var_a0 = D_801BBBF0.unkDC;
    } else {
        var_a0 = D_801BBBF0.unkEC;
    }
    if (arg0 == D_801BBBF0.unkDC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (func_8036A950(var_a0) != 0) {
        if (var_v1[0x2D9] != func_80369DEC(var_a0, ((struct func_80369C7C_Obj1 *)arg0)->unk24->unk2C->unk12, arg0)) {
            return 0;
        }
    }
    return 1;
}


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


typedef struct func_8036BF98_Entry {
    u8 pad[0x1C];
} func_8036BF98_Entry;

extern func_8036BF98_Entry D_801842A0[];

typedef struct func_8036BF98_Struct {
    u8 pad[0x2D4];
    func_8036BF98_Entry *unk2D4;
    u8 pad2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
} func_8036BF98_Struct;

s32 func_8036BF98(func_8036BF98_Struct *arg0) {
    u8 var_a0;
    s32 ret;

    var_a0 = arg0->unk2D9;
    if ((var_a0 == 0x40) && (D_8038CC61 != 0)) {
        var_a0 |= 0x80;
    }
    if ((ret = (s32)func_8035FEC8(var_a0, D_80387A40)) != 0) {
        return ret;
    }
    arg0->unk2D9 = 0x3E;
    arg0->unk2D4 = &D_801842A0[arg0->unk2D9];
    arg0->unk2DC = 0;
    return func_8036BF98(arg0);
}


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


typedef struct func_8036C110_Arg {
    u8 pad0[0x5C];
    s32 unk5C;
} func_8036C110_Arg;

extern func_8036D9F8_Struct3 func_802256E4(void *, s32);
extern func_8036D9F8_Struct3 D_80225664(s32, s32);
extern void D_8013A28C(void *, func_8036D9F8_Struct3);

void func_8036C110(func_8036C110_Arg *arg0, s32 arg1) {
    func_8036C110_Arg *sp5C;
    u8 *v;
    u8 *sp54;
    s32 sp50;
    s32 sp4C;
    func_8036D9F8_Struct3 s;
    u32 t;
    s32 sp38;

    if (arg0 != (void *)D_801BBBF0.unkDC) {
        sp5C = (void *)D_801BBBF0.unkDC;
    } else {
        sp5C = (void *)D_801BBBF0.unkEC;
    }
    if (arg0 == (void *)D_801BBBF0.unkDC) {
        v = D_801BC03C;
    } else {
        v = D_801BC3D8;
    }
    sp54 = (arg0 != (void *)D_801BBBF0.unkDC) ? D_801BC03C : D_801BC3D8;
    sp50 = arg0->unk5C;
    sp4C = sp5C->unk5C;
    D_8038CC61 = 0;
    v[0x2E8] = 0;
    v[0x2DE] = 0;
    v[0x32C] = 0;
    *(f32 *)(v + 0x2EC) = 1.0f;
    func_803602D4(arg0, arg1);
    *(f32 *)(v + 0x2F4) = 0.0f;
    func_80011198(arg1, sp50);
    func_80011140(arg1, sp50, func_802256E4(arg0, 0), 1);
    func_800058DC((s32)arg0, func_8036C67C);
    t = (*(u32 *)(sp54 + 0x30) << 11) >> 30;
    if (t == 2) {
        sp38 = 0x01900018;
    } else if (t == 3) {
        sp38 = 0x01900019;
    } else {
        sp38 = 0x01900017;
    }
    func_80006214(sp5C);
    func_80011198((s32)D_8008DA88, sp4C);
    D_8013A28C(D_8008DA88, D_80225664((s32)sp5C, sp38));
    func_80006214(arg0);
    func_800058DC((s32)sp5C, func_8036B0D4);
}


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


typedef struct func_8036C744_Rec { u8 pad0[1]; u8 unk1; u8 pad2[6]; u16 unk8; u8 padA[6]; s32 unk10; } func_8036C744_Rec;
typedef struct func_8036C744_Link { u8 pad0[8]; s32 unk8; } func_8036C744_Link;
typedef struct func_8036C744_Tgt { u8 pad0[0x7C]; func_8036C744_Link *unk7C; s16 unk80; u16 unk82; } func_8036C744_Tgt;
typedef struct func_8036C744_Sub { u8 pad0[0x12]; u16 unk12; } func_8036C744_Sub;
typedef struct func_8036C744_Struct { u8 pad0[0x5C]; func_8036C744_Tgt *unk5C; } func_8036C744_Struct;
typedef struct func_8036C744_St {
    u8 pad0[0x2D4];
    func_8036C744_Sub *unk2D4;
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[2];
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x314 - 0x2F0];
    u8 unk314[4];
} func_8036C744_St;
extern void func_8036BA40(void *, void *);
extern void func_803605E4(s32, void *, u8);
extern void func_8036CC5C();
extern void func_8036D938();
typedef struct func_8036C744_Bits {
    u8 pad0[0x31];
    u8 b7 : 1;
    u8 b65 : 2;
    u8 rest : 5;
} func_8036C744_Bits;

void func_8036C744(struct func_80369C7C_Obj1 *arg0, s32 arg1) {
    struct func_80369C7C_Obj1 *sp34;
    func_8036C744_Tgt *t0;
    func_8036C744_St *s0;
    func_8036C744_St *a3;
    struct func_80369C7C_Obj3 *sp24;
    func_8036C744_Rec *rec;
    s32 v;

    if (arg0 != D_801BBBF0.unkDC) {
        sp34 = D_801BBBF0.unkDC;
    } else {
        sp34 = D_801BBBF0.unkEC;
    }
    t0 = ((func_8036C744_Struct *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        s0 = (func_8036C744_St *)D_801BC03C;
    } else {
        s0 = (func_8036C744_St *)D_801BC3D8;
    }
    if (arg0 != D_801BBBF0.unkDC) {
        a3 = (func_8036C744_St *)D_801BC03C;
    } else {
        a3 = (func_8036C744_St *)D_801BC3D8;
    }
    sp24 = sp34->unk24->unk2C;
    if (func_80224AC4(arg0, 0) == 0) {
        if (func_80369CF4(arg0, sp24->unk12) != 0) {
            ((func_8036C744_Bits *)a3)->b65 = 3;
        } else {
            ((func_8036C744_Bits *)a3)->b65 = 2;
        }
        if (a3->unk2D8 == 0xF && a3->unk2DB != 0) {
            s0->unk2DA = 0;
            a3->unk2DB = 1;
            func_80006214(sp34);
            func_8036BA40(sp34, D_8008DA88);
            func_80006214(arg0);
            func_800058DC((s32)arg0, func_8036B14C);
            return;
        }
        rec = func_8036BF98(s0);
        func_803605E4(arg1, s0, rec->unk1);
        t0->unk7C = (func_8036C744_Link *)rec->unk10;
        t0->unk80 = rec->unk8 != 0 ? 3 : 2;
        t0->unk82 = rec->unk8;
        t0->unk7C->unk8 = (s32)t0->unk7C;
        func_8036C054((s32)s0->unk314, (s32)arg0, arg1);
        func_8013AE20((s32)arg0, arg1, 0);
        s0->unk2DE = 0;
        s0->unk2EC = (f32)(u32)s0->unk2D4->unk12 / 100.0;
        if (s0->unk2EC <= 0.0f) {
            s0->unk2EC = 1.0f;
        }
        func_800058DC((s32)arg0, func_8036CC5C);
        if ((a3->unk2D8 == 0xE || a3->unk2D8 == 0xE) && a3->unk2DB != 0) {
            if (func_8036AA8C(sp34) != 0) {
                if (func_8036AB2C(sp34) != 0) {
                    s0->unk2DA = 0;
                    a3->unk2DB = 1;
                    func_80006214(sp34);
                    func_8036D938(sp34, D_8008DA88);
                    func_80006214(arg0);
                    return;
                }
            }
        }
        s0->unk2DA = 1;
        a3->unk2DB = 0;
        func_800058DC((s32)sp34, func_8036B0D4);
    }
}

#define func_8036BF98 func_8036BF98__func_8036CA40

typedef struct func_8036CA40_StructA { u8 pad[0x2F4]; f32 unk2F4; } func_8036CA40_StructA;
typedef struct func_8036CA40_StructB { u8 pad[4]; u16 unk4; u16 unk6; } func_8036CA40_StructB;
typedef struct func_8036CA40_StructC { u8 pad[0x4]; u16 unk4; f32 unk8; } func_8036CA40_StructC;
typedef struct func_8036CA40_StructE { u8 pad[0x1C]; func_8036CA40_StructC unk1C; } func_8036CA40_StructE;
typedef struct func_8036CA40_StructD { u8 pad[0x5C]; func_8036CA40_StructE *unk5C; } func_8036CA40_StructD;
extern func_8036CA40_StructB *func_8036BF98(func_8036CA40_StructA *, func_8036CA40_StructA *, func_8036CA40_StructE *);

f32 func_8036CA40(func_8036CA40_StructD *arg0) {
    func_8036CA40_StructE *a2;
    func_8036CA40_StructC *v1;
    func_8036CA40_StructA *a1;
    func_8036CA40_StructB *v0;

    a2 = arg0->unk5C;
    v1 = &a2->unk1C;
    if ((s32)arg0 == D_801BBCCC) {
        a1 = (func_8036CA40_StructA *)D_801BC03C;
    } else {
        a1 = (func_8036CA40_StructA *)D_801BC3D8;
    }
    v0 = func_8036BF98((func_8036CA40_StructA *)((s32)a1 * 1), a1, a2);
    if (v1->unk4 >= func_80011590(v0->unk4 * v1->unk8) && func_80011590(v0->unk6 * v1->unk8) >= v1->unk4) {
        a1->unk2F4 = 1.0f;
    } else {
        a1->unk2F4 = 0.0f;
    }
    return a1->unk2F4;
}
#undef func_8036BF98

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

#define func_8013A28C func_8013A28C__decl634
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
#undef func_8013A28C

typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } AnimEarly;
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define func_8036D30C_Anim ACAT(AnimL_, __LINE__)
#define AnimL_58 AnimEarly
#define AnimL_63 AnimEarly
#define AnimL_195 AnimR
#define AnimL_200 AnimR
#define AnimL_203 AnimR
#define AnimL_226 AnimR
#define AnimL_228 AnimR
#define AnimL_259 AnimR
#define AnimL_306 AnimR
#undef func_8036D30C_Anim

extern void func_80225540(void *);

typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b80 : 1;
    u32 b60 : 2;
    u32 pad1 : 4;
    u32 b01 : 1;
    u8 pad31[0x2D8 - 0x31];
    u8 unk2D8;
} func_8036D7FC_Struct;

typedef struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8036D7FC_Obj;

void func_8036D7FC(func_8036D7FC_Obj *arg0, s32 arg1) {
    func_8036D7FC_Struct *var_v1;
    func_8036D7FC_Struct *var_a2;
    s32 temp;

    if ((s32)arg0 == D_801BBCCC) {
        var_v1 = (func_8036D7FC_Struct *)D_801BC03C;
    } else {
        var_v1 = (func_8036D7FC_Struct *)D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        var_a2 = (func_8036D7FC_Struct *)D_801BC03C;
    } else {
        var_a2 = (func_8036D7FC_Struct *)D_801BC3D8;
    }
    temp = arg0->unk5C;
    var_v1->b01 = 1;
    var_v1->b80 = 1;
    if (func_80010550(arg1, temp, var_a2, arg0) != 0) {
        if (var_a2->unk2D8 != 0xC && var_a2->unk2D8 != 0x13) {
            func_80225540(arg0);
        }
        var_v1->b01 = 0;
        if (var_v1->unk2 <= 0 || var_v1->b60 != 0) {
            if (var_v1->b60 == 0) {
                var_v1->b60 = 1;
            }
            func_800058DC((s32)arg0, func_80222E84);
            return;
        }
        var_v1->b80 = 0;
        func_80365FE0(arg0, arg1);
    }
}
#undef ACAT2
#undef ACAT
#undef AnimL_58
#undef AnimL_63
#undef AnimL_195
#undef AnimL_200
#undef AnimL_203
#undef AnimL_226
#undef AnimL_228
#undef AnimL_259
#undef AnimL_306


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


struct func_8036E39C_Arg;
void func_8036E39C(struct func_8036E39C_Arg *arg0, s32 arg1);

void func_8036E204(s32 arg0, s32 arg1) {
    s32 sp44;
    struct func_8036DF48_Struct *v0;
    struct func_8036DF48_Struct *a2;
    func_8036D9F8_Struct3 sp30;

    sp44 = ((func_8036C110_Arg *)arg0)->unk5C;
    if ((void *)arg0 == (void *)D_801BBBF0.unkDC) {
        v0 = (void *)D_801BC03C;
    } else {
        v0 = (void *)D_801BC3D8;
    }
    if ((void *)arg0 != (void *)D_801BBBF0.unkDC) {
        a2 = (void *)D_801BC03C;
    } else {
        a2 = (void *)D_801BC3D8;
    }
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        if ((v0->unk2 <= 0) || (v0->b != 0)) {
            D_802233B0(arg0, arg1, a2, &D_801BBBF0);
            return;
        }
        if ((*(u16 *)((u8 *)v0 + 0x30) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        func_80224AC4(arg0, 0, a2, &D_801BBBF0);
        if ((a2->c == 0) || (a2->b != 0) || (a2->unk2 <= 0)) {
            func_80011198(arg1, sp44);
            func_800058DC(arg0, func_8021E59C);
            return;
        }
        sp30 = func_80225664(arg0, 0x019001C0);
        *(f32 *)&sp30.w[2] = D_8038B138;
        if (func_80011140(arg1, sp44, sp30, 5) != 0) {
            func_800058DC(arg0, func_8036E39C);
        }
    }
}


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

typedef struct func_8036E578_Struct { s32 id; u16 frame; u16 flags; f32 speed; } func_8036E578_Struct;
extern func_8036E578_Struct D_80387B2C;
extern void func_80020718(s32);
extern void func_8036E780();

void func_8036E578(void *arg0) {
    struct func_80369C7C_Obj1 *sp44;
    s32 sp40;
    struct func_8036E39C_Bits *sp3C;
    s16 sp3A;
    s32 pad[2];
    func_8036E578_Struct sp24;
    s16 sp22;

    if (arg0 != D_801BBBF0.unkDC) {
        sp44 = D_801BBBF0.unkDC;
    } else {
        sp44 = D_801BBBF0.unkEC;
    }
    sp40 = ((func_8036B158_Struct *)sp44)->unk5C;
    if (arg0 != D_801BBBF0.unkDC) {
        sp3C = (struct func_8036E39C_Bits *)D_801BC03C;
    } else {
        sp3C = (struct func_8036E39C_Bits *)D_801BC3D8;
    }
    sp3A = sp44->unk24->unk2C->unk12;
    func_8001EAD0(sp3A);
    func_8001EB64(sp3A);
    sp24 = D_80387B2C;
    sp22 = (s16)(((arg0 != D_801BBBF0.unkDC) ? 0 : 0x1000) + D_801BBBF0.unkB98) & 0x1FFF;
    func_802237B0(arg0, 1);
    if (sp3C->d == 1) {
        if (((s16)(sp22 - sp3A) & 0x1FFF) < 0x1000) {
            sp24.flags |= 0x10;
        }
        sp24.id = 0x019001C1;
    } else {
        if (((s16)(sp22 - sp3A) & 0x1FFF) < 0x1000) {
            sp24.flags |= 0x10;
        }
        if (sp3C->d == 2) {
            sp24.id = 0x019001C2;
        } else if (sp3C->d == 3) {
            sp24.id = 0x019001C3;
        }
    }
    func_80006214(sp44);
    func_80011198((s32)D_8008DA88, sp40);
    func_8013A28C(D_8008DA88, *(func_8036D30C_Anim *)&sp24);
    func_80006214(arg0);
    func_80020718(0x3BD);
    func_800058DC((s32)sp44, func_8036E780);
}


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

