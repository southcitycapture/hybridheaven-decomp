#include "common.h"

extern f32 D_8025CB60;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_80258C18;
extern s32 func_80126944(void);
extern s32 func_80126CC0();
extern s32 func_80133A24(u16);
extern s32 func_801C3044();
extern s32 func_801C3D20(f32, f32, f32);
extern s32 func_80241790(f32, f32, s32, s32, s32, s32, s32, s32);
extern u8 D_8017AF38[];
extern u8 D_8025CAF0[];
#define func_80248E64 func_80248E64__decl
extern u8 func_80248E64[];
extern void func_800058DC(void *, void *);
extern void func_80005E44();
extern void func_80006214();
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80126EAC();
extern void func_8012C89C();
extern void func_801339D0();
extern void func_801C2F0C();
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_80248CAC();
extern void func_802490EC();
extern void func_8024915C(s32 arg0, s32 arg1);

#define func_80248CAC func_80248CAC__func_80248620
#define func_8024915C func_8024915C__func_80248620

struct func_802490EC_StructGlobal;
extern struct func_802490EC_StructGlobal *D_8025DDD0;
extern void func_8024915C(s32 arg0, s32 arg1);

typedef struct func_80248620_StructB {
    u8 pad0[0x30];
    s32 unk30;
} func_80248620_StructB;

typedef struct func_80248620_StructA {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
    u8 pad14[0x30 - 0x14];
    struct func_80248620_StructA *unk30p;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80248620_StructA;

typedef struct func_80248620_StructObj {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad28[0x30 - 0x28];
    u32 unk30;
} func_80248620_StructObj;

typedef struct func_80248620_StructHold {
    u8 pad0[0x30];
    func_80248620_StructObj *unk30;
} func_80248620_StructHold;

typedef struct func_80248620_StructP {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 pad9E[0xA4 - 0x9E];
    f32 unkA4;
    f32 unkA8;
} func_80248620_StructP;

typedef struct func_80248620_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0x198 - 0x34];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad1A4[0x29C - 0x1A4];
    f32 unk29C;
    f32 unk2A0;
    u8 pad2A4[0xF20 - 0x2A4];
    u8 unkF20[16];
    u8 pad_F30[2];
    u8 unkF32[4];
} func_80248620_StructG;

extern func_80248620_StructG D_801BBBF0;
typedef struct func_80248620_StructV { s32 w[4]; } func_80248620_StructV;
extern func_80248620_StructV D_80164F40;
extern void func_80248CAC();

void func_80248620(func_80248620_StructP *arg0, func_80248620_StructHold **arg1) {
    func_80248620_StructV sp38;

    if (func_80133A24(0x128) != 0) {
        func_801339D0(0x128);
        D_801BBBF0.unk32 = 0x1C00;
        D_801BBBF0.unk198 = -55.0f;
        D_801BBBF0.unk19C = -200.0f;
        D_801BBBF0.unk1A0 = 600.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = D_80164F40;
        sp38.w[1] = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk9C = 0;
        arg0->unk90 = 20.0f;
        arg0->unk94 = -200.0f;
        arg0->unk98 = 462.0f;
        func_8012C89C(arg0, 0, 0x30A, 0);
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk30 = (s32)D_8017AF38 | 0x40000000;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4 = (f32)((f64)func_8001EB64(arg0->unk9C) * 46.0 + (f64)arg0->unk90);
        ((func_80248620_StructA *)(*arg1)->unk30)->unk8 = arg0->unk94;
        ((func_80248620_StructA *)(*arg1)->unk30)->unkC = (f32)((f64)arg0->unk98 - (f64)func_8001EAD0(arg0->unk9C) * 46.0);
        ((func_80248620_StructA *)(*arg1)->unk30)->unk12 = *(u16 *)&arg0->unk9C;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4C = D_801BBBF0.unkF32[0];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4D = D_801BBBF0.unkF32[1];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4E = D_801BBBF0.unkF32[2];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4F = D_801BBBF0.unkF32[3];
        D_801BBBF0.unkF20[0] = 1;
        D_801BBBF0.unkF20[1] = 1;
        D_801BBBF0.unkF20[2] = 1;
        D_801BBBF0.unkF20[3] = 0xFF;
        D_801BBBF0.unkF20[4] = 0xFF;
        D_801BBBF0.unkF20[5] = 0xFF;
        D_801BBBF0.unkF20[6] = 0x55;
        D_801BBBF0.unkF20[7] = 0x7D;
        D_801BBBF0.unkF20[8] = 0x46;
        D_801BBBF0.unkF20[9] = 0xC8;
        D_801BBBF0.unkF20[10] = 0xC8;
        D_801BBBF0.unkF20[11] = 0x96;
        *(s8 *)&D_801BBBF0.unkF20[12] = -0x55;
        D_801BBBF0.unkF20[13] = 0x7D;
        *(s8 *)&D_801BBBF0.unkF20[14] = -0x46;
        D_801BBBF0.unkF32[0] = 0;
        D_801BBBF0.unkF32[1] = 0x82;
        D_801BBBF0.unkF32[2] = 0x82;
        D_801BBBF0.unkF32[3] = 0xB0;
        D_801BBBF0.unk29C = 5.0f;
        D_801BBBF0.unk2A0 = 500.0f;
        arg0->unkA4 = 20.0f;
        arg0->unkA8 = 470.0f;
        *(s32 *)&D_8025DDD0 = func_80241790(-60.0f, -200.0f, 0x44184000, 0x1C00, 0x126, 0x128, 0x124, 0x2E);
        if (func_80133A24(0x126) == 0) {
            func_800058DC(arg0, func_80248CAC);
            return;
        }
        func_800058DC(arg0, func_8024915C);
    }
}
#undef func_80248CAC
#undef func_8024915C

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80248620/D_8025CAD0.s")


void func_80248964(func_80248620_StructP *arg0, func_80248620_StructHold **arg1) {
    func_80248620_StructV sp38;

    if (func_80133A24(0x129) != 0) {
        func_801339D0(0x129);
        D_801BBBF0.unk32 = 0xC00;
        D_801BBBF0.unk198 = 55.0f;
        D_801BBBF0.unk19C = -200.0f;
        D_801BBBF0.unk1A0 = -600.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = D_80164F40;
        sp38.w[1] = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk90 = -20.0f;
        arg0->unk94 = -200.0f;
        arg0->unk98 = (-463.0f);
        arg0->unk9C = 0x1000;
        func_8012C89C(arg0, 0, 0x30A, 0);
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4 = func_8001EB64(arg0->unk9C) * 46.0 + arg0->unk90;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk8 = arg0->unk94;
        ((func_80248620_StructA *)(*arg1)->unk30)->unkC = arg0->unk98 - func_8001EAD0(arg0->unk9C) * 46.0;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk12 = *(u16 *)&arg0->unk9C;
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4C = D_801BBBF0.unkF32[0];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4D = D_801BBBF0.unkF32[1];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4E = D_801BBBF0.unkF32[2];
        ((func_80248620_StructA *)(*arg1)->unk30)->unk4F = D_801BBBF0.unkF32[3];
        D_801BBBF0.unkF20[0] = 1;
        D_801BBBF0.unkF20[1] = 1;
        D_801BBBF0.unkF20[2] = 1;
        D_801BBBF0.unkF20[3] = 0xFF;
        D_801BBBF0.unkF20[4] = 0xFF;
        D_801BBBF0.unkF20[5] = 0xFF;
        D_801BBBF0.unkF20[6] = 0x55;
        D_801BBBF0.unkF20[7] = 0x7D;
        D_801BBBF0.unkF20[8] = 0x46;
        D_801BBBF0.unkF20[9] = 0xC8;
        D_801BBBF0.unkF20[10] = 0xC8;
        D_801BBBF0.unkF20[11] = 0x96;
        ((s8 *)D_801BBBF0.unkF20)[12] = -0x55;
        D_801BBBF0.unkF20[13] = 0x7D;
        ((s8 *)D_801BBBF0.unkF20)[14] = -0x46;
        D_801BBBF0.unkF32[0] = 0;
        D_801BBBF0.unkF32[1] = 0x82;
        D_801BBBF0.unkF32[2] = 0x82;
        D_801BBBF0.unkF32[3] = 0xB0;
        D_801BBBF0.unk29C = 5.0f;
        D_801BBBF0.unk2A0 = 500.0f;
        arg0->unkA4 = -20.0f;
        arg0->unkA8 = -470.0f;
        D_8025DDD0 = (struct func_802490EC_StructGlobal *)func_80241790(60.0f, -200.0f, 0xC4188000, 0xC00, 0x127, 0x129, 0x125, 0x2E);
        if (func_80133A24(0x127) == 0) {
            func_800058DC(arg0, func_80248CAC);
            return;
        }
        func_800058DC(arg0, func_8024915C);
    }
}

/* hh-block asm/nonmatchings/file017/80248620/_ro_func_80248CAC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80248620/func_80248CAC.s","D_8025CAF0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80248620/_ro_func_80248CAC.s")


typedef struct func_80248CAC_StructB { u8 pad[4]; f32 unk4; u8 pad2[4]; f32 unkC; } func_80248CAC_StructB;
typedef struct func_80248CAC_StructA { u8 pad[0x2C]; func_80248CAC_StructB *unk2C; } func_80248CAC_StructA;
extern func_80248CAC_StructA *D_801BBCD0;
typedef struct func_80248CAC_Struct { u8 pad[0x9C]; s16 unk9C; u8 pad2[2]; f32 unkA0; f32 unkA4; f32 unkA8; } func_80248CAC_Struct;

void func_80248CAC(func_80248CAC_Struct *arg0, s32 arg1)
{
  s32 i;
  s16 a;
  s32 t;
  f32 s;
  f32 f;
  for (i = -0x28; i != 0x2C; i += 4)
  {
    s = func_8001EB64(arg0->unk9C);
    if (func_801C3D20(arg0->unkA4 - (s * ((f32) i)), (func_8001EAD0(arg0->unk9C) * ((f32) i)) + arg0->unkA8, f = 3.0f))
    {
      func_801C3B2C(2);
      func_801C3B10(1);
 t = ((s16) (((u16) arg0->unk9C) - 0xE3)) & 0x1FFF; a = t; s = func_8001EAD0(a); func_8011AAF4(D_8025CAF0, 0x14E, arg0, 0, 1, f = 0.0f, (s * 30.0f) + D_801BBCD0->unk2C->unk4, -185.0f, (func_8001EB64((s16) t) * 30.0f) + D_801BBCD0->unk2C->unkC, f, D_801BBCD0->unk2C->unk4, -185.0f, D_801BBCD0->unk2C->unkC, f, 35.0f, -1, -1); arg0->unkA0 = f; func_800208C4(0x44); func_80020718(0x12F);
      D_80258C18 = 0;
      func_800058DC(arg0, func_80248E64);
      return;
    }
  }

}

#undef func_80248E64
/* hh-block asm/nonmatchings/file017/80248620/_ro_func_80248E64.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80248620/func_80248E64.s","D_8025CB28"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80248620/_ro_func_80248E64.s")

#define D_801BBCD8 D_801BBCD8__func_80248E64
#define D_8025CB28 D_8025CB28__func_80248E64
#define func_8012C97C func_8012C97C__func_80248E64
#define func_801C2FF8 func_801C2FF8__func_80248E64
#define func_802490A4 func_802490A4__func_80248E64
#define func_80248E64 D_80248E64
#undef func_80248E64

typedef struct func_80248E64_StructObj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84, unk86, unk88;
    u8 pad8A[6];
    f32 unk90, unk94, unk98;
    s16 unk9C;
    u8 pad9E[2];
    f32 unkA0;
} func_80248E64_StructObj;
typedef struct func_80248E64_StructVec {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[0x20];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_80248E64_StructVec;
typedef struct func_80248E64_StructHold {
    u8 pad0[0x2C];
    func_80248E64_StructVec *unk2C;
    func_80248E64_StructVec *unk30;
} func_80248E64_StructHold;
extern func_80248E64_StructHold *D_801BBCD8;
extern u8 D_8025CB28[];
extern s32 func_801C2FF8(void);
extern s32 func_8012C97C(s32, s32);
extern void func_802490A4();

void func_80248E64(func_80248E64_StructObj *arg0, func_80248E64_StructHold **arg1) {
    f32 temp_fv0;
    func_80248E64_StructVec *temp_v0;
    struct {
        s16 unk0;
        s32 unk4;
        f32 unk8;
        s16 unkC;
        u8 pad[8];
    } sp60;
    func_80248E64_StructVec *temp_v0_2;

    if (D_80258C18 == 0 && func_801C2FF8() != 0) {
        sp60.unk0 = 0x1000;
        sp60.unk4 = 0x03480042;
        sp60.unk8 = 3.0f;
        func_801C2F0C(4, &sp60);
        D_80258C18 = 1;
    }
    temp_fv0 = func_8001EB64(arg0->unk9C);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4 = (f64) temp_v0->unk4 - (f64) temp_fv0;
    temp_fv0 = func_8001EAD0(arg0->unk9C);
    temp_v0_2 = (*arg1)->unk30;
    temp_v0_2->unkC = (f64) temp_v0_2->unkC + (f64) temp_fv0;
    arg0->unkA0 = (f64) arg0->unkA0 + 1.0;
    if ((f64) arg0->unkA0 >= 46.0) {
#define temp_v0_3 (D_801BBCD8->unk2C)
        func_8011AAF4(D_8025CB28, 0x172, arg0, 2, 1, 0.0f,
            temp_v0_3->unk30, temp_v0_3->unk34, temp_v0_3->unk38, 0.0f,
            temp_v0_3->unk3C, temp_v0_3->unk40, temp_v0_3->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x30A, 1);
        temp_fv0 = arg0->unk90;
        arg0->unk84 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = temp_fv0;
        arg0->unk7C = arg0->unk94;
        arg0->unk80 = arg0->unk98;
        arg0->unk86 = *(u16 *)&arg0->unk9C;
        (*arg1)->unk30->unk4 = temp_fv0;
        (*arg1)->unk30->unkC = arg0->unk98;
        sp60.unk0 = 0;
        sp60.unk4 = 0x01680041;
        sp60.unkC = 0x14;
        sp60.unk8 = 1.0f;
        func_801C2F0C(3, &sp60);
        func_800058DC(arg0, func_802490A4);
    }
}
#undef temp_v0_3
#undef D_801BBCD8
#undef D_8025CB28
#undef func_8012C97C
#undef func_801C2FF8
#undef func_802490A4
#define func_80248E64 func_80248E64__decl

#define func_802490EC func_802490EC__func_802490A4

struct func_802490A4_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern void func_802490EC();

void func_802490A4(struct func_802490A4_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802490EC);
    }
}
#undef func_802490EC

#define D_8025DDD0 D_8025DDD0__func_802490EC
#define func_8024915C func_8024915C__func_802490EC

typedef struct func_802490EC_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_802490EC_StructGlobal;

typedef struct func_802490EC_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_802490EC_StructObj;

extern func_802490EC_StructGlobal *D_8025DDD0;
extern void func_8024915C(s32 arg0, s32 arg1);

void func_802490EC(func_802490EC_StructObj *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  if (func_80133A24(D_8025DDD0->unkA2) == 0)
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
    func_800058DC(arg0, func_8024915C);
  }
}
#undef D_8025DDD0
#undef func_8024915C


void func_8024915C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

