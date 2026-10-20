#include "context.h"

typedef struct { u8 pad0[0x18]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30;
  u8 pad34[0x14]; u8 unk48; u8 unk49; u8 unk4A; u8 unk4B; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F; } F_In;
typedef struct { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; F_In *unk30; } F_Out;
typedef struct {
    u8 pad0[0x24]; struct { u8 pad[0x30]; s32 unk30; } *unk24;
    u8 pad28[0x14];
    s16 unk3C; u8 pad3E[0x4E];
    void *unk8C; u8 pad90[2]; s16 unk92; u8 pad94[0xC];
    u16 unkA0; u16 unkA2; u8 padA4[2]; u16 unkA6;
} F_A0;
extern void func_8013E570();
extern u8 D_80217DE8[];
extern f32 D_8021ADB0, D_8021ADB4, D_8021ADB8;
extern u8 func_801FD110[];

void func_80212A50(F_A0 *arg0, F_Out **arg1)
{
  struct func_802070F4_Local sp30;
  f32 t;
  s32 v;
  sp30 = D_80164F40;
  sp30.unk4 = 0x80000900;
  func_80005E44(arg0, &sp30);
  sp30.unk4 = 0x80000600;
  func_80005E44(arg0, &sp30);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0xD9, 0);
  arg1[0]->unk30->unk24 = 0x13;
  arg1[0]->unk30->unk30 = ((s32) D_8017AF90) | 0x40000000;
  arg1[0]->unk30->unk20 = D_8021ADB0;
  t = arg1[0]->unk30->unk20;
  arg1[0]->unk30->unk1C = t;
  arg1[0]->unk30->unk18 = t;
  arg1[0]->unk30->unk24 |= 0x400;
  arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
  arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
  arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
  arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
  func_8012C89C(arg0, 1, 0xD9, 1);
  func_8012D918(arg0, 0xD9, 2, 1, 0);
  t = D_8021ADB4;
  arg1[1]->unk30->unk24 |= 0x4100;
  arg1[1]->unk30->unk30 = ((s32) D_80217DE8) | 0x40000000;
  arg1[1]->unk30->unk18 = t;
  arg1[1]->unk30->unk1C = D_8021ADB8;
  arg1[1]->unk30->unk20 = t;
  arg1[1]->unk30->unk48 = 0;
  arg1[1]->unk30->unk49 = 0x40;
  arg1[1]->unk30->unk4A = 0xFF;
  arg1[1]->unk30->unk4B = 0;
  arg1[1]->unk30->unk4C = 0;
  arg1[1]->unk30->unk4D = 0x66;
  arg1[1]->unk30->unk4E = 0xCD;
  arg1[1]->unk30->unk4F = 0x4C;
  arg1[1]->unk22 = 0;
  arg0->unk3C = 0;
  arg0->unk92 = 0;
  arg0->unkA0 = arg0->unkA2;
  arg0->unkA6 = 0x16;
  v = arg0->unk24->unk30;
  func_8013E570(arg1[0], 0, v + 4, v + 8, v + 0xC);
  arg0->unk8C = func_801FD110;
}
