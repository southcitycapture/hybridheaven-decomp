#include "context.h"
typedef struct func_80240DEC_Struct2 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80240DEC_Struct2;
typedef struct func_80240DEC_Struct1 {
    u8 pad0[0x2C];
    func_80240DEC_Struct2 *unk2C;
} func_80240DEC_Struct1;
typedef struct func_80240DEC_Struct0 {
    u8 pad0[0x92];
    u16 unk92;
} func_80240DEC_Struct0;
void func_80240DEC(func_80240DEC_Struct0 *arg0, func_80240DEC_Struct1 **arg1);

typedef struct func_80240C68_Obj {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    u32 unk30;
    u8 pad2[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80240C68_Obj;

typedef struct func_80240C68_Ent {
    u8 pad0[0x2C];
    func_80240C68_Obj *unk2C;
} func_80240C68_Ent;

typedef struct func_80240C68_Arg1 {
    func_80240C68_Ent *unk0;
    func_80240C68_Ent *unk4;
    u8 pad8[0x34 - 0x8];
    func_80240C68_Ent *unk34;
    func_80240C68_Ent *unk38;
    func_80240C68_Ent *unk3C;
    func_80240C68_Ent *unk40;
    func_80240C68_Ent *unk44;
    func_80240C68_Ent *unk48;
} func_80240C68_Arg1;

typedef struct func_80240C68_Cnt {
    u8 pad0[0xC];
    u16 unkC;
} func_80240C68_Cnt;

extern u8 D_8024BB88[];

void func_80240C68(void *arg0, s32 arg1)
{
  func_80240C68_Arg1 *a1;
  func_80240C68_Ent **arr;
  func_80240C68_Cnt *cnt;
  s32 i;
  a1 = (func_80240C68_Arg1 *) arg1;
  arr = (func_80240C68_Ent **) arg1;
  cnt = *((func_80240C68_Cnt **) (((u8 *) arg0) + 0x5C));
 i = 1; while (i < cnt->unkC) {
    arr[i]->unk2C->unk24 |= 0x100;
    arr[i]->unk2C->unk30 = ((u32) D_8024BB88) | 0x40000000;
    arr[i]->unk2C->unk48 = 0x3C;
    arr[i]->unk2C->unk49 = 0xFF;
    arr[i]->unk2C->unk4A = 0x3C;
    arr[i]->unk2C->unk4B = 0xB4;
    i++;
  }

  a1->unk4->unk2C->unk4B = 0xA2;
  a1->unk40->unk2C->unk4B = 0x7D;
  a1->unk34->unk2C->unk4B = a1->unk40->unk2C->unk4B;
  a1->unk44->unk2C->unk4B = 0x5A;
  a1->unk38->unk2C->unk4B = a1->unk44->unk2C->unk4B;
  a1->unk48->unk2C->unk4B = 0x36;
  if (!arr)
  {
  }
  a1->unk3C->unk2C->unk4B = a1->unk48->unk2C->unk4B;
  a1->unk0->unk2C->unk18 = 0.0f;
  a1->unk0->unk2C->unk1C = 0.0f;
  a1->unk0->unk2C->unk20 = 0.0f;
  func_800058DC((s32) arg0, (void *) func_80240DEC);
}
