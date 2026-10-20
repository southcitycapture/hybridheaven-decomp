#include "context.h"

struct func_8000BAD8_A {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_8000BAD8_B *unk30;
};
struct func_8000BAD8_B {
    u16 unk0;
    u8 pad2[2];
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
    s32 unk24;
    s32 unk28;
    u16 unk2C;
    u8 pad2E[2];
    void *unk30;
    s32 unk34;
    u8 pad38[2];
    u8 unk3A;
    u8 pad3B[5];
    s32 unk40;
    u8 pad44[4];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};
struct func_8000BAD8_C {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[0xE];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};
extern void *func_8000C3B0();

void func_8000BAD8(struct func_8000BAD8_A *arg0, struct func_8000BAD8_C *arg1)
{
  struct func_8000BAD8_B *v;
  f32 t;
  f32 z = 0.0f;
  arg0->unk22 = 1;
  v = arg0->unk30;
  v->unk4 = arg1->unk0;
  v->unk8 = arg1->unk4;
  v->unkC = arg1->unk8;
  v->unk10 = arg1->unkC;
  v->unk12 = arg1->unkE;
  v->unk14 = arg1->unk10;
  v->unk24 = arg1->unk14;
  v->unk0 = arg1->unk18;
  v->unk2C = arg1->unk20;
  v->unk28 = arg1->unk1C;
  v->unk30 = func_8000C3B0();
  v->unk34 = 0;
  v->unk3A = 0;
  if (arg1->unk34 != z)
  {
    v->unk18 = arg1->unk30;
    v->unk1C = arg1->unk34;
    v->unk20 = arg1->unk38;
  }
  else
  {
    ;
    if (arg1->unk30 != z)
    {
      v->unk20 = (t = arg1->unk30);
      v->unk1C = t;
      v->unk18 = t;
    }
    else
    {
      t = 1.0f;
      v->unk20 = t;
      v->unk1C = t;
      v->unk18 = t;
    }
  }
  v->unk40 = 0;
  v->unk48 = 0;
  v->unk49 = 0;
  v->unk4A = 0;
  v->unk4B = 0xFF;
}
