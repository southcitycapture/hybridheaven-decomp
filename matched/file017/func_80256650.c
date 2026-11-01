#include "common.h"
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_80257B10_V;
extern func_80257B10_V D_80164F40;
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);


typedef struct func_80256650_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
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
} func_80256650_StructI;
typedef struct func_80256650_StructN {
    u8 pad0[0x30];
    func_80256650_StructI *unk30;
} func_80256650_StructN;
typedef struct func_80256650_StructA { func_80256650_StructN *unk0; } func_80256650_StructA;
typedef struct func_80256650_StructV { s32 w[4]; } func_80256650_StructV;
typedef struct func_80256650_StructC { u8 pad0[0x90]; u16 unk90; } func_80256650_StructC;

extern u8 D_802599D0[];
extern f32 D_8025DC4C;
extern f32 D_8025DC50;
extern void func_802567F0();
extern void func_8012D814(void *, s32, s32, s32, s32);

void func_80256650(func_80256650_StructC *arg0, func_80256650_StructA *arg1)
{
  func_80257B10_V sp28;
  sp28 = D_80164F40;
  sp28.b = 0x80000300;
  func_80005E44(arg0, &sp28);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0x4B0, 0);
  func_8012D814(arg0, 0x4B0, 1, 0x3F800000, 1);
  {
    (void) 0.02f;
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
    arg1->unk0->unk30->unk24 |= 0x300;
    arg1->unk0->unk30->unk30 = ((u32) D_802599D0) | 0x40000000;
    arg1->unk0->unk30->unk4 = 0.0f;
    arg1->unk0->unk30->unk8 = 26.0f;
    arg1->unk0->unk30->unkC = 0.0f;
    arg1->unk0->unk30->unk18 = 0.01f;
    arg1->unk0->unk30->unk1C = D_8025DC50;
    arg1->unk0->unk30->unk20 = 0.01f;
  }
  arg1->unk0->unk30->unk48 = 0xFF;
  arg1->unk0->unk30->unk49 = 0xFF;
  arg1->unk0->unk30->unk4A = 0xFF;
  arg1->unk0->unk30->unk4B = 0xFF;
  arg1->unk0->unk30->unk4C = 0xFF;
  arg1->unk0->unk30->unk4D = 0xFF;
  arg1->unk0->unk30->unk4E = 0;
  arg0->unk90 = 0;
  func_800058DC(arg0, func_802567F0);
}
