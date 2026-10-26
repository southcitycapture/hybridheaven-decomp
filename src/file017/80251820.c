#include "common.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_8025D7F8;
extern f64 D_8025D800;
extern f64 D_8025D840;
extern f64 D_8025D848;
extern f64 D_8025D850;
extern f64 D_8025D858;
extern s16 D_801BBF90[];
extern s16 func_80151478(s32);
extern s32 D_8025DE10;
extern s32 func_80126944(void);
extern s32 func_8012C97C(s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_801516CC(s32);
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern u8 D_801BBDA0[];
extern u8 D_802594B4[];
extern u8 D_802594C0[];
extern u8 D_802594D0[];
extern u8 D_80259520[];
extern u8 D_80259570[];
extern u8 D_80259618[];
extern u8 D_80259668[];
extern u8 D_8025D628[];
#define func_802526DC func_802526DC__decl
extern u8 func_802526DC[];
#define func_80252C14 func_80252C14__decl
extern u8 func_80252C14[];
extern void func_800058DC();
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_80020718(s32);
extern void func_80020744(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801268CC(s32);
extern void func_80126968();
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_80133980(s32);
extern void func_8015115C(s32, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C4058(void *, s32, s32, s32);
extern void func_801FBB30(void);
extern void func_8024CF18(s32, s32);
extern void func_80251E6C();
extern void func_80252E0C(s32 arg0);
extern void func_80252E78();
extern void func_8025386C();
extern void func_802538A4();
extern void func_80253A80();
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct func_80251820_Inner {
    u8 pad0[8];
    f32 unk8;
    u8 padC[6];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80251820_Inner;

typedef struct func_80251820_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80251820_Inner *unk30;
} func_80251820_Node;

typedef struct func_80251820_Args {
    func_80251820_Node *unk0;
    func_80251820_Node *unk4;
    func_80251820_Node *unk8;
    func_80251820_Node *unkC;
    func_80251820_Node *unk10;
    func_80251820_Node *unk14;
    func_80251820_Node *unk18;
    func_80251820_Node *unk1C;
} func_80251820_Args;

typedef struct func_80251820_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
} func_80251820_Ctx;

typedef struct func_80251820_V { s32 w[4]; } func_80251820_V;


void func_80251820(func_80251820_Ctx *arg0, func_80251820_Args *arg1) {
    s32 sp38[4];

    /* the 16-byte global at 0x80164F40; its type is only declared later in the file */
    *(func_80251820_V *) sp38 = *(func_80251820_V *) (D_8017AF38 - 0x15FF8);
    sp38[1] = 0x80000900;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000900;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000600;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000900;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000600;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000600;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000900;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000300;
    func_80005E44(arg0, sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 4);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x500;
    arg1->unk0->unk30->unk30 = (s32) D_802594D0 | 0x40000000;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0xD);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk4->unk22 = 0;
    func_8012C89C(arg0, 2, 0x302, 0x2C);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x500;
    arg1->unk8->unk30->unk30 = (s32) D_80259520 | 0x40000000;
    arg1->unk8->unk30->unk4B = 0x60;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk8->unk22 = 0;
    func_8012C89C(arg0, 3, 0x302, 0x18);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
    arg1->unkC->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    arg1->unkC->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unkC->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unkC->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unkC->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 4, 0x302, 0x11);
    func_8012CF8C(arg0, (u8 *) arg1->unk10->unk30 + 0x40, 0x302, 0x12);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x4100;
    arg1->unk10->unk30->unk30 = (s32) D_80259570 | 0x40000000;
    arg1->unk10->unk30->unk8 = 0.0f;
    arg1->unk10->unk30->unk48 = 0x96;
    arg1->unk10->unk30->unk49 = 0x64;
    arg1->unk10->unk30->unk4A = 0xFF;
    arg1->unk10->unk30->unk4B = 0x80;
    arg1->unk10->unk30->unk4C = 0;
    arg1->unk10->unk30->unk4D = 0;
    arg1->unk10->unk30->unk4E = 0xFF;
    arg1->unk10->unk30->unk4F = 0xFF;
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x302, 0x14);
    func_8012CF8C(arg0, (u8 *) arg1->unk14->unk30 + 0x40, 0x302, 0x12);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x4100;
    arg1->unk14->unk30->unk30 = (s32) D_80259570 | 0x40000000;
    arg1->unk14->unk30->unk48 = 0xC8;
    arg1->unk14->unk30->unk49 = 0xFF;
    arg1->unk14->unk30->unk4A = 0xC8;
    arg1->unk14->unk30->unk4B = 0x4C;
    arg1->unk14->unk30->unk4C = 0;
    arg1->unk14->unk30->unk4D = 0;
    arg1->unk14->unk30->unk4E = 0xFF;
    arg1->unk14->unk30->unk4F = 0xFF;
    arg1->unk14->unk22 = 0;
    func_8012C89C(arg0, 6, 0x302, 0x2D);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x100;
    arg1->unk18->unk30->unk30 = (s32) D_80259618 | 0x40000000;
    arg1->unk18->unk30->unk48 = 0;
    arg1->unk18->unk30->unk49 = 0;
    arg1->unk18->unk30->unk4A = 0;
    arg1->unk18->unk30->unk4B = 0xFF;
    arg1->unk18->unk30->unk12 = 0x1800;
    func_8012C89C(arg0, 7, 3, 1);
    arg1->unk1C->unk30->unk24 = arg1->unk1C->unk30->unk24 | 0x60100;
    arg1->unk1C->unk30->unk30 = (s32) D_80259668 | 0x40000000;
    arg1->unk1C->unk30->unk18 = 10.0f;
    arg1->unk1C->unk30->unk1C = 10.0f;
    arg1->unk1C->unk30->unk20 = 10.0f;
    arg1->unk1C->unk30->unk48 = 0xFF;
    arg1->unk1C->unk30->unk49 = 0xFF;
    arg1->unk1C->unk30->unk4A = 0xFF;
    arg1->unk1C->unk30->unk4B = 0;
    arg1->unk1C->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 5);
    func_8001F74C(arg0);
    func_800058DC(arg0, (void *) func_80251E6C);
}


extern void func_801339D0(s32);
extern void func_80251F80();

typedef struct func_80251E6C_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80251E6C_Inner;

typedef struct func_80251E6C_Mid {
    u8 pad0[0x30];
    func_80251E6C_Inner *unk30;
} func_80251E6C_Mid;

typedef struct func_80251E6C_Args {
    u8 pad0[0x1C];
    func_80251E6C_Mid *unk1C;
} func_80251E6C_Args;

typedef struct func_80251E6C_Obj {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0xC];
    u16 unk3C;
    u8 pad2[0x36];
    s32 unk74;
    u8 pad3[0x20];
    u8 unk98;
} func_80251E6C_Obj;

void func_80251E6C(func_80251E6C_Obj *arg0, func_80251E6C_Args *arg1) {
    if (func_80126944() == 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
    } else {
        arg0->unk2C = arg0->unk2C & ~0x800;
    }
    if (func_80133A24(0x130) != 0) {
        func_801339D0(0x130);
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        arg1->unk1C->unk30->unk4 = 150.0f;
        arg1->unk1C->unk30->unk8 = 0.0f;
        arg1->unk1C->unk30->unkC = 125.0f;
        D_801BBBF0[0x204] = 0xFF;
        D_801BBBF0[0x205] = 0xFF;
        D_801BBBF0[0x206] = 0xFF;
        D_801BBBF0[0x207] = 0xFF;
        D_801BBBF0[0x208] = 0;
        D_801BBBF0[0x209] = 0xFF;
        D_801BBBF0[0x20A] = 0;
        arg0->unk74 = 0;
        arg0->unk3C = 0;
        arg0->unk98 = 0;
        func_801339D0(0x131);
        func_801339D0(0x132);
        func_800058DC(arg0, func_80251F80);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/D_8025D5B0.s")

/* hh-block asm/nonmatchings/file017/80251820/_ro_func_80251F80.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80251820/func_80251F80.s","D_8025D5E0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/_ro_func_80251F80.s")


typedef struct func_80251F80_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x1C];
    f32 unk30;
    u8 pad34[4];
    f32 unk38;
} func_80251F80_Struct2C;
typedef struct func_80251F80_Struct { u8 pad[0x2C]; func_80251F80_Struct2C *unk2C; } func_80251F80_Struct;
typedef struct func_80251F80_Glob { u8 pad[0xE0]; func_80251F80_Struct *unkE0; u8 padE4[4]; func_80251F80_Struct *unkE8; } func_80251F80_Glob;

extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 func_8015105C(s32);
extern s32 D_8001EF38(f32, f32);
void func_802521D0(func_80251E6C_Obj *arg0, s32 arg1);
extern s32 func_801C3D20(f32, f32, f32);
extern u8 D_8025D5E0[];

#define GG ((func_80251F80_Glob *)D_801BBBF0)

void func_80251F80(func_80251E6C_Obj *arg0, s32 arg1) {
    s16 sp66;
    s32 pad60;
    f32 sp5C;
    func_80251F80_Struct2C *p;

    sp5C = func_8001EAD0(GG->unkE0->unk2C->unk12);
    if (D_801C3DC8(arg0, GG->unkE0->unk2C->unk4, GG->unkE0->unk2C->unk8 + 18.0f, GG->unkE0->unk2C->unkC,
                   sp5C * 40.0f + GG->unkE0->unk2C->unk4, GG->unkE0->unk2C->unk8 + 15.0f,
                   func_8001EB64(GG->unkE0->unk2C->unk12) * 40.0f + GG->unkE0->unk2C->unkC, 0.100000001f, 35.0f) == 0
        || func_801C3D20(GG->unkE8->unk2C->unk30, GG->unkE8->unk2C->unk38, 10.0f) != 0) {
        p = GG->unkE0->unk2C;
        sp66 = D_8001EF38(150.0 - p->unk4, 125.0 - p->unkC);
        sp5C = func_8001EAD0(sp66 * 1);
        func_8011AAF4(D_8025D5E0, 0x25C, arg0, 0, 1, 0.0f, 150.0 - sp5C * 70.0f,
            GG->unkE0->unk2C->unk8 + 15.0f,
            125.0 - func_8001EB64(sp66) * 70.0f, 0.0f, 150.0f, 14.0f, 125.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        D_8025DE10 = func_8015105C(0xFD);
        func_800058DC(arg0, func_802521D0);
    }
}
#undef GG

typedef struct func_802521D0_Struct2 { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_802521D0_Struct2;
typedef struct func_802521D0_Struct1 { u8 pad[0x2C]; func_802521D0_Struct2 *unk2C; } func_802521D0_Struct1;
typedef struct func_802521D0_Struct0 { u8 pad[0xE0]; func_802521D0_Struct1 *unkE0; } func_802521D0_Struct0;
extern void func_8024CF9C(f32, f32, f32);
extern s16 func_8001EF38(f32, f32);
extern void func_801512CC(s32, f32, f32, f32);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, s32, s32);
extern void func_80151700(s32, u8, void *);
extern s32 func_801517CC(s32);

extern u8 D_8017BAD8[];
extern u8 func_80252378[];
#define G ((func_802521D0_Struct0 *)D_801BBBF0)

void func_802521D0(func_80251E6C_Obj *arg0, s32 arg1)
{
  func_802521D0_Struct2 *p;
  s32 i;
  s32 t;
  u16 c;
  c = arg0->unk3C;
  arg0->unk3C = c + 1;
  if (c == 0)
  {
    func_8024CF9C(150.0f, 0.100000001f, 125.0f);
    p = ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C;
    ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38(150.0 - ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk4, 125.0 - ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unkC);
    func_80020718(0x182);
  }
  if ((c >= 0x1E) && (func_801517CC(D_8025DE10) != 0))
  {
    func_801512CC(D_8025DE10, 150.0f, 0.0f, 125.0f);
    if (((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk4)
    {
    }
    p = ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C;
    func_80151430(D_8025DE10, func_8001EF38(p->unk4 - 150.0, p->unkC - 125.0) & 0xFFFF);
    i = 0;
    if (func_801516CC(D_8025DE10) > 0)
    {
      do
      {
        t = i & 0xFF;
        func_80151700(D_8025DE10, t, D_8017BAD8);
        func_801515B0(D_8025DE10, t & 0xFF, 0);
        i++;
      }
      while (i < func_801516CC(D_8025DE10));
    }
    arg0->unk3C = 0;
    func_800058DC(arg0, func_80252378);
  }
}
#undef G

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252378.s")

#define func_800058DC func_800058DC__func_80252538
#define func_802525FC func_802525FC__func_80252538
#define func_802538A4 func_802538A4__func_80252538
extern void func_800058DC(void *, void *);
typedef struct func_802525FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802525FC_Struct;
extern void func_802538A4();
void func_802525FC(func_802525FC_Struct *arg0);


void func_80252538(func_802525FC_Struct *arg0)
{
  u16 temp_s1;
  temp_s1 = arg0->unk3C;
  arg0->unk3C = temp_s1 + 1;
  func_802538A4();
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 == 0x3C)
    {
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
    if ((((s32) temp_s1) % 10) == 0)
    {
      func_80380F94(150.0f, 0.0f, 125.0f, 0.0f, 0.0f, 0.0f, 10);
      if (!arg0)
      {
      }
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    arg0->unk3C = 0;
    func_800058DC(arg0, func_802525FC);
  }
}
#undef func_800058DC
#undef func_802525FC
#undef func_802538A4

#define func_800058DC func_800058DC__func_802525FC
#define func_802538A4 func_802538A4__func_802525FC
extern void func_800058DC(void *, void *);


extern void func_802538A4();

void func_802525FC(func_802525FC_Struct *arg0)
{
  s32 var_s0;
  u16 temp_s0;
  temp_s0 = arg0->unk3C;
  arg0->unk3C = temp_s0 + 1;
  func_802538A4();
  func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
  if (((s32) temp_s0) >= 0x2D)
  {
    func_80133980(0x131);
    arg0->unk3C = 0;
 var_s0 = 1; if (func_801516CC(D_8025DE10) >= 2) { do {
        func_8024CF18(D_8025DE10, var_s0 & 0xFF);
        var_s0 += 1;
      }
      while (var_s0 < func_801516CC(D_8025DE10));
    }
    func_8015115C(D_8025DE10, D_802594B4);
    func_80020718(0x185);
    func_800058DC(arg0, func_802526DC);
  }
}
#undef func_800058DC
#undef func_802538A4

#undef func_802526DC
#define func_800058DC func_800058DC__func_802526DC
#define func_80133980 func_80133980__func_802526DC
#define func_801516CC func_801516CC__func_802526DC
#define func_801C4058 func_801C4058__func_802526DC
#define func_802527C0 func_802527C0__func_802526DC
#define func_802538A4_Struct func_802538A4_Struct__func_802526DC
typedef struct func_802538A4_Struct {
    u8 pad[0x96];
    u16 unk96;
} func_802538A4_Struct;

struct func_802526DC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_802526DC_Sub {
    u8 pad[0x22];
    u8 unk22;
};

struct func_802526DC_Arg1 {
    u8 pad[0x1C];
    struct func_802526DC_Sub *unk1C;
};
extern void func_801C4058(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80133980(s32 arg0);
extern void func_800058DC(void *arg0, void *arg1);
extern s32 func_801516CC(s32 arg0);
extern void func_802527C0();

void func_802526DC(struct func_802526DC_Struct *arg0, struct func_802526DC_Arg1 *arg1) {
    s32 var_s0;

    func_802538A4((func_802538A4_Struct *)arg0, (s32)arg1);
    func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk1C->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DE10); var_s0++) {
            func_80151700(D_8025DE10, var_s0, D_8017BAD8);
        }
        func_800058DC(arg0, func_802527C0);
    }
}
#undef func_800058DC
#undef func_80133980
#undef func_801516CC
#undef func_801C4058
#undef func_802527C0
#undef func_802538A4_Struct
#define func_802526DC func_802526DC__decl

#define func_80252A54 func_80252A54__func_802527C0
#define func_80252A54_A0 func_80252A54_A0__func_802527C0
#define func_80252A54_A1 func_80252A54_A1__func_802527C0
#define func_80252A54_In func_80252A54_In__func_802527C0
#define func_80252A54_Nd func_80252A54_Nd__func_802527C0
#define func_802538A4 func_802538A4__func_802527C0
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
typedef struct func_80252A54_A0 { u8 pad[0x3C]; u16 unk3C; } func_80252A54_A0;
typedef struct func_80252A54_In { u8 pad[0x4B]; u8 unk4B; } func_80252A54_In;
typedef struct func_80252A54_Nd { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_80252A54_In *unk30; } func_80252A54_Nd;
typedef struct func_80252A54_A1 { u8 pad[0x1C]; func_80252A54_Nd *unk1C; } func_80252A54_A1;
void func_80252A54(func_80252A54_A0 *arg0, func_80252A54_A1 *arg1);
extern void func_802538A4();


typedef struct func_802527C0_In { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_802527C0_In;
typedef struct func_802527C0_Obj { u8 pad[0x3C]; u16 unk3C; u8 pad3E[0x5A]; u8 unk98; } func_802527C0_Obj;
typedef struct func_802527C0_N { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; u8 *unk30; } func_802527C0_N;
typedef struct func_802527C0_A { u8 pad0[8]; func_802527C0_N *unk8; u8 padC[4]; func_802527C0_N *unk10; func_802527C0_N *unk14; func_802527C0_N *unk18; func_802527C0_N *unk1C; } func_802527C0_A;
typedef struct func_802527C0_Cam { u8 pad[0x2C]; func_802527C0_In *unk2C; } func_802527C0_Cam;
typedef struct func_802527C0_G { u8 pad[0xE0]; func_802527C0_Cam *unkE0; } func_802527C0_G;

void func_802527C0(func_802527C0_Obj *arg0, func_802527C0_A *arg1) {
    s32 i;
    s32 sp38;
    func_802527C0_In *p;

    sp38 = arg0->unk3C++;
    func_802538A4(arg0, arg1);
    func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
    if (arg0->unk98 < 0xFB) {
        arg0->unk98 += 4;
    }
    i = 0;
    if (func_801516CC(D_8025DE10) > 0) {
        do {
            func_801515B0(D_8025DE10, i & 0xFF, arg0->unk98);
            i += 1;
        } while (i < func_801516CC(D_8025DE10));
    }
    if (sp38 >= 0x34) {
        if (sp38 == 0x34) {
            func_80020718(0x186);
        }
        if (!(sp38 % 4)) {
            func_80380F94(150.0f, 0.0f, 125.0f, 0.0f, 0.0f, 0.0f, 0xB);
        }
        arg1->unk1C->unk30[0x4B] += 0x10;
        if (arg1->unk1C->unk30[0x4B] >= 0xF0) {
            arg1->unk1C->unk30[0x4B] = 0xFF;
            arg1->unk18->unk22 = 0;
            arg1->unk10->unk22 = 1;
            arg1->unk14->unk22 = 1;
            arg1->unk8->unk22 = 1;
            ((func_802527C0_G *)D_801BBBF0)->unkE0->unk2C->unk4 += func_8001EAD0(((func_802527C0_G *)D_801BBBF0)->unkE0->unk2C->unk12) * 20.0f;
            ((func_802527C0_G *)D_801BBBF0)->unkE0->unk2C->unkC += func_8001EB64(((func_802527C0_G *)D_801BBBF0)->unkE0->unk2C->unk12) * 20.0f;
            D_801BBBF0[0xF20] = 0x32;
            D_801BBBF0[0xF21] = 0x3E;
            D_801BBBF0[0xF22] = 0x1E;
            D_801BBBF0[0xF23] = 1;
            D_801BBBF0[0xF24] = 0x6E;
            D_801BBBF0[0xF25] = 1;
            D_801BBBF0[0xF26] = 6;
            ((s8 *)D_801BBBF0)[0xF27] = -0x7D;
            ((s8 *)D_801BBBF0)[0xF28] = -0xA;
            D_801BBBF0[0xF29] = 0xC8;
            D_801BBBF0[0xF2A] = 0xC8;
            D_801BBBF0[0xF2B] = 0xC8;
            D_801BBBF0[0xF2C] = 0xF;
            D_801BBBF0[0xF2D] = 0x51;
            ((s8 *)D_801BBBF0)[0xF2E] = -0x40;
            D_801BBBF0[0xF32] = 0;
            D_801BBBF0[0xF33] = 0;
            D_801BBBF0[0xF34] = 0;
            D_801BBBF0[0xF35] = 0xB9;
            *(f32 *)&D_801BBBF0[0x29C] = 5.0f;
            *(f32 *)&D_801BBBF0[0x2A0] = 200.0f;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80252A54);
        }
    }
}
#undef LP
#undef LQ
#undef func_80252A54
#undef func_80252A54_A0
#undef func_80252A54_A1
#undef func_80252A54_In
#undef func_80252A54_Nd
#undef func_802538A4

/* hh-block asm/nonmatchings/file017/80251820/_ro_func_80252A54.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80251820/func_80252A54.s","D_8025D628"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/_ro_func_80252A54.s")

typedef struct func_80252A54_In { u8 pad[0x4B]; u8 unk4B; } func_80252A54_In;
typedef struct func_80252A54_Nd { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_80252A54_In *unk30; } func_80252A54_Nd;
typedef struct func_80252A54_A1 { u8 pad[0x1C]; func_80252A54_Nd *unk1C; } func_80252A54_A1;
typedef struct func_80252A54_A0 { u8 pad[0x3C]; u16 unk3C; } func_80252A54_A0;

void func_80252A54(func_80252A54_A0 *arg0, func_80252A54_A1 *arg1) {
    s16 a;
    s32 n;
    f32 t;
    f32 s;
    n = arg0->unk3C++;
    func_80253A80(arg0, arg1);
    if (n >= 0x14) {
        if (n == 0x14) {
            a = func_80151478(D_8025DE10);
            s = func_8001EAD0(a);
            t = func_8001EB64(a);
            func_8011AAF4(D_8025D628, 0x355, arg0, 0, 1, 0.0f, s * 100.0f + 150.0, 45.0f, t * 100.0f + 125.0, 0.0f, 150.0f, 12.0f, 125.0f, 0.0f, 35.0f, -1, -1);
            func_8015115C(D_8025DE10, D_802594C0);
            func_80020718(0x228);
        } else {
            func_801C4058(arg0, 0xBE19999A, 0xBE800000, 0);
        }
        arg1->unk1C->unk30->unk4B -= 4;
        if (arg1->unk1C->unk30->unk4B >= 0xFC) {
            arg1->unk1C->unk22 = 0;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80252C14);
        }
    }
}

#undef func_80252C14
#define func_801270C0 func_801270C0__func_80252C14
#define func_8012C6B4 func_8012C6B4__func_80252C14
#define func_801C2F0C func_801C2F0C__func_80252C14
#define func_801FA2E0 func_801FA2E0__func_80252C14
#define func_80252DBC func_80252DBC__func_80252C14
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
extern s32 func_8012C6B4(s32);
extern void func_801C2F0C(s32, void *);

typedef struct func_80252C14_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80252C14_Struct;
extern s32 func_801270C0(s32);
extern void func_801FA2E0();
extern void func_80252DBC();

void func_80252C14(func_80252C14_Struct *arg0, void *arg1) {
    f32 sp44;
    f32 sp40;
    s32 s;

    s = arg0->unk3C++;
    func_80253A80((void *)arg0, arg1);
    if (s < 0x3C && !(s % 2)) {
        sp44 = func_8012C6B4(0x2000);
        sp40 = (f32)((f64)func_8012C6B4(0x1E) / 10.0 + 2.0);
        func_80380F94((f32)((f64)(func_8001EAD0((s16)sp44) * sp40) + 150.0), 14.0f, (f32)((f64)(func_8001EB64((s16)sp44) * sp40) + 125.0), 0.0f, 0.400000006f, 0.0f, 5);
    }
    if (s < 0x78) {
        func_801C4058(arg0, 0xBE19999A, 0xBE800000, 0);
    }
    if (s == 0x78) {
        func_801FA2E0();
    }
    if (s >= 0x96 && func_801270C0(D_8025DE10) != 0) {
        func_801C2F0C(1, NULL);
        func_800058DC(arg0, func_80252DBC);
    }
}
#undef LP
#undef LQ
#undef func_801270C0
#undef func_8012C6B4
#undef func_801C2F0C
#undef func_801FA2E0
#undef func_80252DBC
#define func_80252C14 func_80252C14__decl

#define func_800058DC func_800058DC__func_80252DBC
#define func_80252E0C func_80252E0C__func_80252DBC
extern void func_800058DC(void *, void *);

extern void func_80252E0C(s32 arg0);

void func_80252DBC(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x136;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_80252E0C);
}
#undef func_800058DC
#undef func_80252E0C

#define func_800058DC func_800058DC__func_80252E0C

extern void func_800058DC(void *, void *);

void func_80252E0C(s32 arg0) {
    func_80253A80();
    if (func_80133A24(0x136) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_80252E78);
        }
    }
}
#undef func_800058DC


extern s32 func_801C42DC(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);

extern void func_80252FC0();

void func_80252E78(func_80251E6C_Obj *arg0) {
    extern void func_80253A80();
    func_80253A80();
    func_801C42DC(0xFF, 0xFF, 0xFF, D_801BBBF0[0xF23], D_801BBBF0[0xF24], D_801BBBF0[0xF25], (s8)D_801BBBF0[0xF26], (s8)D_801BBBF0[0xF27], (s8)D_801BBBF0[0xF28], D_801BBBF0[0xF29], D_801BBBF0[0xF2A], D_801BBBF0[0xF2B], (s8)D_801BBBF0[0xF2C], (s8)D_801BBBF0[0xF2D], (s8)D_801BBBF0[0xF2E], D_801BBBF0[0xF32], D_801BBBF0[0xF33], D_801BBBF0[0xF34], D_801BBBF0[0xF35], *(f32 *)&D_801BBBF0[0x29C], *(f32 *)&D_801BBBF0[0x2A0], 2, 0.0f);
    if (func_801C3DC8(arg0, 0x433E0000, 0x42960000, 0x43200000, -5.0f, 180.0f, 140.0f, 0.100000001f, 35.0f) == 0) {
        arg0->unk3C = 0;
        func_80020718(0x150);
        func_800058DC(arg0, func_80252FC0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253220.s")

/* hh-block asm/nonmatchings/file017/80251820/_ro_func_80253680.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80251820/func_80253680.s","D_8025D758"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/_ro_func_80253680.s")

#define func_80253824 func_80253824__func_80253680
#define func_80253824_Struct func_80253824_Struct__func_80253680
#define func_80253824_StructInner func_80253824_StructInner__func_80253680
struct func_80253824_StructInner {
    u8 pad[0x22];
    u8 unk22;
};
struct func_80253824_Struct {
    s32 pad0;
    struct func_80253824_StructInner *unk4;
};
extern void func_80253824(s32 arg0, struct func_80253824_Struct *arg1);

typedef struct func_80253680_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_80253680_StructInner;
typedef struct func_80253680_StructOuter {
    u8 pad0[0x2C];
    func_80253680_StructInner *inner;
} func_80253680_StructOuter;
typedef struct func_80253680_StructArg {
    u8 pad0[0x74];
    s32 state;
} func_80253680_StructArg;
extern func_80253680_StructOuter *D_801BBCD0;
extern func_80253680_StructOuter *D_801BBCD8;
extern u8 D_8025D758[];

extern void func_801FBB20(void);

void func_80253680(func_80253680_StructArg *arg0, s32 arg1) {
    f32 cosine;
    f32 sine;
    f64 offset;
    f32 x, y, z;
    func_80253680_StructInner *p;
    func_80253680_StructInner *q;

    sine = func_8001EAD0(D_801BBCD0->inner->angle);
    if (D_801C3DC8(arg0, D_801BBCD0->inner->x - sine * 40.0, D_801BBCD0->inner->y + 20.0f,
            D_801BBCD0->inner->z - func_8001EB64(D_801BBCD0->inner->angle) * 40.0,
            D_801BBCD0->inner->x, D_801BBCD0->inner->y + 17.0f, D_801BBCD0->inner->z, 0.200000003f, 35.0f) == 0) {
        func_8011AAF4(D_8025D758, 0x485, arg0, 2, 1, 0.0f,
            D_801BBCD8->inner->a, D_801BBCD8->inner->b, D_801BBCD8->inner->c, 0.0f,
            D_801BBCD8->inner->d, D_801BBCD8->inner->e, D_801BBCD8->inner->f, 0.0f, 35.0f, -1, -1);
        arg0->state = 0;
        func_801C2F0C(1, NULL);
        func_801FBB20();
        func_800058DC(arg0, func_80253824);
    }
}
#undef func_80253824
#undef func_80253824_Struct
#undef func_80253824_StructInner

#define func_800058DC func_800058DC__func_80253824
#define func_8025386C func_8025386C__func_80253824
extern void func_800058DC(void *, void *);

struct func_80253824_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_80253824_Struct {
    s32 pad0;
    struct func_80253824_StructInner *unk4;
};

extern void func_8025386C();

void func_80253824(s32 arg0, struct func_80253824_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8025386C);
    }
}
#undef func_800058DC
#undef func_8025386C


typedef struct func_8025386C_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8025386C_StructInner;

typedef struct func_8025386C_Struct {
    u8 pad[4];
    func_8025386C_StructInner *unk4;
} func_8025386C_Struct;


void func_8025386C(s32 arg0, func_8025386C_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}



typedef struct func_802538A4_Struct {
    u8 pad[0x96];
    u16 unk96;
} func_802538A4_Struct;

void func_802538A4(func_802538A4_Struct *arg0, s32 arg1) {
    s32 sp1C;
    u16 temp_v0;

    sp1C = arg0->unk96;
    temp_v0 = sp1C;
    arg0->unk96 = temp_v0 + 1;
    D_801BBDA0[0x56] = (u32)(((f64)func_8001EB64((s16)(temp_v0 * 0x64) & 0x1FFF) * 25.5) + 229.5);
    D_801BBDA0[0x59] = (u32)(((f64)func_8001EB64((s16)(sp1C * 0x6E) & 0x1FFF) * 25.5) + 229.5);
}

