#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_80254B3C_Node func_802574C8_NodeQ
#define func_80254B3C_Args func_802574C8_ArgsQ
#define func_8001EAD0__func_80256034 CAT(func_8001EAD0__func_80256034Q, __LINE__)
#define func_800058DC func_800058DC__func_802574C8
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_80257B10_V;
extern func_80257B10_V D_80164F40;
extern u8 D_80175C58[];
extern u8 *D_8025DE20;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
typedef struct { u8 pad[0x28]; } func_80254B3C_Args;
typedef struct { u8 pad[0x28]; } func_80254B3C_Node;
typedef struct func_80256CB0_StructA {
    u8 pad0[0x90];
    u16 unk90;
} func_80256CB0_StructA;
typedef struct func_80256CB0_StructI {
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
} func_80256CB0_StructI;
typedef struct func_80256CB0_StructM {
    u8 pad0[0x30];
    func_80256CB0_StructI *unk30;
} func_80256CB0_StructM;
void func_80257684(func_80256CB0_StructA *arg0, func_80256CB0_StructM **arg1);

extern void func_800058DC(void *, void *, void *);

typedef struct func_802574C8_StructI {
    u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[8];
    f32 f18; f32 f1C; f32 f20; u32 w24; u8 pad28[8];
    u32 w30; u8 pad34[0x14]; u8 b48; u8 b49; u8 b4A; u8 b4B; u8 b4C; u8 b4D; u8 b4E;
} func_802574C8_StructI;
typedef struct func_802574C8_StructM {
    u8 pad[0x30]; func_802574C8_StructI *p30;
} func_802574C8_StructM;

void func_802574C8(void *arg0, func_802574C8_StructM **arg1) {
    func_80257B10_V v;

    v = D_80164F40;
    v.b = 0x80000300;
    func_80005E44(arg0, &v);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 1, 7, 0x3F800000, 1);
    (*arg1)->p30->w24 |= 0x60300;
    (*arg1)->p30->w30 = (u32)D_80175C58 | 0x40000000;
    (*arg1)->p30->f4 = *(f32 *)(D_8025DE20 + 0x98);
    (*arg1)->p30->f8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*arg1)->p30->fC = *(f32 *)(D_8025DE20 + 0xA0);
    (*arg1)->p30->f18 = 0.001f;
    (*arg1)->p30->f1C = 0.001f;
    (*arg1)->p30->f20 = 0.001f;
    (*arg1)->p30->b48 = 0xFF;
    (*arg1)->p30->b49 = 0xFF;
    (*arg1)->p30->b4A = 0xFF;
    (*arg1)->p30->b4B = 0;
    (*arg1)->p30->b4C = 0xFF;
    (*arg1)->p30->b4D = 0;
    (*arg1)->p30->b4E = 0;
    func_800058DC(arg0, func_80257684, &D_8025DE20);
}
