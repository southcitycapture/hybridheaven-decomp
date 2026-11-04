#include "context.h"

typedef struct func_80380CD8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_80380CD8_Struct2;

typedef struct func_80380CD8_Struct1 {
    u8 pad0[0x2C];
    func_80380CD8_Struct2 *unk2C;
} func_80380CD8_Struct1;

typedef struct func_80380CD8_Struct0 {
    u8 pad0[0x24];
    func_80380CD8_Struct1 *unk24;
    u8 pad28[0x3C - 0x28];
    u16 unk3C;
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    s16 unk90;
    u8 unk92;
    u8 pad93;
    f32 unk94;
    f32 unk98;
} func_80380CD8_Struct0;

extern s32 D_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_80380140(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern u8 D_80389818;
extern f64 D_8038BE20;
extern f64 D_8038BE28;
extern f64 D_8038BE30;
extern f64 D_8038BE38;
extern f32 D_8038BE40;
extern f32 D_8038BE44;
extern f32 D_8038BE48;

void func_80380CD8(func_80380CD8_Struct0 *arg0, s32 arg1)
{
  u8 a;
  f32 x;
  f32 y;
  f32 z;
  f64 k;
  float new_var;
  arg0->unk44 = arg0->unk44 - (((f32) arg0->unk3E) / 25.0);
  if ((arg0->unk44 + arg0->unk24->unk2C->unk8) < ((func_80380CD8_Struct2 *)D_8038CFB4->unk2C)->unk8)
  {
    arg0->unk90 = (func_8012C6B4(0x300) - arg0->unk90) + 0x100;
    arg0->unk98 = arg0->unk98 * D_8038BE20;
    arg0->unk44 = arg0->unk98;
  }
  arg0->unk24->unk2C->unk4 += arg0->unk40;
  arg0->unk24->unk2C->unk8 += arg0->unk44;
  arg0->unk24->unk2C->unkC += arg0->unk48;
  arg0->unk90 -= 8;
  if (arg0->unk90 < 0)
  {
    arg0->unk90 = 0;
  }
  arg0->unk24->unk2C->unk10 += arg0->unk90;
  arg0->unk24->unk2C->unk12 += arg0->unk90;
  arg0->unk24->unk2C->unk14 += arg0->unk90;
  if (arg0->unk3C <= arg0->unk94)
  {
    a = ((new_var = 255.0f) * (arg0->unk94 - arg0->unk3C)) / arg0->unk94;
    func_80147250((s32) arg0->unk24, (u8) (a * D_8038BE28), 0, 0, 0xFF);
    func_801472C0((s32) arg0->unk24, a, a, a & 0xFF, 0xFF);
  }
  k = D_8038BE30;
  x = arg0->unk40 * k;
  arg0->unk3C--;
  y = arg0->unk44 * D_8038BE38;
  z = arg0->unk48 * k;
  if (arg0->unk92 == (arg0->unk3C % 8))
  {
    if (func_8012C6B4(5) == 0)
    {
      func_80380140(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, x, y, z, 1.0f, 0xC0, 0, 0, 0, 0, 0, 0x50, -1, D_8038BE40, 0x13, 0);
    }
    else
    {
      func_80129FB8(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0, 0xB0, -4, D_8038BE44, 0, 0);
    }
  }
  if (arg0->unk3C == 0)
  {
    D_80129FB8(arg0->unk24->unk2C->unk4, arg0->unk24->unk2C->unk8, arg0->unk24->unk2C->unkC, 0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xA5, 0, 0xFF, 0, 0, 0xB0, -2, D_8038BE48, 0, 0);
    D_80389818++;
    func_80005700(arg0);
  }
}
