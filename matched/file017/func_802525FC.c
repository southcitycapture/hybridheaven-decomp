#include "context.h"
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);

typedef struct func_802525FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802525FC_Struct;

extern void func_802538A4(void);
extern void func_801C4058(void *, s32, s32, s32);
extern void func_80133980(s32);
extern s32 func_801516CC(s32);
extern void func_8024CF18(s32, s32);
extern void func_8015115C(s32, void *);
extern s32 D_8025DE10;
extern u8 D_802594B4[];
extern u8 func_802526DC[];

void func_802525FC(func_802525FC_Struct *arg0)
{
  s32 var_s0;
  u16 temp_s0;
  temp_s0 = arg0->unk3C;
  arg0->unk3C = temp_s0 + 1;
  func_802538A4();
  func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
  if (((s32) temp_s0) >= 0x2D)
  {
    func_80133980(0x131);
    arg0->unk3C = 0;
 var_s0 = 1; if (func_801516CC(D_8025DE10) >= 2) { do {
        func_8024CF18(D_8025DE10, var_s0 & 0xFF);
        var_s0 += 1;
      }
      while (var_s0 < func_801516CC(D_8025DE10));
    }
    func_8015115C(D_8025DE10, D_802594B4);
    func_80020718(0x185);
    func_800058DC(arg0, func_802526DC);
  }
}
