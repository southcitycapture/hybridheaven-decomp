#include "context.h"

typedef struct func_8001BC04_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
} func_8001BC04_Struct;

u8 func_8001BD20(u8, u16);
void func_8001C0B0(u8, u16, u8, s32);
s32 func_8001D394(u8, u16);
extern u8 D_80090E48;
extern u8 D_80090E49;
extern u8 D_80090E4A;
extern u8 D_80090E4B;
extern u8 D_80090E4C;
extern u8 D_80090E4D;
extern u8 D_80090E4E;
extern u8 D_80090E4F;

s32 func_8001BC04(u8 arg0, u16 arg1, func_8001BC04_Struct *arg2, u16 arg3)
{
  D_80090E4C = func_8001BD20(D_80090E48, arg3);
  if ((arg1 + arg2->unk4) < 0x101)
  {
    func_8001C0B0(arg0, arg1, D_80090E48, func_8001D394(D_80090E48, arg3) & 0xFFFF);
    arg2->unk0 = D_80090E48;
    arg2->unk1 = D_80090E49;
    arg2->unk2 = D_80090E4A;
    arg2->unk3 = D_80090E4B;
    arg2->unk4 = D_80090E4C;
    arg2->unk5 = D_80090E4D;
    arg2->unk6 = D_80090E4E;
    arg2->unk7 = D_80090E4F;
    arg2->unk8 = 0xFF;
    return 1;
  }
  arg2->unk0 = 0xFF;
  arg2->unk1 = 0;
  arg2->unk2 = 0xFF;
  arg2->unk3 = 0;
  arg2->unk4 = 0;
  arg2->unk5 = 0;
  arg2->unk6 = 0;
  arg2->unk7 = 0;
  return 0;
}
