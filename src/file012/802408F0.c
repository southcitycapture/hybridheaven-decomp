#include "common.h"


extern void func_80011198(s32 a0, void *a1, s32 a2);
extern void func_800058DC(void *a0, void *a1);
extern void func_8024092C();

typedef struct func_802408F0_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_802408F0_Struct;

void func_802408F0(func_802408F0_Struct *arg0, s32 arg1) {
    void *temp = arg0->unk5C;

    func_80011198(arg1, temp, arg1);
    func_800058DC(arg0, func_8024092C);
}

/* Original EUC-JP diagnostic strings and alignment bytes. */
static const u8 hh_strings_80248F90[] = {
    0xBB, 0xC8, 0xA4, 0xA8, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00,
};
#define D_80248C48 D_80248C48__func_8024092C
#define D_80249500 D_80249500__func_8024092C
#define func_8000E634 func_8000E634__func_8024092C
#define func_8012C6B4 func_8012C6B4__func_8024092C
#define func_8013A28C func_8013A28C__func_8024092C
#define func_80240BD4 func_80240BD4__func_8024092C
#define func_80240DA4 func_80240DA4__func_8024092C
#define func_80240DA4_SB func_80240DA4_SB__func_8024092C
#define func_80240DA4_SC func_80240DA4_SC__func_8024092C
#define func_80240DA4_SH func_80240DA4_SH__func_8024092C
typedef struct func_80240DA4_SB { u8 pad[0x4]; f32 f4; f32 f8; f32 fC; u8 pad2[2]; s16 s12; } func_80240DA4_SB;
typedef struct func_80240DA4_SH { u8 pad[0x2C]; func_80240DA4_SB *p2C; } func_80240DA4_SH;
typedef struct func_80240DA4_SC { u8 pad[0x24]; func_80240DA4_SH *p24; } func_80240DA4_SC;
void func_80240DA4(func_80240DA4_SC *arg0, s32 arg1, f32 arg2, s32 arg3);


typedef struct func_8024092C_StructA {
    u8 pad[0x36];
    u16 id;
} func_8024092C_StructA;
typedef struct func_8024092C_StructB {
    s32 value;
    s16 x, y;
    f32 f;
} func_8024092C_StructB;
typedef struct func_8024092C_StructC {
    s32 value;
    f32 f;
    s32 unused;
    s32 param;
} func_8024092C_StructC;
extern s32 func_8012C6B4(s32);
extern void func_8013A28C(s32, func_8024092C_StructB);
extern u32 func_8000E634(func_8024092C_StructB *);
extern void func_80240BD4(void);
extern u16 D_80249500;
extern func_8024092C_StructC D_80248C48[];

void func_8024092C(arg0, arg1)
func_8024092C_StructA *arg0;
s32 arg1;
{
  int new_var;
  func_8024092C_StructB local;
  func_8024092C_StructC *entry;
  unsigned short n;
  s32 id;
  n = func_8012C6B4(2);
  switch (arg0->id)
  {
    case 0x29:

    case 0x2B:
      D_80249500 = n;
      break;

    case 0x11B:

    case 0x11C:
      D_80249500 = n + 2;
      break;

    case 0x31:
      D_80249500 = n + 4;
      break;

    case 0x32:
      D_80249500 = n + 6;
      break;

    case 0x2E:
      new_var = n + 8;
      D_80249500 = new_var;
      break;

    case 0x148:
      D_80249500 = 10;
      break;

    case 0xF4:
      D_80249500 = 11;
      break;

    case 0xF5:
      D_80249500 = 12;
      break;

    case 0xF6:
      D_80249500 = 13;
      break;

    case 0x59:
      D_80249500 = 14;
      break;

    case 0xF0:

    case 0xF9:

    case 0xFA:
      D_80249500 = n + 15;
      break;

    case 0x55:

    case 0x5D:

    case 0xF1:

    case 0x11A:

    case 0x11E:

    case 0x149:
      D_80249500 = n + 17;
      break;

    case 0x57:

    case 0x58:

    case 0x4057:
      D_80249500 = n + 18;
      break;

    default:
      D_80249500 = n + 19;
      break;

  }

  entry = &D_80248C48[D_80249500];
  local.value = entry->value;
  local.f = entry->f;
  local.y = 0;
  local.x = 0;
  func_8013A28C(arg1, local);
  func_80240DA4((func_80240DA4_SC *) arg0, entry->param, func_8000E634(&local) / 10.0, 10);
  func_800058DC(arg0, func_80240BD4);
}
#undef D_80248C48
#undef D_80249500
#undef func_8000E634
#undef func_8012C6B4
#undef func_8013A28C
#undef func_80240BD4
#undef func_80240DA4
#undef func_80240DA4_SB
#undef func_80240DA4_SC
#undef func_80240DA4_SH

typedef struct func_80240BD4_StructA { u8 pad[0x20]; u16 w20; u8 pad22[2]; f32 f24; } func_80240BD4_StructA;
typedef struct func_80240BD4_StructB { u8 pad[8]; u8 b8; u8 b9; } func_80240BD4_StructB;
extern s32 func_80010550(s32 a0, void *a1);
extern u16 func_80011590(u16 a0);
extern void func_8013B808(void *a0, s32 a1, u8 a2);
extern void func_80226710(void *a0, s32 a1, s32 a2);
extern u8 D_80248C48[];
extern u16 D_80249500;
void func_80240D98(s32 arg0, s32 arg1);

void func_80240BD4(func_802408F0_Struct *arg0, s32 arg1) {
    func_80240BD4_StructA *sa;
    func_80240BD4_StructB *sb;

    sa = arg0->unk5C;
    sb = (func_80240BD4_StructB *)(D_80248C48 + D_80249500 * 16);
    if (sa->w20 == func_80011590((u32)(sa->f24 * sb->b8))) {
        if ((D_80249500 == 2) || (D_80249500 == 3)) {
            func_80226710(arg0, 0x509, 0x3F800000);
        } else if ((D_80249500 == 0xB) || (D_80249500 == 0xC) || (D_80249500 == 0xD)) {
            func_80226710(arg0, 0x229, 0x3F800000);
        } else if ((D_80249500 == 6) || (D_80249500 == 7)) {
            func_80226710(arg0, 0x5D7, 0x3F800000);
        } else {
            func_8013B808(arg0, arg1, sb->b9);
        }
    }
    if (func_80010550(arg1, sa) != 0) {
        func_800058DC(arg0, (void *)func_80240D98);
    }
}


void func_80240D98(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern u8 D_801BBBF0[];

typedef struct func_80240DA4_SB { u8 pad[0x4]; f32 f4; f32 f8; f32 fC; u8 pad2[2]; s16 s12; } func_80240DA4_SB;
typedef struct func_80240DA4_SH { u8 pad[0x2C]; func_80240DA4_SB *p2C; } func_80240DA4_SH;
typedef struct func_80240DA4_SC { u8 pad[0x24]; func_80240DA4_SH *p24; } func_80240DA4_SC;
typedef struct func_80240DA4_SE { u8 pad[0x30]; f32 f30, f34, f38, f3C, f40, f44; } func_80240DA4_SE;
typedef struct func_80240DA4_SG { u8 pad[0x2C]; func_80240DA4_SE *p2C; } func_80240DA4_SG;
typedef struct func_80240DA4_SD { u8 pad[0x2C]; void *p2C; u8 pad30[4]; f32 f34, f38, f3C; s16 s40, s42; f32 f44, f48; u8 b4C; u8 pad4D[3]; f32 f50; s32 w54; s32 w58; s16 s5C, s5E; f32 f60, f64, f68, f6C, f70, f74, f78; } func_80240DA4_SD;
typedef struct func_80240DA4_SF { u8 pad[0xE8]; func_80240DA4_SG *pE8; u8 padEC[0x1118-0xEC]; func_80240DA4_SD *p1118; } func_80240DA4_SF;

extern func_80240DA4_SD *func_80005670();
extern f32 func_8001EAD0();
extern f32 func_8001EB64();
extern s32 func_80374E48();
extern u8 D_80248DA8[];

#define G ((func_80240DA4_SF *)D_801BBBF0)

void func_80240DA4(func_80240DA4_SC *arg0, s32 arg1, f32 arg2, s32 arg3) {
    func_80240DA4_SD *v;
    func_80240DA4_SB *t;
    if (G->p1118 == NULL && func_80374E48(arg0, arg1, 0) != 0) {
        t = arg0->p24->p2C;
        v = func_80005670(arg0, D_80248DA8);
        G->p1118 = v;
        if (v != NULL) {
            v->p2C = arg0;
            G->p1118->f34 = t->f4;
            G->p1118->f38 = t->f8;
            G->p1118->f3C = t->fC;
            G->p1118->s40 = t->s12;
            G->p1118->f44 = func_8001EAD0(G->p1118->s40);
            G->p1118->f48 = func_8001EB64(G->p1118->s40);
            G->p1118->b4C = 0;
            G->p1118->f50 = arg2;
            G->p1118->w54 = 0;
            G->p1118->w58 = arg1;
            G->p1118->s42 = 0;
            G->p1118->s5C = 10;
            G->p1118->s5E = 0;
            G->p1118->f60 = G->pE8->p2C->f30;
            G->p1118->f64 = G->pE8->p2C->f34;
            G->p1118->f68 = G->pE8->p2C->f38;
            G->p1118->f6C = G->pE8->p2C->f3C;
            G->p1118->f70 = G->pE8->p2C->f40;
            G->p1118->f74 = G->pE8->p2C->f44;
            G->p1118->f78 = 35.0f;
        }
    }
}


extern void func_8037488C(s32 arg0, void *arg1);
extern void func_80240FA0();

void func_80240F44(s32 arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = *(u16 **) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x58);
    *(u16 *) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x30) = temp_v0[0];
    *(u16 *) (*(u8 **) (D_801BBBF0 + 0x1118) + 0x32) = temp_v0[1];
    func_8037488C(arg0, D_801BBBF0);
    func_800058DC(arg0, func_80240FA0);
}

void func_80240FE4(s32 arg0, s32 arg1);

s32 func_80374994();
extern u8 *D_801BCD08;

void func_80240FA0(s32 arg0, s32 arg1) {
    if (func_80374994() != 0) {
        *(s16 *)(D_801BCD08 + 0x5E) = 0;
        func_800058DC((void *)arg0, &func_80240FE4);
    }
}


extern void func_80005700(s32 arg0, s32 arg1);

void func_80240FE4(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}
