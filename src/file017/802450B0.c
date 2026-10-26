#include "common.h"

extern f32 D_8025C900;
extern f32 D_8025C904;
extern f32 D_8025C908;
extern f32 D_8025C90C;
extern f32 D_8025C910;
extern f32 D_8025C914;
extern f32 D_8025C918;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_802588F0;
extern s32 func_80126944(void);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(u16);
extern s32 func_801C3044();
extern s32 func_801C3D20(f32, f32, f32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern u8 D_8025C890[];
extern u8 func_80126EAC[];
#define func_80245F8C func_80245F8C__decl
extern u8 func_80245F8C[];
extern void *func_80241790(f32, f32, f32, s32, s32, s32, s32, s32);
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_801339D0(s32);
extern void func_801C2F0C();
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_80245DCC();
extern void func_80245DCC__func_802450B0();
extern void func_80246214();
extern void func_80246284(s32 arg0, s32 arg1);
extern void func_80246284__func_802450B0();

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/D_8025C7A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/D_8025C80C.s")

#define func_80245DCC func_80245DCC__func_802450B0
#define func_80246284 func_80246284__func_802450B0
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
extern void func_80245DCC();
extern void func_80246284(s32 arg0, s32 arg1);

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
        arg0->unkA8 = 355.0f;
        *(void **)&D_8025DDB0 = func_80241790(265.0f, 0.0f, 458.0f, 0x2AA, 0x118, 0x128, 0x114, 0x2A);
        if (func_80133A24(0x118) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, func_80246284);
    }
}
#undef func_80245DCC
#undef func_80246284

#define func_80245DCC func_80245DCC__func_802453F0
#define func_80246284 func_80246284__func_802453F0

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
extern void func_80245DCC();
extern void func_80246284();
#ifndef D_8025C908

#endif
#ifndef D_8025C90C

#endif
#ifndef D_8025C910

#endif

void func_802453F0(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    s32 sp38[4];
    if (func_80133A24(0x129) != 0) {
        func_801339D0(0x129);
        G.unk32 = 0x1D55;
        G.unk198 = -258.0f;
        G.unk19C = 0.0f;
        G.unk1A0 = 452.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        *(struct func_802450B0_Sq *)sp38 = *(struct func_802450B0_Sq *)D_80164F40;
        sp38[1] = 0x80000900;
        func_80005E44(arg0, sp38);
        func_80006214(arg0);
        arg0->unk90 = -201.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = 349.0f;
        arg0->unk9C = 0x1D55;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (s32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = func_8001EB64((s16)arg0->unk9C) * 46.0 + arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = arg0->unk98 - func_8001EAD0((s16)arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = G.unkF32;
        arg1->unk0->unk30->unk4D = G.unkF33;
        arg1->unk0->unk30->unk4E = G.unkF34;
        arg1->unk0->unk30->unk4F = G.unkF35;
        G.unkF22 = 0x46;
        G.unkF20 = 0x64;
        G.unkF21 = 0x64;
        G.unkF23 = 1;
        G.unkF24 = 0x50;
        G.unkF25 = 0xFF;
        *(u8 *)&G.unkF26 = 0xB;
        G.unkF27 = 0x19;
        G.unkF28 = 0xB;
        G.unkF29 = 0x9D;
        G.unkF2A = 0x50;
        G.unkF2B = 0xFF;
        G.unkF2C = -0xB;
        G.unkF2D = -0x22;
        G.unkF2E = 0x25;
        G.unkF32 = 0x3C;
        G.unkF33 = 0x14;
        G.unkF34 = 0x32;
        G.unkF35 = 0xAA;
        G.unk29C = 5.0f;
        G.unk2A0 = 500.0f;
        arg0->unkA4 = -205.0f;
        arg0->unkA8 = 355.0f;
        D_8025DDB0 = func_80241790((-263.0f), 0.0f, 459.0f, 0x1D55, 0x119, 0x129, 0x115, 0x2A);
        if (func_80133A24(0x119) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, (void *)func_80246284);
    }
}
#undef func_80245DCC
#undef func_80246284


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
        arg0->unk98 = (-349.0f);
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
        arg0->unkA8 = (-355.0f);
        D_8025DDB0 = func_80241790(-264.0f, 0.0f, -459.0f, 0x12AA, 0x11A, 0x12A, 0x116, 0x2A);
        if (func_80133A24(0x11A) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, func_80246284);
    }
}


#define HH80245A80 (*(struct func_802453F0_StructG *)&D_801BBBF0)

void func_80245A80(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_80245A80_V { s32 w[4]; } sp;

    if (func_80133A24(0x12B) != 0) {
        func_801339D0(0x12B);
        HH80245A80.unk32 = 0xAAA;
        HH80245A80.unk198 = 272.0f;
        HH80245A80.unk19C = 0.0f;
        HH80245A80.unk1A0 = -446.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp = *(struct func_80245A80_V *)D_80164F40;
        sp.w[1] = 0x80000900;
        func_80005E44(arg0, &sp);
        func_80006214(arg0);
        arg0->unk90 = 201.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = (-349.0f);
        arg0->unk9C = 0xD55;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = (f32)((f64)func_8001EB64(arg0->unk9C) * 46.0 + (f64)arg0->unk90);
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = (f32)((f64)arg0->unk98 - (f64)func_8001EAD0(arg0->unk9C) * 46.0);
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = HH80245A80.unkF32;
        arg1->unk0->unk30->unk4D = HH80245A80.unkF33;
        arg1->unk0->unk30->unk4E = HH80245A80.unkF34;
        arg1->unk0->unk30->unk4F = HH80245A80.unkF35;
        HH80245A80.unkF22 = 0x46;
        HH80245A80.unkF20 = 0x64;
        HH80245A80.unkF21 = 0x64;
        HH80245A80.unkF23 = 1;
        HH80245A80.unkF24 = 0x50;
        HH80245A80.unkF25 = 0xFF;
        HH80245A80.unkF26 = 0xB;
        HH80245A80.unkF27 = 0x19;
        HH80245A80.unkF28 = 0xB;
        HH80245A80.unkF29 = 0x9D;
        HH80245A80.unkF2A = 0x50;
        HH80245A80.unkF2B = 0xFF;
        HH80245A80.unkF2C = -0xB;
        HH80245A80.unkF2D = -0x22;
        HH80245A80.unkF2E = 0x25;
        HH80245A80.unkF32 = 0x3C;
        HH80245A80.unkF33 = 0x14;
        HH80245A80.unkF34 = 0x32;
        HH80245A80.unkF35 = 0xAA;
        HH80245A80.unk29C = 5.0f;
        HH80245A80.unk2A0 = 500.0f;
        arg0->unkA4 = 205.0f;
        arg0->unkA8 = (-355.0f);
        D_8025DDB0 = (void *)func_80241790(280.0f, 0.0f, -449.0f, 0xAAA, 0x11B, 0x12B, 0x117, 0x2A);
        if (func_80133A24(0x11B) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, func_80246284);
    }
}
#undef HH80245A80

/* hh-block asm/nonmatchings/file017/802450B0/_ro_func_80245DCC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/802450B0/func_80245DCC.s","D_8025C890"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/_ro_func_80245DCC.s")


struct func_80245DCC_Struct { u8 pad[0x9C]; s16 unk9C; u8 pad2[2]; f32 unkA0; f32 unkA4; f32 unkA8; };
struct func_80245DCC_Struct3 { u8 pad[4]; f32 unk4; u8 pad2[4]; f32 unkC; };
struct func_80245DCC_Struct2 { u8 pad[0x2C]; struct func_80245DCC_Struct3 *unk2C; };
extern struct func_80245DCC_Struct2 *D_801BBCD0;

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

#undef func_80245F8C
#undef G
/* hh-block asm/nonmatchings/file017/802450B0/_ro_func_80245F8C.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/802450B0/func_80245F8C.s","D_8025C8C8"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/802450B0/_ro_func_80245F8C.s")

#define D_801BBBF0 D_801BBBF0__func_80245F8C
#define D_801BBCD8 D_801BBCD8__func_80245F8C
#define D_8025C8C8 D_8025C8C8__func_80245F8C
#define func_8012C97C func_8012C97C__func_80245F8C
#define func_801C2FF8 func_801C2FF8__func_80245F8C
#define func_802450B0_StructG func_802450B0_StructG__func_80245F8C
#define func_802453F0_StructA func_802453F0_StructA__func_80245F8C
#define func_802453F0_StructB func_802453F0_StructB__func_80245F8C
#define func_802453F0_StructG func_802453F0_StructG__func_80245F8C
#define func_802453F0_StructP func_802453F0_StructP__func_80245F8C
#define func_802461CC func_802461CC__func_80245F8C
#define G (*(struct func_802450B0_StructG *)&D_801BBBF0)
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
extern struct func_802453F0_StructG D_801BBBF0;
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
#define G (*(struct func_802450B0_StructG *)&D_801BBBF0)
extern s32 func_8012C97C(s32, s32);
extern s32 func_801C2FF8(void);
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
struct func_802476F0_StructTransform {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};
struct func_802476F0_StructGlobal {
    u8 pad[0x2C];
    struct func_802476F0_StructTransform *unk2C;
};


struct func_80245F8C_StructO {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x74 - 0x30];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84;
    u16 unk86;
    s16 unk88;
    u8 pad2[0x90 - 0x8A];
    f32 unk90, unk94, unk98;
    u16 unk9C;
    u8 pad3[2];
    f32 unkA0;
};
struct func_80245F8C_StructParams {
    s16 flag;
    s32 value;
    f32 scale;
    s16 duration;
};
struct func_80245F8C_StructT {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
};
struct func_80245F8C_StructG {
    u8 pad[0x2C];
    struct func_80245F8C_StructT *unk2C;
};
extern struct func_802476F0_StructGlobal *D_801BBCD8;
void func_802461CC();
extern u8 D_8025C8C8[];
#define G ((struct func_80245F8C_StructG *) D_801BBCD8)

void func_80245F8C(struct func_80245F8C_StructO *arg0, struct func_802453F0_StructP *arg1) {
    s32 pad[4];
    struct func_80245F8C_StructParams sp60;

    if ((D_802588F0 == 0) && (func_801C2FF8() != 0)) {
        sp60.flag = 0x1000;
        sp60.value = 0x03480042;
        sp60.scale = 3.0f;
        func_801C2F0C(4, &sp60);
        D_802588F0 = 1;
    }
    arg1->unk0->unk30->unk4 = (f32) ((f64) arg1->unk0->unk30->unk4 - (f64) func_8001EB64(arg0->unk9C));
    arg1->unk0->unk30->unkC += (f64) func_8001EAD0(arg0->unk9C);
    arg0->unkA0 = (f32) ((f64) arg0->unkA0 + 1.0);
    if ((f64) arg0->unkA0 >= 46.0) {
        func_8011AAF4(D_8025C8C8, 0x24B, arg0, 2, 1, 0.0f, G->unk2C->unk30, G->unk2C->unk34, G->unk2C->unk38, 0.0f, G->unk2C->unk3C, G->unk2C->unk40, G->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x30A, 1);
        arg0->unk84 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = arg0->unk90;
        arg0->unk7C = arg0->unk94;
        arg0->unk80 = arg0->unk98;
        arg0->unk86 = arg0->unk9C;
        arg1->unk0->unk30->unk4 = arg0->unk90;
        arg1->unk0->unk30->unkC = arg0->unk98;
        sp60.flag = 0;
        sp60.value = 0x01680041;
        sp60.scale = 1.0f;
        sp60.duration = 0x14;
        func_801C2F0C(3, &sp60);
        func_800058DC(arg0, func_802461CC);
    }
}
#undef G
#undef D_801BBBF0
#undef D_801BBCD8
#undef D_8025C8C8
#undef func_8012C97C
#undef func_801C2FF8
#undef func_802450B0_StructG
#undef func_802453F0_StructA
#undef func_802453F0_StructB
#undef func_802453F0_StructG
#undef func_802453F0_StructP
#undef func_802461CC
#define G (*(struct func_802450B0_StructG *)&D_801BBBF0)
#define func_80245F8C func_80245F8C__decl

#define func_80246214 func_80246214__func_802461CC

struct func_802461CC_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern void func_80246214();

void func_802461CC(struct func_802461CC_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80246214);
    }
}
#undef func_80246214

#define D_8025DDB0 D_8025DDB0__func_80246214
#define func_80246284 func_80246284__func_80246214

typedef struct func_80246214_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_80246214_StructGlobal;

typedef struct func_80246214_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80246214_StructObj;

extern func_80246214_StructGlobal *D_8025DDB0;
extern void func_80246284(s32 arg0, s32 arg1);

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
#undef D_8025DDB0
#undef func_80246284


void func_80246284(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

