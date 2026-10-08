#include "common.h"

typedef struct func_80246214_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_80246214_StructGlobal;

typedef struct func_80246214_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_80246214_StructObj;

extern func_80246214_StructGlobal *D_8025DDB0;
extern void func_80246284(void);
extern void func_800058DC(void *, void *);
extern s32 func_80126944(void);
extern s32 func_80133A24(u16);

void func_80246214(func_80246214_StructObj *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  if (func_80133A24(D_8025DDB0->unkA2) == 0)
  {
    return;
  }
  if (func_80126944() == 1)
  {
    return;
  }
  temp_v0 = arg0->unk3C;
  temp_v1 = temp_v0 >= 0x1E;
  arg0->unk3C = temp_v0 + 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_800058DC(arg0, func_80246284);
  }
}
