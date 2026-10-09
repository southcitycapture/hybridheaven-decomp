#include "context.h"

struct func_8037B5A0_Struct1 {
    u8 pad[0x44];
    s32 unk44;
};

struct func_8037B5A0_Struct0 {
    u16 *unk0;
    struct func_8037B5A0_Struct1 *unk4;
};

struct func_8037B5A0_Struct2 {
    u8 pad[0xC];
    void *unkC;
};

struct func_8037B5A0_Struct3 {
    u8 pad0[8];
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    s16 unk10;
    u8 pad12[6];
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u8 pad20[8];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    u8 pad34[8];
};

void func_80146088(void *a0, void *a1, s32 a2);

extern struct func_8037B5A0_Struct0 *D_80172574;
extern struct func_8037B5A0_Struct2 D_80181A84;

void func_8037B5A0(void *arg0, s16 arg1, s16 arg2, s32 arg3)
{
  struct func_8037B5A0_Struct3 sp24;
  sp24.unk0 = arg1;
  sp24.unk2 = arg2;
  sp24.unk30 = sp24.unk4 = sp24.unk28 = 0x28;
  sp24.unk32 = sp24.unk6 = sp24.unk2A = 8;
  sp24.unk8 = 0xFF;
  sp24.unk9 = 0xFF;
  sp24.unkA = 0xFF;
  sp24.unkB = 0xFF;
  sp24.unkC = 0xFF;
  sp24.unkD = 0;
  sp24.unkE = 0;
  sp24.unkF = 0xFF;
  sp24.unk10 = 0x66;
  sp24.unk18 = *D_80172574->unk0;
  sp24.unk1C = D_80172574->unk4->unk44;
  sp24.unk2E = 0;
  sp24.unk2C = 0;
  D_80181A84.unkC = &sp24.unk0;
  func_80146088(arg0, &D_80181A84, arg3);
}
