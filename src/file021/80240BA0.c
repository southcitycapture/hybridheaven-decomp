#include "common.h"

#define D_801BBCD8 D_801BBCD8__func_80240BA0
#define D_80256EF4 D_80256EF4__func_80240BA0
#define func_800058DC func_800058DC__func_80240BA0
#define func_8011AAF4 func_8011AAF4__func_80240BA0
#define func_801FBB20 func_801FBB20__func_80240BA0
#define func_80240C74 func_80240C74__func_80240BA0
extern void func_800058DC(void *, void *);
void func_80240C74(s32 arg0, s32 arg1);


struct func_80240BA0_Inner {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_80240BA0_Outer {
    u8 pad0[0x2C];
    struct func_80240BA0_Inner *unk2C;
};

extern struct func_80240BA0_Outer *D_801BBCD8;
extern u8 D_80256EF4[];
extern void func_8011AAF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, s32 a15, s32 a16);
extern void func_801FBB20(void);

void func_80240BA0(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_8011AAF4(D_80256EF4, 0xD4, arg0, 2, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800058DC((void *)arg0, &func_80240C74);
    }
}
#undef D_801BBCD8
#undef D_80256EF4
#undef func_800058DC
#undef func_8011AAF4
#undef func_801FBB20
#undef func_80240C74


void func_80240C74(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80240CF8 func_80240CF8__func_80240C80

struct func_80240C80_Inner {
    s16 pad0;
    u16 unk2;
};

struct func_80240C80_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
    u8 pad2[0x14];
    struct func_80240C80_Inner *unk38;
};

extern s32 func_80126CC0(void *, void *);
extern void func_8001F74C();
extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80127014();
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_80240CF8();

void func_80240C80(void *arg0, s32 arg1) {
    struct func_80240C80_Struct *s;

    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_8001F74C(arg0);
        s = arg0;
        s->unk18 = func_8012E5B0;
        s->unk20 = func_8012E6BC;
        func_8013B570(arg0, s->unk38->unk2, 2, 4, func_80240CF8);
    }
}
#undef func_80240CF8

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80240BA0/D_80256F50.s")

#define func_80240E30 func_80240E30__func_80240CF8
struct func_80240E30_Struct;
extern struct func_80240E30_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
struct func_80240CF8_Pos { u8 pad0[4]; f32 x; f32 y; f32 z; };
struct func_80240CF8_A { u8 pad0[0x63]; u8 f63; };
struct func_80240CF8_B { u8 pad0[0x2C]; struct func_80240CF8_Pos *pos; };
struct func_80240CF8_G {
    u8 pad0[0xDC];
    struct func_80240CF8_A *a;
    struct func_80240CF8_B *b;
    u8 pad1[0x192-0xE4];
    s16 f192;
    u8 pad2[4];
    f32 f198;
    u8 pad3[4];
    f32 f1A0;
    u8 pad4[0xF00-0x1A4];
    s16 fF00;
    u8 pad5[2];
    f32 fF04;
    f32 fF08;
    s16 fF0C;
    u8 pad6[2];
    s32 fF10;
    f32 fF14;
    f32 fF18;
};

extern void func_801268F4(s32);
void func_80240E30(s32 arg0, s32 arg1);

#define G ((struct func_80240CF8_G *)&D_801BBBF0)

void func_80240CF8(void *arg0, s32 arg1) {
    struct func_80240CF8_Pos *p;
    f32 dx, dy, dz;
    if (G->a->f63 != 0 && func_80133A24(0x1A1) == 0) {
        p = G->b->pos;
        dx = 430.0f - p->x;
        dy = -500.0f - p->y;
        dz = 128.0f - p->z;
        if (!(9604.0f < dx * dx + dy * dy + dz * dz)) {
            func_801268F4(0);
            G->f192 = 5;
            G->f198 = 399.0f;
            G->f1A0 = 177.0f;
            G->fF14 = 382.0f;
            G->fF18 = 169.0f;
            G->fF04 = 0.300000012f;
            G->fF08 = 1.0f;
            G->fF10 = 0x0168003E;
            G->fF0C = 0;
            G->fF00 = 0x1100;
            func_800058DC(arg0, (void *)func_80240E30);
        }
    }
}
#undef func_80240E30

#define func_80240E94 func_80240E94__func_80240E30

struct func_80240E30_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x196 - 0x44];
    u16 unk196;
    u8 pad2[0x1088 - 0x198];
    s32 unk1088;
    u8 pad3[0x10A0 - 0x108C];
    s32 unk10A0;
};

extern u8 D_80245DFC[];
extern void func_80240E94(u64 arg0);
void func_80203830(s32 arg0, void *arg1);

void func_80240E30(s32 arg0, s32 arg1) {
    if (D_801BBBF0.unk196 == 1) {
        func_80203830(arg0, D_80245DFC);
        D_801BBBF0.unk1088 = arg0;
        D_801BBBF0.unk10A0 = D_801BBBF0.unk40;
        func_800058DC(arg0, func_80240E94);
    }
}
#undef func_80240E94

#define func_80240ECC func_80240ECC__func_80240E94

s32 func_8020394C(u64 arg0);                          /* extern */
extern void func_80240ECC(s32 arg0);

void func_80240E94(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80240ECC);
    }
}
#undef func_80240ECC

#define func_80240F00 func_80240F00__func_80240ECC

extern s32 func_802039B0();
extern void func_80240F00(s32 arg0, s32 arg1);

void func_80240ECC(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80240F00);
    }
}
#undef func_80240F00


void func_80240F00(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80241020 func_80241020__func_80240F0C

extern s32 func_8012AF88(f32, f32, f32, f32, f32, f32, s32);

void func_80241020(s32 arg0, s32 arg1);

#define GG ((struct func_80240CF8_G *)&D_801BBBF0)

void func_80240F0C(s32 arg0, s32 arg1) {
    f32 t;

    if (GG->a->f63 != 0 && *(u16 *)&GG->pad1[0x18E - 0xE4] == 0 &&
        func_80133A24(0x1A7) == 0 &&
        func_8012AF88(0.600000024f, -364.0f, -739.0f, 0.600000024f, -720.0f, 30.0f, 0) != 0) {
        func_801268F4(0);
        t = 0.600000024f;
        GG->f192 = 5;
        GG->f198 = t;
        GG->f1A0 = (-739.0f);
        GG->fF14 = t;
        GG->fF18 = -720.0f;
        GG->fF04 = 0.300000012f;
        GG->fF08 = 1.0f;
        GG->fF10 = 0x0168003E;
        GG->fF0C = 0;
        GG->fF00 = 0x1100;
        func_800058DC((void *)arg0, (void *)func_80241020);
    }
}
#undef func_80241020

#define func_80241070 func_80241070__func_80241020

extern void func_80241070();

struct func_80241020_Struct {
    u8 pad0[0x192];
    u16 unk192;
    u16 unk194;
    u16 unk196;
};

void func_80241020(s32 arg0, s32 arg1) {
    func_8001F74C((void *) arg0);
    if (((struct func_80241020_Struct *) &D_801BBBF0)->unk196 == 1) {
        ((struct func_80241020_Struct *) &D_801BBBF0)->unk192 = 1;
        func_800058DC((void *) arg0, (void *) func_80241070);
    }
}
#undef func_80241070

#define func_802410C0 func_802410C0__func_80241070
void func_802410C0(s32 arg0);

extern u8 D_80247B48[];

void func_80241070(s32 arg0, s32 arg1) {
    u8 *base;

    func_80203830(arg0, D_80247B48);
    base = (u8 *) &D_801BBBF0;
    *(s32 *) (base + 0x10A0) = *(s32 *) (base + 0x40);
    {
        extern s32 func_8020394C();
        func_8020394C();
    }
    func_800058DC((void *) arg0, &func_802410C0);
}
#undef func_802410C0

#define func_802410F4 func_802410F4__func_802410C0

extern void func_802410F4(s32 arg0, s32 arg1);

void func_802410C0(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_802410F4);
    }
}
#undef func_802410F4


void func_802410F4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern s32 D_801BCCF0;

typedef struct func_80241100_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80241100_Struct;

void func_80241100(void) {
    ((func_80241100_Struct *)D_801BCCF0)->unk92 = 1;
}


extern s32 func_8001E978(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_801BCC78;

void func_80241114(void) {
    func_8001E978(D_801BCC78, 0, 0, 0, 0xF, 0, 2, 0);
}

#define func_802411D0 func_802411D0__func_8024115C

struct func_8024115C_Sub {
    u8 pad0[2];
    u16 unk2;
};

struct func_8024115C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    struct func_8024115C_Sub *unk38;
};

extern void func_80020744(s32);
extern void func_802411D0();

void func_8024115C(struct func_8024115C_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80127014) != 0) {
        arg0->unk18 = (void *)func_8012E5B0;
        arg0->unk20 = (void *)func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, (void *)func_802411D0);
        func_80020744(0x5C4);
    }
}
#undef func_802411D0

#define func_8024133C func_8024133C__func_802411D0
void func_8024133C(u64 arg0);

typedef struct func_802411D0_StructArgs {
    s32 a, b, c, d, e;
} func_802411D0_StructArgs;
typedef struct func_802411D0_StructObj {
    u8 pad0[0x35];
    u8 unk35;
    u8 pad1[0x72 - 0x36];
    u16 unk72;
    u8 pad2[0x90 - 0x74];
    u16 unk90;
} func_802411D0_StructObj;
typedef struct func_802411D0_StructGlobal {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
    u8 pad1[0x104 - 0x48];
    u16 unk104;
    u8 pad2[0x1088 - 0x106];
    func_802411D0_StructObj *unk1088;
    u8 pad3[0x10A0 - 0x108C];
    s32 unk10A0;
    u8 pad4[0x10B8 - 0x10A4];
    func_802411D0_StructObj *unk10B8;
    u8 pad5[0x10D0 - 0x10BC];
    func_802411D0_StructObj *unk10D0;
    u8 pad6[0x1100 - 0x10D4];
    func_802411D0_StructObj *unk1100;
} func_802411D0_StructGlobal;
extern func_802411D0_StructObj *func_8012C4D0(void *, func_802411D0_StructArgs, s32);
extern func_802411D0_StructObj *func_80005670(s32, void *);
extern u8 D_8024823C[];
extern func_802411D0_StructArgs D_8024F230;
extern func_802411D0_StructArgs D_8024F244;
extern u8 D_8024F258[];

void func_802411D0(func_802411D0_StructObj *arg0, s32 arg1) {
    func_802411D0_StructObj *temp;
    #define G ((func_802411D0_StructGlobal *)&D_801BBBF0)
    func_8001F74C();
    func_80203830((s32)arg0, D_8024823C);
    G->unk1088 = arg0;
    G->unk10A0 = G->unk40;
    temp = func_8012C4D0(arg0, D_8024F230, 3);
    G->unk10B8 = temp;
    G->unk10B8->unk35 = G->unk104;
    G->unk104++;
    temp = func_8012C4D0(arg0, D_8024F244, 3);
    G->unk10D0 = temp;
    G->unk10D0->unk90 = arg0->unk72;
    G->unk10D0->unk35 = G->unk104;
    G->unk104++;
    temp = func_80005670(G->unk44, D_8024F258);
    G->unk1100 = temp;
    G->unk1100->unk90 = arg0->unk72;
    G->unk1100->unk35 = G->unk104;
    G->unk104++;
    func_800058DC(arg0, func_8024133C);
}
#undef func_8024133C

#define func_80241374 func_80241374__func_8024133C

extern void func_80241374(s32 arg0);

void func_8024133C(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80241374);
    }
}
#undef func_80241374

#define func_802413A8 func_802413A8__func_80241374
void func_802413A8(s32 arg0, s32 arg1);


void func_80241374(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_802413A8);
    }
}
#undef func_802413A8


extern void func_8012FE50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s16 D_801BBBF6;

void func_802413A8(s32 arg0, s32 arg1) {
    D_801BBBF6 = 1;
    func_8012FE50(0x1E, 0x54, 6, 1, 1);
}

#define func_80241438 func_80241438__func_802413F0

typedef struct func_802413F0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802413F0_Struct;

extern s32 func_80126B14(void *, void *, u16, s32);
extern void func_80241438();

void func_802413F0(func_802413F0_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x32) != 0) {
        func_800058DC((s32)arg0, func_80241438);
    }
}
#undef func_80241438

#define func_80241494 func_80241494__func_80241438
void func_80241494(s32 arg0, s32 arg1);

typedef struct func_80241438_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
} func_80241438_Struct;


void func_80241438(func_80241438_Struct *arg0, s32 arg1) {
    func_8001F74C();
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, 0x32, 0, 4, func_80241494);
}
#undef func_80241494


void func_80241494(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_802414E8 func_802414E8__func_802414A0

typedef struct func_802414A0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802414A0_Struct;

extern void func_802414E8();

void func_802414A0(func_802414A0_Struct *arg0, s32 arg1) {
    if (func_80126B14(arg0, func_80127014, arg0->unk90, 0x31) != 0) {
        func_800058DC((s32)arg0, func_802414E8);
    }
}
#undef func_802414E8

#define func_80241544 func_80241544__func_802414E8

typedef struct func_802414E8_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[0x4];
    void *unk20;
} func_802414E8_Struct;

extern void func_80241544(void *arg0, s32 arg1);

void func_802414E8(func_802414E8_Struct *arg0, s32 arg1) {
    func_8001F74C();
    arg0->unk18 = func_8012E5B0;
    arg0->unk20 = func_8012E6BC;
    func_8013B570(arg0, 0x31, 0, 4, func_80241544);
}
#undef func_80241544

#define func_802416C8 func_802416C8__func_80241544
typedef struct func_802416C8_Struct2 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_802416C8_Struct2;
typedef struct func_802416C8_Struct1 {
    u8 pad0[0x2C];
    func_802416C8_Struct2 *unk2C;
} func_802416C8_Struct1;
typedef struct func_802416C8_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_802416C8_Struct0;
void func_802416C8(func_802416C8_Struct0 *arg0, func_802416C8_Struct1 **arg1);
typedef struct func_80241544_StructObj {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    u32 unk30;
    u8 pad2[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80241544_Obj;

typedef struct func_80241544_StructEnt {
    u8 pad0[0x2C];
    func_80241544_Obj *unk2C;
} func_80241544_Ent;

typedef struct func_80241544_StructArg1 {
    func_80241544_Ent *unk0;
    func_80241544_Ent *unk4;
    u8 pad8[0x34 - 0x8];
    func_80241544_Ent *unk34;
    func_80241544_Ent *unk38;
    func_80241544_Ent *unk3C;
    func_80241544_Ent *unk40;
    func_80241544_Ent *unk44;
    func_80241544_Ent *unk48;
} func_80241544_Arg1;

typedef struct func_80241544_StructCnt {
    u8 pad0[0xC];
    u16 unkC;
} func_80241544_Cnt;

extern u8 D_8024F0E0[];

void func_80241544(void *arg0, s32 arg1)
{
  func_80241544_Arg1 *a1;
  func_80241544_Ent **arr;
  func_80241544_Cnt *cnt;
  s32 i;
  a1 = (func_80241544_Arg1 *) arg1;
  arr = (func_80241544_Ent **) arg1;
  cnt = *((func_80241544_Cnt **) (((u8 *) arg0) + 0x5C));
 i = 1; while (i < cnt->unkC) {
    arr[i]->unk2C->unk24 |= 0x100;
    arr[i]->unk2C->unk30 = ((u32) D_8024F0E0) | 0x40000000;
    arr[i]->unk2C->unk48 = 0x3C;
    arr[i]->unk2C->unk49 = 0xFF;
    arr[i]->unk2C->unk4A = 0x3C;
    arr[i]->unk2C->unk4B = 0xB4;
    i++;
  }

  a1->unk4->unk2C->unk4B = 0xA2;
  a1->unk40->unk2C->unk4B = 0x7D;
  a1->unk34->unk2C->unk4B = a1->unk40->unk2C->unk4B;
  a1->unk44->unk2C->unk4B = 0x5A;
  a1->unk38->unk2C->unk4B = a1->unk44->unk2C->unk4B;
  a1->unk48->unk2C->unk4B = 0x36;
  if (!arr)
  {
  }
  a1->unk3C->unk2C->unk4B = a1->unk48->unk2C->unk4B;
  a1->unk0->unk2C->unk18 = 0.0f;
  a1->unk0->unk2C->unk1C = 0.0f;
  a1->unk0->unk2C->unk20 = 0.0f;
  func_800058DC(arg0, (void *) func_802416C8);
}
#undef func_802416C8


extern void func_80241730();

void func_802416C8(func_802416C8_Struct0 *arg0, func_802416C8_Struct1 **arg1) {
    if (arg0->unk92 != 0) {
        (*arg1)->unk2C->unk18 = 0.0f;
        (*arg1)->unk2C->unk1C = 0.0f;
        (*arg1)->unk2C->unk20 = 0.00999999978f;
        arg0->unk92 = 0xC8;
        func_800058DC((s32) arg0, (void *) func_80241730);
    }
}

#define func_802417AC func_802417AC__func_80241730
#define func_802417AC_Struct func_802417AC_Struct__func_80241730
typedef struct func_802417AC_Struct {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_802417AC_Struct;
extern void func_802417AC(func_802417AC_Struct *arg0, s32 arg1);

typedef struct func_80241730_Struct1 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241730_Struct1;

typedef struct func_80241730_Struct3 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
} func_80241730_Struct3;

typedef struct func_80241730_Struct2 {
    u8 pad0[0x2C];
    func_80241730_Struct3 *unk2C;
} func_80241730_Struct2;


void func_80241730(func_80241730_Struct1 *arg0, func_80241730_Struct2 **arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80241730_Struct3 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_f0 = 0.00005;
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = (*arg1)->unk2C;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + temp_f0);
        return;
    }
    arg0->unk92 = 0;
    func_800058DC(arg0, func_802417AC);
}
#undef func_802417AC
#undef func_802417AC_Struct

#define func_802417F0 func_802417F0__func_802417AC

typedef struct func_802417AC_Struct {
    u8 pad[0x92];
    u16 unk92;
    u8 unk94;
} func_802417AC_Struct;

extern void func_802417F0();

void func_802417AC(func_802417AC_Struct *arg0, s32 arg1) {
    arg0->unk94 = arg0->unk94 + 1;
    if (arg0->unk92 != 0) {
        arg0->unk92 = 0xA;
        func_800058DC((s32) arg0, (void *) func_802417F0);
    }
}
#undef func_802417F0

/* starting point: func_80240F14 (file022), whose assembly is 100% the same as this function's */

struct func_802417F0_Inner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_802417F0_Arg0 {
    u8 pad[0x24];
    struct func_802417F0_Inner *unk24;
    u8 pad2[0x92 - 0x28];
    u16 unk92;
};

struct func_802417F0_Vec {
    u8 pad[0x18];
    f32 unk18;
    u8 pad2[0x20 - 0x1C];
    f32 unk20;
};

struct func_802417F0_Obj {
    u8 pad[0x2C];
    struct func_802417F0_Vec *unk2C;
};

void func_802417F0(struct func_802417F0_Arg0 *arg0, struct func_802417F0_Obj **arg1) {
    f64 temp_f0;
    struct func_802417F0_Vec *temp_v1;

    if (arg0->unk92 != 0) {
        temp_f0 = 0.001;
        arg0->unk92 = arg0->unk92 - 1;
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk18 = (f32) ((f64) temp_v1->unk18 - temp_f0);
        temp_v1 = (*arg1)->unk2C;
        temp_v1->unk20 = (f32) ((f64) temp_v1->unk20 - temp_f0);
        return;
    }
    arg0->unk24->unk22 = 0;
}


typedef struct func_80241854_Struct {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
} func_80241854_Struct;

extern u8 func_80126EAC[];
extern u8 func_802418A4[];

void func_80241854(func_80241854_Struct *arg0, s32 arg1) {
    if (arg0->unk92 != 0) {
        if (func_80126B14(arg0, func_80126EAC, arg0->unk90, 9) != 0) {
            func_800058DC((s32)arg0, func_802418A4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80240BA0/func_802418A4.s")

#define func_80241CE0 func_80241CE0__func_80241C8C
typedef struct func_80241CE0_Struct1 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241CE0_Struct1;
typedef struct func_80241CE0_Struct3 {
    u8 pad0[0x1C];
    f32 unk1C;
} func_80241CE0_Struct3;
typedef struct func_80241CE0_Struct2 {
    u8 pad0[0x30];
    func_80241CE0_Struct3 *unk30;
} func_80241CE0_Struct2;
typedef struct func_80241CE0_Struct4 {
    u8 pad0[0x14];
    func_80241CE0_Struct2 *unk14;
} func_80241CE0_Struct4;
void func_80241CE0(func_80241CE0_Struct1 *arg0, func_80241CE0_Struct4 *arg1);

typedef struct func_80241C8C_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241C8C_Struct0;

typedef struct func_80241C8C_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_80241C8C_Struct2;

typedef struct func_80241C8C_Struct1 {
    u8 pad0[0x30];
    func_80241C8C_Struct2 *unk30;
} func_80241C8C_Struct1;

typedef struct func_80241C8C_Struct3 {
    u8 pad0[0x18];
    func_80241C8C_Struct1 *unk18;
} func_80241C8C_Struct3;

void func_80241C8C(func_80241C8C_Struct0 *arg0, func_80241C8C_Struct3 *arg1) {
    s32 temp_v0;
    func_80241C8C_Struct2 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk18->unk30;
        temp_v0_2->unk4B = temp_v0_2->unk4B + 0xC;
        return;
    }
    arg0->unk92 = 0x14;
    func_800058DC(arg0, (void *) func_80241CE0);
}
#undef func_80241CE0

#define func_80241D58 func_80241D58__func_80241CE0

extern void func_80241D58();

void func_80241CE0(func_80241CE0_Struct1 *arg0, func_80241CE0_Struct4 *arg1) {
    s32 temp_v0;
    func_80241CE0_Struct3 *temp_v0_2;

    temp_v0 = arg0->unk92;
    arg0->unk92 = temp_v0 - 1;
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk1C = (f32) ((f64) temp_v0_2->unk1C + 0.0005);
        return;
    }
    arg0->unk92 = 0x14;
    func_80020744(0x234);
    func_800058DC((s32) arg0, func_80241D58);
}
#undef func_80241D58

/* starting point: func_80241484 (file022), whose assembly is 100% the same as this function's */

typedef struct func_80241D58_Struct_Inner {
    u8 pad0[0x18];
    f32 unk18;
    u8 pad1[4];
    f32 unk20;
} func_80241D58_Struct_Inner;

typedef struct func_80241D58_Struct_Obj {
    u8 pad0[0x30];
    func_80241D58_Struct_Inner *unk30;
} func_80241D58_Struct_Obj;

typedef struct func_80241D58_Struct_Arg1 {
    u8 pad0[0x14];
    func_80241D58_Struct_Obj *unk14;
} func_80241D58_Struct_Arg1;

typedef struct func_80241D58_Struct_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241D58_Struct_Arg0;

extern func_80241D58_Struct_Arg0 *D_801BCCC0;

extern void func_80241DEC();

void func_80241D58(func_80241D58_Struct_Arg0 *arg0, func_80241D58_Struct_Arg1 *arg1) {
    s32 temp_v0;
    f64 temp_f0;
    func_80241D58_Struct_Inner *temp_v0_2;
    func_80241D58_Struct_Inner *temp_v0_3;
    func_80241D58_Struct_Arg0 *temp_v0_4;

    temp_v0 = arg0->unk92;
    arg0->unk92 = (u16) (temp_v0 - 1);
    if (temp_v0 != 0) {
        temp_f0 = 0.0005;
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk18 = (f32) ((f64) temp_v0_2->unk18 + temp_f0);
        temp_v0_2 = arg1->unk14->unk30;
        temp_v0_2->unk20 = (f32) ((f64) temp_v0_2->unk20 + temp_f0);
        return;
    }
    D_801BCCC0->unk92 = 1;
    func_800058DC(arg0, (void *) func_80241DEC);
    arg0->unk92 = 0;
}

#define func_80241D58_Struct_Arg0 func_80241D58_Struct_Arg0__func_80241DEC
#define func_80241F00 func_80241F00__func_80241DEC
#define func_80241F00_Arg0 func_80241F00_Arg0__func_80241DEC
#define func_80241F00_Arg1 func_80241F00_Arg1__func_80241DEC
#define func_80241F00_Mid func_80241F00_Mid__func_80241DEC
#define func_80241F00_Obj func_80241F00_Obj__func_80241DEC
typedef struct func_80241D58_Struct_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80241D58_Struct_Arg0;
struct func_80241F00_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
};
struct func_80241F00_Obj {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_80241F00_Mid {
    u8 pad0[0x30];
    struct func_80241F00_Obj *unk30;
};
struct func_80241F00_Arg1 {
    u8 pad0[0x14];
    struct func_80241F00_Mid *unk14;
    struct func_80241F00_Mid *unk18;
};
extern void func_80241F00(struct func_80241F00_Arg0 *arg0, struct func_80241F00_Arg1 *arg1);

struct func_80241DEC_Struct_E { u8 pad0[0x8]; f32 unk8; u8 pad1[0x4B - 0xC]; u8 unk4B; };
struct func_80241DEC_Struct_O { u8 pad0[0x30]; struct func_80241DEC_Struct_E *unk30; };

void func_80241DEC(func_80241D58_Struct_Arg0 *arg0, struct func_80241DEC_Struct_O **arg1) {
    s32 i;

    for (i = 0; i < 5; i++) {
        arg1[i]->unk30->unk8 = arg1[i]->unk30->unk8 + 0.125;
        if (arg1[i]->unk30->unk8 >= 21.0f) {
            arg1[i]->unk30->unk8 = 3.0f;
        }
    }
    if (arg0->unk92 != 0) {
        for (i = 0; i < 5; i++) {
            arg1[i]->unk30->unk4B = 0;
        }
        D_801BCCC0->unk92 = 1;
        func_80020744(0x64F);
        arg0->unk92 = 0x14;
        func_800058DC(arg0, func_80241F00);
    }
}
#undef func_80241D58_Struct_Arg0
#undef func_80241F00
#undef func_80241F00_Arg0
#undef func_80241F00_Arg1
#undef func_80241F00_Mid
#undef func_80241F00_Obj


struct func_80241F00_Obj {
    u8 pad0[0x4B];
    u8 unk4B;
};

struct func_80241F00_Mid {
    u8 pad0[0x30];
    struct func_80241F00_Obj *unk30;
};

struct func_80241F00_Arg1 {
    u8 pad0[0x14];
    struct func_80241F00_Mid *unk14;
    struct func_80241F00_Mid *unk18;
};

struct func_80241F00_Arg0 {
    u8 pad0[0x92];
    u16 unk92;
};

void func_80241F00(struct func_80241F00_Arg0 *arg0, struct func_80241F00_Arg1 *arg1) {
    struct func_80241F00_Obj *temp_a2;
    struct func_80241F00_Obj *temp_v1;
    s32 temp_v0;

    temp_v0 = arg0->unk92;
    if (temp_v0 != 0) {
        arg0->unk92 = (u16) (temp_v0 - 1);
        temp_v1 = arg1->unk14->unk30;
        temp_v1->unk4B = (u8) (temp_v1->unk4B - 6);
        temp_a2 = arg1->unk18->unk30;
        temp_a2->unk4B = (u8) (temp_a2->unk4B - 0xC);
        return;
    }
    arg1->unk14->unk30->unk4B = 0;
}


typedef struct func_80241F50_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    struct func_80241F50_StructB *unk38;
} func_80241F50_Struct;

typedef struct func_80241F50_StructB {
    u8 pad0[2];
    u16 unk2;
} func_80241F50_StructB;

#define func_80241FBC func_80241FBC__decl994
extern u8 func_80241FBC[];

void func_80241F50(func_80241F50_Struct *arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_80241FBC);
    }
}
#undef func_80241FBC

#define D_8024F26C D_8024F26C__func_80241FBC
#define func_8020394C func_8020394C__func_80241FBC
#define func_8024201C func_8024201C__func_80241FBC
extern void func_8024201C(s32 arg0, s32 arg1);

extern u8 D_8024F26C[];
extern void func_8020394C();

void func_80241FBC(s32 arg0, s32 arg1) {
    func_8001F74C();
    func_80203830(arg0, D_8024F26C);
    *(s32 *)((u8 *)&D_801BBBF0 + 0x1088) = arg0;
    *(s32 *)((u8 *)&D_801BBBF0 + 0x10A0) = *(s32 *)((u8 *)&D_801BBBF0 + 0x40);
    func_8020394C();
    func_800058DC((void *)arg0, (void *)func_8024201C);
}
#undef D_8024F26C
#undef func_8020394C
#undef func_8024201C

#define func_80242044 func_80242044__func_8024201C

extern void func_80242044();

void func_8024201C(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80242044);
}
#undef func_80242044

#define func_802421B0 func_802421B0__func_80242044
void func_802421B0(s32 arg0, s32 arg1);

struct func_80242044_Inner {
    u8 pad0[0x30];
    f32 f[6];
};
struct func_80242044_Obj {
    u8 pad0[0x2C];
    struct func_80242044_Inner *unk2C;
};
struct func_80242044_G {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad1[0xE8 - 0x32];
    struct func_80242044_Obj *volatile unkE8;
    u8 pad2[0x104C - 0xEC];
    s32 v[6];
};
extern u16 D_801BBC20;
#define G (*(struct func_80242044_G *)&D_801BBBF0)

void func_80242044(s32 arg0, s32 arg1) {
    s32 v;

    G.v[0] = G.unkE8->unk2C->f[0] * 1000.0f;
    G.v[1] = G.unkE8->unk2C->f[1] * 1000.0f;
    G.v[2] = G.unkE8->unk2C->f[2] * 1000.0f;
    G.v[3] = G.unkE8->unk2C->f[3] * 1000.0f;
    G.v[4] = G.unkE8->unk2C->f[4] * 1000.0f;
    G.v[5] = G.unkE8->unk2C->f[5] * 1000.0f;
    if (func_80133A24(0x2A6) != 0) {
        v = G.unk30;
        if ((v % 10) == 0) {
            func_80020744(0x67B);
            v = D_801BBC20;
        }
        if (!(v % 8)) {
            func_80020744(0x6BE);
        }
    }
    if (func_802039B0(arg0, arg1) != 0) {
        func_800058DC((void *)arg0, (void *)func_802421B0);
    }
}
#undef func_802421B0



void func_802421B0(s32 arg0, s32 arg1) {
    func_80020744(7);
    func_8012FE50(0xF, 0x5A, 6, 2, 2);
}

