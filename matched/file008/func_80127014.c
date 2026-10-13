#include "context.h"

typedef struct func_80127014_GlobalStruct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80127014_GlobalStruct;

void func_8013B208(void);
void func_80005700(void *);
void *func_8012C4D0(void *, func_80127014_GlobalStruct, s32);
extern func_80127014_GlobalStruct D_80164E80;
extern s8 D_801BBD76;

void func_80127014(void *arg0, s32 arg1)
{
  void *temp_v0;
  u16 sp2A;
  if (arg0)
  {
  }
  D_801BBD76 = 1;
  sp2A = *((u16 *) (((u8 *) arg0) + 0x36));
  func_8013B208();
  func_80005700(arg0);
  if (sp2A != 0)
  {
    temp_v0 = func_8012C4D0(arg0, D_80164E80, 3);
    if (temp_v0 != 0)
    {
      *((u16 *) (((u8 *) temp_v0) + 0x36)) = sp2A;
      *((u16 *) (((u8 *) temp_v0) + 0x90)) = 5;
    }
  }
}
