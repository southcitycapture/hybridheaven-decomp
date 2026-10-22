#include "common.h"

extern f32 D_8025D798;
extern f32 D_8025D7C0;
extern f32 D_8025D81C;
extern f32 D_8025DBF8;
extern f32 D_8025DBFC;
extern f32 D_8025DC00;
extern f32 D_8025DC1C;
extern f32 D_8025DC70;
extern f32 D_8025DCD0;
extern f32 D_8025DD88;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_8025D7A0;
extern f64 D_8025D7A8;
extern f64 D_8025D7B0;
extern f64 D_8025D7B8;
extern f64 D_8025D7C8;
extern f64 D_8025D7D0;
extern f64 D_8025D7D8;
extern f64 D_8025D7E0;
extern f64 D_8025D7F8;
extern f64 D_8025D800;
extern f64 D_8025D840;
extern f64 D_8025D848;
extern f64 D_8025D850;
extern f64 D_8025D858;
extern f64 D_8025DC60;
extern f64 D_8025DC68;
extern f64 D_8025DC78;
extern f64 D_8025DC98;
extern f64 D_8025DCA0;
extern f64 D_8025DCB0;
extern f64 D_8025DCB8;
extern f64 D_8025DD90;
extern s16 D_801BBF90[];
extern s16 func_8001EF38(f32, f32);
extern s16 func_80151478(s32);
extern s32 D_8001EF38(f32, f32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 D_8025DE10;
extern s32 func_80005670();
extern s32 func_800178E8(void);
extern s32 func_80126944(void);
extern s32 func_80126CC0(void *, void *);
extern s32 func_8012C6B4(s32);
extern s32 func_8012C97C(s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_8015105C(s32);
extern s32 func_801516CC(s32);
extern s32 func_801517CC(s32);
extern s32 func_801C2FF8(void);
extern s32 func_801C3044(void);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
extern s32 func_801C42DC(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern u8 *D_8025DE20;
extern u8 D_80175C58[];
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_8017B5A8[];
extern u8 D_8017BAD8[];
extern u8 D_801BBBF0[];
extern u8 D_801BBDA0[];
extern u8 D_802594B4[];
extern u8 D_802594C0[];
extern u8 D_802594D0[];
extern u8 D_80259520[];
extern u8 D_80259570[];
extern u8 D_80259618[];
extern u8 D_80259668[];
extern u8 D_802596E4[];
extern u8 D_8025970C[];
extern u8 D_80259720[];
extern u8 D_80259734[];
extern u8 D_80259748[];
extern u8 D_80259770[];
extern u8 D_80259828[];
extern u8 D_80259920[];
extern u8 D_80259978[];
extern u8 D_802599D0[];
extern u8 D_80259A30[];
extern u8 D_8025A1D8[];
extern u8 D_8025A228[];
extern u8 D_8025D5E0[];
extern u8 D_8025D628[];
extern u8 D_8025D914[];
extern u8 D_8025DA7C[];
extern u8 D_8025DB6C[];
extern u8 D_8025DCE0[];
extern u8 D_8025DD50[];
extern u8 func_80252378[];
extern u8 func_802526DC[];
extern u8 func_80252C14[];
extern u8 func_80254470[];
extern u8 func_8025584C[];
extern u8 func_80255CA0[];
#define func_80258268 func_80258268__decl
extern u8 func_80258268[];
extern void *func_801505AC(s32);
extern void func_80005700(s32, void **);
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_800179B0(void *);
extern void func_8001F74C(void *);
extern void func_80020718(s32);
extern void func_80020744(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80126820(s32);
extern void func_801268CC(s32);
extern void func_80126968();
extern void func_80126EAC();
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8015115C(s32, void *);
extern void func_801512CC(s32, f32, f32, f32);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, s32, s32);
extern void func_80151700(s32, u8, void *);
extern void func_801518D4(s32, s32, s32);
extern void func_801C2F0C(s32, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C4058(void *, s32, s32, s32);
extern void func_801FBB30(void);
extern void func_8024CF18(s32, s32);
extern void func_8024CF9C(f32, f32, f32);
extern void func_80251E6C();
extern void func_80251F80();
extern void func_80252E0C(s32 arg0);
extern void func_80252E78();
extern void func_80252FC0();
extern void func_8025386C();
extern void func_802538A4();
extern void func_80253A80();
extern void func_802550A8(void *arg0);
extern void func_802551A0();
extern void func_80255204(s16 *arg0);
extern void func_80255278(void *arg0);
extern void func_802552E4();
extern void func_80256308(s32 arg0, s32 arg1);
extern void func_80256590(s32 arg0, void **arg1);
extern void func_80256EA8(s32 arg0, void **arg1);
extern void func_802577B4(void *, void *);
extern void func_8025799C();
extern void func_80257E48();
extern void func_80257F34();
extern void func_80258580(s32 arg0, s32 arg1);
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

void func_802521D0(func_80251E6C_Obj *arg0, s32 arg1);

#define GG ((func_80251F80_Glob *)D_801BBBF0)

void func_80251F80(func_80251E6C_Obj *arg0, s32 arg1) {
    s16 sp66;
    s32 pad60;
    f32 sp5C;
    func_80251F80_Struct2C *p;

    sp5C = func_8001EAD0(GG->unkE0->unk2C->unk12);
    if (D_801C3DC8(arg0, GG->unkE0->unk2C->unk4, GG->unkE0->unk2C->unk8 + 18.0f, GG->unkE0->unk2C->unkC,
                   sp5C * 40.0f + GG->unkE0->unk2C->unk4, GG->unkE0->unk2C->unk8 + 15.0f,
                   func_8001EB64(GG->unkE0->unk2C->unk12) * 40.0f + GG->unkE0->unk2C->unkC, D_8025D798, 35.0f) == 0
        || func_801C3D20(GG->unkE8->unk2C->unk30, GG->unkE8->unk2C->unk38, 10.0f) != 0) {
        p = GG->unkE0->unk2C;
        sp66 = D_8001EF38(D_8025D7A0 - p->unk4, D_8025D7A8 - p->unkC);
        sp5C = func_8001EAD0(sp66 * 1);
        func_8011AAF4(D_8025D5E0, 0x25C, arg0, 0, 1, 0.0f, D_8025D7B0 - sp5C * 70.0f,
            GG->unkE0->unk2C->unk8 + 15.0f,
            D_8025D7B8 - func_8001EB64(sp66) * 70.0f, 0.0f, 150.0f, 14.0f, 125.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        D_8025DE10 = func_8015105C(0xFD);
        func_800058DC(arg0, func_802521D0);
    }
}

typedef struct func_802521D0_Struct2 { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_802521D0_Struct2;
typedef struct func_802521D0_Struct1 { u8 pad[0x2C]; func_802521D0_Struct2 *unk2C; } func_802521D0_Struct1;
typedef struct func_802521D0_Struct0 { u8 pad[0xE0]; func_802521D0_Struct1 *unkE0; } func_802521D0_Struct0;
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
    func_8024CF9C(150.0f, D_8025D7C0, 125.0f);
    p = ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C;
    ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38(D_8025D7C8 - ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk4, D_8025D7D0 - ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unkC);
    func_80020718(0x182);
  }
  if ((c >= 0x1E) && (func_801517CC(D_8025DE10) != 0))
  {
    func_801512CC(D_8025DE10, 150.0f, 0.0f, 125.0f);
    if (((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk4)
    {
    }
    p = ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C;
    func_80151430(D_8025DE10, func_8001EF38(p->unk4 - D_8025D7D8, p->unkC - D_8025D7E0) & 0xFFFF);
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

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252378.s")

typedef struct func_802525FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802525FC_Struct;
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

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802526DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802527C0.s")

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
            func_8011AAF4(D_8025D628, 0x355, arg0, 0, 1, 0.0f, s * 100.0f + D_8025D7F8, 45.0f, t * 100.0f + D_8025D800, 0.0f, 150.0f, 12.0f, 125.0f, 0.0f, 35.0f, -1, -1);
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

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252C14.s")



void func_80252DBC(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x136;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_80252E0C);
}



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



void func_80252E78(func_80251E6C_Obj *arg0) {
    extern void func_80253A80();
    func_80253A80();
    func_801C42DC(0xFF, 0xFF, 0xFF, D_801BBBF0[0xF23], D_801BBBF0[0xF24], D_801BBBF0[0xF25], (s8)D_801BBBF0[0xF26], (s8)D_801BBBF0[0xF27], (s8)D_801BBBF0[0xF28], D_801BBBF0[0xF29], D_801BBBF0[0xF2A], D_801BBBF0[0xF2B], (s8)D_801BBBF0[0xF2C], (s8)D_801BBBF0[0xF2D], (s8)D_801BBBF0[0xF2E], D_801BBBF0[0xF32], D_801BBBF0[0xF33], D_801BBBF0[0xF34], D_801BBBF0[0xF35], *(f32 *)&D_801BBBF0[0x29C], *(f32 *)&D_801BBBF0[0x2A0], 2, 0.0f);
    if (func_801C3DC8(arg0, 0x433E0000, 0x42960000, 0x43200000, -5.0f, 180.0f, 140.0f, D_8025D81C, 35.0f) == 0) {
        arg0->unk3C = 0;
        func_80020718(0x150);
        func_800058DC(arg0, func_80252FC0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253220.s")

#define D_801BBCD0 D_801BBCD0__func_80253680
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
extern f32 D_8025D83C;
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
            D_801BBCD0->inner->x, D_801BBCD0->inner->y + 17.0f, D_801BBCD0->inner->z, D_8025D83C, 35.0f) == 0) {
        func_8011AAF4(D_8025D758, 0x485, arg0, 2, 1, 0.0f,
            D_801BBCD8->inner->a, D_801BBCD8->inner->b, D_801BBCD8->inner->c, 0.0f,
            D_801BBCD8->inner->d, D_801BBCD8->inner->e, D_801BBCD8->inner->f, 0.0f, 35.0f, -1, -1);
        arg0->state = 0;
        func_801C2F0C(1, NULL);
        func_801FBB20();
        func_800058DC(arg0, func_80253824);
    }
}
#undef D_801BBCD0
#undef func_80253824
#undef func_80253824_Struct
#undef func_80253824_StructInner


struct func_80253824_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_80253824_Struct {
    s32 pad0;
    struct func_80253824_StructInner *unk4;
};


void func_80253824(s32 arg0, struct func_80253824_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8025386C);
    }
}


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
    D_801BBDA0[0x56] = (u32)(((f64)func_8001EB64((s16)(temp_v0 * 0x64) & 0x1FFF) * D_8025D840) + D_8025D848);
    D_801BBDA0[0x59] = (u32)(((f64)func_8001EB64((s16)(sp1C * 0x6E) & 0x1FFF) * D_8025D850) + D_8025D858);
}


typedef struct {
    u8 pad[0x4C];
    u8 unk4C;
} func_80253A80_Inner;

typedef struct {
    u8 pad[0x30];
    func_80253A80_Inner *unk30;
} func_80253A80_Mid;

typedef struct {
    u8 pad[0x10];
    func_80253A80_Mid *unk10;
    func_80253A80_Mid *unk14;
} func_80253A80_Arg1;

typedef struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80253A80_Arg0;

void func_80253A80(func_80253A80_Arg0 *arg0, func_80253A80_Arg1 *arg1) {
    arg1->unk10->unk30->unk4C = (u32)arg0->unk90 * 0.5;
    arg1->unk14->unk30->unk4C = (u32)arg0->unk92 * 0.5;
    arg0->unk90++;
    arg0->unk92--;
}

typedef struct func_802543F8_Struct_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_802543F8_Struct_Inner;
typedef struct func_802543F8_Struct {
    u8 pad[0x14];
    func_802543F8_Struct_Inner *unk14;
} func_802543F8_Struct;
typedef struct func_802543F8_Obj {
    u8 pad[0x90];
    s16 unk90;
    s16 unk92;
} func_802543F8_Obj;
void func_802543F8(func_802543F8_Obj *arg0, func_802543F8_Struct *arg1);
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_80257B10_V;

typedef struct func_80253C20_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    u32 unk24;
    u8 pad1[0x8];
    u32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80253C20_Inner;

typedef struct func_80253C20_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80253C20_Inner *unk30;
} func_80253C20_Node;

typedef struct func_80253C20_Args {
    func_80253C20_Node *unk0;
    func_80253C20_Node *unk4;
    func_80253C20_Node *unk8;
    func_80253C20_Node *unkC;
    func_80253C20_Node *unk10;
    func_80253C20_Node *unk14;
    func_80253C20_Node *unk18;
    func_80253C20_Node *unk1C;
    func_80253C20_Node *unk20;
    func_80253C20_Node *unk24;
} func_80253C20_Args;

typedef struct func_80253C20_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
} func_80253C20_Ctx;

extern func_80257B10_V D_80164F40;

void func_80253C20(func_80253C20_Ctx *arg0, func_80253C20_Args *arg1) {
    s32 sp30[4];

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        *(func_80257B10_V *) sp30 = D_80164F40;
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000300;
        func_80005E44(arg0, sp30);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x303, 0);
        arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x400;
        arg1->unk0->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 1, 0x302, 0x1F);
        arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
        arg1->unk4->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 2, 0x303, 1);
        arg1->unk8->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
        arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 3, 0x303, 3);
        arg1->unkC->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
        arg1->unkC->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unkC->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unkC->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unkC->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 4, 0x302, 0x21);
        arg1->unk10->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x400;
        arg1->unk10->unk30->unk4 = 0.0f;
        arg1->unk10->unk30->unk8 = 38.0f;
        arg1->unk10->unk30->unkC = 0.0f;
        arg1->unk10->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk10->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk10->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk10->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 5, 0x302, 0x22);
        arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x100;
        arg1->unk14->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
        arg1->unk14->unk30->unk48 = 0xFF;
        arg1->unk14->unk30->unk49 = 0xFF;
        arg1->unk14->unk30->unk4A = 0xFF;
        arg1->unk14->unk30->unk4B = 0x4C;
        func_8012C89C(arg0, 6, 0x302, 0x23);
        func_8012CF8C(arg0, (u8 *) arg1->unk18->unk30 + 0x40, 0x302, 0x24);
        arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x4100;
        arg1->unk18->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk18->unk30->unk48 = 0;
        arg1->unk18->unk30->unk49 = 0xFF;
        arg1->unk18->unk30->unk4A = 0x7D;
        arg1->unk18->unk30->unk4B = 8;
        arg1->unk18->unk30->unk4C = 0;
        arg1->unk18->unk30->unk4D = 0;
        arg1->unk18->unk30->unk4E = 0xFF;
        arg1->unk18->unk30->unk4F = 0xFF;
        func_8012C89C(arg0, 7, 0x302, 0x25);
        func_8012CF8C(arg0, (u8 *) arg1->unk1C->unk30 + 0x40, 0x302, 0x26);
        arg1->unk1C->unk30->unk24 = arg1->unk1C->unk30->unk24 | 0x4100;
        arg1->unk1C->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk1C->unk30->unk48 = 0xFF;
        arg1->unk1C->unk30->unk49 = 0x78;
        arg1->unk1C->unk30->unk4A = 0;
        arg1->unk1C->unk30->unk4B = 0x4C;
        arg1->unk1C->unk30->unk4C = 0;
        arg1->unk1C->unk30->unk4D = 0;
        arg1->unk1C->unk30->unk4E = 0xFF;
        arg1->unk1C->unk30->unk4F = 0xFF;
        arg1->unk1C->unk22 = 0;
        func_8012C89C(arg0, 8, 0x303, 4);
        func_8012CF8C(arg0, (u8 *) arg1->unk20->unk30 + 0x40, 0x2F8, 0xF);
        arg1->unk20->unk30->unk24 = arg1->unk20->unk30->unk24 | 0x4000;
        arg1->unk20->unk30->unk30 = (s32) D_80259828 | 0x40000000;
        arg1->unk20->unk30->unk4C = 0;
        arg1->unk20->unk30->unk4D = 0;
        arg1->unk20->unk30->unk4E = 0xFF;
        arg1->unk20->unk30->unk4F = 0xFF;
        func_8012C89C(arg0, 9, 0x304, 0);
        func_8012CF8C(arg0, (u8 *) arg1->unk24->unk30 + 0x40, 0x2F8, 0x12);
        arg1->unk24->unk30->unk24 = arg1->unk24->unk30->unk24 | 0x4100;
        arg1->unk24->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk24->unk30->unk48 = 0xFF;
        arg1->unk24->unk30->unk49 = 0xFF;
        arg1->unk24->unk30->unk4A = 0xFF;
        arg1->unk24->unk30->unk4B = 0;
        arg1->unk24->unk30->unk4C = 0;
        arg1->unk24->unk30->unk4D = 0;
        arg1->unk24->unk30->unk4E = 0xFF;
        arg1->unk24->unk30->unk4F = 0xFF;
        arg1->unk24->unk22 = 0;
        arg0->unk90 = 0;
        arg0->unk92 = 0;
        arg0->unk96 = 0;
        arg0->unk94 = 2;
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x303, 2);
        D_8025DE20 = (u8 *) func_80005670(arg0, D_802596E4);
        func_80005670(arg0, D_8025970C);
        func_8001F74C(arg0);
        func_800058DC(arg0, (void *) func_802543F8);
    }
}






void func_802543F8(func_802543F8_Obj *arg0, func_802543F8_Struct *arg1) {
    func_802577B4(arg0, arg1);
    if (func_80133A24(0x138) != 0) {
        arg1->unk14->unk22 = 0;
        func_80005670(arg0, D_80259720);
        arg0->unk90 = 0;
        arg0->unk92 = 0;
        func_801FBB30();
        func_80020718(8);
        func_800058DC(arg0, func_80254470);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254808.s")

void func_80254BFC(func_80251820_Ctx *arg0, u16 arg1);
typedef struct func_80254B3C_S { u8 pad[0x24]; struct func_80254B3C_T *unk24; } func_80254B3C_S;
typedef struct func_80254B3C_T { u8 pad[0x30]; u8 *unk30; } func_80254B3C_T;

void func_80254B3C(func_80251820_Ctx *arg0, func_80254B3C_S *arg1) {
    s32 sp24;
    u8 *p;

    sp24 = arg0->unk90++;
    func_802577B4(arg0, arg1);
    if (sp24 >= 0xF) {
        if (sp24 == 0xF) {
            func_80020718(0x192);
        }
        p = arg1->unk24->unk30;
        if (p[0x4B] < 0x4C) {
            p[0x4B] += 2;
        }
    }
    if (sp24 >= 0x5A) {
        arg0->unk90 = 0;
        *(f32 *)(D_801BBDA0 + 0x3C) = 166.0f;
        func_801518D4(0, 5, 0xF);
        func_800058DC(arg0, func_80254BFC);
    }
}


void func_80254BFC(func_80251820_Ctx *arg0, u16 arg1) {
    arg1 = arg0->unk90;
    arg0->unk90 = arg1 + 1;
    if (arg1 < 0x1E) {
        *(f32 *)(D_801BBBF0 + 0x1EC) += -23.0f;
    } else if (arg1 < 0x96) {
        *(f32 *)(D_801BBBF0 + 0x1EC) += -5.0f;
    }
    func_8011AAF4(D_8025D914, 0x3A7, arg0, 0, 1, 0.0f, 120.0f, *(f32 *)(D_801BBBF0 + 0x1EC), 174.0f, 0.0f, -35.0f, -9.0f, -39.0f, 0.0f, 55.0f, -1, -1);
    if (arg1 == 0x96) {
        D_801BBBF0[0x3A6] = 0;
        *(u16 *)(D_801BBBF0 + 4) = 0x29;
        func_8012FE50(9, *(u16 *)(D_801BBBF0 + 4), 1, 1, 1);
    }
}


typedef struct func_80254D48_Struct {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    u8 pad94[4];
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
} func_80254D48_Struct;


void func_80254D48(func_80254D48_Struct *arg0, func_80251820_Args *arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(func_80257B10_V *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *)arg1->unk0->unk30 + 0x40, 0x375, 0);
    k = D_8025DBF8;
    arg1->unk0->unk30->unk24 |= 0x60300;
    arg1->unk0->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
    arg1->unk0->unk30->unk18 = k;
    arg1->unk0->unk30->unk1C = k;
    arg1->unk0->unk30->unk20 = k;
    arg1->unk0->unk30->unk48 = 0xFF;
    arg1->unk0->unk30->unk49 = 0xFF;
    arg1->unk0->unk30->unk4A = 0xFF;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = 0x1A;
    arg1->unk0->unk30->unk4D = 0xFF;
    arg1->unk0->unk30->unk4E = 0x66;
    arg1->unk0->unk22 = 0;
    func_8012C89C(arg0, 1, 0x4D9, 0);
    k = D_8025DBFC;
    arg1->unk4->unk30->unk24 |= 0x500;
    arg1->unk4->unk30->unk30 = (u32)D_80259920 | 0x40000000;
    arg1->unk4->unk30->unk18 = k;
    arg1->unk4->unk30->unk1C = k;
    arg1->unk4->unk30->unk20 = k;
    arg1->unk4->unk30->unk48 = 0;
    arg1->unk4->unk30->unk49 = 0;
    arg1->unk4->unk30->unk4A = 0;
    arg1->unk4->unk30->unk4B = 0xFF;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 2, 0x4D9, 0);
    k = D_8025DC00;
    arg1->unk8->unk30->unk24 |= 0x100;
    arg1->unk8->unk30->unk30 = (u32)D_80259978 | 0x40000000;
    arg1->unk8->unk30->unk18 = k;
    arg1->unk8->unk30->unk1C = k;
    arg1->unk8->unk30->unk20 = k;
    arg1->unk8->unk30->unk48 = 0;
    arg1->unk8->unk30->unk49 = 0;
    arg1->unk8->unk30->unk4A = 0;
    arg1->unk8->unk30->unk4B = 0;
    arg1->unk8->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk98 = 0.0f;
    arg0->unk9C = 0.0f;
    arg0->unkA0 = 0.0f;
    func_8001F74C(arg0);
    func_800058DC(arg0, func_802550A8);
}


extern void func_80255134(func_802543F8_Obj *arg0);

typedef struct func_802550A8_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad3[0x10];
} func_802550A8_Struct;

void func_802550A8(void *arg0) {
    func_802550A8_Struct sp18;

    func_8025799C();
    if ((func_80133A24(0x138) != 0) && (func_801C2FF8() != 0)) {
        sp18.unk0 = 0;
        sp18.unk4 = 0x04100026;
        sp18.unkC = 0xF;
        sp18.unk8 = 3.0f;
        func_801C2F0C(3, &sp18);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_80020718(0x18D);
        func_800058DC(arg0, func_80255134);
    }
}



typedef struct func_80255134_Struct {
    s16 unk0;
    u8 pad[0x2];
    s32 unk4;
    f32 unk8;
    s32 unkC;
} func_80255134_Struct;

void func_80255134(func_802543F8_Obj *arg0) {
    u8 sp30[0x10];
    func_80255134_Struct sp18;

    func_8025799C();
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x04100026;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        arg0->unk92 = 0;
        func_800058DC(arg0, func_802551A0);
    }
}



void func_802551A0(func_80251820_Ctx *arg0) {
    u8 pad[0x20];
    volatile s32 count;
    u16 temp;

    temp = arg0->unk92;
    count = temp;
    arg0->unk92 = temp + 1;
    func_8025799C();
    if (count >= 0x78) {
        func_800179B0(D_80259A30);
        func_800208C4(0x73);
        func_800058DC(arg0, func_80255204);
    }
}



typedef struct func_80255204_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_80255204_Struct;

void func_80255204(s16 *arg0) {
    func_80255204_Struct sp18;

    func_8025799C();
    if (func_800178E8() != 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x03480027;
        sp18.unkC = 0xA;
        sp18.unk8 = 4.0f;
        func_801C2F0C(5, &sp18);
        arg0[0x92 / 2] = 0;
        func_800058DC(arg0, func_80255278);
    }
}



typedef struct func_80255278_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
} func_80255278_Struct;

void func_80255278(void *arg0) {
    u8 pad[0x14];
    func_80255278_Struct sp18;

    func_8025799C();
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x03480028;
        sp18.unk8 = 4.0f;
        func_801C2F0C(4, &sp18);
        ((s16 *)arg0)[0x92 / 2] = 0;
        func_800058DC(arg0, func_802552E4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802552E4.s")



typedef struct func_802556EC_Struct {
    s16 a;
    s16 pad;
    s32 b;
    f32 c;
    s32 d[5];
} func_802556EC_Struct;

void func_802556EC(func_80251820_Ctx *arg0, func_80251820_Args *arg1) {
    func_802556EC_Struct sp;

    func_8025799C();
    func_8011AAF4(D_8025DA7C, 0x4D8, arg0, 0, 2, D_8025DC1C, -91.0f, 21.0f, -8.0f, 4294967296.0f, 1.0f, 11.0f, 4.0f, 0.0f, 55.0f, -1, -1);
    if (func_801C3044() == 0) {
        sp.a = 0x1100;
        sp.b = 0x04100026;
        sp.c = 3.0f;
        func_801C2F0C(4, &sp);
    }
    ((func_80251820_Node *)arg1->unk8)->unk30->unk4B += 2;
    if (((func_80251820_Node *)arg1->unk8)->unk30->unk4B >= 0xFE) {
        func_80133980(0x13A);
        ((func_80251820_Node *)arg1->unk8)->unk30->unk4B = 0xFF;
        arg0->unk92 = 0;
        func_800058DC(arg0, func_8025584C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_8025584C.s")


typedef struct func_80255B30_In { u8 pad0[0x4B]; u8 unk4B; } func_80255B30_In;
typedef struct func_80255B30_Node { u8 pad0[0x30]; func_80255B30_In *unk30; } func_80255B30_Node;
typedef struct func_80255B30_A1 { u8 pad0[4]; func_80255B30_Node *unk4; func_80255B30_Node *unk8; } func_80255B30_A1;
typedef struct func_80255B30_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80255B30_Pos;
typedef struct func_80255B30_G1 { u8 pad0[0x2C]; func_80255B30_Pos *unk2C; } func_80255B30_G1;
typedef struct func_80255B30_G { u8 pad0[0xE0]; func_80255B30_G1 *unkE0; } func_80255B30_G;
typedef struct func_80255B30_A0 {
    u8 pad0[0x40]; f32 unk40; f32 unk44; f32 unk48;
    u8 pad4C[0x92 - 0x4C]; u16 unk92; u8 pad94[4];
    f32 unk98; f32 unk9C; f32 unkA0;
} func_80255B30_A0;


void func_80255B30(func_80255B30_A0 *arg0, func_80255B30_A1 *arg1) {
    s32 t[1];
    s32 v = arg0->unk92;
    func_80255B30_In *p;
    t[0] = v;
    arg0->unk92 = v + 1;
    func_8025799C(arg0, arg1);
    p = arg1->unk4->unk30;
    if (p->unk4B >= 4) {
        p->unk4B -= 3;
        arg1->unk8->unk30->unk4B -= 3;
    }
    if (t[0] >= 0x78) {
        func_80380F94(arg0->unk98, arg0->unk9C + 45.0f, arg0->unkA0, 0.0f, 0.0f, 0.0f, 7);
        arg0->unk9C = arg0->unk9C + 45.0f;
        arg0->unk40 = (((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unk4 - arg0->unk98) / 20.0;
        arg0->unk44 = ((((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unk8 + 10.0f) - arg0->unk9C) / 20.0;
        arg0->unk48 = (((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unkC - arg0->unkA0) / 20.0;
        arg0->unk92 = 0;
        func_80020718(0x190);
        func_800058DC(arg0, func_80255CA0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80255CA0.s")


typedef struct func_80256034_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80256034_Pos;
typedef struct func_80256034_Mid { u8 pad0[0x2C]; func_80256034_Pos *unk2C; } func_80256034_Mid;
typedef struct func_80256034_G { u8 pad0[0xE0]; func_80256034_Mid *unkE0; } func_80256034_G;
typedef struct func_80256034_Cmd { s16 a; s32 b; f32 c; s16 d; } func_80256034_Cmd;


void func_80256034(func_80251820_Ctx *arg0, func_80251820_Node **arg1) {
    s16 a;
    s32 i;
    func_80256034_Pos *p;
    s32 pad;
    func_80256034_Cmd cmd;
    s32 t;
    f32 s;
    f32 r;
    f32 ang;
    f32 pad2;

    t = arg0->unk92++;
    func_8011AAF4(D_8025DB6C, 0x57F, arg0, 0, 2, 0.25f, -60.0f, 20.0f, 17.0f, 4294967296.0f, -83.0f, 10.0f, -6.0f, 0.0f, 55.0f, -1, -1);
    if (t == 8) {
        func_80005670(arg0, D_80259734);
        func_80005670(arg0, D_80259748);
    }
    (*arg1)->unk22 = 0;
    if (t == 0x72) {
        func_80133980(0x13C);
        for (i = 0; i != 0x20; i++) {
            ang = func_8012C6B4(0x2000);
            r = func_8012C6B4(0x1F4) / 100.0;
            pad2 = func_8001EAD0(a = ang), s = func_8001EB64(a);
#define func_80256034_P (((func_80256034_G *)D_801BBBF0)->unkE0->unk2C)
            func_80380F94(pad2 * r + func_80256034_P->unk4, func_80256034_P->unk8 + 12.0f, s * r + func_80256034_P->unkC, 0.0f, func_8012C6B4(0x28) / 10.0 + 4.0, 0.0f, 8);
#undef func_80256034_P
        }
    }
    if (t >= 0xB4) {
        cmd.a = 0x1100;
        cmd.b = 0x0348007A;
        cmd.d = 0xF;
        cmd.c = 10.0f;
        func_801C2F0C(5, &cmd);
        func_80133980(0x13D);
        func_800058DC(arg0, func_80256308);
    }
}


void func_80256308(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256314.s")


typedef struct func_802564DC_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802564DC_StructB;

typedef struct func_802564DC_StructA {
    u8 pad0[0x30];
    func_802564DC_StructB *unk30;
} func_802564DC_StructA;


void func_802564DC(s32 arg0, func_802564DC_StructA **arg1) {
    (*arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk4B += 2;
    if ((s32) (*arg1)->unk30->unk4B >= 0xFE) {
        (*arg1)->unk30->unk4B = 0xFF;
        func_800058DC((void *) arg0, (void *) func_80256590);
    }
}


typedef struct func_80256590_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256590_StructB;

typedef struct func_80256590_StructA {
    u8 pad0[0x30];
    func_80256590_StructB *unk30;
} func_80256590_StructA;


void func_80256590(s32 arg0, void **arg1) {
    (*(func_80256590_StructA **)arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*(func_80256590_StructA **)arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*(func_80256590_StructA **)arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*(func_80256590_StructA **)arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x13A) != 0) {
        (*(func_80256590_StructA **)arg1)->unk30->unk4B -= 2;
        if ((*(func_80256590_StructA **)arg1)->unk30->unk4B < 2) {
            func_80005700(arg0, arg1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256650.s")

#define func_802569D0 func_802569D0__func_802567F0
extern void func_802569D0(s32 arg0, func_80251820_Args *arg1);

typedef struct func_802567F0_StructB {
    u8 pad[0x4A];
    u8 unk4A;
    u8 pad2[2];
    u8 unk4D;
} func_802567F0_StructB;
typedef struct func_802567F0_StructA {
    u8 pad[0x30];
    func_802567F0_StructB *unk30;
} func_802567F0_StructA;
typedef struct func_802567F0_Arg0 {
    u8 pad[0x90];
    u16 unk90;
} func_802567F0_Arg0;

void func_802567F0(func_802567F0_Arg0 *arg0, func_802567F0_StructA **arg1)
{
  s16 a;
  u16 t;
  t = arg0->unk90;
  t += 0;
  arg0->unk90 = t + 1;
  a = (t * 0x1E) % 8192;
  (*arg1)->unk30->unk4A = (u32) ((func_8001EAD0(a) * 127.0f) + 128.0f);
  (*arg1)->unk30->unk4D = (u32) ((func_8001EAD0(a) * 127.0f) + 128.0f);
  if (func_80133A24(0x138) != 0)
  {
    func_800058DC(arg0, func_802569D0);
  }
}
#undef func_802569D0


void func_802569D0(s32 arg0, func_80251820_Args *arg1) {
    func_80251820_Inner *temp_v0;

    temp_v0 = arg1->unk0->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 2);
    if ((s32) arg1->unk0->unk30->unk4B < 2) {
        func_80005700(arg0, (void **) arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256A1C.s")


struct func_80256BC4_StructInner {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad1[0x2B];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_80256BC4_StructOuter {
    u8 pad0[0x30];
    struct func_80256BC4_StructInner *unk30;
};

struct func_80256BC4_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
};


void func_80256BC4(struct func_80256BC4_StructArg0 *arg0, struct func_80256BC4_StructOuter **arg1) {
    f64 temp_fv0;
    struct func_80256BC4_StructArg0 *var_a2 = arg0;
    struct func_80256BC4_StructInner *var_v0;
    extern void func_80005700();
    extern s32 func_80133A24();

    var_a2->unk90 = var_a2->unk90 + 1;
    var_v0 = (*arg1)->unk30;
    temp_fv0 = var_v0->unk1C;
    if (temp_fv0 < D_8025DC60) {
        var_v0->unk1C = temp_fv0 + D_8025DC68;
        var_v0 = (*arg1)->unk30;
    }
    var_v0->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x139, arg1) != 0) {
        var_v0 = (*arg1)->unk30;
        var_v0->unk4B = var_v0->unk4B - 2;
        if ((s32) (*arg1)->unk30->unk4B < 2) {
            func_80005700(var_a2, arg1);
        }
    }
}


typedef struct func_80256CB0_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
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
} func_80256CB0_StructI;
typedef struct func_80256CB0_StructM {
    u8 pad0[0x30];
    func_80256CB0_StructI *unk30;
} func_80256CB0_StructM;
typedef struct func_80256CB0_StructA {
    u8 pad0[0x90];
    u16 unk90;
} func_80256CB0_StructA;
typedef struct func_80256CB0_StructP {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80256CB0_StructP;
typedef struct func_80256CB0_StructB {
    u8 pad0[0x2C];
    func_80256CB0_StructP *unk2C;
} func_80256CB0_StructB;
typedef struct func_80256CB0_StructG {
    u8 pad0[0xE0];
    func_80256CB0_StructB *unkE0;
} func_80256CB0_StructG;

void func_80256CB0(func_80256CB0_StructA *arg0, func_80256CB0_StructM **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(func_80257B10_V *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000300;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 0x4B1, 0, 0x3F800000, 1);
    k = D_8025DC70;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (u32)D_802599D0 | 0x40000000;
    (*arg1)->unk30->unk4 = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unk4;
    (*arg1)->unk30->unk8 = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unk8 + D_8025DC78;
    (*arg1)->unk30->unkC = ((func_80256CB0_StructG *)D_801BBBF0)->unkE0->unk2C->unkC;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xB4;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk90 = 0;
    func_800058DC(arg0, func_80256EA8);
}


struct func_80256EA8_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80256EA8_Outer {
    u8 pad[0x30];
    struct func_80256EA8_Inner *unk30;
};

void func_80256EA8(s32 arg0, void **arg1) {
    struct func_80256EA8_Inner *temp;
    extern void func_80005700();

    if (func_80133A24(0x13C) != 0) {
        temp = ((struct func_80256EA8_Outer *) *arg1)->unk30;
        temp->unk4B = (u8) (temp->unk4B - 0x28);
        if ((s32) ((struct func_80256EA8_Outer *) *arg1)->unk30->unk4B < 0x28) {
            func_80005700(arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257114.s")



struct func_80257418_Struct30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x4B - 0x24];
    u8 unk4B;
};

struct func_80257418_Struct0 {
    u8 pad0[0x30];
    struct func_80257418_Struct30 *unk30;
};

void func_80257418(s32 arg0, struct func_80257418_Struct0 **arg1) {
    struct func_80257418_Struct30 *temp_v0;
    f64 temp_f0;

    temp_f0 = D_8025DC98;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + D_8025DCA0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 8);
    if ((s32) (*arg1)->unk30->unk4B < 8) {
        func_80005700(arg0, (void **) arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802574C8.s")



void func_80257684(func_80251820_Ctx *arg0, func_80251820_Args *arg1) {
    func_80251820_Inner *inner;

    arg0->unk90 = arg0->unk90 + 1;
    inner = arg1->unk0->unk30;
    if ((s32) inner->unk4B < 0xFC) {
        inner->unk4B = inner->unk4B + 4;
        inner = arg1->unk0->unk30;
    }
    inner->unk8 = (f32) (*(f32 *) (D_8025DE20 + 0x9C) + 45.0f);
    arg1->unk0->unk30->unk48 = D_801BBBF0[0x204];
    arg1->unk0->unk30->unk49 = D_801BBBF0[0x205];
    arg1->unk0->unk30->unk4A = D_801BBBF0[0x206];
    arg1->unk0->unk30->unk4C = D_801BBBF0[0x208];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0x209];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0x20A];
    inner = arg1->unk0->unk30;
    if ((f64) inner->unk18 < D_8025DCB0) {
        f64 step;
        step = D_8025DCB8;
        inner->unk18 = (f32) ((f64) inner->unk18 + step);
        inner = arg1->unk0->unk30;
        inner->unk1C = (f32) ((f64) inner->unk1C + step);
        inner = arg1->unk0->unk30;
        inner->unk20 = (f32) ((f64) inner->unk20 + step);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802577B4.s")


typedef struct func_8025799C_In { u8 pad0[8]; f32 unk8; } func_8025799C_In;
typedef struct func_8025799C_Nd { u8 pad0[0x30]; func_8025799C_In *unk30; } func_8025799C_Nd;
typedef struct func_8025799C_A1 { u8 pad0[4]; func_8025799C_Nd *unk4; func_8025799C_Nd *unk8; } func_8025799C_A1;
typedef struct func_8025799C_A0 { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; f32 unk98; f32 unk9C; f32 unkA0; } func_8025799C_A0;


void func_8025799C(func_8025799C_A0 *arg0, func_8025799C_A1 *arg1)
{
  f32 sp3C;
  s32 sp38;
  u8 pad[4];
  f32 sp30;
  sp38 = arg0->unk90++;
  if (func_80133A24(0x13A) == 0)
  {
    arg0->unk9C = (f32) ((((f64) func_8001EAD0(sp38 * 0x1E)) * 2.5) - 2.5);
  }
  arg1->unk4->unk30->unk8 = arg0->unk9C;
  arg1->unk8->unk30->unk8 = arg0->unk9C;
  sp3C = func_8012C6B4(0x2000);
  sp30 = func_8001EAD0((s32) sp3C);
  func_80380F94((sp30 * 7.0) + arg0->unk98, arg0->unk9C + 35.0f, (func_8001EB64((s32) sp3C) * 7.0) + arg0->unkA0, 0, D_8025DCD0, 0.0, 5);
}


typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; } func_80257B10_V5;
typedef struct {
    u8 pad[0x24];
    u32 unk24;
    u8 pad2[8];
    u32 unk30;
    u8 pad3[0x17];
    u8 unk4B, unk4C, unk4D, unk4E, unk4F;
} func_80257B10_In;
typedef struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    func_80257B10_In *unk30;
} func_80257B10_Mid;
typedef struct {
    func_80257B10_Mid *unk0, *unk4, *unk8;
} func_80257B10_A1;
typedef struct {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0xC];
    s16 unk3C;
    u8 pad3[0x74 - 0x3E];
    s32 unk74;
} func_80257B10_A0;


void func_80257B10(func_80257B10_A0 *arg0, func_80257B10_A1 *arg1) {
    extern void func_80257DA0();
    func_80257B10_V sp20;

    sp20 = D_80164F40;
    sp20.b = 0x80000900;
    func_80005E44(arg0, &sp20);
    sp20.b = 0x80000900;
    func_80005E44(arg0, &sp20);
    sp20.b = 0x800002FF;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 0);
    arg1->unk0->unk30->unk24 |= 0x400;
    arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0xC);
    arg1->unk4->unk30->unk24 |= 0x400;
    arg1->unk4->unk30->unk30 = (u32)D_8025A1D8 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 2, 0x302, 0xC);
    arg1->unk8->unk30->unk24 |= 0x500;
    arg1->unk8->unk30->unk30 = (u32)D_8025A228 | 0x40000000;
    arg1->unk8->unk30->unk4B = 0xFF;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk8->unk22 = 0;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 1);
    arg0->unk3C = 0;
    func_8001F74C(arg0);
    func_800058DC(arg0, func_80257DA0);
}


typedef struct func_80257DA0_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x74 - 0x3E];
    s32 unk74;
} func_80257DA0_Struct;


void func_80257DA0(func_80257DA0_Struct *arg0, s32 arg1) {
    if (func_80126944() == 1) {
        arg0->unk74 = func_8012C97C(0x302, 3);
    } else {
        arg0->unk74 = func_8012C97C(0x302, 1);
    }
    if (func_80133A24(0x133) != 0) {
        if (func_80133A24(0x134) != 0) {
            if (func_80133A24(0x135) != 0) {
                if (func_80133A24(0x136) != 0) {
                    arg0->unk3C = 0;
                    func_800058DC(arg0, func_80257E48);
                }
            }
        }
    }
}



struct func_80257E48_Mtx;

typedef struct func_80257E48_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80257E48_Mtx *unk30;
} func_80257E48_Node;

typedef struct func_80257E48_Arg1 {
    u8 pad0[4];
    func_80257E48_Node *unk4;
    func_80257E48_Node *unk8;
} func_80257E48_Arg1;

typedef struct func_80257E48_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[6];
    f32 unk44;
    u8 pad2[0x2C];
    s32 unk74;
} func_80257E48_Obj;

typedef struct func_80257E48_Gfx {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
} func_80257E48_Gfx;

typedef struct func_80257E48_Mtx {
    u8 pad0[8];
    f32 unk8;
} func_80257E48_Mtx;

typedef struct func_80257E48_Ent {
    u8 pad0[0x24];
    func_80257E48_Node *unk24;
    u8 pad1[0x4C];
    s32 unk74;
} func_80257E48_Ent;


void func_80257E48(func_80257E48_Obj *arg0, func_80257E48_Arg1 *arg1) {
    func_80257E48_Ent *temp_v0_2;
    func_80257E48_Mtx *temp_v1;

    if ((s32) arg0->unk3C++ >= 0x258) {
        func_801C3B2C(2);
        func_801C3B10(1);
        ((func_80257E48_Gfx *) *(func_80257E48_Gfx **)((u8 *) D_801BBBF0 + 0xDC))->unk40 = 0.0f;
        ((func_80257E48_Gfx *) *(func_80257E48_Gfx **)((u8 *) D_801BBBF0 + 0xDC))->unk48 = 0.0f;
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 1;
        arg0->unk3C = 0;
        arg0->unk44 = 0.0f;
        arg0->unk74 = func_8012C97C(0x302, 2);
        temp_v0_2 = func_801505AC(0);
        temp_v0_2->unk24->unk22 = 0;
        temp_v1 = temp_v0_2->unk24->unk30;
        temp_v1->unk8 = temp_v1->unk8 - 20.0f;
        temp_v0_2->unk74 = 0;
        func_80126820(0x20);
        func_80020718(0x18B);
        func_800058DC(arg0, func_80257F34);
    }
}

typedef struct func_80257F34_Struct_In {
    u8 pad0[8];
    f32 unk8;
    u8 padC[0x3F];
    u8 unk4B;
} func_80257F34_Struct_In;
typedef struct func_80257F34_Struct_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80257F34_Struct_In *unk30;
} func_80257F34_Struct_Node;
typedef struct func_80257F34_Struct_A1 {
    u8 pad0[8];
    func_80257F34_Struct_Node *unk8;
} func_80257F34_Struct_A1;
typedef struct func_80257F34_Struct_A0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[6];
    f32 unk44;
} func_80257F34_Struct_A0;
typedef struct func_80257F34_Struct_V {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80257F34_Struct_V;
typedef struct func_80257F34_Struct_G {
    u8 pad0[0x2C];
    func_80257F34_Struct_V *unk2C;
} func_80257F34_Struct_G;
typedef struct func_80257F34_Struct_M { s16 a; s32 b; f32 c; s16 d; } func_80257F34_Struct_M;
extern func_80257F34_Struct_G *D_801BBCD0;

void func_80257F34(func_80257F34_Struct_A0 *arg0, func_80257F34_Struct_A1 *arg1) {
    s16 a0;
    func_80257F34_Struct_V *v;
    func_80257F34_Struct_In *p;
    func_80257F34_Struct_Node *n;
    func_80257F34_Struct_M m;
    f32 sp8C;
    s32 sp88;
    s32 sp84;

    sp88 = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    func_801C42DC(0, 0, 0, 0xFF, 0xB4, 0xDC, 0x14, 0x1E, -0x1E, 0x96, 0xA0, 0x46, 0x6E, 0x50, -0x46, 0, 0, 0, 0xB9, 5.0f, D_8025DD88, 2, 3.0f);
    if ((func_801C2FF8() != 0) && (func_801C3044() == 0)) {
        m.a = 0x1100;
        m.b = 0x01680041;
        m.d = 0xA;
        m.c = 3.0f;
        func_801C2F0C(5, &m);
    }
    v = D_801BBCD0->unk2C;
    sp84 = func_8001EF38(v->unk4, v->unkC);
    sp8C = (f32)((s16)(arg0->unk3C * 10 + sp84 - 0x1C7) & 0x1FFF);
    a0 = (s16)(s32)sp8C;
    D_8011AAF4(D_8025DCE0, 0x15A, arg0, 0, 1, 0.0f, (func_8001EAD0(a0) * 20.0f) + D_801BBCD0->unk2C->unk4, 4.0f, (func_8001EB64(a0) * 20.0f) + D_801BBCD0->unk2C->unkC, 0.0f, func_8001EAD0(a0 = (s16)(s32)(sp8C - 2048.0f) & 0x1FFF) * 30.0f, 80.0f, func_8001EB64(a0) * 30.0f, 0.0f, 55.0f, -1, -1);
    arg1->unk8->unk30->unk8 += arg0->unk44;
    arg0->unk44 = (f32)((f64)arg0->unk44 - D_8025DD90);
    if (sp88 >= 0x2D) {
        arg1->unk8->unk30->unk4B -= 6;
        n = arg1->unk8;
        if (n->unk30->unk4B < 6) {
            n->unk22 = 0;
            func_80133980(0x137);
            func_800058DC(arg0, func_80258268);
        }
    }
}

#undef func_80258268
#define D_801BBCD0 D_801BBCD0__func_80258268
#define D_801BBCD8 D_801BBCD8__func_80258268
#define func_802583FC func_802583FC__func_80258268
extern void func_802583FC(s32 arg0, s32 arg1);

typedef struct func_80258268_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_80258268_StructInner;
typedef struct func_80258268_StructOuter {
    u8 pad0[0x2C];
    func_80258268_StructInner *inner;
} func_80258268_StructOuter;
extern func_80258268_StructOuter *D_801BBCD0;
extern func_80258268_StructOuter *D_801BBCD8;
extern u8 D_8025DD18[];
extern f32 D_8025DD98;

void func_80258268(void *arg0, s32 arg1) {
    f32 cosine;
    f32 sine;
    f32 x, y, z;
    func_80258268_StructInner *p;
    func_80258268_StructInner *q;

    sine = func_8001EAD0(D_801BBCD0->inner->angle);
    if (D_801C3DC8(arg0, (f32)(D_801BBCD0->inner->x - sine * 40.0), D_801BBCD0->inner->y + 20.0f,
            (f32)(D_801BBCD0->inner->z - func_8001EB64(D_801BBCD0->inner->angle) * 40.0),
            D_801BBCD0->inner->x, D_801BBCD0->inner->y + 17.0f, D_801BBCD0->inner->z, D_8025DD98, 35.0f) == 0) {
        func_8011AAF4(D_8025DD18, 0x172, arg0, 2, 1, 0.0f,
            D_801BBCD8->inner->a, D_801BBCD8->inner->b, D_801BBCD8->inner->c, 0.0f,
            D_801BBCD8->inner->d, D_801BBCD8->inner->e, D_801BBCD8->inner->f, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, NULL);
        func_800058DC(arg0, func_802583FC);
    }
}
#undef D_801BBCD0
#undef D_801BBCD8
#undef func_802583FC
#define func_80258268 func_80258268__decl

typedef struct func_80258514_Struct_Arg1 {
    u8 pad[0x22];
    u8 unk22;
} func_80258514_Struct_Arg1;
typedef struct func_80258514_Struct_Arg0 {
    u8 pad[0x74];
    s32 unk74;
} func_80258514_Struct_Arg0;
void func_80258514(func_80258514_Struct_Arg0 *arg0, func_80258514_Struct_Arg1 **arg1);


void func_802583FC(s32 arg0, s32 arg1) {
    if ((func_801C3D20(-76.0f, -12.0f, 15.0f) != 0) || (func_801C3D20(-76.0f, 12.0f, 15.0f) != 0)) {
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_8025DD50, 0x186, (void *)arg0, 0, 1, 0.0f, -109.0f, 17.5f, -0.5f, 0.0f, -36.5f, 14.0f, 2.0f, 0.0f, 55.0f, -1, -1);
        func_80133980(0x138);
        func_800058DC(arg0, func_80258514);
    }
}


typedef struct func_80258514_Struct_B {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
} func_80258514_Struct_B;

typedef struct func_80258514_Struct_A {
    u8 pad[0x2C];
    func_80258514_Struct_B *unk2C;
} func_80258514_Struct_A;

typedef struct func_80258514_Struct_Global {
    u8 pad[0xE0];
    func_80258514_Struct_A *unkE0;
} func_80258514_Struct_Global;




void func_80258514(func_80258514_Struct_Arg0 *arg0, func_80258514_Struct_Arg1 **arg1) {
    func_80258514_Struct_Global *g = (func_80258514_Struct_Global *) D_801BBBF0;

    g->unkE0->unk2C->unk4 = -76.0f;
    g->unkE0->unk2C->unkC = 0.0f;
    g->unkE0->unk2C->unk12 = 0x800;
    (*arg1)->unk22 = 0;
    arg0->unk74 = 0;
    func_800058DC(arg0, func_80258580);
}


void func_80258580(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

