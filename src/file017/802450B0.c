#include "common.h"

struct func_802450B0_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad1[0x198 - 0x34];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad2[0x29C - 0x1A4];
    f32 unk29C;
    f32 unk2A0;
    u8 pad3[0xF20 - 0x2A4];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25;
    s8 unkF26;
    u8 unkF27, unkF28, unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E;
    u8 padF2F[3];
    u8 unkF32, unkF33, unkF34, unkF35;
};
struct func_802450B0_StructO {
    u8 pad0[0x90];
    f32 unk90, unk94, unk98;
    u16 unk9C;
    u8 pad1[6];
    f32 unkA4, unkA8;
};
struct func_802450B0_StructT {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad1[2];
    u16 unk12;
    u8 pad2[0x24 - 0x14];
    u32 unk24;
    u8 pad3[0x30 - 0x28];
    u32 unk30;
    u8 pad4[0x4C - 0x34];
    u8 unk4C, unk4D, unk4E, unk4F;
};
struct func_802450B0_StructN {
    u8 pad[0x30];
    struct func_802450B0_StructT *unk30;
};
struct func_802450B0_StructP { struct func_802450B0_StructN *unk0; };
struct func_802450B0_Sq { s32 a, b, c, d; };
extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);
extern void *func_80241790(f32, f32, f32, s32, s32, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern u8 func_80126EAC[];
extern void func_80245DCC();
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(u16);
extern void func_80246284(s32 arg0, s32 arg1);
extern void func_801339D0(s32);
extern s32 func_80126CC0(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern f32 D_8025C900;
extern f32 D_8025C904;
struct func_802453F0_StructG;
extern struct func_802453F0_StructG D_801BBBF0;
struct func_80246214_StructGlobal;
extern struct func_80246214_StructGlobal *D_8025DDB0;
#define G (*(struct func_802450B0_StructG *)&D_801BBBF0)

void func_802450B0(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_802450B0_Sq sp38;

    if (func_80133A24(0x128) != 0) {
        func_801339D0(0x128);
        G.unk32 = 0x2AA;
        G.unk198 = 260.0f;
        G.unk19C = 0.0f;
        G.unk1A0 = 450.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_802450B0_Sq *)D_80164F40;
        sp38.b = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk9C = 0x2AA;
        arg0->unk90 = 202.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = 348.0f;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = func_8001EB64((s16)arg0->unk9C) * 46.0 + arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = arg0->unk98 - func_8001EAD0((s16)arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = G.unkF32;
        arg1->unk0->unk30->unk4D = G.unkF33;
        arg1->unk0->unk30->unk4E = G.unkF34;
        arg1->unk0->unk30->unk4F = G.unkF35;
        G.unkF20 = 0x28;
        G.unkF21 = 0x28;
        G.unkF22 = 0x28;
        G.unkF23 = 0xFF;
        G.unkF24 = 0xFF;
        G.unkF25 = 0xFF;
        G.unkF26 = -0x28;
        G.unkF27 = 0x7D;
        G.unkF28 = 0x1E;
        G.unkF29 = 0x96;
        G.unkF2A = 0x64;
        G.unkF2B = 0x64;
        G.unkF2C = 0x64;
        G.unkF2D = 0;
        G.unkF2E = 0x5A;
        G.unkF32 = 0x16;
        G.unkF33 = 0xC;
        G.unkF34 = 0x1C;
        G.unkF35 = 0x7C;
        G.unk29C = 5.0f;
        G.unk2A0 = 500.0f;
        arg0->unkA4 = 205.0f;
        arg0->unkA8 = D_8025C900;
        *(void **)&D_8025DDB0 = func_80241790(D_8025C904, 0.0f, 458.0f, 0x2AA, 0x118, 0x128, 0x114, 0x2A);
        if (func_80133A24(0x118) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, func_80246284);
    }
}


struct func_802453F0_Sq { s32 a, b, c, d; };
struct func_802453F0_Sp { struct func_802453F0_Sq q; s32 e; };
struct func_802453F0_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad1[0x198 - 0x34];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad2[0x29C - 0x1A4];
    f32 unk29C;
    f32 unk2A0;
    u8 pad3[0xF20 - 0x2A4];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25, unkF26, unkF27, unkF28, unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E;
    u8 padF2F[3];
    u8 unkF32, unkF33, unkF34, unkF35;
};
struct func_802453F0_StructO {
    u8 pad0[0x90];
    f32 unk90, unk94, unk98;
    u16 unk9C;
    u8 pad1[6];
    f32 unkA4, unkA8;
};
struct func_802453F0_StructB {
    u8 pad0[0x4];
    f32 unk4, unk8, unkC;
    u8 pad1[2];
    u16 unk12;
    u8 pad2[0x24 - 0x14];
    u32 unk24;
    u8 pad3[0x30 - 0x28];
    void *unk30;
    u8 pad4[0x4C - 0x34];
    u8 unk4C, unk4D, unk4E, unk4F;
};
struct func_802453F0_StructA { u8 pad[0x30]; struct func_802453F0_StructB *unk30; };
struct func_802453F0_StructP { struct func_802453F0_StructA *unk0; };

extern f32 D_8025C908;
extern f32 D_8025C90C;
extern f32 D_8025C910;

void func_802453F0(struct func_802453F0_StructO *arg0, struct func_802453F0_StructP *arg1) {
    s32 sp38[4];
    if (func_80133A24(0x129) != 0) {
        func_801339D0(0x129);
        D_801BBBF0.unk32 = 0x1D55;
        D_801BBBF0.unk198 = -258.0f;
        D_801BBBF0.unk19C = 0.0f;
        D_801BBBF0.unk1A0 = 452.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        *(struct func_802453F0_Sq *)sp38 = *(struct func_802453F0_Sq *)D_80164F40;
        sp38[1] = 0x80000900;
        func_80005E44(arg0, sp38);
        func_80006214(arg0);
        arg0->unk90 = -201.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = D_8025C908;
        arg0->unk9C = 0x1D55;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (void *)((s32)D_8017AF38 | 0x40000000);
        arg1->unk0->unk30->unk4 = func_8001EB64((s16)arg0->unk9C) * 46.0 + arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = arg0->unk98 - func_8001EAD0((s16)arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = D_801BBBF0.unkF32;
        arg1->unk0->unk30->unk4D = D_801BBBF0.unkF33;
        arg1->unk0->unk30->unk4E = D_801BBBF0.unkF34;
        arg1->unk0->unk30->unk4F = D_801BBBF0.unkF35;
        D_801BBBF0.unkF22 = 0x46;
        D_801BBBF0.unkF20 = 0x64;
        D_801BBBF0.unkF21 = 0x64;
        D_801BBBF0.unkF23 = 1;
        D_801BBBF0.unkF24 = 0x50;
        D_801BBBF0.unkF25 = 0xFF;
        D_801BBBF0.unkF26 = 0xB;
        D_801BBBF0.unkF27 = 0x19;
        D_801BBBF0.unkF28 = 0xB;
        D_801BBBF0.unkF29 = 0x9D;
        D_801BBBF0.unkF2A = 0x50;
        D_801BBBF0.unkF2B = 0xFF;
        D_801BBBF0.unkF2C = -0xB;
        D_801BBBF0.unkF2D = -0x22;
        D_801BBBF0.unkF2E = 0x25;
        D_801BBBF0.unkF32 = 0x3C;
        D_801BBBF0.unkF33 = 0x14;
        D_801BBBF0.unkF34 = 0x32;
        D_801BBBF0.unkF35 = 0xAA;
        D_801BBBF0.unk29C = 5.0f;
        D_801BBBF0.unk2A0 = 500.0f;
        arg0->unkA4 = -205.0f;
        arg0->unkA8 = D_8025C90C;
        *(void **)((u8 *)&D_8025C910 + 0x14A0) = (void *)func_80241790(D_8025C910, 0.0f, 459.0f, 0x1D55, 0x119, 0x129, 0x115, 0x2A);
        if (func_80133A24(0x119) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, (void *)func_80246284);
    }
}


extern f32 D_8025C914;
extern f32 D_8025C918;

void func_8024573C(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_802450B0_Sq sp38;

    if (func_80133A24(0x12A) != 0) {
        func_801339D0(0x12A);
        G.unk32 = 0x12AA;
        G.unk198 = -260.0f;
        G.unk19C = 0.0f;
        G.unk1A0 = -452.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_802450B0_Sq *)D_80164F40;
        sp38.b = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk90 = -201.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = D_8025C914;
        arg0->unk9C = 0x12AA;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = func_8001EB64(arg0->unk9C) * 46.0 + arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = arg0->unk98 - func_8001EAD0(arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = G.unkF32;
        arg1->unk0->unk30->unk4D = G.unkF33;
        arg1->unk0->unk30->unk4E = G.unkF34;
        arg1->unk0->unk30->unk4F = G.unkF35;
        G.unkF20 = 0x28;
        G.unkF21 = 0x28;
        G.unkF22 = 0x28;
        G.unkF23 = 0xFF;
        G.unkF24 = 0xFF;
        G.unkF25 = 0xFF;
        G.unkF26 = -0x28;
        G.unkF27 = 0x7D;
        G.unkF28 = 0x1E;
        G.unkF29 = 0x96;
        G.unkF2A = 0x64;
        G.unkF2B = 0x64;
        G.unkF2C = 0x64;
        G.unkF2D = 0;
        G.unkF2E = 0x5A;
        G.unkF32 = 0x16;
        G.unkF33 = 0xC;
        G.unkF34 = 0x1C;
        G.unkF35 = 0x7C;
        G.unk29C = 5.0f;
        G.unk2A0 = 500.0f;
        arg0->unkA4 = -205.0f;
        arg0->unkA8 = D_8025C918;
        D_8025DDB0 = func_80241790(-264.0f, 0.0f, -459.0f, 0x12AA, 0x11A, 0x12A, 0x116, 0x2A);
        if (func_80133A24(0x11A) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, func_80246284);
    }
}


struct func_80246214_StructGlobal;
extern f32 D_8025C91C;
extern f32 D_8025C920;

void func_80245A80(struct func_802453F0_StructO *arg0, struct func_802453F0_StructP *arg1) {
    struct func_80245A80_V { s32 w[4]; } sp;
    extern void func_800058DC(void *, void *);
    extern s32 func_80133A24(u16);

    if (func_80133A24(0x12B) != 0) {
        func_801339D0(0x12B);
        D_801BBBF0.unk32 = 0xAAA;
        D_801BBBF0.unk198 = 272.0f;
        D_801BBBF0.unk19C = 0.0f;
        D_801BBBF0.unk1A0 = -446.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp = *(struct func_80245A80_V *)D_80164F40;
        sp.w[1] = 0x80000900;
        func_80005E44(arg0, &sp);
        func_80006214(arg0);
        arg0->unk90 = 201.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = D_8025C91C;
        arg0->unk9C = 0xD55;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (void *)((u32)D_8017AF38 | 0x40000000);
        arg1->unk0->unk30->unk4 = (f32)((f64)func_8001EB64(arg0->unk9C) * 46.0 + (f64)arg0->unk90);
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = (f32)((f64)arg0->unk98 - (f64)func_8001EAD0(arg0->unk9C) * 46.0);
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = D_801BBBF0.unkF32;
        arg1->unk0->unk30->unk4D = D_801BBBF0.unkF33;
        arg1->unk0->unk30->unk4E = D_801BBBF0.unkF34;
        arg1->unk0->unk30->unk4F = D_801BBBF0.unkF35;
        D_801BBBF0.unkF22 = 0x46;
        D_801BBBF0.unkF20 = 0x64;
        D_801BBBF0.unkF21 = 0x64;
        D_801BBBF0.unkF23 = 1;
        D_801BBBF0.unkF24 = 0x50;
        D_801BBBF0.unkF25 = 0xFF;
        D_801BBBF0.unkF26 = 0xB;
        D_801BBBF0.unkF27 = 0x19;
        D_801BBBF0.unkF28 = 0xB;
        D_801BBBF0.unkF29 = 0x9D;
        D_801BBBF0.unkF2A = 0x50;
        D_801BBBF0.unkF2B = 0xFF;
        D_801BBBF0.unkF2C = -0xB;
        D_801BBBF0.unkF2D = -0x22;
        D_801BBBF0.unkF2E = 0x25;
        D_801BBBF0.unkF32 = 0x3C;
        D_801BBBF0.unkF33 = 0x14;
        D_801BBBF0.unkF34 = 0x32;
        D_801BBBF0.unkF35 = 0xAA;
        D_801BBBF0.unk29C = 5.0f;
        D_801BBBF0.unk2A0 = 500.0f;
        arg0->unkA4 = 205.0f;
        arg0->unkA8 = D_8025C920;
        D_8025DDB0 = (void *)func_80241790(280.0f, 0.0f, -449.0f, 0xAAA, 0x11B, 0x12B, 0x117, 0x2A);
        if (func_80133A24(0x11B) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, func_80246284);
    }
}


struct func_80245DCC_Struct { u8 pad[0x9C]; s16 unk9C; u8 pad2[2]; f32 unkA0; f32 unkA4; f32 unkA8; };
struct func_80245DCC_Struct3 { u8 pad[4]; f32 unk4; u8 pad2[4]; f32 unkC; };
struct func_80245DCC_Struct2 { u8 pad[0x2C]; struct func_80245DCC_Struct3 *unk2C; };
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_800208C4(s32);
extern void func_80020718(s32);
extern struct func_80245DCC_Struct2 *D_801BBCD0;
extern s32 D_802588F0;
extern u8 D_8025C890[];
extern u8 func_80245F8C[];

void func_80245DCC(struct func_80245DCC_Struct *arg0, s32 arg1)
{
  s32 i;
  s16 a;
  s32 t;
  f32 s;
  f32 c;
  struct func_80245DCC_Struct3 *p;
  for (i = -0x28; i != 0x2C; i += 4)
  {
    s = func_8001EB64(arg0->unk9C);
    {
      f32 f = (f32) i;
      if (func_801C3D20(arg0->unkA4 - (s * f), (func_8001EAD0(arg0->unk9C) * f) + arg0->unkA8, 3.0f) != 0)
      {
        func_801C3B2C(2);
        func_801C3B10(1);
        t = ((s16) (((u16) arg0->unk9C) - 0x2AA)) & 0x1FFF;
        a = t;
 s = func_8001EAD0(a); func_8011AAF4(D_8025C890, 0x227, arg0, 0, 1, 0.0f, (s * 30.0f) + D_801BBCD0->unk2C->unk4, 2.0f, (func_8001EB64(a) * 30.0f) + D_801BBCD0->unk2C->unkC, 0.0f, D_801BBCD0->unk2C->unk4, 15.0f, D_801BBCD0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
        arg0->unkA0 = 0.0f;
        func_800208C4(0x44);
        func_80020718(0x12F);
        D_802588F0 = 0;
        func_800058DC(arg0, func_80245F8C);
        return;
      }
    }
  }

}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80245F8C.s")


struct func_802461CC_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_801C3044();
extern void func_801C2F0C();
extern void func_80246214();

void func_802461CC(struct func_802461CC_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80246214);
    }
}


typedef struct func_80246214_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_80246214_StructGlobal;

typedef struct func_80246214_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80246214_StructObj;

extern s32 func_80126944(void);

void func_80246214(func_80246214_StructObj *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  if (func_80133A24(D_8025DDB0->unkA2) == 0)
  {
    return;
  }
  if (func_80126944() == 1)
  {
    return;
  }
  temp_v0 = arg0->unk3C;
  temp_v1 = temp_v0 >= 0x1E;
  arg0->unk3C = temp_v0 + 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_800058DC(arg0, func_80246284);
  }
}


void func_80246284(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


struct func_80246290_StructB {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
    u8 pad1[0x24 - 0x16];
    u32 unk24;
    u8 pad2[0x30 - 0x28];
    u32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
};
struct func_80246290_StructN {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_80246290_StructB *unk30;
};
struct func_80246290_StructA {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x3C - 0x30];
    s16 unk3C;
    u8 pad2[0x74 - 0x3E];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84, unk86, unk88;
    u8 pad3[0x90 - 0x8A];
    s16 unk90;
    u8 unk92;
};
struct func_80246B40_StructObj;
void func_80246B40(struct func_80246B40_StructObj *arg0, s32 arg1);
extern s32 func_8012C97C(s32, s32);
extern void func_80241854(f32, f32, f32, s32, s32, s32, s32);
extern u8 D_80258918[];
extern u8 D_802589B8[];
extern u8 D_8017AF90[];
extern u8 func_80246C0C[];

void func_80246290(struct func_80246290_StructA *arg0, struct func_80246290_StructN **arg1) {
    extern void func_800058DC(void *, void *);
    extern s32 func_80133A24(u16);
    extern void func_8012D918(s32, s32, s32, s32, s32);
    struct func_802453F0_Sq sp;
    u32 sp30;

    sp = *(struct func_802453F0_Sq *)D_80164F40;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000900;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000C00;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000C00;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 1, 0x2FD, 6);
    func_8012D918((s32)arg0, 0x2F8, 0xA, 1, 0);
    arg1[1]->unk30->unk24 |= 0x4000;
    arg1[1]->unk30->unk30 = (u32)D_80258918 | 0x40000000;
    arg1[1]->unk30->unk4C = 0;
    arg1[1]->unk30->unk4D = 0;
    arg1[1]->unk30->unk4E = 0xFF;
    arg1[1]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 2, 0x306, 0);
    func_8012D918((s32)arg0, 0x306, 4, 2, 0);
    sp30 = (u32)D_802589B8 | 0x40000000;
    arg1[2]->unk30->unk24 |= 0x4100;
    arg1[2]->unk30->unk30 = sp30;
    arg1[2]->unk30->unk4 = 364.0f;
    arg1[2]->unk30->unk8 = -100.0f;
    arg1[2]->unk30->unkC = 0.0f;
    arg1[2]->unk30->unk12 = 0x1000;
    arg1[2]->unk30->unk48 = 0xFA;
    arg1[2]->unk30->unk49 = 2;
    arg1[2]->unk30->unk4A = 0x4F;
    arg1[2]->unk30->unk4B = 0xE6;
    arg1[2]->unk30->unk4C = 0;
    arg1[2]->unk30->unk4D = 0;
    arg1[2]->unk30->unk4E = 0xFF;
    arg1[2]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 3, 0x306, 1);
    func_8012D918((s32)arg0, 0x306, 4, 3, 0);
    arg1[3]->unk30->unk24 |= 0x4100;
    arg1[3]->unk30->unk30 = sp30;
    arg1[3]->unk30->unk4 = 374.0f;
    arg1[3]->unk30->unk8 = -100.0f;
    arg1[3]->unk30->unkC = 0.0f;
    arg1[3]->unk30->unk12 = 0x1000;
    arg1[3]->unk30->unk48 = 0x1B;
    arg1[3]->unk30->unk49 = 0xFA;
    arg1[3]->unk30->unk4A = 0;
    arg1[3]->unk30->unk4B = 0xE6;
    arg1[3]->unk30->unk4C = 0;
    arg1[3]->unk30->unk4D = 0;
    arg1[3]->unk30->unk4E = 0xFF;
    arg1[3]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 4, 0x2FD, 2);
    func_8012D918((s32)arg0, 0x2F8, 1, 4, 0);
    sp30 = (u32)D_8017AF90 | 0x40000000;
    arg1[4]->unk30->unk24 |= 0x400;
    arg1[4]->unk30->unk30 = sp30;
    arg1[4]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[4]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[4]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[4]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 5, 0x2FD, 3);
    func_8012D918((s32)arg0, 0x2F8, 1, 5, 0);
    arg1[5]->unk30->unk24 |= 0x400;
    arg1[5]->unk30->unk30 = sp30;
    arg1[5]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[5]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[5]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[5]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 6, 0x2FD, 4);
    if (func_80133A24(0x11E) != 0) {
        func_8012D918((s32)arg0, 0x2F8, 1, 6, 0);
    } else {
        func_8012D918((s32)arg0, 0x2F8, 0, 6, 0);
    }
    arg1[6]->unk30->unk24 |= 0x400;
    arg1[6]->unk30->unk30 = sp30;
    arg1[6]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[6]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[6]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[6]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 7, 0x2FD, 5);
    if (func_80133A24(0x11F) != 0) {
        func_8012D918((s32)arg0, 0x2F8, 1, 7, 0);
    } else {
        func_8012D918((s32)arg0, 0x2F8, 0, 7, 0);
    }
    arg1[7]->unk30->unk24 |= 0x400;
    arg1[7]->unk30->unk30 = sp30;
    arg1[7]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[7]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[7]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[7]->unk30->unk4F = D_801BBBF0.unkF35;
    func_80241854(390.0f, -100.0f, 20.0f, 0x1000, 0x2FD, 8, 0x11C);
    func_80241854(390.0f, -100.0f, -20.0f, 0, 0x2FD, 9, 0x11D);
    arg0->unk92 = !func_80133A24(0x120) + !func_80133A24(0x121);
    arg0->unk3C = 0;
    arg0->unk90 = 0;
    if (arg0->unk92 != 0) {
        for (sp30 = 0; (s32)sp30 < 2 - arg0->unk92; sp30++) {
            arg1[2 + sp30]->unk22 = 0;
        }
        arg0->unk2C |= 0x800;
        arg0->unk74 = func_8012C97C(0x306, 5);
        arg0->unk78 = (f32)(0x180 - arg0->unk92 * 10);
        arg0->unk84 = 0;
        arg0->unk86 = 0x1000;
        arg0->unk88 = 0;
        arg0->unk7C = -100.0f;
        arg0->unk80 = 0.0f;
        arg1[0]->unk30->unk4 = arg0->unk78;
        arg1[0]->unk30->unk8 = arg0->unk7C;
        arg1[0]->unk30->unkC = arg0->unk80;
        arg1[0]->unk30->unk10 = arg0->unk84;
        arg1[0]->unk30->unk12 = arg0->unk86;
        arg1[0]->unk30->unk14 = arg0->unk88;
    } else {
        for (sp30 = 2; sp30 != 4; sp30++) {
            arg1[sp30]->unk22 = 0;
        }
    }
    if (func_80133A24(0x128) != 0 || func_80133A24(0x129) != 0) {
        arg1[3 - arg0->unk92]->unk22 = 1;
        func_800058DC(arg0, func_80246C0C);
        return;
    }
    func_800058DC(arg0, (void *)func_80246B40);
}

void func_80246BD4(void);

extern void *func_801505AC(s32 arg0);

typedef struct func_80246B40_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80246B40_StructObj;

typedef struct func_80246B40_StructSub {
    u8 pad[0x91];
    u8 unk91;
} func_80246B40_StructSub;

void func_80246B40(func_80246B40_StructObj *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    func_80246B40_StructSub *temp_v0_2;
    func_80246B40_StructSub *temp_v0_3;

    temp_v0 = arg0->unk3C;
    temp_v1 = arg0->unk3C < 2;
    arg0->unk3C = temp_v0 + 1;
    if (!temp_v1) {
        if (func_80133A24(0x11E) != 0) {
            temp_v0_2 = func_801505AC(4);
            temp_v0_2->unk91 = temp_v0_2->unk91 | 0x40;
        }
        if (func_80133A24(0x11F) != 0) {
            temp_v0_3 = func_801505AC(2);
            temp_v0_3->unk91 = temp_v0_3->unk91 | 0x40;
        }
        func_800058DC(arg0, &func_80246BD4);
    }
}


void func_80241910(f32 a, f32 b, f32 c);
extern void func_80246DE0();

void func_80246BD4(void) {
    func_80246DE0();
    func_80241910(0.0f, -100.0f, 0.0f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80246C0C.s")


extern void func_8012D918(s32, s32, s32, s32, s32);

struct func_80246DE0_Target {
    u8 pad[0x4C];
    u8 unk4C;
};

struct func_80246DE0_Node {
    u8 pad[0x30];
    struct func_80246DE0_Target *unk30;
};

struct func_80246DE0_Args {
    u8 pad[4];
    struct func_80246DE0_Node *unk4;
    struct func_80246DE0_Node *unk8;
    struct func_80246DE0_Node *unkC;
};

void func_80246DE0(s32 arg0, struct func_80246DE0_Args *arg1) {
    struct func_80246DE0_Target *temp_a2;
    struct func_80246DE0_Target *temp_v0;
    struct func_80246DE0_Target *temp_v1;

    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk4C = temp_v0->unk4C + 1;
    temp_v1 = arg1->unk8->unk30;
    temp_v1->unk4C = temp_v1->unk4C + 2;
    temp_a2 = arg1->unkC->unk30;
    temp_a2->unk4C = temp_a2->unk4C - 2;
    if (func_80133A24(0x11C) == 0) {
        func_8012D918(arg0, 0x2F8, 1, 4, 0);
    } else {
        func_8012D918(arg0, 0x2F8, 0, 4, 0);
    }
    if (func_80133A24(0x11D) == 0) {
        func_8012D918(arg0, 0x2F8, 1, 5, 0);
        return;
    }
    func_8012D918(arg0, 0x2F8, 0, 5, 0);
}


extern u8 func_80247530[];
struct func_80247978_StructGlobal;
extern struct func_80247978_StructGlobal *D_8025DDC0;
extern void func_802479E8(s32 arg0, s32 arg1);

void func_80246EC0(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_802450B0_Sq sp38;

    if (func_80133A24(0x128) != 0) {
        func_801339D0(0x128);
        G.unk32 = 0;
        G.unk198 = 0.0f;
        G.unk19C = -100.0f;
        G.unk1A0 = 520.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_802450B0_Sq *)D_80164F40;
        sp38.b = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk9C = 0;
        arg0->unk90 = 0.0f;
        arg0->unk94 = -100.0f;
        arg0->unk98 = 402.0f;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = (f64)func_8001EB64(arg0->unk9C) * 46.0 + (f64)arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = (f64)arg0->unk98 - (f64)func_8001EAD0(arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = G.unkF32;
        arg1->unk0->unk30->unk4D = G.unkF33;
        arg1->unk0->unk30->unk4E = G.unkF34;
        arg1->unk0->unk30->unk4F = G.unkF35;
        G.unkF20 = 0xA;
        G.unkF21 = 0x14;
        G.unkF22 = 0x28;
        G.unkF23 = 0xFF;
        G.unkF24 = 0xFF;
        G.unkF25 = 0xFF;
        G.unkF26 = 0;
        *(s8 *)&G.unkF27 = -0x7D;
        G.unkF28 = 0x1E;
        G.unkF29 = 0x64;
        G.unkF2A = 0x3C;
        G.unkF2B = 0x14;
        G.unkF2C = 0xA;
        G.unkF2D = -0x7D;
        G.unkF2E = -0x28;
        G.unkF32 = 1;
        G.unkF33 = 1;
        G.unkF34 = 1;
        G.unkF35 = 0xA0;
        G.unk29C = 5.0f;
        G.unk2A0 = 200.0f;
        arg0->unkA4 = 0.0f;
        arg0->unkA8 = 408.0f;
        D_8025DDC0 = func_80241790(0.0f, -100.0f, 529.0f, 0, 0x120, 0x128, 0x11E, 0x2C);
        if (func_80133A24(0x120) == 0) {
            func_800058DC(arg0, func_80247530);
            return;
        }
        func_800058DC(arg0, func_802479E8);
    }
}



void func_802471F4(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_802450B0_Sq sp38;

    if (func_80133A24(0x129) != 0) {
        func_801339D0(0x129);
        G.unk32 = 0x1000;
        G.unk198 = 0.0f;
        G.unk19C = -100.0f;
        G.unk1A0 = -520.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_802450B0_Sq *)D_80164F40;
        sp38.b = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk9C = 0x1000;
        arg0->unk90 = 0.0f;
        arg0->unk94 = -100.0f;
        arg0->unk98 = -402.0f;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = func_8001EB64(arg0->unk9C) * 46.0 + arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = arg0->unk98 - func_8001EAD0(arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = G.unkF32;
        arg1->unk0->unk30->unk4D = G.unkF33;
        arg1->unk0->unk30->unk4E = G.unkF34;
        arg1->unk0->unk30->unk4F = G.unkF35;
        G.unkF20 = 10;
        G.unkF21 = 20;
        G.unkF22 = 40;
        G.unkF23 = 255;
        G.unkF24 = 255;
        G.unkF25 = 255;
        G.unkF26 = 0;
        *(s8 *)&G.unkF27 = -125;
        G.unkF28 = 30;
        G.unkF29 = 100;
        G.unkF2A = 60;
        G.unkF2B = 20;
        G.unkF2C = 10;
        G.unkF2D = -125;
        G.unkF2E = -40;
        G.unkF32 = 1;
        G.unkF33 = 1;
        G.unkF34 = 1;
        G.unkF35 = 160;
        G.unk29C = 5.0f;
        G.unk2A0 = 200.0f;
        arg0->unkA4 = 0.0f;
        arg0->unkA8 = -408.0f;
        D_8025DDC0 = func_80241790(0.0f, -100.0f, -529.0f, 0x1000, 0x121, 0x129, 0x11F, 0x2C);
        if (func_80133A24(0x121) == 0) {
            func_800058DC(arg0, func_80247530);
            return;
        }
        func_800058DC(arg0, func_802479E8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/func_80247530.s")


struct func_802476F0_StructObj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x74 - 0x30];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84, unk86, unk88;
    u8 pad2[6];
    f32 unk90, unk94, unk98;
    s16 unk9C;
    u8 pad3[2];
    f32 unkA0;
};
struct func_802476F0_StructTransform {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};
struct func_802476F0_StructGlobal {
    u8 pad[0x2C];
    struct func_802476F0_StructTransform *unk2C;
};
extern struct func_802476F0_StructGlobal *D_801BBCD8;
extern s32 D_80258A88;
extern u8 D_8025CA08[];
extern s32 func_801C2FF8(void);
struct func_802476F0_StructParams {
    s16 flag;
    s32 value;
    f32 scale;
    s16 duration;
};

void func_80247930();

void func_802476F0(struct func_802476F0_StructObj *arg0,struct func_802450B0_StructN **arg1) {
    f32 temp_fv0;
    struct func_802450B0_StructT *temp_v0;
    struct func_802450B0_StructT *temp_v0_2;
    struct func_802476F0_StructTransform *temp_v0_3;
    struct func_802476F0_StructParams params;
    s32 one;

    if ((D_80258A88 == 0) && (func_801C2FF8() != 0)) {
        params.flag = 0x1000;
        params.value = 0x03480042;
        params.scale = 3.0f;
        func_801C2F0C(4, &params);
        D_80258A88 = 1;
    }
    temp_fv0 = func_8001EB64(arg0->unk9C);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4 = (f64) temp_v0->unk4 - (f64) temp_fv0;
    temp_fv0 = func_8001EAD0(arg0->unk9C);
    temp_v0_2 = (*arg1)->unk30;
    temp_v0_2->unkC = (f64) temp_v0_2->unkC + (f64) temp_fv0;
    one = 1;
    arg0->unkA0 = (f64) arg0->unkA0 + 1.0;
    if ((f64) arg0->unkA0 >= 46.0) {
        func_8011AAF4(D_8025CA08, 0x172, arg0, 2, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x30A, 1);
        temp_fv0 = arg0->unk90;
        arg0->unk84 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = temp_fv0;
        arg0->unk7C = arg0->unk94;
        arg0->unk80 = arg0->unk98;
        arg0->unk86 = *(u16 *) &arg0->unk9C;
        (*arg1)->unk30->unk4 = temp_fv0;
        (*arg1)->unk30->unkC = arg0->unk98;
        params.flag = 0;
        params.value = 0x01680041;
        params.duration = 0x14;
        params.scale = 1.0f;
        func_801C2F0C(3, &params);
        func_800058DC(arg0, func_80247930);
    }
}


struct func_80247930_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern void func_80247978();

void func_80247930(struct func_80247930_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80247978);
    }
}


typedef struct func_80247978_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_80247978_StructGlobal;

typedef struct func_80247978_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80247978_StructObj;


void func_80247978(func_80247978_StructObj *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  if (func_80133A24(D_8025DDC0->unkA2) == 0)
  {
    return;
  }
  if (func_80126944() == 1)
  {
    return;
  }
  temp_v0 = arg0->unk3C;
  temp_v1 = temp_v0 >= 0x1E;
  arg0->unk3C = temp_v0 + 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_800058DC(arg0, func_802479E8);
  }
}


void func_802479E8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

