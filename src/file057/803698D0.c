#include "common.h"

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

extern void func_800058DC(s32, void *);                    /* extern */
extern s32 func_80224F5C(s32, s32);
void func_80369F54(s32 *, s32, s32);                /* extern */
extern void func_8036A5AC(s32, s32, s32, s32);
void func_8036A8EC(s32 arg0, s32 arg1);

extern s8 D_8038CC60;

void func_8036A874(s32 arg0, s32 arg1) {
    s32 sp24[3];

    if (func_80224F5C(arg0, arg1) == 0) {
        D_8038CC60 = func_80369C7C(arg0);
        func_80369F54(sp24, arg0, arg1);
        func_8036A5AC(arg0, arg1, sp24[0], sp24[2]);
        func_800058DC(arg0, func_8036A8EC);
    }
}


extern s32 func_80224AC4();
s32 func_8036A680(s32, s32, s32, s32);              /* extern */
extern void func_8036AC14();

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AC14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036AFBC.s")


extern s32 func_80010550();
extern void func_800111E0(s32, s32);
extern void func_8013AE20(s32, s32, s32);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036B6D4.s")


typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;

extern s32 func_80368E58(s32, s32, s16, u8);
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


extern u8 D_80387AE0;

void func_8036445C(s32, s32, u8, u8);

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

void *func_8035FEC8(u8, void *);
void func_80360394(s32, s32, s32, u8);
extern u8 D_80387A40[];
extern u8 D_8038CC61;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C2F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036C358.s")


extern void func_8036C358(s32 *, s32, s32);
extern void func_8036C6E0(s32 arg0, s32 arg1);

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


extern void func_8036C744();

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

extern s32 func_80011590(u16);
extern void func_8013A28C(void *, func_8036D30C_Anim);
extern void func_8036D7FC();
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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036D938.s")


typedef struct func_8036D9F8_Struct3 { s32 w[3]; } func_8036D9F8_Struct3;
typedef struct func_8036D9F8_Struct6 { s32 w[2][3]; } func_8036D9F8_Struct6;

struct func_8036D9F8_Arg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    s32 unk5C;
};

struct func_8036D9F8_Obj {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x2D9 - 0x34];
    u8 unk2D9;
};

extern func_8036D9F8_Struct3 D_80387AFC;
extern func_8036D9F8_Struct6 D_80387B08;
extern void func_8036DB90();
extern void func_802237B0(void *, s32);
extern void func_80226710(void *, s32, s32);
extern s32 func_80011140(s32, s32, func_8036D9F8_Struct3, s32);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036DB90.s")


extern void func_8036DF48();

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036DF48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E0A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803698D0/func_8036E780.s")

