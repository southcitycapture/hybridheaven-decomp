#include "context.h"

struct func_80376ADC_Sub {
    u8 pad[0x18];
    s32 unk18;
};
struct func_80376ADC_Struct {
    u8 pad[0x38];
    struct func_80376ADC_Sub *unk38;
};

extern s32 func_801270C0();
extern void func_801268CC(s32, void *);
extern void func_80020744(s32);

void func_80376ADC(struct func_80376ADC_Struct *arg0, s32 arg1)
{
  if (func_801270C0() != 0)
  {
    *((s16 *) (((u8 *) (&D_801BBBF0)) + 0x194)) = 2;
    *((s16 *) (((u8 *) (&D_801BBBF0)) + 0x3A4)) = ((((((((((arg0->unk38->unk18 & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF;
    func_801268CC((((u32) arg0->unk38->unk18) >> 0x10) & 0xFFFF, arg0);
    func_80020744(7);
  }
}
