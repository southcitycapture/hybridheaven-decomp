#include "common.h"
extern void func_800058DC(void *, void *);
typedef struct func_802416C8_Struct0 func_802416C8_Struct0;
typedef struct func_802416C8_Struct1 func_802416C8_Struct1;
void func_802416C8(func_802416C8_Struct0 *arg0, func_802416C8_Struct1 **arg1);

typedef struct func_80241544_StructObj {
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
} func_80241544_Obj;

typedef struct func_80241544_StructEnt {
    u8 pad0[0x2C];
    func_80241544_Obj *unk2C;
} func_80241544_Ent;

typedef struct func_80241544_StructCnt {
    u8 pad0[0xC];
    u16 unkC;
} func_80241544_Cnt;

extern u8 D_8024F0E0[];

void func_80241544(void *arg0, s32 arg1)
{
  func_80241544_Ent **arr;
  func_80241544_Ent **item;
  func_80241544_Cnt *cnt;
  s32 i;
  arr = (func_80241544_Ent **) arg1;
  cnt = *((func_80241544_Cnt **) (((u8 *) arg0) + 0x5C));
  for (i = 1, item = arr + 1; i < cnt->unkC; i++, item++) {
    (*item)->unk2C->unk24 |= 0x100;
    (*item)->unk2C->unk30 = ((u32) D_8024F0E0) | 0x40000000;
    (*item)->unk2C->unk48 = 0x3C;
    (*item)->unk2C->unk49 = 0xFF;
    (*item)->unk2C->unk4A = 0x3C;
    (*item)->unk2C->unk4B = 0xB4;
  }

  arr[1]->unk2C->unk4B = 0xA2;
  arr[16]->unk2C->unk4B = 0x7D;
  arr[13]->unk2C->unk4B = arr[16]->unk2C->unk4B;
  arr[17]->unk2C->unk4B = 0x5A;
  arr[14]->unk2C->unk4B = arr[17]->unk2C->unk4B;
  arr[18]->unk2C->unk4B = 0x36;
  arr[15]->unk2C->unk4B = arr[18]->unk2C->unk4B;
  arr[0]->unk2C->unk18 = 0.0f;
  arr[0]->unk2C->unk1C = 0.0f;
  arr[0]->unk2C->unk20 = 0.0f;
  func_800058DC(arg0, (void *) func_802416C8);
}
