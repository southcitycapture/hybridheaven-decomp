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
extern u8 D_8008DA88[];
extern u8 D_80171CF0[];
extern u8 D_801BC025[];
extern u8 D_801CFAC8[];
extern u8 D_801CFF24[];
extern u8 D_801D9FE8[];
extern u8 D_801DA028[];
extern u8 D_801DAED4[];
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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CE830.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEF20.s")



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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF450.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF5A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF700.s")



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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D003C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D01B4.s")



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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0498.s")



void func_801D04F8(void) {
    func_80006214(D_801E12C0);
    *(u8 *)(*(u8 **)(D_8008DA88 + 0x4C) + 0x22) = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0528.s")

