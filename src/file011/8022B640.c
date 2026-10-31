#include "common.h"


s32 func_8012C6B4(s32, s32);                        /* extern */

s32 func_8022B640(u16 arg0) {
    s32 temp_a1;

    temp_a1 = arg0;
    return func_8012C6B4(temp_a1, temp_a1) & 0xFFFF;
}


typedef struct func_8022B66C_Struct {
    u8 pad0[0x42];
    s16 unk42;
    u8 pad44[0x2D8 - 0x44];
    u8 unk2D8;
    u8 pad2D9[0x2DB - 0x2D9];
    u8 unk2DB;
    u8 pad2DC[0x2DF - 0x2DC];
    u8 unk2DF;
    u8 unk2E0[8];
    u8 unk2E8;
    u8 pad2E9[0x2F0 - 0x2E9];
    u8 unk2F0;
    u8 unk2F1;
    u8 pad2F2[0x2F4 - 0x2F2];
    f32 unk2F4;
} func_8022B66C_Struct;

typedef struct func_8022B66C_Obj2 {
    u8 pad0[0x9C];
    u8 unk9C;
} func_8022B66C_Obj2;

typedef struct func_8022B66C_Obj {
    u8 pad0[0x5C];
    func_8022B66C_Obj2 *unk5C;
} func_8022B66C_Obj;

typedef struct func_8022B66C_G {
    u8 pad0[0xDC];
    func_8022B66C_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8022B66C_Obj *unkEC;
    u8 padF0[0x1030 - 0xF0];
    u8 unk1030;
} func_8022B66C_G;

#define G8022B66C ((func_8022B66C_G *)D_801BBBF0)

extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern f32 func_803618B0(void *);

s32 func_8022B66C(s32 arg0) {
    u8 *base;
    func_8022B66C_Struct *a3;
    func_8022B66C_Struct *a1;
    func_8022B66C_Obj2 *v1;
    u8 i;
    u8 flag;
    extern void func_80232E94();

    if (G8022B66C->unk1030 == 0) {
        a3 = (func_8022B66C_Struct *)D_801BC03C;
    } else {
        a3 = (func_8022B66C_Struct *)D_801BC3D8;
    }
    base = (u8 *)a3 - 0x44C;
    if (base == D_801BBBF0) {
        a1 = (func_8022B66C_Struct *)D_801BC3D8;
    } else {
        a1 = (func_8022B66C_Struct *)D_801BC03C;
    }
    if (arg0 == (s32)G8022B66C->unkDC) {
        v1 = G8022B66C->unkEC->unk5C;
    } else {
        v1 = G8022B66C->unkDC->unk5C;
    }
    flag = 0;
    if (a3->unk2E8 == 2) {
        if (base == D_801BBBF0) {
            base = (u8 *)G8022B66C->unkDC;
        } else {
            base = (u8 *)G8022B66C->unkEC;
        }
        a3->unk2F4 = func_803618B0(base);
        a1->unk2F0 = 0;
        a1->unk2DB = a1->unk2F1;
        if (v1->unk9C == 2) {
            v1->unk9C = 3;
        }
        for (i = 0; i < a3->unk2DF; i++) {
            if (a3->unk2E0[i] < 6 && flag == 0) {
                a1->unk42 = 10;
                flag++;
            }
            if (a3->unk2E0[i] < 6) {
                a1->unk2F0 |= 2;
            } else if (a3->unk2E0[i] == 6) {
                a1->unk2F0 |= 1;
            } else if (a3->unk2E0[i] < 10) {
                a1->unk2F0 |= 8;
            } else if (a3->unk2E0[i] < 13) {
                a1->unk2F0 |= 4;
            } else if (a3->unk2E0[i] < 16) {
                a1->unk2F0 |= 0x20;
            } else {
                a1->unk2F0 |= 0x10;
            }
        }
        a3->unk2DF = 0;
        for (i = 0; i < 6; i++) {
            if (a1->unk2F0 & (1 << i)) {
                a3->unk2DF++;
            }
        }
        a1->unk2DF = a3->unk2DF;
        if (a1->unk2D8 == 13 && a1->unk2DB != 0) {
            a3->unk42 = 10;
        }
        a3->unk2E8 = 3;
        func_80232E94(arg0, a1);
        return 1;
    }
    return 0;
}


struct func_8022B8C4_Inner {
    u8 pad0[0xC];
    u8 unkC;
};

struct func_8022B8C4_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad00[0x2D4 - 0x34];
    struct func_8022B8C4_Inner *unk2D4;
    u8 pad1[0x2DF - 0x2D8];
    u8 unk2DF;
    u8 pad2[0x2F0 - 0x2E0];
    u8 unk2F0;
};

void func_8022B8C4(struct func_8022B8C4_Struct *arg0, struct func_8022B8C4_Struct *arg1) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    var_v0 = arg0->unk2D4->unkC;
    if (var_v0 == 0) {
        arg0->unk2DF = 1;
        arg1->unk2F0 = 2;
    } else {
        var_v1 = var_v0;
        if (var_v0 & 1) {
            arg1->unk2F0 |= 1;
            var_v1 = arg0->unk2D4->unkC;
        }
        if (var_v1 & 2) {
            arg1->unk2F0 |= 2;
            var_v1 = arg0->unk2D4->unkC;
        }
        if ((var_v1 & 0xC) == 0xC) {
            arg1->unk2F0 |= 0xC;
            var_v1 = arg0->unk2D4->unkC;
        } else if ((var_v1 & 0xC) != 0) {
            if (((u32) (arg0->unk30 << 9) >> 0x1E) == 3) {
                arg1->unk2F0 |= ((var_v1 & 0xC) ^ 0xC);
                var_v1 = arg0->unk2D4->unkC;
            } else {
                arg1->unk2F0 |= (var_v1 & 0xC);
                var_v1 = arg0->unk2D4->unkC;
            }
        }
        var_v0 = var_v1 & 0x30;
        if (var_v0 == 0x30) {
            arg1->unk2F0 |= 0x30;
        } else if (var_v0 != 0) {
            if (((u32) (arg0->unk30 << 9) >> 0x1E) == 3) {
                arg1->unk2F0 |= (var_v0 ^ 0x30);
            } else {
                arg1->unk2F0 |= var_v0;
            }
        }
    }
    var_v0 = 0;
    var_v1_2 = 0;
    do {
        if (arg1->unk2F0 & (1 << var_v1_2)) {
            arg0->unk2DF++;
        }
        var_v0 = (var_v0 + 1) & 0xFF;
        var_v1_2 = var_v0;
    } while (var_v0 < 6);
    arg1->unk2DF = arg0->unk2DF;
}

#define func_8022B8C4 func_8022B8C4__func_8022BA44

struct func_8022BA44_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2DA - 0x2D9];
    u8 unk2DA;
    u8 pad3[0x2DF - 0x2DB];
    u8 unk2DF;
    u8 pad4[0x2FA - 0x2E0];
    u8 unk2FA;
};

extern u8 D_801BCC20;
extern void func_8022B8C4(struct func_8022BA44_Struct *arg0, struct func_8022BA44_Struct *arg1);

s32 func_8022BA44(s32 arg0) {
    struct func_8022BA44_Struct *sp1C;
    struct func_8022BA44_Struct *var_a0;
    struct func_8022BA44_Struct *var_a1;
    s32 temp_v0;
    s32 unused;
    extern void func_80232E94();

    if (D_801BCC20 == 0) {
        var_a0 = (struct func_8022BA44_Struct *) D_801BC03C;
    } else {
        var_a0 = (struct func_8022BA44_Struct *) D_801BC3D8;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_8022BA44_Struct *) D_801BC3D8;
    } else {
        var_a1 = (struct func_8022BA44_Struct *) D_801BC03C;
    }
    temp_v0 = var_a0->unk2D8;
    if (((temp_v0 == 2) || (temp_v0 == 4) || (temp_v0 == 5) || (temp_v0 == 6) || (temp_v0 == 7)) && (var_a1->unk2FA == 1)) {
        var_a1->unk2FA = 0;
        var_a0->unk2DF = 0;
        sp1C = var_a1;
        func_8022B8C4(var_a0, var_a1);
        if ((var_a0->unk2DA != 0) && (((u32) (sp1C->unk30 * 2) >> 0x1E) == 0)) {
            func_80232E94(arg0);
            return 1;
        }
    }
    return 0;
}
#undef func_8022B8C4

#define func_80232E94 func_80232E94__func_8022BB28

extern void func_80232E94();

s32 func_8022BB28(void) {
    u8 *var_v0;
    u8 temp_v1;

    temp_v1 = D_801BCC20;
    if (temp_v1 == 0) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    temp_v1 = var_v0[0x2D8];
    if (((temp_v1 == 0xC) || (temp_v1 == 0x13)) && (var_v0[0x2FA] != 0)) {
        var_v0[0x2FA] = 0;
        if (var_v0[0x2DA] != 0) {
            var_v0[0x304] = var_v0[0x304] + 1;
            func_80232E94();
        }
        return 1;
    }
    return 0;
}
#undef func_80232E94

extern u8 D_802176F0[];
extern struct func_8022F680_Ret *func_80005670();
struct func_8022BBB0_S {
    u8 pad0[0x40];
    s16 unk40;
    u8 pad42[0x9A - 0x42];
    u16 unk9A;
    u8 pad9C[0x2FA - 0x9C];
    u8 unk2FA;
};
struct func_8022BBB0_R {
    u8 pad0[0x94];
    s16 unk94;
    u8 unk96;
    u8 unk97;
};
s32 func_8022BBB0(void *arg0) {
    struct func_8022BBB0_R *r;
    struct func_8022BBB0_S *s;
    volatile u16 v;
    u32 t;
    if (D_801BCC20 == 0) {
        s = (struct func_8022BBB0_S *)D_801BC3D8;
    } else {
        s = (struct func_8022BBB0_S *)D_801BC03C;
    }
    if (s->unk2FA == 2) {
        s->unk2FA = 0;
        t = (u32)((f64)(((f32)s->unk9A * 3.0f) / 10.0f) + 0.5);
        s->unk40 = t;
        v = t;
        r = (struct func_8022BBB0_R *)func_80005670(arg0, D_802176F0, t);
        t = v;
        r->unk94 = t;
        if ((u32)s == (u32)D_801BBBF0 + 0x44C) {
            r->unk96 = 0;
        } else {
            r->unk96 = 1;
        }
        r->unk97 = 3;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/D_8023F390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/D_8023F3CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/D_8023F3D4.s")


struct func_8022BD28_Struct {
    u8 pad0[0x4E];
    s16 unk4E;
    u8 pad50[0x58 - 0x50];
    u16 unk58;
    u8 pad5A[0x9E - 0x5A];
    u16 unk9E;
    u8 padA0[0xA6 - 0xA0];
    u8 unkA6;
};

struct func_8022BD28_StructG {
    u8 pad0[0x1D];
    u8 unk1D;
    u8 pad1E[0x2C - 0x1E];
    u16 unk2C;
    u8 pad2E[0x7E8 - 0x2E];
    u8 unk7E8;
};

void func_8022BD28(struct func_8022BD28_Struct *arg0)
{
  u8 *new_var;
  f32 k;
  f64 a;
  f64 b;
  f64 c;
  u8 f;
  s32 t;
  u16 new_var2;
  struct func_8022BD28_StructG *g;
  ;
  k = 1.0f;
  new_var = (u8 *) arg0;
  new_var2 = ((struct func_8022BD28_StructG *) ((u32) D_801BBBF0))->unk2C;
  if (((new_var2 != 0xA) && (new_var2 != 0xB)) && (new_var == (&((struct func_8022BD28_StructG *) ((u32) D_801BBBF0))->unk7E8)))
  {
    if (((struct func_8022BD28_StructG *) ((u32) D_801BBBF0))->unk1D == 1)
    {
      k = 1.20000005f;
    }
    else
      if (((struct func_8022BD28_StructG *) ((u32) D_801BBBF0))->unk1D == 2)
    {
      k = 1.5f;
    }
  }
  if (arg0->unkA6 & 2)
  {
    a = 0.2;
  }
  else
  {
    a = 0.0;
  }
  if (arg0->unkA6 & 1)
  {
    b = 0.2;
  }
  else
  {
    b = 0.0;
  }
  if (arg0->unk9E != 0)
  {
    c = 0.1;
  }
  else
  {
    c = 0.0;
  }
  arg0->unk4E = (s16) ((u32) (((((1.0 + b) - a) - c) * ((f64) (((f32) arg0->unk58) * k))) + 0.5));
}


struct func_8022BECC_Struct {
    u8 pad0[0x50];
    s16 unk50;
    u8 pad52[0x5A - 0x52];
    u16 unk5A;
    u8 pad5C[0x9E - 0x5C];
    u16 unk9E;
    u8 padA0[0xA6 - 0xA0];
    u8 unkA6;
};

void func_8022BECC(struct func_8022BECC_Struct *arg0) {
    f64 a;
    f64 b;
    f64 c;
    if (arg0->unkA6 & 8) {
        a = 0.1;
    } else {
        a = 0.0;
    }
    if (arg0->unkA6 & 4) {
        b = 0.1;
    } else {
        b = 0.0;
    }
    if (arg0->unk9E != 0) {
        c = 0.05;
    } else {
        c = 0.0;
    }
    arg0->unk50 = (u32)(((((1.0 + b) - a) - c) * (f64)(f32)(u32)arg0->unk5A) + 0.5);
}


struct func_8022C010_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x20 - 0x14];
    f32 unk20;
    u8 pad24[0xA0 - 0x24];
    u16 unkA0;
    u8 padA2[4];
    u8 unkA6;
};

void func_8022C010(struct func_8022C010_Struct *arg0) {
    f64 var_fv0;
    f64 var_fv1;
    f64 var_fa0;
    f64 var_fa1;
    f64 sum;
    s32 temp_v0;

    var_fv0 = 0.0;
    var_fv1 = 0.0;
    var_fa0 = 0.0;
    temp_v0 = arg0->unkA6;
    if (temp_v0 & 0x20) {
        var_fa1 = 0.2;
        var_fv0 = var_fa1;
    } else {
        var_fa1 = 0.2;
        var_fv0 = 0.0;
    }
    if (temp_v0 & 0x10) {
        var_fv1 = var_fa1;
    } else {
        var_fv1 = 0.0;
    }
    sum = (1.0 - var_fv1) + var_fv0;
    if ((s32) arg0->unkA0 > 0) {
        var_fa0 = var_fa1;
    } else {
        var_fa0 = 0.0;
    }
    arg0->unk10 = (f32) ((var_fa0 + sum) * (f64) arg0->unk20);
}



typedef struct func_8022C0A0_StructB { u8 pad0[6]; u8 unk6; } func_8022C0A0_StructB;
typedef struct func_8022C0A0_Struct {
    u8 pad0[6]; s16 unk6; u8 pad8[2]; s16 unkA;
    u8 pad0C[0x42-0xC]; s16 unk42; s16 unk44;
    u8 pad46[0x2D4-0x46]; func_8022C0A0_StructB *unk2D4; u8 unk2D8; u8 pad2D9; u8 unk2DA;
    u8 pad2DB[0x300-0x2DB]; s16 unk300; s16 unk302;
} func_8022C0A0_Struct;

void func_8022C0A0(void) {
    func_8022C0A0_Struct *p;
    s32 a0;
    register s32 a1;
    s32 t;

    t = D_801BBBF0[0x1030];
    if (t == 0) {
        p = (func_8022C0A0_Struct *)D_801BC03C;
    } else {
        p = (func_8022C0A0_Struct *)D_801BC3D8;
    }
    if (p->unk2D8 != 0xB && p->unk2D8 != 0xC && p->unk2D8 != 0xA) {
        a0 = 0x64;
        if ((p->unk2D8 == 2 || (p->unk2D8 >= 4 && p->unk2D8 < 8)) && p->unk2DA == 0) {
            a0 = 0x46;
        }
        a1 = p->unk6;
        p->unk302 = p->unkA;
        p->unk300 = a1;
        if (a1 >= a0) {
            p->unk44 = a0;
        } else {
            p->unk44 = a1;
        }
        if ((p->unk2D8 == 2 || (p->unk2D8 >= 4 && p->unk2D8 < 9)) &&
            ((s32)p == (s32)D_801BBBF0 + 0x44C || *(u16 *)(D_801BBBF0 + 0x2C) == 0xA || *(u16 *)(D_801BBBF0 + 0x2C) == 0xB)) {
            a0 = (u8)(a1 = p->unk2D4->unk6);
            t = p->unkA;
            if (t >= a0) {
                p->unk42 = a0;
                return;
            }
            p->unk42 = t;
        }
    } else {
        p->unk300 = p->unk6;
        p->unk44 = 0x64;
    }
}

#define func_8022C0A0 func_8022C0A0__func_8022C1B4

struct func_8022C1B4_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x2D4 - 0x34];
    u8 *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
    u8 pad2[0x2DF - 0x2DB];
    u8 unk2DF;
    u8 pad3[0x2F0 - 0x2E0];
    u8 unk2F0;
    u8 pad4[0x2FA - 0x2F1];
    u8 unk2FA;
};

s32 func_80376300(void *arg0);
void func_8022C0A0(void);

s32 func_8022C1B4(s32 arg0) {
    struct func_8022C1B4_Struct *var_v1;
    struct func_8022C1B4_Struct *var_a1;
    s32 var_v0;
    extern void func_80232E94();
    extern u8 D_801842A0[];

    if (D_801BCC20 == 0) {
        var_v1 = (struct func_8022C1B4_Struct *) D_801BC03C;
    } else {
        var_v1 = (struct func_8022C1B4_Struct *) D_801BC3D8;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_8022C1B4_Struct *) D_801BC3D8;
    } else {
        var_a1 = (struct func_8022C1B4_Struct *) D_801BC03C;
    }
    var_v0 = 0;
    if ((var_v1->unk2D8 == 0xF) && (var_v1->unk2DA != 0) && (var_a1->unk2FA != 0)) {
        if (((u32) (var_v1->unk30 << 0xB) >> 0x1E) == 1) {
            if (func_80376300(var_a1) != 0) {
                var_v1->unk2D9 = 0x51;
            } else {
                var_v1->unk2D9 = 0x50;
            }
        } else {
            if (func_80376300(var_a1) != 0) {
                var_v1->unk2D9 = 0x50;
            } else {
                var_v1->unk2D9 = 0x51;
            }
        }
        var_v1->unk2D4 = D_801842A0 + var_v1->unk2D9 * 0x1C;
        func_8022C0A0();
        var_a1->unk2F0 = var_v1->unk2D4[0xC];
        var_a1->unk2DF = var_v1->unk2DF = 1;
        var_a1->unk2FA = var_v1->unk2DA = 0;
        func_80232E94(arg0);
        return 1;
    }
    return var_v0;
}
#undef func_8022C0A0


struct func_8022C314_Struct {
    u8 pad0[0x30];
    u32 pad30 : 9;
    u32 unk30 : 2;
    u32 pad30b : 21;
    u8 pad1[0x75 - 0x34];
    u8 unk75;
    u8 pad2[0x8A - 0x76];
    u16 unk8A;
    s16 unk8C;
    u8 pad3[2];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u8 pad4[0x308 - 0x96];
    f32 unk308;
};
void func_8022C314(struct func_8022C314_Struct *arg0) {
    struct func_8022C314_Struct *a;
    struct func_8022C314_Struct *b;
    struct func_8022C314_Struct *o;
    s16 n;
    u8 *p = (u8 *)arg0 - 0x44C;

    if (p == D_801BBBF0) {
        a = (void *)D_801BC3D8;
    } else {
        a = (void *)D_801BC03C;
    }
    if (p == D_801BBBF0) {
        o = *(void **)(D_801BBBF0 + 0x444);
    } else {
        o = *(void **)(D_801BBBF0 + 0x448);
    }
    n = ((arg0->unk92 + arg0->unk94 + arg0->unk90 + (arg0->unk30 == 2)) != 0) ? arg0->unk8C
        : (s16)(((arg0->unk8A - a->unk92 - a->unk94 - a->unk90 - (a->unk30 == 2)) != 0) ? (u16)a->unk8C : a->unk8A);
    if (n > 0) {
        arg0->unk308 = n / 10 + 1;
    } else {
        arg0->unk308 = 1.0f;
    }
    if (o->unk75 == 2) {
        arg0->unk308 = (f32)((f64)arg0->unk308 * 1.1);
    }
    if ((f64)arg0->unk308 > 2.0) {
        arg0->unk308 = 2.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C478.s")


struct func_8022C5AC_Struct {
    u8 b[12];
};
struct func_8022C5AC_Obj {
    s16 unk0;
    u8 pad2[0x2AC - 2];
    struct func_8022C5AC_Struct unk2AC;
    s16 unk2B8[6];
    s16 unk2C4[6];
    u8 unk2D0;
};
extern struct func_8022C5AC_Struct D_8023E300;

void func_8022C5AC(struct func_8022C5AC_Obj *arg0) {
    struct func_8022C5AC_Struct sp;
    s32 k = 100;

    sp = D_8023E300;
    arg0->unk2B8[0] = (arg0->unk2C4[0] * arg0->unk0) / k;
    arg0->unk2B8[1] = (arg0->unk2C4[1] * arg0->unk0) / k;
    arg0->unk2B8[2] = (arg0->unk2C4[2] * arg0->unk0) / k;
    arg0->unk2B8[3] = (arg0->unk2C4[3] * arg0->unk0) / k;
    arg0->unk2B8[4] = (arg0->unk2C4[4] * arg0->unk0) / k;
    arg0->unk2B8[5] = (arg0->unk2C4[5] * arg0->unk0) / k;
    arg0->unk2AC = sp;
    arg0->unk2D0 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022C7A4.s")


struct func_8022CABC_Struct {
    u32 words[0x39C / 4];
};

void func_8022CABC(void) {
    *(struct func_8022CABC_Struct *)D_801BC3D8 =
        *(struct func_8022CABC_Struct *)D_801BC03C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022CAFC.s")


f32 func_8001EAD0(s16);

s32 func_8022D954(s32 arg0) {
    s32 var_v0;
    s16 var_a0;

    var_v0 = (s32) D_801BBBF0;
    if (arg0 == var_v0 + 0x44C) {
        var_a0 = *(u16 *) (var_v0 + 0x30) << 7;
        return (s16) (s32) (func_8001EAD0(var_a0) * 32767.0f);
    } else {
        var_a0 = (*(u16 *) (var_v0 + 0x30) << 7) + 0x1000;
        return (s16) (s32) (func_8001EAD0(var_a0) * 32767.0f);
    }
}


void func_8022D9EC(u8 *arg0) {
    if (arg0 == D_801BBBF0 + 0x44C) {
        arg0[0x2D] = (s32) (func_8001EAD0(*(s16 *) (D_801BBBF0 + 0x30)) * 295.0f);
        return;
    }
    arg0[0x2D] = (s32) (func_8001EAD0((s16) (*(u16 *) (D_801BBBF0 + 0x30) + 0x1000)) * 295.0f);
}


struct func_8022DA7C_B { u8 pad[0x2C]; struct func_8022DA7C_C *u2C; };
struct func_8022DA7C_C { u8 pad[0x12]; s16 u12; };
struct func_8022DA7C_A { u8 pad[0x24]; struct func_8022DA7C_B *u24; };

#define S13(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

s32 func_8022DA7C(struct func_8022DA7C_A *arg0) {
    s16 a1, v1, d, e;
    void *p;
    s32 r;

    e = arg0->u24->u2C->u12;
    p = *(void **)(D_801BBBF0 + 0xDC);

    if ((void *)arg0 == p) a1 = *(s16 *)(D_801BBBF0 + 0x75C);
    else a1 = *(s16 *)(D_801BBBF0 + 0xAF8);
    if ((void *)arg0 == p) v1 = *(s16 *)(D_801BBBF0 + 0xB98);
    else v1 = *(s16 *)(D_801BBBF0 + 0xB98) + 0x1000;
    d = v1 - e;
    r = (S13(d) < 0) ? -S13(d) : S13(d);
    if (r < a1) return 1;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022DB40.s")


struct func_8022EE7C_Inner {
    u8 pad0[8];
    u8 unk8;
    u8 pad9;
    u8 unkA;
};
struct func_8022EE7C_Struct {
    u8 pad0[0xAA];
    s16 unkAA[1];
    u8 pad1[0x2D4 - 0xAC];
    struct func_8022EE7C_Inner *unk2D4;
    u8 pad2[0x300 - 0x2D8];
    u16 unk300;
};
struct func_8022EE7C_Dst {
    u8 pad0[0xA];
    s16 unkA;
    u8 pad1[0x42 - 0xC];
    s16 unk42;
    u8 pad2[0x2DB - 0x44];
    u8 unk2DB;
};

void func_8022EE7C(s32 arg0, struct func_8022EE7C_Struct *arg1) {
    struct func_8022EE7C_Dst *dst;
    struct func_8022EE7C_Inner *in;
    u16 v;
    s32 a;
    s16 m;
    s16 t;
    u32 b = (u32)D_801BBBF0;

    if ((u32)arg1 == b + 0x44C) {
        dst = (struct func_8022EE7C_Dst *)D_801BC3D8;
    } else {
        dst = (struct func_8022EE7C_Dst *)D_801BC03C;
    }
    in = arg1->unk2D4;
    if (in->unk8 != 0) {
        v = in->unk8;
        t = *(s16 *)((u8 *)arg1 + 0xAA + in->unkA * 6);
        if (t < 0) {
            a = -t;
        } else {
            a = t;
        }
        v = (u32)((((f64)a * 1.5) + 1.0) * (f64)v / 255.0);
        if (dst->unk2DB != 0) {
            v = (u32)((f64)(v / 2) + 0.5);
        }
        if (arg1->unk300 < 0x64) {
            v = (v * arg1->unk300) / 100;
        }
        m = dst->unkA;
        if ((s32)v < m) {
            dst->unk42 = v;
            return;
        }
        dst->unk42 = m;
    }
}


struct func_8022F0E0_Struct {
    u8 pad0[0x50];
    u16 unk50;
    u8 pad52[0x8E - 0x52];
    u16 unk8E[6];
    u8 pad9A[2];
    u16 unk9C;
    u8 pad9E[0x2DF - 0x9E];
    u8 unk2DF;
    u8 pad2E0[0x2F0 - 0x2E0];
    u8 unk2F0;
};

s32 func_8022F0E0(void *arg) {
    struct func_8022F0E0_Struct *arg0 = arg;
    s16 sum;
    u8 i;
    u16 *p;
    s32 mask;
    s32 j;
    f32 f;

    sum = 0;
    for (i = 0, p = arg0->unk8E, mask = arg0->unk2F0; i < 6; i++, p++) {
        j = i;
        if ((u32)mask & (1 << j)) {
            sum += *p;
        }
    }
    f = ((f64)sum * 0.01) / (f64)arg0->unk2DF + 0.99;
    arg0->unk9C = (u32)((f32)arg0->unk50 * f + 0.5);
    return arg0->unk9C;
}


struct func_8022F248_StructA {
    u16 a[3];
};
struct func_8022F248_Struct {
    u8 pad0[0x8E];
    u16 unk8E[6];
    u8 pad1[0x2B8 - 0x9A];
    s16 unk2B8[6];
    u8 pad2[0x2F0 - 0x2C4];
    u8 unk2F0;
};
extern struct func_8022F248_StructA D_8023E31C;

void func_8022F248(struct func_8022F248_Struct *arg0, u16 arg1) {
    struct func_8022F248_StructA sp38;
    f32 sum;
    f32 max;
    u16 *p;
    f32 sp14[6];
    u8 i;
    s16 k;
    s16 *r;

    sp38 = D_8023E31C;
    sum = 0.0f;
    max = 0.0f;
    if (arg0->unk2F0 != 0) {
        for (i = 0, p = arg0->unk8E; i < 6; i++, p++) {
            sp14[i] = *p;
            if (sp14[i] < 1.0) {
                sp14[i] = 1.0f;
            }
            if (arg0->unk2F0 & (1 << i)) {
                if (max < sp14[i]) {
                    max = sp14[i];
                }
            }
        }
        for (k = 0; k < 6; k++) {
            sp14[k] = max / sp14[k];
            if (arg0->unk2F0 & (1 << k)) {
                sum += sp14[k];
            }
        }
        if (sum == 0.0f) {
            sum = 1.0f;
        }
        max = (f32)arg1 / sum;
        for (i = 0, r = arg0->unk2B8; i < 6; i++, r++) {
            if (arg0->unk2F0 & (1 << i)) {
                k = sp14[i] * max;
                *r -= k;
            }
        }
    }
}


extern u16 D_8017DCA8[];
extern u16 D_8017DCB6[];

void func_8022F424(void) {
    s32 i;
    s32 j;
    u16 *p;
    u32 v;
    s32 f;

    f = D_801BBBF0[0x1030];
    p = (f == 0) ? D_8017DCA8 : D_8017DCB6;
    if (f == 0) {
        v = (*(u8 **)(D_801BBBF0 + 0x720))[0xB];
    } else {
        v = D_801BBBF0[0x73C];
    }
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA && *(u16 *)(D_801BBBF0 + 0x2C) != 0xB) {
        if (f == 0 && (D_801BBBF0[0x725] == 0x3E || D_801BBBF0[0x725] == 0x3F || D_801BBBF0[0x725] == 0x52 || D_801BBBF0[0x725] == 0x54 || D_801BBBF0[0x725] == 0x55) && ((*(u32 *)(D_801BBBF0 + 0x47C) << 9) >> 30) == 3) {
            v = (v * 2) & 0xFF;
        }
        i = 0;
        if (f == 0 && D_801BBBF0[0x725] == 0x53 && ((*(u32 *)(D_801BBBF0 + 0x47C) << 9) >> 30) == 3) {
            v = (v >> 1) & 0xFF;
        }
        f = v;
        j = 0;
        do {
            if (f & (1U << j)) {
                v = *p;
                if ((s32)v < 0x270F) {
                    *p = v + 1;
                }
            }
            i = (i + 1) & 0xFF;
            j = i;
            p += 1;
        } while (i < 6);
    }
}


struct func_8022F558_Struct {
    u8 pad0[0x8];
    s16 unk8;
    s16 unkA;
    u8 pad1[0x2D8 - 0xC];
    u8 unk2D8;
    u8 pad2[0x2DB - 0x2D9];
    u8 unk2DB;
    u8 pad3[0x2F8 - 0x2DC];
    u8 unk2F8;
    u8 pad4[0x312 - 0x2F9];
    s16 unk312;
};

void func_8022F558(struct func_8022F558_Struct *arg0) {
    u8 *var_v0;
    s32 temp_v1;

    if (arg0 == (struct func_8022F558_Struct *) (D_801BBBF0 + 0x44C)) {
        var_v0 = D_801BC3D8;
    } else {
        var_v0 = D_801BC03C;
    }
    temp_v1 = var_v0[0x2D8];
    if ((temp_v1 >= 4 && temp_v1 < 8) || temp_v1 == 8 || arg0->unk2DB != 0) {
        arg0->unk312 = 0;
        return;
    }
    if (temp_v1 == 2 || arg0->unk2F8 == 3 || arg0->unk2F8 == 4) {
        arg0->unk312 = (s16) ((s32) ((arg0->unk8 - arg0->unkA) * 0x64) / arg0->unk8);
    }
}


struct func_8022F630_Struct {
    u8 pad[0x2C4];
    s16 values[1];
};

s32 func_8022F630(struct func_8022F630_Struct *arg0, u8 arg1) {
    if (arg1 == 0) {
        return (arg0->values[0] * 6) & 0xFFFF;
    }
    return (arg0->values[arg1] * 10) & 0xFFFF;
}

#define func_8022F630 func_8022F630__func_8022F680

struct func_8022F680_Struct {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[0x24 - 0x1C];
    f32 unk24;
    u8 pad2[0x30 - 0x28];
    u8 unk30;
    u8 pad3[0xA0 - 0x31];
    s16 unkA0;
    u8 pad4[0x2AC - 0xA2];
    s16 unk2AC[6];
    s16 unk2B8[6];
};
struct func_8022F680_Ret {
    u8 pad0[0x90];
    u8 unk90;
};
extern s16 func_8022F630();

extern u8 D_803896DC[];

void func_8022F680(s32 arg0, struct func_8022F680_Struct *arg1) {
    if ((arg1->unk2B8[0] < 0) && (arg1->unk2AC[0] == 0)) {
        arg1->unk2AC[0] = func_8022F630(arg1, 0);
        arg1->unk30 = (u8) ((arg1->unk30 & 0xFFE1) | 2);
    }
    if ((arg1->unk2B8[1] < 0) && (arg1->unk2AC[1] == 0)) {
        arg1->unk2AC[1] = func_8022F630(arg1, 1);
    }
    if ((arg1->unk2B8[2] < 0) && (arg1->unk2AC[2] == 0)) {
        arg1->unk2AC[2] = func_8022F630(arg1, 2);
        if (arg1->unk24 == 0.0f) {
            arg1->unk24 = arg1->unk18;
            arg1->unk18 = (f32) ((f64) arg1->unk18 * 1.2);
        }
    }
    if ((arg1->unk2B8[3] < 0) && (arg1->unk2AC[3] == 0)) {
        arg1->unk2AC[3] = func_8022F630(arg1, 3);
        if (arg1->unk24 == 0.0f) {
            arg1->unk24 = arg1->unk18;
            arg1->unk18 = (f32) ((f64) arg1->unk18 * 1.2);
        }
    }
    if ((arg1->unk2B8[4] < 0) && (arg1->unk2AC[4] == 0)) {
        arg1->unkA0 = 0x32;
        arg1->unk2AC[4] = func_8022F630(arg1, 4);
        func_80005670(arg0, D_803896DC)->unk90 = 1;
    }
    if ((arg1->unk2B8[5] < 0) && (arg1->unk2AC[5] == 0)) {
        arg1->unkA0 = 0x32;
        arg1->unk2AC[5] = func_8022F630(arg1, 5);
        func_80005670(arg0, D_803896DC)->unk90 = 1;
    }
}
#undef func_8022F630

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8022F850.s")


typedef struct {
    u8 pad0[0xA];
    s16 unkA;
    u8 padC[0x2C - 0xC];
    u8 unk2C;
    u8 pad2D[0x32 - 0x2D];
    u16 unk32;
    u8 pad34[0x36 - 0x34];
    u16 unk36;
    u32 unk38;
    u8 pad3C[0x4A - 0x3C];
    s16 unk4A;
    u8 pad4C[0x60 - 0x4C];
    u16 unk60;
    u8 pad62[0x64 - 0x62];
    u16 unk64;
    u8 pad66[0x68 - 0x66];
    u16 unk68;
    u8 pad6A[0x9E - 0x6A];
    u16 unk9E;
    u8 padA0[0xA6 - 0xA0];
    u8 unkA6;
    u8 padA7[0x2BA - 0xA7];
    s16 unk2BA;
} func_8022F99C_Struct;

typedef struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0x30 - 0x2E];
    u16 unk30;
    u8 pad32[0xDC - 0x32];
    func_8022F99C_Struct *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8022F99C_Struct *unkEC;
} func_8022F99C_G;

void func_8022F99C(func_8022F99C_Struct *arg0) {
    func_8022F99C_Struct *other;
    func_8022F99C_Struct *obj;
    s32 div;
    u8 c;
    u16 v;
    s32 sum;
    u8 *base;
    u32 w;

    base = (u8 *)arg0 - 0x44C;
    if (base == D_801BBBF0) {
        other = (func_8022F99C_Struct *)D_801BC3D8;
    } else {
        other = (func_8022F99C_Struct *)D_801BC03C;
    }
    if (base == D_801BBBF0) {
        obj = ((func_8022F99C_G *)D_801BBBF0)->unkDC;
    } else {
        obj = ((func_8022F99C_G *)D_801BBBF0)->unkEC;
    }
    if (arg0->unkA6 & 0x80) {
        div = 1;
        goto block_25;
    }
    w = arg0->unk38;
    if ((w << 1 >> 30) == 1 || (w << 1 >> 30) == 2 || (other->unk38 << 1 >> 30) == 1 || (other->unk38 << 1 >> 30) == 2) {
        div = 0xFFFF;
        goto block_25;
    }
    if (w >> 31) {
        div = 0x80;
        goto block_25;
    }
    if (arg0->unk2BA < 0) {
        div = 0x10;
        goto block_25;
    }
    if (((u32)arg0->unk32 >> 13) == 4 &&
        ((obj->unk36 != 0xF5 && obj->unk36 != 0xF6) || ((func_8022F99C_G *)D_801BBBF0)->unk2C == 10)) {
        if (arg0->unk2C++ % 10 == 9) {
            arg0->unk60 = 0xFFFF;
        } else {
            arg0->unk60 = 0;
        }
        return;
    }
    div = 8;
block_25:
    if (arg0->unkA >= arg0->unk4A) {
        arg0->unk60 = 0;
        arg0->unk68 = 0;
        return;
    }
    if (arg0->unk9E != 0) {
        arg0->unk60 = 0;
        arg0->unk68 = 0;
        return;
    }
    if (((func_8022F99C_G *)D_801BBBF0)->unk30 % div == 0) {
        arg0->unk68 += arg0->unk64 % 10;
        arg0->unk60 = arg0->unk64 / 10 + arg0->unk68 / 10;
        if (arg0->unk68 >= 10) {
            arg0->unk68 %= 10;
        }
    } else {
        arg0->unk60 = 0;
    }
}


typedef struct func_8022FC38_Struct {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[2];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    u32 unk30_0 : 11;
    u32 unk30_11 : 2;
    u32 unk30_13 : 19;
    u8 pad34[0x38 - 0x34];
    u32 unk38_0 : 1;
    u32 unk38_1 : 2;
    u32 unk38_3 : 29;
    u8 pad3C[0x5E - 0x3C];
    u16 unk5E;
    u8 pad60[0x62 - 0x60];
    u16 unk62;
    u8 pad64[0x66 - 0x64];
    u16 unk66;
    u8 pad68[0xA6 - 0x68];
    u8 unkA6;
    u8 padA7[0x30E - 0xA7];
    u16 unk30E;
    u8 pad310[0x398 - 0x310];
    u8 unk398;
} func_8022FC38_Struct;

typedef struct func_8022FC38_E {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x74 - 0x38];
    u8 unk74;
    u8 unk75;
} func_8022FC38_E;

typedef struct func_8022FC38_N {
    u8 pad0[0x1C];
    s32 unk1C;
} func_8022FC38_N;

typedef struct func_8022FC38_M {
    u8 pad0[0x5C];
    func_8022FC38_N *unk5C;
} func_8022FC38_M;

typedef struct func_8022FC38_G {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[2];
    u16 unk30;
    u8 pad32[0xDC - 0x32];
    func_8022FC38_M *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8022FC38_M *unkEC;
    u8 padF0[0x444 - 0xF0];
    func_8022FC38_E *unk444;
    func_8022FC38_E *unk448;
} func_8022FC38_G;

#define GG ((func_8022FC38_G *)D_801BBBF0)

extern u16 func_8022559C(s32, func_8022FC38_Struct *, u8 *, u8 *);

void func_8022FC38(func_8022FC38_Struct *arg0) {
    u8 *other;
    s32 id;
    s32 r;
    u16 speed;
    func_8022FC38_E *e;
    func_8022FC38_E *t;
    s32 cnt;
    u16 d;
    u8 *base;

    base = (u8 *)arg0 - 0x44C;
    if (base == D_801BBBF0) {
        other = D_801BC3D8;
    } else {
        other = D_801BC03C;
    }
    id = (base == D_801BBBF0) ? GG->unkDC->unk5C->unk1C : GG->unkEC->unk5C->unk1C;
    e = (base == D_801BBBF0) ? GG->unk444 : GG->unk448;
    t = (func_8022FC38_E *)((base == D_801BBBF0) ? GG->unkDC : GG->unkEC);
    r = func_8022559C(id, arg0, D_801BBBF0, other);
    if (arg0->unkA6 & 0x40) {
        speed = 1;
    } else if (arg0->unk30_11 != 0) {
        speed = 1;
    } else if (arg0->unk38_1 == 1 || arg0->unk38_1 == 2 || ((func_8022FC38_Struct *)other)->unk38_1 == 2) {
        speed = -3;
    } else if (arg0->unk38_0 != 0) {
        speed = 2;
    } else if ((((u32)*(u16 *)((u8 *)arg0 + 0x32) >> 13) == 4 || r == 0x16 || r == 0x1B || r == 0x1C) &&
               ((t->unk36 != 0xF5 && t->unk36 != 0xF6 && t->unk36 != 0x56 && t->unk36 != 0x147 &&
                 t->unk36 != 0x5A && t->unk36 != 0x5B) || GG->unk2C == 10)) {
        speed = 8;
    } else {
        speed = 1;
    }
    if (arg0->unkA < 20) {
        speed += 2;
    }
    d = arg0->unk62 - arg0->unk6 / 100;
    if (GG->unk30 % speed == 0) {
        if ((arg0->unk66 += d) >= 10) {
            arg0->unk5E = 1;
            arg0->unk66 %= 10;
        } else {
            arg0->unk5E = 0;
        }
    } else {
        arg0->unk5E = 0;
    }
    cnt = arg0->unk398;
    if (cnt != 0 && arg0->unk6 < arg0->unk4 && e->unk74 == 0 && GG->unk2C != 10) {
        arg0->unk398 = cnt - 1;
        arg0->unk5E = 0;
        if (arg0->unk398 == 0) {
            arg0->unk5E = 1;
        }
    } else if (arg0->unk6 != 0 && arg0->unk6 < arg0->unk4 && arg0->unk6 % 100 == 0 && e->unk74 == 0 &&
               cnt == 0 && GG->unk2C != 10) {
        if (e->unk75 == 1) {
            arg0->unk398 = 0x1F;
        }
        if (e->unk75 == 3) {
            arg0->unk398 = 0xF;
        }
        if (e->unk75 == 0) {
            arg0->unk398 = 8;
        }
    }
    if (arg0->unk6 == arg0->unk4) {
        if (arg0->unk30E < 0xFFFF) {
            arg0->unk30E++;
        }
    }
}


struct func_8022FFFC_Struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad1[0x40 - 0x32];
    s16 unk40;
    u8 pad2[0x9E - 0x42];
    u16 unk9E;
    u8 pad3[0xA4 - 0xA0];
    u8 unkA4;
};
extern void func_803796E4();

void func_8022FFFC(struct func_8022FFFC_Struct *arg0) {
    s32 g = (s32)D_801BBBF0;
    struct func_8022FFFC_Struct *v1;
    u16 t;

    if ((s32)arg0 == g + 0x44C) {
        v1 = (struct func_8022FFFC_Struct *)D_801BC3D8;
    } else {
        v1 = (struct func_8022FFFC_Struct *)D_801BC03C;
    }
    if (arg0->unk9E != 0 && (*(u16 *)(g + 0x30) & 1) && !(arg0->unk30 & 7) && !(v1->unk30 & 7)) {
        if ((arg0->unk9E % 10) == 0) {
            arg0->unk40 = (arg0->unkA4 * 10) / 100;
        }
        arg0->unk9E = arg0->unk9E - 1;
        if (arg0->unk9E == 0) {
            func_803796E4(arg0, g);
        }
    }
}


void func_802300F0(u8 *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0[0x396];
    if (temp_v0 != 0) {
        temp_t6 = temp_v0 - 1;
        arg0[0x396] = temp_t6;
        if (!(temp_t6 & 0xFF)) {
            arg0[0x30] = (u8) (arg0[0x30] & 0xFFE1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_8023011C.s")


extern u8 D_801842A0[];

struct func_802302D0_Inner {
    u8 pad0[0x1A];
    u8 unk1A;
};

struct func_802302D0_Struct {
    u8 pad0[0x2D4];
    struct func_802302D0_Inner *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
};

void func_802302D0(struct func_802302D0_Struct *arg0, struct func_802302D0_Struct *arg1) {
    u8 flag;

    flag = 1;
    if (arg0->unk2D4 == NULL) {
        arg0->unk2D4 = (struct func_802302D0_Inner *) D_801842A0;
    }
    if (arg1->unk2D4 == NULL) {
        arg1->unk2D4 = (struct func_802302D0_Inner *) D_801842A0;
    }
    arg1->unk2DA = flag;
    arg0->unk2DA = flag;
    arg0->unk2D9 = arg1->unk2D4->unk1A;
}


struct func_80230318_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
    u8 unk2DB;
};

#define A ((struct func_80230318_Struct *)arg0)
#define B ((struct func_80230318_Struct *)arg1)
extern f32 D_801BC780;
#define F D_801BC780

void func_80230318(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1) {
    s8 r;

    if (arg0 == NULL) {
        arg0 = (struct func_80231B28_Struct *)D_801BC03C;
    }
    if (arg1 == NULL) {
        arg1 = (struct func_80231B28_Struct *)D_801BC3D8;
    }
    r = func_8022B640(10);
    if (A->unk2D8 == 0xD) {
        if (r < 8 || F < 30.0f) {
            A->unk2D9 = 1;
            A->unk2DB = 1;
            if (r != 0 || F < 30.0f) {
                B->unk2DA = 1;
            } else {
                B->unk2DA = 0;
            }
        } else {
            A->unk2DB = 0;
            B->unk2DA = 1;
        }
    } else if (A->unk2D8 == 0xE) {
        if (r < 5 || F < 30.0f) {
            A->unk2DB = 0;
            B->unk2DA = 1;
        } else {
            A->unk2DB = 1;
            B->unk2DA = 0;
        }
    } else if (A->unk2D8 == 0xF) {
        A->unk2DB = 0;
        B->unk2DA = 1;
    } else if (A->unk2D8 == 0x14) {
        A->unk2DB = 0;
        B->unk2DA = 1;
    }
}


void func_80230484(u8 *arg0) {
    arg0[0x2DB] = 1;
    arg0[0x2D9] = 1;
}

extern s32 func_80378EBC();


typedef struct func_80230494_Struct { s32 w[0x19]; } func_80230494_Struct;
typedef struct func_80230494_Struct2 { s32 w[0x18]; } func_80230494_Struct2;
extern func_80230494_Struct D_8023E324;

u8 func_80230494(void) {
    s32 r;
    s32 i;
    func_80230494_Struct2 buf;

    *(func_80230494_Struct *)&buf = D_8023E324;
    r = func_80378EBC();
    i = r & 0xFFFF;
    if (r >= 0x64) {
        i = 0x63;
    }
    return ((u8 *)&buf)[i];
}



u16 func_80230500(s32 arg0, u8 arg1) {
    u16 sum;
    u8 i;
    s32 r;
    s32 t;
    f32 q;
    u16 n;

    sum = 0;
    r = func_80378EBC(arg0);
    n = r;
    i = 0;
    if (r > 0) {
        do {
            t = func_8022B640((u16)(200 / n + 0.5));
            i++;
            sum = sum + t;
        } while (i < n);
    }
    sum = (f32)sum / (f32)arg1 + 0.5;
    return sum;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230728.s")

#define func_80230494 func_80230494__func_80230930
#define func_80230500 func_80230500__func_80230930
u16 func_80230500(s32 arg0, u8 arg1);
struct func_80231B28_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[0x2DB - 0x2D9];
    u8 unk2DB;
};


struct func_80230930_Inner {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad1[0x15 - 0xB];
    s8 unk15[1];
};
struct func_80230930_Ent {
    s16 a;
    u8 b;
    u8 c;
    s16 d;
};
struct func_80230930_Struct {
    u8 pad0[0x38];
    u32 unk38_hi : 6;
    u32 unk38 : 3;
    u32 unk38_lo : 23;
    u8 pad1[0x52 - 0x3C];
    u16 unk52;
    u16 unk54;
    s16 unk56;
    u8 pad2[0xAA - 0x58];
    struct func_80230930_Ent unkAA[1];
    u8 pad3[0x2D4 - 0xB0];
    struct func_80230930_Inner *unk2D4;
    u8 pad4[0x2DA - 0x2D8];
    u8 unk2DA;
    u8 unk2DB;
    u8 pad5[0x399 - 0x2DC];
    u8 unk399;
};
extern u32 func_80230494(void *);

#define P0 ((struct func_80230930_Struct *)arg0)
#define P1 ((struct func_80230930_Struct *)arg1)

void func_80230930(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1) {
    s16 a1;
    s16 sp1C;
    u16 t1;
    s16 d52;
    s32 x;
    u32 r;

    t1 = func_80230500((s32)arg0, 2);
    a1 = P0->unkAA[P1->unk2D4->unkA].a;
    if (P0->unkAA[P1->unk2D4->unkA].a < 0) {
        a1 *= 2;
    }
    d52 = P0->unk52 - P1->unk52;
    sp1C = (P0->unk54 - P1->unk54) + ((P0->unk56 & 0x3F00) >> 8) + d52 + t1 + a1;
    sp1C = (sp1C * (f32)P0->unk399) / 100.0f + 0.5;
    r = func_80230494(arg1);
    x = P1->unkAA[P1->unk2D4->unkA].a * r + (P1->unk2D4->unk15[P1->unk38] + P1->unk2D4->unk4);
    x = (s16)x;
    x = (s16)((f32)(100 - P1->unkAA[P1->unk2D4->unkA].b * 10) * x / 100.0f);
    if (sp1C >= x) {
        P0->unk2DA = 1;
        P1->unk2DA = 0;
        P0->unk2DB = 1;
        if (P0->unk399 >= 0xB) {
            P0->unk399 -= 0xA;
        }
    } else {
        P0->unk2DA = 0;
        P1->unk2DA = 1;
        P0->unk2DB = 0;
        if (P0->unk399 < 0xD7) {
            P0->unk399 += 0x28;
            return;
        }
        P0->unk399 = 0xFF;
    }
}
#undef func_80230494
#undef func_80230500

#define func_80230494 func_80230494__func_80230B58

struct func_80230B58_Inner {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[0xA - 5];
    u8 unkA;
    u8 pad1[0x15 - 0xB];
    s8 unk15[5];
    u8 unk1A;
};
struct func_80230B58_Ent {
    u8 unk0;
    u8 pad1;
    s16 unk2;
    u8 unk4;
    u8 pad5;
};
struct func_80230B58_Struct {
    u8 pad0[0x38];
    u32 unk38;
    u8 pad3C[0x52 - 0x3C];
    u16 unk52;
    u16 unk54;
    s16 unk56;
    u8 pad58[0xA8 - 0x58];
    struct func_80230B58_Ent ent[1];
    u8 pad2[0x2D4 - 0xAE];
    struct func_80230B58_Inner *unk2D4;
    u8 pad2D8[0x2D9 - 0x2D8];
    u8 unk2D9;
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[0x399 - 0x2DC];
    u8 unk399;
};
extern s32 func_80230494(void *);

s32 func_80230B58(struct func_80230B58_Struct *arg0, struct func_80230B58_Struct *arg1) {
    s16 pad;
    s16 s;
    s16 x;
    s16 v;
    u16 t;
    s32 r;
    u8 k;
    s16 d;
    struct func_80230B58_Inner *in;
    struct func_80230B58_Ent *e;

    s = 0;
    t = func_80230500((s32)arg0, 3);
    in = arg1->unk2D4;
    v = arg0->ent[in->unkA].unk2;
    if (v < 0) {
        v *= 3;
    }
    d = arg0->unk52 - arg1->unk52;
    s = arg0->ent[in->unk1A].unk0 * arg0->ent[in->unk1A].unk2 + (u32)(arg0->unk54 - arg1->unk54) +((arg0->unk56 & 0x3F00) >> 8) + d + t + v;
    s = (s32)((f32)s * (f32)arg0->unk399 / 100.0f + 0.5);
    r = func_80230494(arg1);
    in = arg1->unk2D4;
    x = arg1->ent[in->unkA].unk2 * r + (u32)(in->unk15[(arg1->unk38 << 6) >> 29] + in->unk4);
    x = (f32)(100 - arg1->ent[in->unkA].unk4 * 10) * (f32)x / 100.0f;
    if (x < s) {
        arg0->unk2DA = 1;
        arg0->unk2D9 = arg1->unk2D4->unk1A;
        arg0->unk2D4 = (void *)(D_801842A0 + arg0->unk2D9 * 0x1C);
        arg1->unk2DA = 0;
        arg0->unk2DB = 1;
        arg1->unk2DB = 0;
        if (arg0->unk399 >= 0x15) {
            arg0->unk399 -= 0x14;
        }
    } else {
        arg0->unk2DA = 0;
        arg1->unk2DA = 1;
        arg0->unk2DB = 0;
        if (arg0->unk399 < 0xAF) {
            arg0->unk399 += 0x50;
        } else {
            arg0->unk399 = 0xFF;
        }
    }
}
#undef func_80230494

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80230DD4.s")

#define func_80230318 func_80230318__func_80231B28
#define func_80230930 func_80230930__func_80231B28
#define func_80230B58 func_80230B58__func_80231B28
#define func_80231B28_Struct func_80231B28_Struct__func_80231B28

struct func_80231B28_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[0x2DB - 0x2D9];
    u8 unk2DB;
};

extern void func_80230318(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);
extern void func_80230728(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);
extern void func_80230930(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1);
extern s32 func_80230B58();

void func_80231B28(void) {
    struct func_80231B28_Struct *var_a0;
    struct func_80231B28_Struct *var_a1;
    s32 temp_v0;

    if (D_801BCC20 == 0) {
        var_a0 = (struct func_80231B28_Struct *) D_801BC3D8;
    } else {
        var_a0 = (struct func_80231B28_Struct *) D_801BC03C;
    }
    if (D_801BCC20 == 0) {
        var_a1 = (struct func_80231B28_Struct *) D_801BC03C;
    } else {
        var_a1 = (struct func_80231B28_Struct *) D_801BC3D8;
    }
    temp_v0 = var_a1->unk2D8;
    if ((temp_v0 < 2) || (temp_v0 == 9) || (temp_v0 == 0xA)) {
        if (var_a0->unk2D8 == 0xD) {
            func_802302D0((struct func_802302D0_Struct *) var_a0, (struct func_802302D0_Struct *) var_a1);
        }
    } else if (temp_v0 == 2) {
        temp_v0 = var_a0->unk2D8;
        if (temp_v0 == 0x12) {
            func_80230728(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0x11) {
            func_80230930(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0x10) {
            func_80230B58(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0xD) {
            var_a0->unk2DB = 1;
            return;
        }
        if ((temp_v0 == 0xE) || (temp_v0 == 0xF)) {
            var_a0->unk2DB = 0;
        }
    } else if ((temp_v0 >= 4) && (temp_v0 < 8)) {
        temp_v0 = var_a0->unk2D8;
        if (temp_v0 == 0xE) {
            func_80230930(var_a0, var_a1);
            return;
        }
        if (temp_v0 == 0xF) {
            func_80230B58(var_a0, var_a1);
        }
    } else if (temp_v0 == 8) {
        if (var_a0->unk2D8 == 0xF) {
            func_80230B58(var_a0, var_a1);
        }
    } else if ((temp_v0 == 0xC) || (temp_v0 == 0x13)) {
        func_80230318(var_a0, var_a1);
    }
}
#undef func_80230318
#undef func_80230930
#undef func_80230B58
#undef func_80231B28_Struct


void func_80231CE4(s32 arg0) {

}


void func_80231CEC(void) {
    if (D_801BBBF0[0x1030] == 0) {
        if ((s32) D_801BBBF0[0x748] < 0xFF && D_801BBBF0[0x724] != 0xB) {
            D_801BBBF0[0x748] = (u8) (D_801BBBF0[0x748] + 1);
        }
    } else if ((s32) D_801BBBF0[0xAE4] < 0xFF && D_801BBBF0[0xAC0] != 0xB) {
        D_801BBBF0[0xAE4] = (u8) (D_801BBBF0[0xAE4] + 1);
    }
    if ((s32) D_801BBBF0[0x747] < 0xFF) {
        D_801BBBF0[0x747] = (u8) (D_801BBBF0[0x747] + 1);
    }
    if ((s32) D_801BBBF0[0xAE3] < 0xFF) {
        D_801BBBF0[0xAE3] = (u8) (D_801BBBF0[0xAE3] + 1);
    }
}


extern s32 func_8013D4A0(s32, s32);
extern void func_8013D5F4(s32);
extern s32 func_8014ADB4(f32, f32, s32, s16, s32, s32, s32);
extern void func_8014B36C(s32);
extern s32 func_80379230(void *, u8);
extern u8 D_8017DD92;
extern u16 D_801BBC1C;
extern s32 D_8022B640(u16, u8 *);

s32 func_80231D84(f32 arg0, f32 arg1, s32 arg2, s16 arg3, u8 arg4) {
    s32 s0;
    s32 s1;
    s32 v;
    s32 t;
    s32 r;

    s0 = 0;
    if (D_801BBBF0[0x74B] < 2) {
        if ((*(u16 *)&D_801BBBF0[0x2C] != 0xA && *(u16 *)&D_801BBBF0[0x2C] != 0xB &&
             *(u16 *)&D_801BBBF0[4] != 0x21 && *(u16 *)&D_801BBBF0[4] != 0x1B &&
             *(u16 *)&D_801BBBF0[4] != 0x5F && *(u16 *)&D_801BBBF0[4] < 0xB5) || D_8017DD92 != 0) {
            if (D_801BBBF0[0x74B] == 0) {
                t = D_8022B640(0x25, D_801BBBF0) + 1;
                s1 = t & 0xFF;
                while (func_80379230(D_801BC03C, t) != 0 && s0 < 0x64) {
                    func_8013D5F4(s1 & 0xFF);
                    t = func_8022B640(0x25) + 1;
                    s1 = t & 0xFF;
                    s0 = (s0 + 1) & 0xFF;
                }
                if (s0 >= 0x64) {
                    s1 = 0xA;
                    func_8013D5F4(0xA);
                } else {
                    func_8013D5F4(s1 & 0xFF);
                }
            } else {
                v = *(s16 *)D_801BC03C;
                if (v < 0x1F4) {
                    if ((func_8022B640(v / 100) & 0xFF) < 3) s1 = 1; else s1 = 2;
                } else if (v < 0x3E8) {
                    if ((func_8022B640(v / 100 - 4) & 0xFF) < 2) s1 = 2; else s1 = 3;
                } else {
                    if ((func_8022B640(v / 100 - 9) & 0xFF) < 2) s1 = 3; else s1 = 4;
                }
                func_8013D5F4(s1 & 0xFF);
            }
            if (s1 != 0 && s1 < 0x26) {
                r = s1;
                if (func_8013D4A0(s1 & 0xFF, 1) < 0x63) {
                    if (arg4 != 0 && D_801BBC1C != 5) {
                        func_8014B36C(func_8014ADB4(arg0, arg1, arg2, arg3, 0, s1, 0) & 0xFFFF);
                        return 0;
                    }
                    D_801BC03C[r + 0x337]++;
                    s1 = s1 * 1;
                    return s1;
                }
            }
        }
    }
    return 0;
}


typedef struct func_80232008_Inner {
    u8 pad0[0x36];
    u16 unk36;
} func_80232008_Inner;
typedef struct func_80232008_Struct {
    u8 pad0[0xDC];
    func_80232008_Inner *unkDC;
    u8 pad1[0xEC - 0xE0];
    func_80232008_Inner *unkEC;
} func_80232008_Struct;

#define G (*(func_80232008_Struct *)D_801BBBF0)
#define A (G.unkDC->unk36)
#define B (G.unkEC->unk36)

s32 func_80232008(void)
{
  if (!D_801BBBF0)
  {
  }
  if (((((((((((((((((((((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0x11D) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xFA)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xFD)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0x146)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xFB)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xFC)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xF5)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xF6)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0x147)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0x148)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0x11D)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xFA)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xFD)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0x146)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xFB)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xFC)) || (((func_80232008_Struct *) D_801BBBF0)->unkEC->unk36 == 0xF5)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xF6)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0x147)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0x148))
  {
    return 0;
  }
  return 1;
}


s32 func_802320DC(s32 arg0) {
    return 1;
}



u8 func_802320E8(u8 *arg0) {
    if (arg0 == D_801BBBF0 + 0x7E8) {
        if ((*(u8 **)(D_801BBBF0 + 0x448))[0x74] == 3) {
            return (*(u8 **)(arg0 + 0x334))[0x56];
        }
    }
    return 0;
}


struct func_80232128_Struct {
    u8 pad0[0x36];
    u16 unk36;
};

void func_80232128(u8 *arg0) {
    struct func_80232128_Struct *var_v0;
    u16 temp_v1;

    if (arg0 == D_801BBBF0 + 0x44C) {
        var_v0 = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xEC);
    } else {
        var_v0 = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xDC);
    }
    if (arg0[0x2D9] == 0x13) {
        temp_v1 = var_v0->unk36;
        if (temp_v1 == 0xF9 || temp_v1 == 0xF6 || temp_v1 == 0xFA || temp_v1 == 0xFB || temp_v1 == 0xFC || temp_v1 == 0xFD || temp_v1 == 0x11B || temp_v1 == 0x143 || temp_v1 == 0xF4 || temp_v1 == 0xF5 || temp_v1 == 0x148 || temp_v1 == 0x149 || temp_v1 == 0x2E || temp_v1 == 0x31 || temp_v1 == 0x32 || temp_v1 == 0x11D || temp_v1 == 0x11E) {
            arg0[0x2DA] = 0;
            return;
        }
    }
    arg0[0x2DA] = 1;
}


struct func_802321FC_Inner {
    u8 pad0[0xA];
    u8 unkA;
};

struct func_802321FC_Struct {
    u8 pad0[0x2D4];
    struct func_802321FC_Inner *unk2D4;
    u8 unk2D8;
    u8 pad1[0x374 - 0x2D9];
    s8 unk374;
};

void func_802321FC(struct func_802321FC_Struct *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk2D8;
    if ((temp_v0 == 2) || ((temp_v0 >= 4) && (temp_v0 < 9))) {
        temp_v0 = *(s16 *) ((u8 *) arg0 + arg0->unk2D4->unkA * 6 + 0xAA);
        if (temp_v0 < 0) {
            var_v1 = -temp_v0;
        } else {
            var_v1 = temp_v0;
        }
        arg0->unk374 = (s8) (var_v1 / 50);
        return;
    }
    if (temp_v0 == 0x13) {
        arg0->unk374 = 0;
    }
}


struct func_80232278_Struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad1[0x48 - 0x10];
    u16 unk48;
};

extern struct func_80232278_Struct D_8017DC40;

void func_80232278(void) {
    if ((s32) D_8017DC40.unk48 < 8) {
        D_8017DC40.unkE = 1;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x10) {
        D_8017DC40.unkE = 2;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x18) {
        D_8017DC40.unkE = 3;
        return;
    }
    if ((s32) D_8017DC40.unk48 < 0x20) {
        D_8017DC40.unkE = 4;
        return;
    }
    D_8017DC40.unkE = 5;
}


typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x62 - 0x4];
    u8 unk62;
    u8 unk63;
    u8 unk64;
    u8 unk65;
    u16 unk66;
    u8 pad68[0x74 - 0x68];
    u16 unk74;
    u8 pad76[0x82 - 0x76];
    u16 unk82;
    u16 unk84;
    u8 unk86;
    u8 unk87;
} func_802322E8_Struct;

typedef struct {
    u8 unk0;
    u8 pad1;
    s16 unk2;
    u8 pad4[2];
} func_802322E8_Entry;

typedef struct {
    u8 b[12];
} func_802322E8_Copy;

typedef struct {
    u8 pad0[2];
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
} func_802322E8_Flags;

extern void func_80379410(u8 *, s32, void *);
extern struct func_80233288_Struct D_80183CE0[];
extern u8 D_8017DC50[];
extern u8 D_8017DC5C[];
extern u8 D_8017DC68[];
extern u8 D_8017DC74[];
extern u8 D_8017DC96[];
extern func_802322E8_Flags D_8017DD7C;

#define DC40 ((func_802322E8_Struct *)&D_8017DC40)
#define SRC ((func_802322E8_Entry *)(D_801BBBF0 + 0x4F4))
#define DST ((func_802322E8_Entry *)D_80183CE0)
#define COPY(x) (*(func_802322E8_Copy *)(x))

void func_802322E8(void) {
    u8 i;
    u32 v;

    DC40->unk2 = *(s16 *)(D_801BBBF0 + 0x44E);
    DC40->unk62 = D_801BBBF0[0x4EE];
    DC40->unk63 = D_801BBBF0[0x4EF];
    DC40->unk64 = D_801BBBF0[0x4F0];
    DC40->unk65 = D_801BBBF0[0x4F1];
    for (i = 0; i < 0x56; i++) {
        DST[i].unk2 = SRC[i].unk2;
        DST[i].unk0 = SRC[i].unk0;
        if (DST[i].unk0 == 2) {
            DST[i].unk0 = 1;
            DST[i].unk2 = 0;
        }
    }
    COPY(D_8017DC96) = COPY(D_801BC03C + 0x2C4);
    COPY(D_8017DC50) = COPY(D_801BC03C + 0x82);
    COPY(D_8017DC5C) = COPY(D_801BC03C + 0x8E);
    COPY(D_8017DC68) = COPY(D_801BC03C + 0x6A);
    COPY(D_8017DC74) = COPY(D_801BC03C + 0x76);
    DC40->unk82 += D_801BBBF0[0x749];
    DC40->unk66 += D_801BBBF0[0x748];
    if (DC40->unk66 == 0) {
        DC40->unk86 = 0;
    } else {
        DC40->unk86 = (f32)(u32)DC40->unk82 / (f32)(u32)DC40->unk66 * 100.0f;
    }
    DC40->unk84 += D_801BBBF0[0xAE5];
    DC40->unk74 += D_801BBBF0[0xAE4];
    if (DC40->unk74 == 0) {
        DC40->unk87 = 0;
    } else {
        DC40->unk87 = (f32)(u32)DC40->unk84 / (f32)(u32)DC40->unk74 * 100.0f;
    }
    func_80379410(D_801BC03C, 0, &D_8017DC40);
    if (D_801BBBF0[0xB7D] != 0x26) {
        if (D_801BBBF0[0xB7D] < 8) {
            D_8017DD7C.unk2 |= 1 << D_801BBBF0[0xB7D];
        } else if (D_801BBBF0[0xB7D] < 0x10) {
            D_8017DD7C.unk3 |= 1 << (D_801BBBF0[0xB7D] + 0x18);
        } else if (D_801BBBF0[0xB7D] < 0x18) {
            D_8017DD7C.unk4 |= 1 << (D_801BBBF0[0xB7D] + 0x10);
        } else if (D_801BBBF0[0xB7D] < 0x20) {
            D_8017DD7C.unk5 |= 1 << (D_801BBBF0[0xB7D] + 8);
        } else if (D_801BBBF0[0xB7D] < 0x28) {
            D_8017DD7C.unk6 |= 1 << D_801BBBF0[0xB7D];
        } else if (D_801BBBF0[0xB7D] < 0x30) {
            D_8017DD7C.unk7 |= 1 << (D_801BBBF0[0xB7D] + 0x18);
        }
        if (D_801BBBF0[0xB7D] == 0x28) {
            D_8017DD7C.unk7 |= 3;
        }
    }
}

struct func_802329F8_Struct { u8 pad0[2]; u8 unk2; u8 unk3; };
extern struct func_802329F8_Struct D_8017DDA4;

void func_80232820(void) {
    u16 *p = (u16 *)(D_801BBBF0 + 0x49A);
    p[0] = (u32)((f64)p[0] * ((f64)(((u8 *)&D_8017DC40)[0x88] + D_8017DDA4.unk2) * 0.02 + 1.0));
    p[1] = (u32)((f64)p[1] * ((f64)(((u8 *)&D_8017DC40)[0x89] + D_8017DDA4.unk3) * 0.05 + 1.0));
}


extern u8 D_8017DCC8;
extern u8 D_8017DCC9;

void func_802329F8(void) {
    if ((D_801BBBF0[0x748] - D_801BBBF0[0xAE4]) >= 0xA) {
        if ((D_8017DCC8 + D_8017DDA4.unk2) < 5) {
            D_8017DDA4.unk2 = D_8017DDA4.unk2 + 1;
        }
    } else if (((D_801BBBF0[0xAE4] - D_801BBBF0[0x748]) >= 0xA) && ((D_8017DCC9 + D_8017DDA4.unk3) < 2)) {
        D_8017DDA4.unk3 = D_8017DDA4.unk3 + 1;
    }
}


extern u8 D_801BC348;
extern u8 D_801BC338;
extern u16 D_801BC34A;
extern u8 D_801BC314;

u8 func_80232A80(void) {
    s16 var_v1_2;
    u8 temp_a1;
    s16 var_v0_2;
    u16 temp_a0;
    u8 *temp_v0;

    var_v1_2 = 0;
    if (D_801BBBF0[0x1D] == 0) {
        var_v0_2 = ((D_801BC348 * 0x1E) / D_801BC338 - D_801BC34A / 10) + 0x46;
    } else if (D_801BBBF0[0x1D] == 1) {
        var_v0_2 = (D_801BC348 * 4 - D_801BC338 * 2 - D_801BC34A / 10) + 0x5F;
    } else if (D_801BBBF0[0x1D] == 2) {
        var_v0_2 = (D_801BC348 * 2 - D_801BC338 * 2 - D_801BC34A / 5) + 0x5F;
    }
    for (var_v1_2 = 0; var_v1_2 < 0x22; var_v1_2++) {
        if (D_801BC03C[var_v1_2 * 6 + 0xAC] >= 3) {
            var_v0_2 -= 0xA;
        }
    }
    temp_a1 = D_801BC314;
    if ((temp_a1 >= 2) && (temp_a1 < 9)) {
        var_v0_2 += 0x1E;
    }
    if ((temp_a1 == 0xC) || (*(u16 *) &D_801BBBF0[0x886] == 0xFFFF)) {
        var_v0_2 -= 0x1E;
    }
    if (var_v0_2 < 0) {
        var_v0_2 = 0;
    }
    if (var_v0_2 >= 0x5F) {
        var_v1_2 = 0;
    } else if (var_v0_2 >= 0x55) {
        var_v1_2 = 1;
    } else if (var_v0_2 >= 0x46) {
        var_v1_2 = 2;
    } else if (var_v0_2 >= 0x32) {
        var_v1_2 = 3;
    } else if (var_v0_2 >= 0x1E) {
        var_v1_2 = 4;
    } else if (var_v0_2 >= 0xF) {
        var_v1_2 = 5;
    } else {
        var_v1_2 = 6;
    }
    temp_v0 = (u8 *) &D_8017DC40 + var_v1_2 * 2;
    temp_a0 = *(u16 *) (temp_v0 + 0x8E);
    if ((s32) temp_a0 < 0xFFFF) {
        *(u16 *) (temp_v0 + 0x8E) = temp_a0 + 1;
    }
    return var_v1_2;
}


struct func_80232D08_Struct {
    u8 pad0[0x82];
    u16 unk82;
    u16 a[5];
    u8 pad1[0x2B8 - 0x8E];
    s16 w[6];
    u8 pad2[0x2D9 - 0x2C4];
    u8 unk2D9;
    u8 pad3[0x397 - 0x2DA];
    u8 unk397;
};
extern u8 D_801842AB[];

void func_80232D08(struct func_80232D08_Struct *arg0, u16 arg1) {
    s32 mask;
    u8 cnt;
    u8 avg;
    s32 m2;
    s32 i;
    s32 k;

    mask = 0;
    cnt = 0;
    avg = (arg0->a[1] + arg0->a[2] + arg0->a[3] + arg0->a[4] + arg0->a[0]) / 5;
    for (i = 0; i < 5; i = (i + 1) & 0xFF) {
        if (avg + 5 < arg0->a[i]) {
            mask |= 1 << (i + 1);
            mask &= 0xFF;
            cnt++;
        }
    }
    if (mask != 0 && (D_801842AB[arg0->unk2D9 * 0x1C] & mask)) {
        {
            m2 = mask;
            mask = mask * 1;
            i = 0;
            k = 0;
            do {
                if ((u32)m2 & (1 << k)) {
                    arg0->w[i] -= (arg1 * (&arg0->unk82)[i]) / (cnt * (arg0->a[0] + arg0->a[1] + arg0->a[2] + arg0->a[3] + arg0->a[4]));
                }
                i = (i + 1) & 0xFF;
                k = i;
            } while (i < 6);
        }
    }
    arg0->unk397 = mask;
}

#define func_8022F0E0 func_8022F0E0__func_80232E94
#define func_80232D08 func_80232D08__func_80232E94

typedef struct func_80232E94_Struct {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x2D8 - 0x31];
    u8 unk2D8;
    u8 pad2[0x2DA - 0x2D9];
    u8 unk2DA;
    u8 pad3[0x396 - 0x2DB];
    u8 unk396;
} func_80232E94_Struct;
typedef struct func_80232E94_Obj2 {
    u8 pad0[0x9C];
    u8 unk9C;
} func_80232E94_Obj2;
typedef struct func_80232E94_Obj {
    u8 pad0[0x5C];
    func_80232E94_Obj2 *unk5C;
} func_80232E94_Obj;
typedef struct func_80232E94_G {
    u8 pad0[0xDC];
    func_80232E94_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_80232E94_Obj *unkEC;
    u8 padF0[0x44C - 0xF0];
    func_80232E94_Struct unk44C;
    u8 pad7E8[0x1030 - 0x44C - sizeof(func_80232E94_Struct)];
    u8 unk1030;
} func_80232E94_G;
#define G ((func_80232E94_G *)D_801BBBF0)
extern u16 func_8022DB40(void *);
extern s32 func_8022F0E0(void *);
extern s32 func_80230DD4(s32, u16, s32, void *);
extern s32 func_80232D08(void *, u16);
extern s32 func_80379904();
extern s32 func_8037A884();

void func_80232E94(s32 arg0) {
    s32 pad;
    func_80232E94_Struct *var_a3;
    func_80232E94_Struct *var_s0;
    func_80232E94_Obj2 *var_a0;
    u16 sp26;

    if (G->unk1030 == 0) {
        var_s0 = (func_80232E94_Struct *)D_801BC03C;
    } else {
        var_s0 = (func_80232E94_Struct *)D_801BC3D8;
    }
    if (var_s0 == &G->unk44C) {
        var_a3 = (func_80232E94_Struct *)D_801BC3D8;
    } else {
        var_a3 = (func_80232E94_Struct *)D_801BC03C;
    }
    if (arg0 == (s32)G->unkDC) {
        var_a0 = G->unkEC->unk5C;
    } else {
        var_a0 = G->unkDC->unk5C;
    }
    if (var_s0->unk2D8 < 0xB || var_s0->unk2D8 == 0xF) {
        func_8022EE7C(arg0, (struct func_8022EE7C_Struct *)var_s0);
        sp26 = func_8022DB40(var_s0);
        func_80232D08(var_s0, func_80230DD4(arg0, sp26, func_8022F0E0(var_a3) & 0xFFFF, var_a3));
        if (var_a3->unk396 != 0) {
            var_a3->unk396 = 0;
            var_a3->unk30 = var_a3->unk30 & 0xFFE1;
        }
    } else if (var_s0->unk2DA != 0) {
        if (var_a0->unk9C == 2) {
            var_a0->unk9C = 3;
        }
        if (var_s0->unk2D8 == 0xC) {
            func_80379904(arg0, var_s0);
        }
        if (var_s0->unk2D8 == 0x13) {
            func_8037A884(arg0, var_s0);
        }
    }
}
#undef func_8022F0E0
#undef func_80232D08

#pragma GLOBAL_ASM("asm/nonmatchings/file011/8022B640/func_80232FEC.s")

#define D_80183CE0 D_80183CE0__func_80233288

typedef struct func_80233288_Struct {
    u8 pad[4];
    u8 count;
    u8 pad2;
} func_80233288_Struct;

extern s32 func_80378CF0(s32);
extern func_80233288_Struct D_80183CE0[];

void func_80233288(u8 arg0) {
    func_80233288_Struct *temp_v0;
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = arg0;
    temp_v0 = &D_80183CE0[temp_a0];
    temp_v1 = temp_v0->count;
    if (temp_v1 < 0xFF) {
        temp_v0->count = temp_v1 + 1;
        func_80378CF0(temp_a0);
    }
}
#undef D_80183CE0


void func_802332D8(void) {
    struct func_80232128_Struct *e;
    u32 v;

    e = *(struct func_80232128_Struct **)(D_801BBBF0 + 0xEC);
    v = *(u16 *)(D_801BBBF0 + 0x2C);
    if (v == 0xA || v == 0xB) {
        func_80020718(0x5E);
        return;
    }
    v = e->unk36;
    if (v == 0xF9 || v == 0x149 || v == 0x32 || v == 0xFA || v == 0xFB || v == 0xFC || v == 0xFD || v == 0x2E || v == 0x31) {
        func_80020718(0x5F);
        return;
    }
    if (v == 0x148) {
        func_80020718(0x60);
        return;
    }
    if (v == 0x11D) {
        func_80020718(0x61);
        return;
    }
    if (v == 0x11E) {
        func_80020718(0x62);
        return;
    }
    if (v == 0x11B) {
        func_80020718(0x6C);
        return;
    }
    func_80020718(0x5E);
}


s32 func_802333FC(s16 *arg0, u8 arg1) {
    if ((arg0 + (0x2B8 / 2))[arg1] < 0) {
        return 0;
    }
    return 1;
}

