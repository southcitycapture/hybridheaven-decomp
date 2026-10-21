#include "common.h"

typedef struct func_801C61C4_StructB {
    s16 unk0;
    u8 pad0[0x22];
    s32 unk24;
    s32 unk28;
    s16 unk2C;
    u8 pad1[2];
    s32 unk30;
} func_801C61C4_StructB;

typedef struct func_801C61C4_StructA {
    u8 pad0[0x30];
    func_801C61C4_StructB *unk30;
} func_801C61C4_StructA;

extern s32 func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_800058DC(s32, void *, void **);
extern u8 D_800892B0[];
extern f32 D_801DA508;
extern s32 D_801DA50C;
extern u8 D_801DA52C[];
extern void func_801C6294(void);

void func_801C61C4(s32 arg0, void **arg1)
{
  long long new_var;
  u8 *p;
  if (func_80005E44(arg0, D_801DA52C) != 0)
  {
    func_80006214(arg0);
    p = D_800892B0;
    new_var = 0;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk30 = new_var;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk28 = new_var;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk0 = new_var;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk2C = new_var;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk28 = D_801DA50C;
    ((func_801C61C4_StructA *) (*arg1))->unk30->unk24 = 0x100;
    *((s16 *) (p + 0xA4)) = 0;
    *((s16 *) (p + 0xA6)) = 1;
    D_801DA508 = 127.0f;
    func_800058DC(arg0, func_801C6294, arg1);
  }
}
