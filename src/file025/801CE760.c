#include "common.h"

extern s32 D_801DAD10;
extern s32 D_801DAD28;
extern s32 D_801DAD2C;
extern s32 D_801DAD34;
extern s32 D_801DAD38;
extern s32 D_801DAD3C;
extern s32 D_801DAD54;
extern s32 D_801DAD58;
extern s32 D_801DAD60;
extern s32 D_801DADE0;
extern s32 D_801DADE4;
extern s32 D_801DADFC;
extern s32 D_801DAE00;
extern s32 D_801DAE08;
extern s32 D_801DAE0C;
extern s32 D_801DAEB0;
extern s32 D_801DAEB4;
extern s32 D_801DAECC;
extern s32 D_801DAED0;
extern s32 D_801DAEE8;
extern s32 D_801DAEEC;
extern s32 D_801DAEF0;
extern s32 D_801DAEF4;
extern s32 D_801DAF00;
extern s32 D_801DAF18;
extern s32 D_801DAF1C;
extern s32 D_801DAF38;
extern s32 D_801DAF3C;
extern s32 D_801DAF40;
extern s32 D_801DAF44;
extern s32 D_801E11F0;
extern s32 D_801E1230;
extern s32 D_801E12C0;
extern s32 func_80010550();
extern s32 func_80011140();
extern s32 func_801C354C(s32);
extern s32 func_801CC540();
extern s8 D_801DAD5C;
extern u8 *D_801DAD50;
extern u8 *D_801DAEE4;
extern u8 *D_801DAF34;
extern u8 D_8008DA88[];
extern u8 D_80171CF0[];
extern u8 D_801BC025[];
extern u8 D_801CFAC8[];
extern u8 D_801CFF24[];
extern u8 D_801D003C[];
extern u8 D_801D9FE8[];
extern u8 D_801DA028[];
extern u8 D_801DAED4[];
extern u8 D_801DAF20[];
extern u8 D_801E11F8;
extern u8 D_801E1238;
extern u8 D_801E1280;
extern u8 D_801E12A0;
extern u8 D_801E12B0;
extern u8 D_801E12C8;
extern void func_800058DC(void *, void (*)(void));
extern void func_80006214();
extern void func_8012D844(void *, s32, s32);
extern void func_8013A28C();
extern void func_8013A334();
extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);
extern void func_801CE7D4();
extern void func_801CE830();
extern void func_801CEF20(void *);
extern void func_801CF080(s32 arg0);
extern void func_801CF124();
extern void func_801CF180();
extern void func_801CF5A0(void *);
extern void func_801CF700(void *);
extern void func_801CF860(s32 arg0);
extern void func_801CF8F4();
extern void func_801CF950();
extern void func_801CFE90(s32 arg0);
extern void func_801CFF24();
extern void func_801D003C();
extern void func_801D01B4();


extern s32 func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

void func_801CE760(s32 arg0, s32 arg1) {
    D_801E11F0 = arg0;
    D_801DAD28 = 0;
    D_801DAD2C = 0;
    D_801DAD34 = 1;
    D_801DAD10 = 0;
    D_801DAD38 = 0;
    D_801DAD3C = 0;
    func_8013B570(arg0, 0x2D, 0, 4, func_801CE7D4);
}


struct func_801CE7D4_Struct {
    u8 pad[0x24];
    s32 unk24;
};


void func_801CE7D4(struct func_801CE7D4_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x2D, 0);
        func_800058DC(arg0, func_801CE830);
        return;
    }
    func_800058DC(arg0, func_801CE7D4);
}

#define D_801DAD40 D_801DAD40__func_801CE830
#define func_80005FAC func_80005FAC__func_801CE830
#define func_801CE7D4_Struct func_801CE7D4_Struct__func_801CE830
#define func_801CEA50 func_801CEA50__func_801CE830
#define func_801CF950_StructData func_801CF950_StructData__func_801CE830
#define func_801CF950_StructObject func_801CF950_StructObject__func_801CE830
typedef struct func_801CF950_StructData {
    u16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u32 unk28;
    u16 unk2C;
} func_801CF950_StructData;
typedef struct func_801CF950_StructObject {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801CF950_StructData *unk2C;
    s32 unk30;
} func_801CF950_StructObject;
extern func_801CF950_StructObject *func_80005FAC(void *, s32, void *);
struct func_801CE7D4_Struct {
    u8 pad[0x24];
    s32 unk24;
};
extern void func_801CEA50(u8 *arg0, u8 *arg1);

struct func_801CE830_StructB {
    u16 unk0;
    u8 pad2[2];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
    u8 pad16[2];
    f32 unk18, unk1C, unk20;
    s32 unk24, unk28;
    u16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
};
struct func_801CE830_StructA {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[9];
    struct func_801CE830_StructB *unk2C;
};
struct func_801CE830_StructC { u16 *unk0; s32 *unk4; };
struct func_801CE830_StructD { s32 unk0, unk4, unk8; };
extern s8 D_801DAD40;
#define O ((struct func_801CE830_StructA *)D_801DAD50)
#define S (*(struct func_801CE830_StructC **)(D_80171CF0 + 0x11A0))

void func_801CE830(struct func_801CE7D4_Struct *arg0, struct func_801CE830_StructD *arg1) {
    s8 *var_a2;

    if (arg0->unk24 != 0) {
        var_a2 = &D_801DAD40;
        if (D_801DAD54 != 0) {
            D_801DAD50 = (u8 *)func_80005FAC(arg0, arg1->unk8, &D_801DAD40);
            O->unk2C->unk28 = *S->unk4;
            O->unk2C->unk0 = *S->unk0;
            O->unk2C->unk2C = S->unk0[1];
            var_a2 = &D_801DAD5C;
            O->unk2C->unk30 = (s32)D_801D9FE8 | 0x40000000;
            O->unk2C->unk24 = 0x40300;
            O->unk2C->unk48 = 0;
            O->unk2C->unk49 = 0xFF;
            O->unk2C->unk4A = 0xFF;
            O->unk2C->unk4B = *(u8 *)&D_801DAD5C = 0xFF;
            O->unk2C->unk4C = 0xFF;
            O->unk2C->unk4D = 0xFF;
            O->unk2C->unk4E = 0xFF;
            O->unk2C->unk4F = 0xFF;
            O->unk2C->unk4 = 0.0f;
            O->unk2C->unk8 = 0.0f;
            O->unk2C->unkC = 0.0f;
            O->unk2C->unk10 = 0;
            O->unk2C->unk12 = 0;
            O->unk2C->unk14 = 0x800;
            O->unk2C->unk18 = 100.0f;
            O->unk2C->unk1C = 100.0f;
            O->unk2C->unk20 = 100.0f;
            O->unk22 = D_801DAD58;
            D_801DAD60 = 0;
        } else {
            D_801DAD50 = NULL;
            D_801DAD58 = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801CEA50);
        return;
    }
    func_800058DC(arg0, (void (*)(void))func_801CE830);
}
#undef O
#undef S
#undef D_801DAD40
#undef func_80005FAC
#undef func_801CE7D4_Struct
#undef func_801CEA50
#undef func_801CF950_StructData
#undef func_801CF950_StructObject

struct func_801CEE30_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801CEE30_Struct D_801E1208;

struct func_801CEA50_S3 {
    s32 a;
    s32 b;
    s32 c;
};
struct func_801CEA50_F3 {
    s32 a;
    s32 b;
    f32 c;
};
struct func_801CEA50_P {
    u8 pad[0x5C];
    s32 u5C;
    s32 u60;
    s32 u64;
};
struct func_801CEA50_O2 {
    u8 pad[0x2C];
    struct func_801CEA50_P *u2C;
};
struct func_801CEA50_O {
    u8 pad[4];
    struct func_801CEA50_O2 *u4;
};


void func_801CEA50(u8 *arg0, u8 *arg1)
{
  struct func_801CEA50_F3 *p;
  u8 *new_var;
  if (func_801CC540() != 0)
  {
    func_800058DC(arg0, func_801CEA50);
    return;
  }
  if (D_801DAD28 != 0)
  {
    func_80006214(arg0);
    func_8013A28C(D_8008DA88, *((struct func_801CEA50_S3 *) D_801DAD28));
    *((u8 *) ((new_var = *((u8 **) (arg0 + 0x5C))) + 0x76)) = 1;
    D_801DAD28 = 0;
  }
  p = (struct func_801CEA50_F3 *) D_801DAD2C;
  if (p != 0)
  {
    if (func_80011140(arg1, *((void **) (arg0 + 0x5C)), *p, (u32) p->c) != 0)
    {
      D_801DAD2C = 0;
    }
  }
  else
  {
    if (func_80010550(arg1, *((void **) (arg0 + 0x5C))) != 0)
    {
      D_801DAD34 = 1;
    }
    else
    {
      D_801DAD34 = 0;
    }
    *((struct func_801CEA50_S3 *) (&D_801E1208)) = *((struct func_801CEA50_S3 *) (((u8 *) (*((struct func_801CEA50_O2 **) (arg1 + 4)))->u2C) + 0x5C));
    *((struct func_801CEA50_S3 *) (&D_801E11F8)) = *((struct func_801CEA50_S3 *) (D_801BC025 + 3));
  }
  if (D_801DAD10 != 0)
  {
    func_801CEF20(arg0);
  }
  if (D_801DAD38 != 0)
  {
    u8 *g = D_80171CF0;
    u8 *h = D_8008DA88;
    *((s32 *) ((*((u8 **) ((*((u8 **) (h + 0x24))) + 0x2C))) + 0x28)) = *(*((s32 **) ((*((u8 **) (g + 0xDC))) + 4)));
    *(*((u16 **) ((*((u8 **) (h + 0x24))) + 0x2C))) = *(*((u16 **) (*((u8 **) (g + 0xDC)))));
    *((u16 *) ((*((u8 **) ((*((u8 **) (h + 0x24))) + 0x2C))) + 0x2C)) = (*((u16 **) (*((u8 **) (g + 0xDC)))))[1];
  }
  if (D_801DAD3C != 0)
  {
    func_801CF080(arg0);
  }
  if (D_801DAD54 != 0)
  {
    *((s8 *) (D_801DAD50 + 0x22)) = D_801DAD58;
    *((u8 *) ((*((u8 **) (D_801DAD50 + 0x2C))) + 0x4B)) = *((u8 *) (&D_801DAD5C));
    if (D_801DAD60 != 0)
    {
      *((u32 *) ((*((u8 **) (D_801DAD50 + 0x2C))) + 0x30)) = ((u32) D_801DA028) | 0x40000000;
      return;
    }
    *((u32 *) ((*((u8 **) (D_801DAD50 + 0x2C))) + 0x30)) = ((u32) D_801D9FE8) | 0x40000000;
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CED5C.s")



void func_801CEDBC(s32 arg0) {
    D_801DAD54 = arg0;
}



void func_801CEDC8(s32 arg0) {
    D_801DAD58 = arg0;
}



s32 func_801CEDD4(void) {
    return D_801DAD2C != 0;
}



s32 func_801CEDE4(void) {
    if (D_801DAD2C != 0) {
        return 0;
    }
    if (D_801DAD28 != 0) {
        return 0;
    }
    return D_801DAD34;
}


u8 *func_801CEE24(void) {
    return &D_801E11F8;
}




s32 func_801CEE30(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1208.unk0) {
        return 0;
    }
    return D_801E1208.unk4 == arg1;
}



void func_801CEE68(s32 arg0) {
    D_801DAD38 = arg0;
}



void func_801CEE74(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E11F0);
        func_801C3370(D_801E11F0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DAD3C = 1;
        return;
    }
    D_801DAD3C = 0;
}



s32 func_801CEEF4(void) {
    return D_801DAD3C == 0;
}



void func_801CEF04(s32 arg0) {
    D_801DAD60 = arg0;
}



void func_801CEF10(s32 arg0) {
    s32 *p = &arg0;
    D_801DAD5C = arg0;
}



#define D_801DAD64 D_801DAD64__func_801CEF20
#define D_801DD440 D_801DD440__func_801CEF20
#define D_801E1220 D_801E1220__func_801CEF20
#define func_80034C24 func_80034C24__func_801CEF20
#define func_801C0B2C func_801C0B2C__func_801CEF20
u8 func_801CEF20_bss_prefix[0x8];
extern f64 func_80034C24(u64);
extern u64 func_801C0B2C();
extern f64 D_801DD440;
u64 D_801E1218;
extern u32 D_801E1220;

struct func_801CEF20_Struct {
    f32 unk0;
    s32 unk4;
};
extern struct func_801CEF20_Struct D_801DAD64[];

void func_801CEF20(void *arg0) {
    u64 d;
    u32 n;
    s32 t;

    d = func_801C0B2C() - D_801E1218;
    if (D_801DAD64[D_801E1220].unk0 <= func_80034C24(d) / D_801DD440) {
        t = D_801DAD64[D_801E1220].unk4;
        if (t == 0) goto c0;
        if (t == 1) goto c1;
        if (t != 2) goto end;
        if (1) goto c2;
    c0:
        func_8012D844(arg0, 0x2D, 0);
        goto end;
    c1:
        func_8012D844(arg0, 0x2D, 1);
        goto end;
    c2:
        func_8012D844(arg0, 0x2D, 2);
    end:
        n = ++D_801E1220;
        if (n >= 0xF) {
            D_801E1218 = func_801C0B2C();
        }
        D_801E1220 %= 15;
    }
}
#undef D_801DAD64
#undef D_801DD440
#undef D_801E1220
#undef func_80034C24
#undef func_801C0B2C



void func_801CF080(s32 arg0) {
    func_80006214();
    D_801DAD3C = func_801C354C(arg0) == 0;
}



void func_801CF0B0(s32 arg0, s32 arg1) {
    D_801E1230 = arg0;
    D_801DADFC = 0;
    D_801DAE00 = 0;
    D_801DAE08 = 1;
    D_801DADE0 = 0;
    D_801DADE4 = 0;
    D_801DAE0C = 0;
    func_8013B570(arg0, 0x30, 0, 4, func_801CF124);
}


struct func_801CF124_Struct {
    u8 pad[0x24];
    s32 unk24;
};


void func_801CF124(struct func_801CF124_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x30, 0);
        func_800058DC(arg0, func_801CF180);
        return;
    }
    func_800058DC(arg0, func_801CF124);
}

struct func_801CF418_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801CF418_Struct D_801E1248;

struct func_801CF180_Struct { s32 x; s32 y; f32 z; };
struct func_801CF180_Obj { u8 pad[0x5C]; struct func_801CF180_Struct v; };
struct func_801CF180_Cam { u8 pad[0x2C]; struct func_801CF180_Obj *o; };
struct func_801CF180_Arg { u8 pad[4]; struct func_801CF180_Cam *c; };
struct func_801CF180_Q { u8 pad[0x76]; u8 f; };
struct func_801CF180_P { u8 pad[0x5C]; struct func_801CF180_Q *q; };


void func_801CF180(struct func_801CF180_P *arg0, s32 arg1_) {
    struct func_801CF180_Arg *arg1 = (struct func_801CF180_Arg *)arg1_;
    struct func_801CF180_Struct *p;
    struct func_801CF180_Q *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, func_801CF180);
        return;
    }
    if (D_801DADFC != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801CF180_Struct *)D_801DADFC);
        q = arg0->q;
        q->f = 1;
        D_801DADFC = 0;
    }
    p = (struct func_801CF180_Struct *)D_801DAE00;
    if (p != 0) {
        if (func_80011140(arg1, arg0->q, *p, (u32)p->z) != 0) {
            D_801DAE00 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->q) != 0) {
            D_801DAE08 = 1;
        } else {
            D_801DAE08 = 0;
        }
        *(struct func_801CF180_Struct *)&D_801E1248 = arg1->c->o->v;
        *(struct func_801CF180_Struct *)&D_801E1238 = *(struct func_801CF180_Struct *)(D_801BC025 + 3);
    }
    if (D_801DADE0 != 0) func_801CF5A0(arg0);
    if (D_801DADE4 != 0) func_801CF700(arg0);
    if (D_801DAE0C != 0) func_801CF860(arg0);
}



s32 func_801CF3BC(void) {
    return D_801DAE00 != 0;
}



s32 func_801CF3CC(void) {
    if (D_801DAE00 != 0) {
        return 0;
    }
    if (D_801DADFC != 0) {
        return 0;
    }
    return D_801DAE08;
}


u8 *func_801CF40C(void) {
    return &D_801E1238;
}




s32 func_801CF418(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1248.unk0) {
        return 0;
    }
    return D_801E1248.unk4 == arg1;
}

/* hh-block asm/nonmatchings/file025/801CE760/_mrg_keep_c9f486393b28812f.s {"functions":["func_801CF450"],"rodata":[[".late_rodata","asm/nonmatchings/file025/801CE760/func_801CEF20.s","D_801DD440"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/_mrg_keep_c9f486393b28812f.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF4B0.s")



void func_801CF514(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801E1230);
        func_801C3370(D_801E1230, arg1, arg2, arg3, (s32) arg4, 0, arg5, 0);
        D_801DAE0C = 1;
        return;
    }
    D_801DAE0C = 0;
}



s32 func_801CF590(void) {
    return D_801DAE0C == 0;
}



#define D_801DAE10 D_801DAE10__func_801CF5A0
#define D_801DD450 D_801DD450__func_801CF5A0
#define D_801E1260 D_801E1260__func_801CF5A0
#define func_80034C24 func_80034C24__func_801CF5A0
#define func_801C0B2C func_801C0B2C__func_801CF5A0
u8 func_801CF5A0_bss_prefix[0x38];
extern u64 func_801C0B2C();
extern f64 func_80034C24(s64);
struct func_801CF5A0_Struct { f32 a; s32 b; };
extern struct func_801CF5A0_Struct D_801DAE10[];
extern f64 D_801DD450;
u64 D_801E1258;
extern u32 D_801E1260;

void func_801CF5A0(void *arg0) {
    s64 d;
    s32 b;

    d = func_801C0B2C() - D_801E1258;
    if (D_801DAE10[D_801E1260].a <= func_80034C24(d) / D_801DD450) {
        b = D_801DAE10[D_801E1260].b;
        if (b == 0) goto c0;
        if (b == 1) goto c1;
        if (b != 2) goto dj;
        if (1) goto c2;
    c0:
        func_8012D844(arg0, 0x30, 0);
        if (1) goto dj;
    c1:
        func_8012D844(arg0, 0x30, 1);
        if (1) goto dj;
    c2:
        func_8012D844(arg0, 0x30, 2);
    dj:
        D_801E1260++;
        if (D_801E1260 >= 0xF) {
            D_801E1258 = func_801C0B2C();
        }
        D_801E1260 %= 15;
    }
}
#undef D_801DAE10
#undef D_801DD450
#undef D_801E1260
#undef func_80034C24
#undef func_801C0B2C





#define D_801DAE88 D_801DAE88__func_801CF700
#define D_801DD458 D_801DD458__func_801CF700
#define D_801E1270 D_801E1270__func_801CF700
#define func_80034C24 func_80034C24__func_801CF700
#define func_801C0B2C func_801C0B2C__func_801CF700
u8 func_801CF700_bss_prefix[0x8];


typedef struct {
    f32 thr;
    s32 action;
} func_801CF700_Struct;
extern f64 func_80034C24(s64);
extern u64 func_801C0B2C();
extern func_801CF700_Struct D_801DAE88[];
extern f64 D_801DD458;
u64 D_801E1268;
extern u32 D_801E1270;

void func_801CF700(void *arg0) {
    s64 d;

    d = func_801C0B2C() - D_801E1268;
    if (D_801DAE88[D_801E1270].thr <= func_80034C24(d) / D_801DD458) {
        s32 k = D_801DAE88[D_801E1270].action;
        if (k == 0) goto c0;
        if (k == 1) goto c1;
        if (k != 2) goto end;
        goto c2;
c0:
        func_8012D844(arg0, 0x30, 0);
        goto end;
c1:
        func_8012D844(arg0, 0x30, 1);
        goto end;
c2:
        func_8012D844(arg0, 0x30, 2);
end:
        D_801E1270 = D_801E1270 + 1;
        if (D_801E1270 >= 5) {
            D_801E1268 = func_801C0B2C();
        }
        D_801E1270 = D_801E1270 % 5;
    }
}
#undef D_801DAE88
#undef D_801DD458
#undef D_801E1270
#undef func_80034C24
#undef func_801C0B2C



void func_801CF860(s32 arg0) {
    func_80006214();
    D_801DAE0C = func_801C354C(arg0) == 0;
}



void func_801CF890(s32 arg0, s32 arg1) {
    D_801DAEB0 = arg0;
    D_801DAECC = 0;
    D_801DAED0 = 0;
    D_801DAEF0 = 1;
    D_801DAEF4 = 0;
    func_8013B570(arg0, 0x11C, 0, 4, func_801CF8F4);
}


struct func_801CF8F4_Struct {
    u8 pad[0x24];
    s32 unk24;
};


void func_801CF8F4(struct func_801CF8F4_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x118, 0);
        func_800058DC(arg0, func_801CF950);
        return;
    }
    func_800058DC(arg0, func_801CF8F4);
}


typedef struct func_801CF950_StructData {
    u16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u32 unk28;
    u16 unk2C;
} func_801CF950_StructData;
typedef struct func_801CF950_StructObject {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801CF950_StructData *unk2C;
    s32 unk30;
} func_801CF950_StructObject;
typedef struct func_801CF950_StructSource {
    u16 *unk0;
    void **unk4;
} func_801CF950_StructSource;
extern func_801CF950_StructObject *func_80005FAC(void *, s32, void *);
struct func_801CFAC8_S;
struct func_801CFAC8_A;
void func_801CFAC8(struct func_801CFAC8_S *arg0, struct func_801CFAC8_A *arg1);
#define OBJ ((func_801CF950_StructObject *)D_801DAEE4)

void func_801CF950(func_801CF950_StructObject *arg0, func_801CF950_StructObject *arg1) {
    func_801CF950_StructData *temp_a0;

    if (arg0->unk24 != 0) {
        if (D_801DAEE8 != 0) {
            D_801DAEE4 = (u8 *)func_80005FAC(arg0, arg1->unk30, D_801DAED4);
            *(s32 *)((u8 *)OBJ->unk2C + 0x28) = (s32)*(*(func_801CF950_StructSource **)(D_80171CF0 + 0x980))->unk4;
            OBJ->unk2C->unk0 = *(*(func_801CF950_StructSource **)(D_80171CF0 + 0x980))->unk0;
            OBJ->unk2C->unk2C = (*(func_801CF950_StructSource **)(D_80171CF0 + 0x980))->unk0[1];
            OBJ->unk2C->unk4 = 0.0f;
            OBJ->unk2C->unk8 = 0.0f;
            OBJ->unk2C->unkC = 0.0f;
            OBJ->unk2C->unk12 = 0;
            OBJ->unk2C->unk18 = 5.0f;
            OBJ->unk2C->unk1C = 5.0f;
            OBJ->unk2C->unk20 = 5.0f;
            temp_a0 = OBJ->unk2C;
            temp_a0->unk24 |= 0x40015;
            OBJ->unk22 = D_801DAEEC;
        } else {
            D_801DAEE4 = 0;
            D_801DAEEC = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801CFAC8);
        return;
    }
    func_800058DC(arg0, (void (*)(void))func_801CF950);
}

struct func_801CFE28_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801CFE28_Struct D_801E1290;
struct func_801CFAC8_V { s32 a; s32 b; s32 c; };
struct func_801CFAC8_O { u8 pad[0x5C]; struct func_801CFAC8_V v; };
struct func_801CFAC8_P { u8 pad[0x2C]; struct func_801CFAC8_O *p2C; };
struct func_801CFAC8_S { u8 pad[0x5C]; u8 *p5C; };
struct func_801CFAC8_A { u8 pad[0x4]; struct func_801CFAC8_P *p4; };

void func_801CFAC8(struct func_801CFAC8_S *arg0, struct func_801CFAC8_A *arg1) {
    u8 *p;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801CFAC8);
        return;
    }
    if (D_801DAECC != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801CFAC8_V *)D_801DAECC);
        p = arg0->p5C;
        p[0x76] = 1;
        D_801DAECC = 0;
    }
    p = (u8 *)D_801DAED0;
    if (p != 0) {
        if (func_80011140(arg1, arg0->p5C, *(struct func_801CFAC8_V *)p, (u32)*(f32 *)(p + 8)) != 0) {
            D_801DAED0 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->p5C) != 0) {
            D_801DAEF0 = 1;
        } else {
            D_801DAEF0 = 0;
        }
        *(struct func_801CFAC8_V *)&D_801E1290 = arg1->p4->p2C->v;
        *(struct func_801CFAC8_V *)&D_801E1280 = *(struct func_801CFAC8_V *)(D_801BC025 + 3);
        D_801DAEB4 = (s32)arg1;
        func_8013A334(&D_801E12A0, arg1, arg0->p5C, 0xF);
        func_8013A334(&D_801E12B0, arg1, arg0->p5C, 0x12);
    }
    if (D_801DAEE8 != 0) {
        D_801DAEE4[0x22] = D_801DAEEC;
    }
    if (D_801DAEF4 != 0) {
        func_801CFE90((s32)arg0);
    }
}



void func_801CFD28(s32 arg0) {
    D_801DAEE8 = arg0;
}



void func_801CFD34(s32 arg0) {
    D_801DAEEC = arg0;
}



s32 func_801CFD40(void) {
    return D_801DAED0 != 0;
}



s32 func_801CFD50(void) {
    if (D_801DAED0 != 0) {
        return 0;
    }
    if (D_801DAECC != 0) {
        return 0;
    }
    return D_801DAEF0;
}


u8 *func_801CFD90(void) {
    return &D_801E1280;
}



void func_801CFD9C(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801DAEB0);
        func_801C3370(D_801DAEB0, arg1, arg2, arg3, (s32) arg4, 0, arg5, 0);
        D_801DAEF4 = 1;
        return;
    }
    D_801DAEF4 = 0;
}



s32 func_801CFE18(void) {
    return D_801DAEF4 == 0;
}




s32 func_801CFE28(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1290.unk0) {
        return 0;
    }
    return D_801E1290.unk4 == arg1;
}



s32 func_801CFE60(void) {
    return D_801DAEB0;
}



s32 func_801CFE6C(void) {
    return D_801DAEB4;
}


u8 *func_801CFE78(void) {
    return &D_801E12A0;
}


u8 *func_801CFE84(void) {
    return &D_801E12B0;
}



void func_801CFE90(s32 arg0) {
    func_80006214();
    D_801DAEF4 = func_801C354C(arg0) == 0;
}



void func_801CFEC0(s32 arg0, s32 arg1) {
    D_801E12C0 = arg0;
    D_801DAF18 = 0;
    D_801DAF1C = 0;
    D_801DAF40 = 1;
    D_801DAF00 = 0;
    func_8013B570(arg0, 0x57, 0, 4, func_801CFF24);
}



struct func_801CFF24_Struct {
    u8 pad[0x24];
    s32 unk24;
};

void func_801CFF24(struct func_801CFF24_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x57, 0);
        if (D_801DAF44 != 0) {
            func_80006214(arg0);
            *(s32 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x30) + 0x2C) + 0x28) = *(s32 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 4) + 0x18);
            *(u16 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x30) + 0x2C) + 0) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 0);
            *(u16 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x30) + 0x2C) + 0x2C) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 2);
            *(s32 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x24) + 0x2C) + 0x28) = *(s32 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 4) + 0x1C);
            *(u16 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x24) + 0x2C) + 0) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 0);
            *(u16 *)(*(s32 *)(*(s32 *)(D_8008DA88 + 0x24) + 0x2C) + 0x2C) = *(u16 *)(*(s32 *)(*(s32 *)(D_80171CF0 + 0x158) + 0) + 2);
        }
        func_800058DC(arg0, func_801D003C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801CFF24);
}


typedef struct func_801D003C_StructData {
    u16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u32 unk28;
    u16 unk2C;
} func_801D003C_StructData;
typedef struct func_801D003C_StructObject {
    u8 pad0[0x22];
    s8 unk22;
    u8 pad23;
    s32 unk24;
    u8 pad28[4];
    func_801D003C_StructData *unk2C;
    s32 unk30;
} func_801D003C_StructObject;
typedef struct func_801D003C_StructSource {
    u16 *unk0;
    void **unk4;
} func_801D003C_StructSource;
#undef OBJ
#define OBJ ((func_801D003C_StructObject *)D_801DAF34)

void func_801D003C(func_801D003C_StructObject *arg0, func_801D003C_StructObject *arg1) {
    func_801D003C_StructData *temp_a0;

    if (arg0->unk24 != 0) {
        if (D_801DAF38 != 0) {
            D_801DAF34 = (u8 *)func_80005FAC(arg0, arg1->unk30, D_801DAF20);
            *(s32 *)((u8 *)OBJ->unk2C + 0x28) = (s32)(*(func_801D003C_StructSource **)(D_80171CF0 + 0x10E0))->unk4[0];
            OBJ->unk2C->unk0 = *(*(func_801D003C_StructSource **)(D_80171CF0 + 0x10E0))->unk0;
            OBJ->unk2C->unk2C = (*(func_801D003C_StructSource **)(D_80171CF0 + 0x10E0))->unk0[1];
            OBJ->unk2C->unk4 = 0.0f;
            OBJ->unk2C->unk8 = 0.0f;
            OBJ->unk2C->unkC = 0.0f;
            OBJ->unk2C->unk12 = 0;
            OBJ->unk2C->unk18 = 5.0f;
            OBJ->unk2C->unk1C = 5.0f;
            OBJ->unk2C->unk20 = 5.0f;
            temp_a0 = OBJ->unk2C;
            temp_a0->unk24 |= 0x40015;
            OBJ->unk22 = D_801DAF3C;
        } else {
            D_801DAF34 = 0;
            D_801DAF3C = 0;
        }
        func_800058DC(arg0, (void (*)(void))func_801D01B4);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D003C);
}

#define D_801E12D8 D_801E12D8__func_801D01B4
#define func_801D0454_Struct func_801D0454_Struct__func_801D01B4
struct func_801D0454_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801D0454_Struct D_801E12D8;

extern void func_801D0528(void *);
extern u8 D_801D01B4[];

struct func_801D01B4_In {
    u8 pad[0x76];
    u8 unk76;
};
struct func_801D01B4_A0 {
    u8 pad[0x5C];
    struct func_801D01B4_In *unk5C;
};
void func_801D01B4(struct func_801D01B4_A0 *arg0, struct func_801CEA50_O *arg1) {
    struct func_801CEA50_F3 *p;

    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801D01B4);
        return;
    }
    if (D_801DAF18 != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801CEA50_S3 *)D_801DAF18);
        p = (struct func_801CEA50_F3 *)arg0->unk5C;
        ((struct func_801D01B4_In *)p)->unk76 = 1;
        D_801DAF18 = 0;
    }
    p = (struct func_801CEA50_F3 *)D_801DAF1C;
    if (p != 0) {
        if (func_80011140(arg1, arg0->unk5C, *p, (u32)p->c) != 0) {
            D_801DAF1C = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->unk5C) != 0) {
            D_801DAF40 = 1;
        } else {
            D_801DAF40 = 0;
        }
        *(struct func_801CEA50_S3 *)&D_801E12D8 = *(struct func_801CEA50_S3 *)&arg1->u4->u2C->u5C;
        *(struct func_801CEA50_S3 *)&D_801E12C8 = *(struct func_801CEA50_S3 *)(D_801BC025 + 3);
    }
    if (D_801DAF38 != 0) {
        *(u8 *)(D_801DAF34 + 0x22) = D_801DAF3C;
    }
    if (D_801DAF00 != 0) {
        func_801D0528(arg0);
    }
}
#undef D_801E12D8
#undef func_801D0454_Struct



void func_801D03E0(s32 arg0) {
    D_801DAF38 = arg0;
}



void func_801D03EC(s32 arg0) {
    D_801DAF3C = arg0;
}



s32 func_801D03F8(void) {
    return D_801DAF1C != 0;
}



s32 func_801D0408(void) {
    if (D_801DAF1C != 0) {
        return 0;
    }
    if (D_801DAF18 != 0) {
        return 0;
    }
    return D_801DAF40;
}


u8 *func_801D0448(void) {
    return &D_801E12C8;
}


struct func_801D0454_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D0454_Struct D_801E12D8;

s32 func_801D0454(s32 arg0, u16 arg1) {
    if (arg0 != D_801E12D8.unk0) {
        return 0;
    }
    return D_801E12D8.unk4 == arg1;
}



void func_801D048C(s32 arg0) {
    D_801DAF44 = arg0;
}

/* hh-block asm/nonmatchings/file025/801CE760/_mrg_keep_b7e022f41b53143d.s {"functions":["func_801D0498"],"rodata":[[".late_rodata","asm/nonmatchings/file025/801CE760/func_801CF700.s","D_801DD458"],[".late_rodata","asm/nonmatchings/file025/801CE760/func_801CF5A0.s","D_801DD450"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/_mrg_keep_b7e022f41b53143d.s")



void func_801D04F8(void) {
    func_80006214(D_801E12C0);
    *(u8 *)(*(u8 **)(D_8008DA88 + 0x4C) + 0x22) = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0528.s")

