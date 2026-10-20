#include "common.h"

extern f32 D_80249A90;
extern f32 D_80249AA8;
extern f32 D_80249AAC;
extern f32 D_80249AB0;
extern f32 D_80249AB4;
extern f32 D_80249AB8;
extern f32 D_80249AD4;
extern f32 D_80249AD8;
extern f32 D_80249ADC;
extern f32 D_80249B10;
extern f32 D_80249B14;
extern f32 D_80249B18;
extern f64 D_80249A98;
extern f64 D_80249AF0;
extern f64 D_80249B00;
extern f64 D_80249B08;
extern s16 D_801BBD84;
extern s32 D_801BBC30[];
extern s32 D_801BBC40;
extern s32 func_800178E8();
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801267B8(s32, s32);
extern s32 func_8012A564(void *, s32);
extern s32 func_8012C89C(void *, s32, s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_80150584();
extern s8 D_801BBD76;
extern u8 D_801BCAE0[];
extern u8 D_8024577C[];
extern u8 D_802458E0[];
extern u8 D_80245AD0[];
extern u8 D_802498E8[];
extern u8 D_80249958[];
extern u8 D_80249994[];
extern u8 D_802499D0[];
extern u8 func_802425F4[];
extern void *D_80171CEC[];
extern void func_80005670();
extern void func_80005700();
extern void func_800058DC(void *arg0, void *arg1);
extern void func_80005F6C();
extern void func_80006214();
extern void func_80017990(void *);
extern void func_80020744(s32);
extern void func_8012636C();
extern void func_801264D4(void *, s32, f32, f32, f32, s32);
extern void func_801268F4(s32);
extern void func_80126E88(s32, void *);
extern void func_80133980(s32, void *);
extern void func_801339D0(s32);
extern void func_801FBB30(void);
extern void func_802409AC();
extern void func_80240BE8();
extern void func_80240D00();
extern void func_80240D94();
extern void func_80240DF4(void);
extern void func_80240F00(s32 arg0, s32 arg1);
extern void func_80240F0C();
extern void func_80240F4C();
extern void func_802410F4(u8 *arg0, void *arg1);
extern void func_80241200(void);
extern void func_802412A8();
extern void func_802412FC();
extern void func_80241428(s32 arg0, s32 arg1);
extern void func_802414F8();
extern void func_802415D8(s32 arg0, s32 arg1);
extern void func_80241984();
extern void func_802419B4();
extern void func_80241AF0(u8 *arg0, s32 arg1);
extern void func_80241B88();
extern void func_80241D7C();
extern void func_80241F18();
extern void func_80241F88();
extern void func_80241FEC();
extern void func_80242064();
extern void func_802420C4();
extern void func_80242164();
extern void func_802421DC();
extern void func_8024224C();
extern void func_802422EC();
extern void func_80242364();
extern void func_802423C0();
extern void func_802424D8();

extern struct func_80241AF0_StructBBBF0 D_801BBBF0;

struct func_802408F0_Self {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    u8 pad2[0x8C - 0x38];
    void *unk8C;
};

void func_802408F0(struct func_802408F0_Self *arg0, s32 arg1) {
    if (func_80133A24(3) != 0) {
        func_80005700(arg0);
    }
    if (*(s32 *)((u8 *)&D_801BBBF0 + 0xE0) != 0) {
        *((u8 *)&D_801BBBF0 + 0x181) = 1;
        arg0->unk2C |= 0x8000;
        arg0->unk8C = (void *)func_80240F0C;
        if (func_801267B8((*(u16 *)*(void **)D_80171CEC[arg0->unk36] & 0x0FFFFFFF) & 0xFFFF, 0x3000) == 1) {
            func_800058DC(arg0, (void *)func_802409AC);
        }
    }
}


struct func_802409AC_StructY {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x24 - 0xC];
    u32 unk24;
    u8 pad2[0x30 - 0x28];
    u32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};
struct func_802409AC_StructX {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    struct func_802409AC_StructY *unk30;
};
struct func_802409AC_StructP {
    struct func_802409AC_StructX *unk0;
    struct func_802409AC_StructX *unk4;
};
struct func_80240B84_Struct;
extern void func_80240B84(struct func_80240B84_Struct *arg0, s32 arg1);
extern u8 D_80245D68[], D_80245D7C[], D_80245DA4[], D_80164F40[], D_8017B388[], D_8017B7F8[];

void func_802409AC(s32 arg0, struct func_802409AC_StructP *arg1) {
    func_80005670(D_801BBC30[1], D_80245D7C);
    func_80005670(D_801BBC30[1], D_80245D68);
    func_80005670(D_801BBC40, D_80245DA4);
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_8012636C(arg0, 1);
    arg1->unk0->unk30->unk24 |= 0x100;
    arg1->unk0->unk30->unk30 = (u32)D_8017B7F8 | 0x40000000;
    arg1->unk0->unk30->unk48 = 0;
    arg1->unk0->unk30->unk49 = 0xFF;
    arg1->unk0->unk30->unk4A = 0;
    arg1->unk0->unk30->unk4B = 0x80;
    arg1->unk0->unk30->unk8 = -10.0f;
    arg1->unk4->unk24 = 0x80000600;
    arg1->unk4->unk30->unk24 |= 0x100;
    arg1->unk4->unk30->unk30 = (u32)D_8017B388 | 0x40000000;
    arg1->unk4->unk30->unk48 = 0;
    arg1->unk4->unk30->unk49 = 0xFF;
    arg1->unk4->unk30->unk4A = 0;
    arg1->unk4->unk30->unk8 = -55.0f;
    func_8012C89C((void *)arg0, 0, 0x80, 4);
    func_8012C89C((void *)arg0, 1, 0x80, 3);
    {
        extern void func_80133980();
        func_80133980(4);
    }
    func_800058DC((void *)arg0, (void *)func_80240B84);
}


struct func_80240B84_Struct {
    u8 pad[0x90];
    s16 unk90;
};


void func_80240B84(struct func_80240B84_Struct *arg0, s32 arg1) {
    if (func_8012A564(arg0, 0x41700000) != 0) {
        func_801FBB30();
        arg0->unk90 = 0x46;
        func_801268F4(0);
        func_801339D0(4);
        func_800058DC(arg0, &func_80240BE8);
    }
}



void func_80240BE8(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_802498E8, 0xE6, arg0, 0, 2, 1.0f, 668.0f, 35.0f, 179.0f, 1.5f, D_80249A90, 18.0f, 249.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_80020744(0x1BF);
        *(s16 *)((u8 *)&D_801BBBF0 + 0x194) = 1;
        *(s16 *)((u8 *)&D_801BBBF0 + 0x192) = 4;
        *(s32 *)((u8 *)&D_801BBBF0 + 0xF10) = 0x03480017;
        *(s16 *)((u8 *)&D_801BBBF0 + 0xF0C) = 0;
        *(s16 *)((u8 *)&D_801BBBF0 + 0xF00) = 0x1000;
        *(f32 *)((u8 *)&D_801BBBF0 + 0xF08) = 6.5f;
        func_800058DC((void *)arg0, (void *)func_80240D00);
    }
}


struct func_80240D00_Inner {
    u8 pad[8];
    f32 unk8;
};
struct func_80240D00_Outer {
    u8 pad[0x30];
    struct func_80240D00_Inner *unk30;
};
struct func_80240D00_Struct0 {
    struct func_80240D00_Outer *unk0;
    struct func_80240D00_Outer *unk4;
};
struct func_80240D00_Self {
    u8 pad[0x90];
    s16 unk90;
};


void func_80240D00(struct func_80240D00_Self *arg0, struct func_80240D00_Struct0 *arg1) {
    struct func_80240D00_Inner *p;

    p = arg1->unk4->unk30;
    p->unk8 = (f32)((f64)p->unk8 + 0.5);
    if (arg0->unk90--) {
    } else {
        func_80020744(0x1C0);
        arg0->unk90 = 0x64;
        arg1->unk0->unk30->unk8 = 1.0f;
        func_800058DC(arg0, func_80240D94);
    }
}



struct func_80240D94_Inner {
    u8 pad[8];
    f32 unk8;
};

struct func_80240D94_Outer {
    u8 pad[0x30];
    struct func_80240D94_Inner *unk30;
};

struct func_80240D94_Self {
    u8 pad[0x90];
    s16 unk90;
};

void func_80240D94(struct func_80240D94_Self *arg0, struct func_80240D94_Outer **arg1) {
    s16 temp_v1;
    struct func_80240D94_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_80249A98);
    temp_v1 = arg0->unk90;
    arg0->unk90 = temp_v1 - 1;
    if (temp_v1 == 0) {
        arg0->unk90 = 0x64;
        func_800058DC(arg0, func_80240DF4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240DF4.s")



struct func_80240E7C_Struct2 {
    u8 pad[0x8];
    f32 unk8;
};

struct func_80240E7C_Struct1 {
    u8 pad[0x30];
    struct func_80240E7C_Struct2 *unk30;
};

struct func_80240E7C_Struct0 {
    u8 pad[0x4];
    struct func_80240E7C_Struct1 *unk4;
};

struct func_80240E7C_Struct3 {
    u8 pad[0x90];
    s16 unk90;
};

void func_80240E7C(struct func_80240E7C_Struct3 *arg0, struct func_80240E7C_Struct0 *arg1)
{
  s16 temp_v1;
  int new_var;
  struct func_80240E7C_Struct2 *temp_v0;
  struct func_80240E7C_Struct3 *temp_a3;
  temp_a3 = arg0;
  temp_v0 = arg1->unk4->unk30;
  new_var = 0;
  arg1->unk4->unk30->unk8 = (f32) (((f64) temp_v0->unk8) - 0.5);
  temp_v1 = temp_a3->unk90;
  temp_a3->unk90 = temp_v1 - 1;
  if (temp_v1 == new_var)
  {
    arg1->unk4->unk30->unk8 = -60.0f;
    func_80133980(1, arg1);
    func_800058DC(temp_a3, func_80240F00);
  }
}


void func_80240F00(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


struct func_80240F0C_Self {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x8C - 0x30];
    void (*unk8C)(void);
    f32 unk90;
};

struct func_80240F0C_Node {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_80240F0C_Pair {
    struct func_80240F0C_Node *unk0;
    struct func_80240F0C_Node *unk4;
};


void func_80240F0C(struct func_80240F0C_Self *arg0, struct func_80240F0C_Pair *arg1) {
    D_801BBD76 = 1;
    arg0->unk2C = 0x8000;
    arg1->unk0->unk22 = 0;
    arg1->unk4->unk22 = 0;
    arg0->unk8C = func_80240F4C;
    arg0->unk90 = 5.0f;
}


struct func_80240F4C_Self {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x90 - 0x38];
    f32 unk90;
};


void func_80240F4C(struct func_80240F4C_Self *arg0, s32 arg1)
{
  f32 temp_fv0;
  s32 var_v0;
  D_801BBD76 = 1;
  ;
  var_v0 = 0;
  if (arg0->unk90 != 0.0f)
  {
    var_v0 = 1;
  }
  arg0->unk90 = arg0->unk90 - 1.0f;
  if (var_v0 == 0)
  {
    func_80126E88(((*((u16 *) (*((void **) D_80171CEC[arg0->unk36])))) & 0x0FFFFFFF) & 0xFFFF, arg0);
    func_80005700(arg0);
  }
}

extern u8 D_80164F40[];
struct func_80240FE8_Self { u8 pad[0x2C]; s32 unk2C; };
void func_80240FE8(struct func_80240FE8_Self *arg0, struct func_80240D94_Outer **arg1) {
    struct func_80240D94_Inner *t;
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_801264D4(arg0, 0, 676.3f, 0.0f, D_80249AA8, 0);
    func_801264D4(arg0, 1, 676.3f, 0.0f, D_80249AAC, 0);
    arg0->unk2C |= 0x20;
    func_8012C89C(arg0, 0, 0x80, 0);
    func_8012C89C(arg0, 1, 0x80, 2);
    t = (*arg1)->unk30;
    t->unk8 = t->unk8 + 1.0;
    func_800058DC(arg0, (void *)func_802410F4);
}


struct func_802411A8_Self;
struct func_802411A8_Outer;
void func_802411A8(struct func_802411A8_Self *arg0, struct func_802411A8_Outer **arg1);

void func_802410F4(u8 *arg0, void *arg1) {
    u8 *v0;
    u8 *v1;

    if (func_80133A24(1) != 0) {
        *(s16 *)(arg0 + 0x90) = 0xF;
        func_80020744(0x1C3);
        v0 = (u8 *) &D_801BBBF0;
        v1 = *(u8 **)(v0 + 0xE0);
        *(s16 *)(v0 + 0x194) = 1;
        *(s16 *)(v0 + 0x192) = 6;
        *(f32 *)(v0 + 0x198) = (f32) *(f32 *)(*(u8 **)(v1 + 0x2C) + 4);
        *(f32 *)(v0 + 0x1A0) = (f32) *(f32 *)(*(u8 **)(v1 + 0x2C) + 0xC);
        *(f32 *)(v0 + 0xF14) = D_80249AB0;
        *(f32 *)(v0 + 0xF18) = 332.0f;
        *(s16 *)(v0 + 0xF00) = 0x1100;
        *(f32 *)(v0 + 0xF04) = 1.0f;
        *(f32 *)(v0 + 0xF08) = 1.0f;
        func_800058DC(arg0, (void *) func_802411A8);
    }
}



struct func_802411A8_Inner {
    u8 pad[8];
    f32 unk8;
};

struct func_802411A8_Outer {
    u8 pad[0x30];
    struct func_802411A8_Inner *unk30;
};

struct func_802411A8_Self {
    u8 pad[0x90];
    s16 unk90;
};

void func_802411A8(struct func_802411A8_Self *arg0, struct func_802411A8_Outer **arg1) {
    struct func_802411A8_Inner *temp_v0;
    s16 temp_v1;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk8 = temp_v0->unk8 - 2.0f;
    temp_v1 = arg0->unk90;
    arg0->unk90 = temp_v1 - 1;
    if (temp_v1 == 0) {
        arg0->unk90 = 0x40;
        func_800058DC(arg0, func_80241200);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241200.s")



struct func_80241264_Struct {
    u8 pad[0x90];
    s16 unk90;
};

void func_80241264(struct func_80241264_Struct *arg0, s32 arg1) {
    if (func_80133A24(3) != 0) {
        arg0->unk90 = 0x20;
        func_800058DC(arg0, func_802412A8);
    }
}


struct func_802412A8_Struct {
    u8 pad[0x90];
    s16 unk90;
};


void func_802412A8(struct func_802412A8_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk90 = 0x3F;
        func_80020744(0x1C4);
        func_800058DC(arg0, func_802412FC);
    }
}


void func_802412FC(struct func_80240D94_Self *arg0, struct func_802409AC_StructP *arg1)
{
  s32 t;
  func_8011AAF4(D_80249958, 0x182, (s32) arg0, 0, 2, 1.0f, 600.0f, 52.0f, 195.0f, 1.0f, 640.0f, 33.0f, 253.0f, 0.0f, 35.0f, -1, -1);
  ((s16 *) arg1->unk4->unk30)[9] -= 0x40;
  arg1->unk0->unk30->unk8 += 0.5;
  t = arg0->unk90;
  arg0->unk90 = arg0->unk90 - 1;
  if (t == 0)
  {
    func_80020744(0x1C6);
    func_800058DC(arg0, func_80241428);
  }
}



void func_80241428(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_80249994, 0x18E, arg0, 0, 2, 1.0f, 600.0f, 52.0f, 195.0f, 1.0f, 640.0f, 33.0f, 253.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_800058DC((void *) arg0, (void *) func_802414F8);
    }
}



void func_802414F8(s32 arg0, s32 arg1) {
    func_8011AAF4(D_802499D0, 0x198, arg0, 2, 1, 0.0f, D_80249AB4, 21.0f, 248.0f, 0.0f, D_80249AB8, 18.0f, 318.0f, 0.0f, 35.0f, -1, -1);
    D_801BBD84 = 2;
    {
        extern void func_80133980();
        func_80133980(4);
    }
    func_801FBB20();
    func_800058DC((void *)arg0, (void *)&func_802415D8);
}


void func_802415D8(s32 arg0, s32 arg1) {
    if (func_80150584() != 0) {
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_8024160C.s")



void func_80241948(s32 arg0, s32 arg1) {
    if (func_80133A24(2) != 0) {
        func_800058DC(arg0, func_80241984);
    }
}


struct func_80241984_Struct {
    u8 pad[0x94];
    s16 unk94;
};


void func_80241984(struct func_80241984_Struct *arg0, s32 arg1) {
    arg0->unk94 = 0xA;
    func_800058DC(arg0, func_802419B4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802419B4.s")


/* context.h declarations used by this function (same types, struct body stays in context.h) */
struct func_80241AF0_StructBBBF0;


struct func_80241A38_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
};

struct func_80241A38_Outer {
    u8 pad[0x2C];
    struct func_80241A38_Inner *unk2C;
};

struct func_80241A38_Globals {
    u8 pad[0xE0];
    struct func_80241A38_Outer *unkE0;
};

struct func_80241A38_Bbbf0 {
    u8 pad0[0x192];
    s16 unk192;
    s16 unk194;
    u8 pad1[0xF00 - 0x196];
    s16 unkF00;
    u8 pad2[0xF08 - 0xF02];
    f32 unkF08;
    s16 unkF0C;
    u8 pad3[0xF10 - 0xF0E];
    s32 unkF10;
};

struct func_80241A38_Obj {
    u8 pad[0x94];
    s16 unk94;
};

void func_80241A38(struct func_80241A38_Obj *arg0, s32 arg1) {
    struct func_80241A38_Inner *temp_v0;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v0 = ((struct func_80241A38_Globals *)&D_801BBBF0)->unkE0->unk2C;
    temp_fv0 = D_80249AD4 - temp_v0->unk4;
    temp_fv1 = 332.0f - temp_v0->unkC;
    if (!(((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)) > 400.0f)) {
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unk194 = 1;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unk192 = 4;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unkF08 = 3.0f;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unkF10 = 0x03480017;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unkF0C = 0;
        ((struct func_80241A38_Bbbf0 *)&D_801BBBF0)->unkF00 = 0x1000;
        arg0->unk94 = 0x64;
        func_800058DC(arg0, (void *)func_80241AF0);
    }
}


typedef struct func_80241AF0_StructBBBF0 {
    u8 pad0[0x192];
    s16 unk192;
    s16 unk194;
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad1[0xF00 - 0x1A4];
    s16 unkF00;
    u8 pad2[0xF04 - 0xF02];
    f32 unkF04;
    f32 unkF08;
    s16 unkF0C;
    u8 pad3[0xF10 - 0xF0E];
    s32 unkF10;
} func_80241AF0_StructBBBF0;


void func_80241AF0(u8 *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = *(s16 *)(arg0 + 0x94);
    *(s16 *)(arg0 + 0x94) = temp_v0 - 1;
    if (temp_v0 == 0) {
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unk192 = 2;
        D_801BBBF0.unk198 = D_80249AD8;
        D_801BBBF0.unk1A0 = 332.0f;
        D_801BBBF0.unkF04 = D_80249ADC;
        D_801BBBF0.unkF08 = 1.0f;
        D_801BBBF0.unkF10 = 0x0168003E;
        D_801BBBF0.unkF0C = 0;
        D_801BBBF0.unkF00 = 0x1100;
        func_800058DC(arg0, func_80241B88);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241B88.s")


struct func_80241CC8_Struct_C {
    u8 pad[0xC];
    f32 unkC;
};

struct func_80241CC8_Struct_B {
    u8 pad[0x30];
    struct func_80241CC8_Struct_C *unk30;
};

struct func_80241CC8_Struct_A {
    u8 pad[0x8];
    struct func_80241CC8_Struct_B *unk8;
};

struct func_80241CC8_Struct_Self {
    u8 pad[0x94];
    s16 unk94;
};


void func_80241CC8(struct func_80241CC8_Struct_Self *arg0, struct func_80241CC8_Struct_A *arg1) {
    s16 temp_v1;
    struct func_80241CC8_Struct_C *temp_v0;

    temp_v0 = arg1->unk8->unk30;
    temp_v0->unkC = (f32) ((f64) temp_v0->unkC - D_80249AF0);
    temp_v1 = arg0->unk94;
    arg0->unk94 = temp_v1 - 1;
    if (temp_v1 == 0) {
        arg1->unk8->unk30->unkC = 342.0f;
        func_8012C89C(arg0, 0, 0x80, 6);
        func_8012C89C(arg0, 1, 0x80, 7);
        arg0->unk94 = 0x3F;
        D_801BBD84 = 1;
        func_800058DC(arg0, func_80241D7C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241D7C.s")



struct func_80241E64_Self {
    u8 pad[0x94];
    s16 unk94;
    u8 pad2[0x98 - 0x96];
    f32 unk98;
};

struct func_80241E64_Inner {
    u8 pad[0x4D];
    s8 unk4D;
};

struct func_80241E64_Node {
    u8 pad[0x30];
    struct func_80241E64_Inner *unk30;
};

struct func_80241E64_Msg {
    u8 pad[4];
    struct func_80241E64_Node *unk4;
};

void func_80241E64(struct func_80241E64_Self *arg0, struct func_80241E64_Msg *arg1)
{
  s16 temp_v0;
  arg0->unk98 = arg0->unk98 - 9.0f;
  arg1->unk4->unk30->unk4D = (s8) (((s32) arg0->unk98) % 32);
  temp_v0 = arg0->unk94;
  arg0->unk94 = temp_v0 - 1;
  if (temp_v0 == 0)
  {
    D_801BBBF0.unk194 = 1;
    D_801BBBF0.unk192 = 3;
    D_801BBBF0.unkF08 = 1.0f;
    D_801BBBF0.unkF10 = 0x02A80003;
    D_801BBBF0.unkF0C = 0;
    D_801BBBF0.unkF00 = 0x1000;
    func_800058DC(arg0, func_80241F18);
  }
}



struct func_80241F18_Struct {
    u8 pad[0x94];
    s16 unk94;
};

void func_80241F18(struct func_80241F18_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80017990(D_8024577C);
        func_80020744(0x3DF);
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unkF10 = 0x02A80004;
        arg0->unk94 = 0xF;
        func_800058DC(arg0, func_80241F88);
    }
}


struct func_80241F88_Sub {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_80241F88_Node {
    u8 pad0[0x30];
    struct func_80241F88_Sub *unk30;
};

struct func_80241F88_Pair {
    struct func_80241F88_Node *unk0;
    struct func_80241F88_Node *unk4;
};

struct func_80241F88_Obj {
    u8 pad0[0x94];
    s16 unk94;
};

void func_80241F88(struct func_80241F88_Obj *arg0, struct func_80241F88_Pair *arg1) {
    struct func_80241F88_Sub *temp_v0;
    struct func_80241F88_Sub *temp_v1;
    s16 temp_a2;

    temp_v0 = arg1->unk0->unk30;
    temp_v0->unk12 = temp_v0->unk12 + 0x7F;
    temp_v1 = arg1->unk4->unk30;
    temp_v1->unk12 = temp_v1->unk12 + 0x7F;
    temp_a2 = arg0->unk94;
    arg0->unk94 = temp_a2 - 1;
    if (temp_a2 == 0) {
        arg0->unk94 = 7;
        func_800058DC(arg0, func_80241FEC);
    }
}



struct func_80241FEC_Struct0 {
    u8 pad0[0x94];
    s16 unk94;
    u8 pad1[2];
    f32 unk98;
};

struct func_80241FEC_Struct2 {
    u8 pad0[0x4D];
    s8 unk4D;
};

struct func_80241FEC_Struct1 {
    u8 pad0[0x30];
    struct func_80241FEC_Struct2 *unk30;
};

struct func_80241FEC_Struct3 {
    u8 pad0[4];
    struct func_80241FEC_Struct1 *unk4;
};

void func_80241FEC(struct func_80241FEC_Struct0 *arg0, struct func_80241FEC_Struct3 *arg1) {
    s16 temp_v0;

    arg0->unk98 = arg0->unk98 - 9.0f;
    arg1->unk4->unk30->unk4D = (s32) arg0->unk98 % 32;
    temp_v0 = arg0->unk94;
    arg0->unk94 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC(arg0, func_80242064);
    }
}


struct func_80242064_Struct {
    u8 pad[0x94];
    s16 unk94;
};


void func_80242064(struct func_80242064_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80017990(D_802458E0);
        func_80020744(0x3DF);
        D_801BBD84 = 1;
        arg0->unk94 = 0xF;
        func_800058DC(arg0, func_802420C4);
    }
}


struct func_802420C4_Sub {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    u8 pad1[0x48 - 0x14];
    u8 unk48;
};

struct func_802420C4_Node {
    u8 pad0[0x30];
    struct func_802420C4_Sub *unk30;
};

struct func_802420C4_Pair {
    struct func_802420C4_Node *unk0;
    struct func_802420C4_Node *unk4;
};

struct func_802420C4_Obj {
    u8 pad0[0x94];
    s16 unk94;
};


void func_802420C4(struct func_802420C4_Obj *arg0, struct func_802420C4_Pair *arg1) {
    struct func_802420C4_Sub *temp_v0;
    struct func_802420C4_Sub *temp_v1;
    s16 temp_a2;

    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk48 += 0xF;
    temp_v1 = arg1->unk0->unk30;
    temp_v1->unk10 += 0x7F;
    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk10 += 0x7F;
    temp_v1 = arg1->unk0->unk30;
    temp_v1->unk12 += 0x7F;
    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk12 += 0x7F;
    temp_a2 = arg0->unk94;
    arg0->unk94 = temp_a2 - 1;
    if (temp_a2 == 0) {
        arg0->unk94 = 0xF;
        func_800058DC(arg0, func_80242164);
    }
}



struct func_80242164_Struct0 {
    u8 pad0[0x94];
    s16 unk94;
    u8 pad1[2];
    f32 unk98;
};

struct func_80242164_Struct2 {
    u8 pad0[0x4D];
    s8 unk4D;
};

struct func_80242164_Struct1 {
    u8 pad0[0x30];
    struct func_80242164_Struct2 *unk30;
};

struct func_80242164_Struct3 {
    u8 pad0[4];
    struct func_80242164_Struct1 *unk4;
};

void func_80242164(struct func_80242164_Struct0 *arg0, struct func_80242164_Struct3 *arg1) {
    s16 temp_v0;

    arg0->unk98 = arg0->unk98 - 12.0f;
    arg1->unk4->unk30->unk4D = (s32) arg0->unk98 % 32;
    temp_v0 = arg0->unk94;
    arg0->unk94 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC(arg0, func_802421DC);
    }
}



void func_802421DC(struct func_80242064_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80017990(D_80245AD0);
        func_80020744(0x3DF);
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unkF10 = 0x02A80003;
        arg0->unk94 = 0xF;
        func_800058DC(arg0, func_8024224C);
    }
}



struct func_8024224C_Sub {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    u8 pad1[0x49 - 0x14];
    u8 unk49;
};

struct func_8024224C_Node {
    u8 pad0[0x30];
    struct func_8024224C_Sub *unk30;
};

struct func_8024224C_Pair {
    struct func_8024224C_Node *unk0;
    struct func_8024224C_Node *unk4;
};

struct func_8024224C_Obj {
    u8 pad0[0x94];
    s16 unk94;
};

void func_8024224C(struct func_8024224C_Obj *arg0, struct func_8024224C_Pair *arg1) {
    struct func_8024224C_Sub *temp_v0;
    struct func_8024224C_Sub *temp_v1;
    s16 temp_a2;

    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk49 = temp_v0->unk49 - 0xE;
    temp_v1 = arg1->unk0->unk30;
    temp_v1->unk10 = temp_v1->unk10 + 0x1FF;
    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk10 = temp_v0->unk10 + 0x1FF;
    temp_v1 = arg1->unk0->unk30;
    temp_v1->unk12 = temp_v1->unk12 + 0x1FF;
    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk12 = temp_v0->unk12 + 0x1FF;
    temp_a2 = arg0->unk94;
    arg0->unk94 = temp_a2 - 1;
    if (temp_a2 == 0) {
        arg0->unk94 = 0x1F;
        func_800058DC(arg0, func_802422EC);
    }
}



struct func_802422EC_Struct0 {
    u8 pad0[0x94];
    s16 unk94;
    u8 pad1[2];
    f32 unk98;
};

struct func_802422EC_Struct2 {
    u8 pad0[0x4D];
    s8 unk4D;
};

struct func_802422EC_Struct1 {
    u8 pad0[0x30];
    struct func_802422EC_Struct2 *unk30;
};

struct func_802422EC_Struct3 {
    u8 pad0[4];
    struct func_802422EC_Struct1 *unk4;
};

void func_802422EC(struct func_802422EC_Struct0 *arg0, struct func_802422EC_Struct3 *arg1) {
    s16 temp_v0;

    arg0->unk98 = arg0->unk98 - 11.0f;
    arg1->unk4->unk30->unk4D = (s32) arg0->unk98 % 32;
    temp_v0 = arg0->unk94;
    arg0->unk94 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC(arg0, func_80242364);
    }
}


struct func_80242364_Struct {
    u8 pad[0x94];
    s16 unk94;
};


void func_80242364(struct func_80242364_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        *(s32 *) (D_801BCAE0 + 0x20) = 0x2A80003;
        arg0->unk94 = 0x1F;
        func_80020744(0x1BE);
        func_800058DC(arg0, (void *) func_802423C0);
    }
}


struct func_802423C0_Sub {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[8];
    s16 unk10;
    s16 unk12;
    u8 pad2[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};
struct func_802423C0_Node {
    u8 pad0[0x30];
    struct func_802423C0_Sub *unk30;
};
struct func_802423C0_Pair {
    struct func_802423C0_Node *unk0;
    struct func_802423C0_Node *unk4;
};
struct func_802423C0_Obj {
    u8 pad0[0x90];
    f32 unk90;
    s16 unk94;
};


void func_802423C0(struct func_802423C0_Obj *arg0, struct func_802423C0_Pair *arg1)
{
  f32 temp_fv0;
  s16 temp_v0;
  arg0->unk90 = (f32) (((f64) arg0->unk90) - D_80249B00);
  temp_fv0 = arg0->unk90;
  arg1->unk0->unk30->unk20 = temp_fv0;
  arg1->unk0->unk30->unk1C = temp_fv0;
  arg1->unk0->unk30->unk18 = temp_fv0;
  temp_fv0 = arg0->unk90;
  arg1->unk4->unk30->unk20 = temp_fv0;
  arg1->unk4->unk30->unk1C = temp_fv0;
  arg1->unk4->unk30->unk18 = temp_fv0;
  arg1->unk0->unk30->unk10 = (s16) (arg1->unk0->unk30->unk10 + 0x280);
  arg1->unk4->unk30->unk10 = (s16) (arg1->unk4->unk30->unk10 + 0x280);
  arg1->unk0->unk30->unk12 = (s16) (arg1->unk0->unk30->unk12 + 0x280);
  arg1->unk4->unk30->unk12 = (s16) (arg1->unk4->unk30->unk12 + 0x280);
  if (((!arg1) && (!arg1)) && (!arg1))
  {
  }
  temp_v0 = arg0->unk94;
  arg0->unk94 = (s16) (temp_v0 - 1);
  if (temp_v0 == 0)
  {
    arg0->unk94 = 0x12;
    arg1->unk0->unk30->unk4 = 0.0f;
    arg1->unk4->unk30->unk4 = 0.0f;
    func_800058DC(arg0, (void *) func_802424D8);
  }
}

struct func_802424D8_C { u8 pad[0xC]; f32 unkC; u8 pad2[0x22-0x10]; u8 unk22; };
struct func_802424D8_A { u8 pad[0x8]; struct func_802424D8_B *unk8; };
struct func_802424D8_B { u8 pad[0x30]; struct func_802424D8_C *unk30; };
struct func_802424D8_S { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x94-0x30]; s16 unk94; };
struct func_802424D8_R { struct func_802424D8_C *unk0; struct func_802424D8_C *unk4; struct func_802424D8_C *unk8; };
struct func_802424D8_R2 { u8 pad[8]; struct func_802424D8_B *unk8; };

void func_802424D8(struct func_802424D8_S *arg0, struct func_802424D8_R *arg1) {
    struct func_802424D8_C *c;
    extern void func_800058DC();
    extern void func_80133980();
    c = ((struct func_802424D8_R2 *)arg1)->unk8->unk30;
    c->unkC = c->unkC + D_80249B08;
    if (arg0->unk94--) {
    } else {
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unk192 = 2;
        D_801BBBF0.unk198 = D_80249B10;
        D_801BBBF0.unk1A0 = 312.0f;
        D_801BBBF0.unkF04 = D_80249B14;
        D_801BBBF0.unkF08 = D_80249B18;
        D_801BBBF0.unkF10 = 0x0168003E;
        D_801BBBF0.unkF0C = 0x1000;
        D_801BBBF0.unkF00 = 0x1102;
        func_80133980(3);
        c = ((struct func_802424D8_R2 *)arg1)->unk8->unk30;
        c->unkC = c->unkC + 1000.0f;
        func_80020744(0x1C7);
        arg0->unk2C = 0;
        arg1->unk0->unk22 = 0;
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 0;
        func_800058DC(arg0, func_802425F4, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802425F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80242780.s")


struct func_80242840_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x90 - 0x30];
    s16 unk90;
};


void func_80242840(struct func_80242840_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    if (func_80133A24(4) != 0) {
        arg0->unk2C = 0x800;
    } else {
        arg0->unk2C = 0;
    }
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk90 = arg0->unk90 + 1;
        if (func_80150584() != 0) {
            func_80005700(arg0);
        }
    }
}

