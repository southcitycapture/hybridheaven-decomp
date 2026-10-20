#include "context.h"

typedef struct func_801C46D0_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801C46D0_StructB;
typedef struct func_801C46D0_StructA {
    u8 pad0[0x30];
    func_801C46D0_StructB *unk30;
} func_801C46D0_StructA;
typedef struct func_801C46D0_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
} func_801C46D0_Struct;
extern f32 D_801DD230;
extern void func_801C480C(func_801C4644_Struct *arg0, func_801C2A1C_Struct2 **arg1);
extern u8 func_8038D830[];

void func_801C46D0(func_801C46D0_Struct *arg0, func_801C46D0_StructA **arg1)
{
  f32 k;
  func_80005E44(arg0, func_8038D830 + 0x5C);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0x2D9, 8);
  k = D_801DD230;
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unk94;
  (*arg1)->unk30->unkC = arg0->unk98;
  (*arg1)->unk30->unk10 = (s32) ((arg0->unk9C * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk12 = (s32) ((arg0->unkA0 * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk14 = (s32) ((arg0->unkA4 * 2048.0f) / 90.0f);
  (*arg1)->unk30->unk18 = k;
 if (1) { } if (1) { } if (1) { } if (1) { }
  (*arg1)->unk30->unk1C = k;
  (*arg1)->unk30->unk20 = k;
  func_800058DC(arg0, func_801C480C);
}
