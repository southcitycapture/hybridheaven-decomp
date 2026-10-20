#include "context.h"
typedef struct func_80380B30_SB { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[0x20]; u32 unk30; } func_80380B30_SB;
typedef struct func_80380B30_SA { u8 pad[0x2C]; func_80380B30_SB *unk2C; } func_80380B30_SA;
typedef struct func_80380B30_S { u8 pad0[0x24]; func_80380B30_SA *unk24; u8 pad28[0x14]; u16 unk3C; u8 unk3E; u8 pad3F; f32 unk40; f32 unk44; f32 unk48; u8 pad4C[0x44]; s16 unk90; u8 unk92; u8 pad93; f32 unk94; f32 unk98; } func_80380B30_S;
extern s32 func_8012C6B4();
extern s32 func_801472C0(s32, u8, u8, s32, s32);
extern s32 func_800058DC();
extern u8 D_80389880[];
extern f64 D_8038BE08;
extern f64 D_8038BE10;
extern f64 D_8038BE18;
extern func_80380B30_SA *D_8038CFB4;
extern u8 func_80380CD8[];

void func_80380B30(func_80380B30_S *arg0, s32 arg1)
{
  u8 c;
  f32 f;
  f64 k;
  s32 r;
  func_80380B30_SA *p;
  arg0->unk3E = 1;
  r = func_8012C6B4(0x50);
  k = D_8038BE08;
  f = (f32) ((((f64) ((f32) r)) * D_8038BE10) + 1.0);
  arg0->unk98 = f;
  arg0->unk44 = f;
  arg0->unk24->unk2C->unk30 = ((u32) D_80389880) | 0x40000000;
  arg0->unk40 = (f32) (((f64) (arg0->unk24->unk2C->unk4 - D_8038CFB4->unk2C->unk4)) * k);
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
  arg0->unk48 = (f32) (((f64) (arg0->unk24->unk2C->unkC - D_8038CFB4->unk2C->unkC)) * k);
  arg0->unk90 = func_8012C6B4(0x300) + 0x100;
  arg0->unk3C = func_8012C6B4(0x3C) + 0x1E;
  arg0->unk94 = (f32) (((f64) ((f32) arg0->unk3C)) * D_8038BE18);
  arg0->unk92 = func_8012C6B4(8);
  c = func_8012C6B4(0x3C) + 0x8C;
  func_80147250((s32) arg0->unk24, 0, 0, 0, 0xFF);
  func_801472C0((s32) arg0->unk24, c, c, c & 0xFF, 0xFF);
  func_800058DC(arg0, func_80380CD8);
}
