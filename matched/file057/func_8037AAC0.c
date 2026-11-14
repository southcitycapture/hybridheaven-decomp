#include "common.h"
struct func_8037B5A0_Struct1 {
    u8 pad[0x44];
    s32 unk44;
};
struct func_8037B5A0_Struct0 {
    u16 *unk0;
    struct func_8037B5A0_Struct1 *unk4;
};
extern struct func_8037B5A0_Struct0 *D_80172574;
struct func_8037B5A0_Struct2 {
    u8 pad[0xC];
    void *unkC;
};
extern struct func_8037B5A0_Struct2 D_80181A84;
void func_80146088(void *a0, void *a1, s32 a2);


struct func_8037AAC0_Struct {
    s16 unk0, unk2, unk4, unk6;
    u8 unk8, unk9, unkA, unkB, unkC, unkD, unkE, unkF;
    s16 unk10;
    u8 pad12[6];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28, unk2A, unk2C, unk2E, unk30, unk32;
    u8 pad34[8];
};

struct func_8037AAC0_Struct0 {
    u16 *unk0;
    s32 *unk4;
};

void func_8037AAC0(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 *arg4)
{
  struct func_8037AAC0_Struct data;
  struct func_8037B5A0_Struct0 **new_var;
  u16 idx;
  new_var = &D_80172574;
  idx = arg3;
  data.unk0 = (s16) arg1;
  data.unk2 = (s16) arg2;
  if (!idx)
  {
    data.unk30 = (data.unk4 = (data.unk28 = 0x48));
    data.unk32 = (data.unk6 = (data.unk2A = 0x10));
    data.unk9 = (data.unk8 = 0xFF);
    data.unkA = 0;
  }
  else
    if (idx == 1)
  {
    data.unk30 = (data.unk4 = (data.unk28 = 0x30));
    data.unk32 = (data.unk6 = (data.unk2A = 0x10));
    data.unk8 = 0xFF;
    data.unkA = (data.unk9 = 0);
  }
  else
  {
    data.unk30 = (data.unk4 = (data.unk28 = 0x40));
    data.unk32 = (data.unk6 = (data.unk2A = 0x10));
    data.unk8 = 0xFF, data.unk9 = 0x80;
    data.unkA = 0;
  }
  data.unkB = 0xFF;
  data.unkC = (data.unkD = (data.unkE = 0));
  data.unkF = 0xFF;
  data.unk10 = 0x66;
  data.unk18 = *D_80172574->unk0;
  data.unk1C = ((struct func_8037AAC0_Struct0 *) (*new_var))->unk4[(u16) (arg3 + 0x14)];
  data.unk2E = (data.unk2C = 0);
  D_80181A84.unkC = &data.unk0;
  func_80146088(arg0, &D_80181A84, (s32) arg4);
}
