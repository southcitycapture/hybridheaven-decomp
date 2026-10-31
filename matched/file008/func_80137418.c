#include "common.h"
extern u8 D_80164F40[];
extern s32 func_800058DC(void *, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C6B4(s32);


typedef struct func_80137418_StructA {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80137418_StructA;

typedef struct func_80137418_StructInner {
    u8 pad0[0x6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 pad1[0x14 - 0xC];
    u32 unk14;
} func_80137418_StructInner;

typedef struct func_80137418_Struct0 {
    u8 pad0[0x38];
    func_80137418_StructInner *unk38;
    s16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
} func_80137418_Struct0;

typedef struct func_80137418_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x18 - 0x10];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad2[0x30 - 0x28];
    s32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80137418_Struct2;

typedef struct func_80137418_Struct1 {
    u8 pad0[0x30];
    func_80137418_Struct2 *unk30;
} func_80137418_Struct1;
extern void func_80020718(s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D8C8(void *, s32, s32, f32, s32, s32);
extern u8 D_8017AC58[];
extern void func_80137970();
extern s32 D_80133A24(s32);

void func_80137418(func_80137418_Struct0 *arg0, func_80137418_Struct1 **arg1)
{
  func_80137418_StructA sp90;
  s32 pad[2];
  s32 i;
  f32 f;
  u16 a;
  if (((arg0->unk38->unk14 >> 16) == 0) || (D_80133A24(arg0->unk38->unk14 >> 16) != 0))
  {
    sp90 = *((func_80137418_StructA *) D_80164F40);
    sp90.unk4 = 0x80000300;
    for (i = 0; i < 14; i++)
    {
      func_80005F6C(arg0, &sp90);
    }

    func_80006214(arg0);
    for (i = 0; i < 14; i++)
    {
      func_8012C89C(arg0, i, 0x4B2, 0);
      func_8012D8C8(arg0, 0x4B2, 1, 1.0f, 1, i);
      arg1[i]->unk30->unk24 = 0x60300;
      arg1[i]->unk30->unk30 = ((s32) D_8017AC58) | 0x40000000;
      arg1[i]->unk30->unk48 = 0xFF;
      arg1[i]->unk30->unk49 = 0xE6;
      arg1[i]->unk30->unk4A = 0;
      arg1[i]->unk30->unk4B = 0xC8;
      arg1[i]->unk30->unk4C = 0xFF;
      arg1[i]->unk30->unk4D = 0;
      arg1[i]->unk30->unk4E = 0;
    }

    arg1[0]->unk30->unk18 = 0.3f;
    arg1[0]->unk30->unk1C = 0.4f;
    arg1[0]->unk30->unk20 = 0.3f;
    arg1[0]->unk30->unk4 = ((f32) arg0->unk38->unk6) / 10.0;
    arg1[0]->unk30->unk8 = (((f32) arg0->unk38->unk8) / 10.0) + 17.0;
    arg1[0]->unk30->unkC = ((f32) arg0->unk38->unkA) / 10.0;
    for (i = 1; i < 6; i++)
    {
      f = (func_8012C6B4(0x32) / 1000.0) + 0.2;
      arg1[i]->unk30->unk20 = f;
      arg1[i]->unk30->unk1C = f;
      arg1[i]->unk30->unk18 = f;
      a = func_8012C6B4(0x2000);
      arg1[i]->unk30->unk4 = (func_8001EAD0(a) * 10.0f) + (((f32) arg0->unk38->unk6) / 10.0);
      arg1[i]->unk30->unk8 = (((f32) arg0->unk38->unk8) / 10.0) + 8.0;
      arg1[i]->unk30->unkC = (func_8001EB64(a) * 10.0f) + (((f32) arg0->unk38->unkA) / 10.0);
    }

    for (i = 6; i != 14; i++)
    {
      f = (func_8012C6B4(0x32) / 1000.0) + 0.1;
      arg1[i]->unk30->unk20 = f;
      arg1[i]->unk30->unk1C = f;
      arg1[i]->unk30->unk18 = f;
      a = func_8012C6B4(0x2000);
      arg1[i]->unk30->unk4 = (func_8001EAD0(a) * 15.0f) + (((f32) arg0->unk38->unk6) / 10.0);
      arg1[i]->unk30->unk8 = (((f32) arg0->unk38->unk8) / 10.0) + 3.0;
      arg1[i]->unk30->unkC = (func_8001EB64(a) * 15.0f) + (((f32) arg0->unk38->unkA) / 10.0);
    }

    arg0->unk3C = 0;
    arg0->unk90 = 14.0f;
    func_80020718(0x5E7);
    func_800058DC(arg0, func_80137970);
  }
}
