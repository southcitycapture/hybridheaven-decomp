#include "context.h"

typedef struct func_80371D04_Struct {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x7A - 0x78];
    u8 unk7A;
} func_80371D04_Struct;

extern f32 D_8038B420;

void func_800058DC(void *arg0, void *arg1);
void func_801CE1C8(void *a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, s32 a15, s32 a16, s32 a17, s32 a18, s32 a19, s32 a20, s32 a21, s32 a22, f32 a23, f32 a24, f32 a25, f32 a26, s32 a27);

void func_80371D04(func_80371D04_Struct *arg0, s32 arg1)
{
  f32 temp_fv1;
  f32 temp_fa0;
  f32 temp_fa1;
  u8 temp_t7;
  temp_fv1 = arg0->unk6C;
  temp_fa0 = arg0->unk70;
  temp_fa1 = arg0->unk74;
  ;
  if ((++arg0->unk7A) >= 5)
  {
    func_801CE1C8(arg0, 0xE, temp_fv1, temp_fa0, temp_fa1, 0xFF, 0x6F, 0, 0x60, 0xFF, 0, 0, 0, 0, 0, 0, 0, 0, 0, (short) 0, 0, 3, 0x12, D_8038B420, D_8038B420, D_8038B420, 1.0f, 1);
    func_800058DC(arg0, &func_8037118C);
  }
}
