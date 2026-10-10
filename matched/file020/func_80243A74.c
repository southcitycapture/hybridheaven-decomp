#include "context.h"

extern u8 D_801BBF90[];
extern struct func_80243D1C_Struct D_801BBBF0;
extern void func_80243B04(void);
extern void func_80126968(void);
extern void func_801268CC(s32);
extern s32 func_80020744(s32);
extern s32 func_801270C0(s32);

typedef struct func_80243A74_Sub {
    u8 pad0[0x4];
    f32 unk4;
} func_80243A74_Sub;

void func_80243A74(s32 arg0, s32 arg1)
{
  func_80243A74_Sub *temp_v0;
  if (func_801270C0(D_80246C70) != 0)
  {
    func_80126968();
    *((s16 *) (D_801BBF90 + 4)) = 0x170;
    func_801268CC(0);
    if (1)
    {
      func_80020744(10);
      ;
    }
    (*((func_80243A74_Sub **) (*((u8 **) ((u8 *) &D_801BBBF0 + 0xE0)) + 0x2C)))->unk4 = (*((func_80243A74_Sub **) (*((u8 **) ((u8 *) &D_801BBBF0 + 0xE0)) + 0x2C)))->unk4 - 40.0f;
    *((u8 *) &D_801BBBF0 + 0xBA2) = 0;
    func_800058DC((void *) arg0, (void *) func_80243B04);
  }
}
