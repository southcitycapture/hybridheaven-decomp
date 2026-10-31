#include "common.h"
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_80257B10_V;
extern func_80257B10_V D_80164F40;
extern u8 D_802599D0[];
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
struct func_80256BC4_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
};
struct func_80256BC4_StructInner {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad1[0x2B];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_80256BC4_StructOuter {
    u8 pad0[0x30];
    struct func_80256BC4_StructInner *unk30;
};
void func_80256BC4(struct func_80256BC4_StructArg0 *arg0, struct func_80256BC4_StructOuter **arg1);

typedef struct func_80256A1C_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256A1C_In;
typedef struct func_80256A1C_Out {
    u8 pad0[0x30];
    func_80256A1C_In *unk30;
} func_80256A1C_Out;
typedef struct func_80256A1C_A0 {
    u8 pad0[0x90];
    s16 unk90;
} func_80256A1C_A0;

void func_80256A1C(func_80256A1C_A0 *arg0, func_80256A1C_Out **arg1) {
    func_80257B10_V v;

    v = D_80164F40;
    v.b = 0x80000600;
    func_80005E44(arg0, &v);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x225, 1);
    func_8012D814(arg0, 0x225, 0, 0x3F800000, 1);
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (u32)D_802599D0 | 0x40000000;
    (*arg1)->unk30->unk18 = 0.15f;
    (*arg1)->unk30->unk1C = 0.0001f;
    (*arg1)->unk30->unk20 = 0.15f;
    (*arg1)->unk30->unk4 = 0.0f;
    (*arg1)->unk30->unk8 = -40.0f;
    (*arg1)->unk30->unkC = 0.0f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0x18;
    (*arg1)->unk30->unk4D = 0x2C;
    (*arg1)->unk30->unk4E = 0xFF;
    arg0->unk90 = 0;
    func_800058DC(arg0, func_80256BC4);
}
