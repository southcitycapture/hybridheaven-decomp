#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802409AC.s")


struct func_80240B84_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern s32 func_8012A564(void *, s32);
extern void func_801FBB30(void);
extern void func_801268F4(s32);
extern void func_801339D0(s32);
extern void func_800058DC(void *, void *);
extern void func_80240BE8(void);

void func_80240B84(struct func_80240B84_Struct *arg0, s32 arg1) {
    if (func_8012A564(arg0, 0x41700000) != 0) {
        func_801FBB30();
        arg0->unk90 = 0x46;
        func_801268F4(0);
        func_801339D0(4);
        func_800058DC(arg0, &func_80240BE8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240D00.s")


extern f64 D_80249A98;
extern void func_80240DF4(void);

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


extern void func_80133980(s32, void *);
extern void func_80240F00(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240F00.s")


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

extern s8 D_801BBD76;
extern void func_80240F4C(void);

void func_80240F0C(struct func_80240F0C_Self *arg0, struct func_80240F0C_Pair *arg1) {
    D_801BBD76 = 1;
    arg0->unk2C = 0x8000;
    arg1->unk0->unk22 = 0;
    arg1->unk4->unk22 = 0;
    arg0->unk8C = func_80240F4C;
    arg0->unk90 = 5.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240F4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80240FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802410F4.s")


extern void func_80241200(void);

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


extern s32 func_80133A24(s32);
extern void func_802412A8(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802412A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802412FC.s")


extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_802414F8(void);
extern u8 D_80249994[];

void func_80241428(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_80249994, 0x18E, arg0, 0, 2, 1.0f, 600.0f, 52.0f, 195.0f, 1.0f, 640.0f, 33.0f, 253.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_800058DC((void *) arg0, (void *) func_802414F8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802414F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802415D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_8024160C.s")


extern void func_80241984(void);

void func_80241948(s32 arg0, s32 arg1) {
    if (func_80133A24(2) != 0) {
        func_800058DC(arg0, func_80241984);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802419B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241A38.s")


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

extern func_80241AF0_StructBBBF0 D_801BBBF0;
extern f32 D_80249AD8;
extern f32 D_80249ADC;
extern void func_80241B88(void);

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

extern s32 func_8012C89C(void *, s32, s32, s32);
extern s16 D_801BBD84;
extern f64 D_80249AF0;
extern void func_80241D7C(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241E64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241F88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80241FEC.s")


struct func_80242064_Struct {
    u8 pad[0x94];
    s16 unk94;
};

extern s32 func_800178E8();
extern void func_80017990(void *);
extern void func_80020744(s32);
extern void func_802420C4();
extern u8 D_802458E0[];

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

extern void func_80242164(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80242164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802421DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_8024224C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802422EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80242364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802423C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802424D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_802425F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802408F0/func_80242780.s")


struct func_80242840_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x90 - 0x30];
    s16 unk90;
};

extern void func_80005700();
extern s32 func_80150584();

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

