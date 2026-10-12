#include "context.h"
typedef struct func_80248998_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80248998_StructInner;
typedef struct func_80248998_StructOuter {
    u8 pad0[0x30];
    func_80248998_StructInner *unk30;
} func_80248998_StructOuter;
void func_80248998(void *arg0, func_80248998_StructOuter **arg1);

extern s32 D_8025C6E8;
extern u8 *D_8025C6F0;
extern void func_80126EAC();
extern void func_8001F74C();
s32 func_80126B14(s32, void *, u16, s32);

void func_80248938(s32 arg0, s32 arg1)
{
  if (!arg0)
  {
  }
  D_8025C6E8 = arg0;
  func_8001F74C();
  if (func_80126B14(arg0, func_80126EAC, *((u16 *) (D_8025C6F0 + 0x72)), 0x3D0 & 0xFFFFFFFF) != 0)
  {
    func_800058DC(arg0, func_80248998);
  }
}
