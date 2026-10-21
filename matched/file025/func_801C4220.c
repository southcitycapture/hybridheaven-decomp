#include "context.h"
void func_801C44F4(u8 *arg0, struct func_801C2E9C_Struct **arg1);

typedef struct func_801C4220_Struct3 {
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
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C4220_Struct3;
typedef struct func_801C4220_Struct2 {
    u8 pad0[0x30];
    func_801C4220_Struct3 *unk30;
} func_801C4220_Struct2;
typedef struct func_801C4220_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    u8 padA8[4];
    u16 unkAC;
    u8 padAE[4];
    u16 unkB2;
} func_801C4220_Struct;

extern u8 D_801D8FA0[];
extern s32 D_801DA234[];
extern u8 D_801DA2F4[];
extern s32 D_801DA2F8;

void func_801C4220(func_801C4220_Struct *arg0, func_801C4220_Struct2 **arg1)
{
  u16 new_var;
  new_var = arg0->unkB2;
  D_801DA2F8 = D_801DA234[new_var];
  func_80005E44(arg0, D_801DA2F4);
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0xA7, 0);
  func_8012CF8C(arg0, ((u8 *) (*arg1)->unk30) + 0x40, 0x2DD, 0);
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unk94;
  (*arg1)->unk30->unkC = arg0->unk98;
  (*arg1)->unk30->unk10 = (arg0->unk9E * 2048.0f) / 90.0f;
  (*arg1)->unk30->unk12 = (arg0->unkAC * 2048.0f) / 90.0f;
  (*arg1)->unk30->unk14 = (arg0->unk9C * 2048.0f) / 90.0f;
  (*arg1)->unk30->unk48 = arg0->unkA0;
  (*arg1)->unk30->unk49 = arg0->unkA1;
  (*arg1)->unk30->unk4A = arg0->unkA2;
  (*arg1)->unk30->unk4B = 0xFF;
  (*arg1)->unk30->unk4C = arg0->unkA4;
  (*arg1)->unk30->unk4D = arg0->unkA5;
  (*arg1)->unk30->unk4E = arg0->unkA6;
  (*arg1)->unk30->unk4F = 0xFF;
  (*arg1)->unk30->unk24 |= 0x300;
  (*arg1)->unk30->unk18 = (arg0->unkA3 * 0.0625f) * 1.5f;
  (*arg1)->unk30->unk1C = (arg0->unkA7 * 0.0625f) * 1.5f;
  (*arg1)->unk30->unk20 = 1.0f;
  (*arg1)->unk30->unk30 = ((s32) D_801D8FA0) | 0x40000000;
  func_800058DC(arg0, (void *) func_801C44F4);
}
