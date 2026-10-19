#include "context.h"

extern void func_801C2BC4();
extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern u8 D_8038D89C[];

typedef struct func_801C2A1C_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
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
} func_801C2A1C_Struct3;
typedef struct func_801C2A1C_Struct2 {
    u8 pad0[0x30];
    func_801C2A1C_Struct3 *unk30;
} func_801C2A1C_Struct2;

void func_801C2A1C(func_801C2980_Struct *arg0, func_801C2A1C_Struct2 **arg1) {
    func_80005E44(arg0, D_8038D89C);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0xA8, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk91;
    (*arg1)->unk30->unkC = arg0->unk92;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk48 = arg0->unk94;
    (*arg1)->unk30->unk49 = arg0->unk95;
    (*arg1)->unk30->unk4A = arg0->unk96;
    (*arg1)->unk30->unk4B = arg0->unk97;
    (*arg1)->unk30->unk24 |= 0x100;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk30 = arg0->unk98 | 0x40000000;
    func_800058DC(arg0, func_801C2BC4);
}
