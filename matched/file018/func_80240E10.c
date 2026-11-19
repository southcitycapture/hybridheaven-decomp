#include "common.h"
extern void func_800058DC(s32, void *);


typedef struct func_80240E10_StructObj {
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
} func_80240E10_StructObj;

typedef struct func_80240E10_StructEnt {
    u8 pad0[0x2C];
    func_80240E10_StructObj *unk2C;
} func_80240E10_StructEnt;

typedef struct func_80240E10_StructArg1 {
    func_80240E10_StructEnt *e[0x13];
} func_80240E10_StructArg1;

typedef struct func_80240E10_StructCnt {
    u8 pad0[0xC];
    u16 unkC;
} func_80240E10_StructCnt;

extern u8 D_80254420[];
extern void func_80240F94();

void func_80240E10(void *arg0, s32 arg1)
{
  func_80240E10_StructArg1 *a1 = (func_80240E10_StructArg1 *) arg1;
  func_80240E10_StructCnt *cnt;
  func_80240E10_StructEnt **p;
  s32 i;
  cnt = *((func_80240E10_StructCnt **) (((u8 *) arg0) + 0x5C));
  i = 1; p = a1->e + 1; while (i < cnt->unkC) {
    (*p)->unk2C->unk24 |= 0x100;
    (*p)->unk2C->unk30 = ((u32) D_80254420) | 0x40000000;
    (*p)->unk2C->unk48 = 0x3C;
    (*p)->unk2C->unk49 = 0xFF;
    (*p)->unk2C->unk4A = 0x3C;
    (*p)->unk2C->unk4B = 0xB4;
    i++;
    p++;
  }

  a1->e[1]->unk2C->unk4B = 0xA2;
  a1->e[16]->unk2C->unk4B = 0x7D;
  a1->e[13]->unk2C->unk4B = a1->e[16]->unk2C->unk4B;
  a1->e[17]->unk2C->unk4B = 0x5A;
  a1->e[14]->unk2C->unk4B = a1->e[17]->unk2C->unk4B;
  a1->e[18]->unk2C->unk4B = 0x36;
  a1->e[15]->unk2C->unk4B = a1->e[18]->unk2C->unk4B;
  a1->e[0]->unk2C->unk18 = 0.0f;
  a1->e[0]->unk2C->unk1C = 0.0f;
  a1->e[0]->unk2C->unk20 = 0.0f;
  func_800058DC((s32) arg0, (void *) func_80240F94);
}
