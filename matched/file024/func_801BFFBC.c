#include "common.h"
extern u8 D_80164F30[];
extern void func_800058DC(s32, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, s32);
typedef struct func_801C01AC_S2 {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad2[0x32];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C01AC_S2;
typedef struct func_801C01AC_S1 {
    u8 pad[0x2C];
    func_801C01AC_S2 *unk2C;
} func_801C01AC_S1;
typedef struct func_801C01AC_S0 {
    u8 pad[0x24];
    func_801C01AC_S1 *unk24;
} func_801C01AC_S0;
void func_801C01AC(func_801C01AC_S0 *arg0, func_801C01AC_S1 **arg1);


typedef struct func_801BFFBC_Struct_P {
    u8 pad[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    u32 unk24;
    u8 pad28[8];
    void *unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B;
} func_801BFFBC_Struct_P;
typedef struct func_801BFFBC_Struct_H {
    u8 pad[0x2C];
    func_801BFFBC_Struct_P *unk2C;
} func_801BFFBC_Struct_H;
typedef struct func_801BFFBC_Struct_A {
    u8 pad[0x24];
    func_801BFFBC_Struct_H *unk24;
} func_801BFFBC_Struct_A;
typedef struct func_801BFFBC_Struct_B {
    func_801BFFBC_Struct_H *unk0, *unk4;
} func_801BFFBC_Struct_B;
extern void func_80005FAC(void *, s32, void *);
extern s32 D_80005E44(void *, void *);
extern void D_8012C784(void *, s32, s32, s32);
extern u8 D_8017AE98[];
extern u8 D_8017B558[];
void func_801BFFBC(func_801BFFBC_Struct_A *arg0, func_801BFFBC_Struct_B *arg1) {
    f32 k;
    s32 c = 0x64;
    s32 r;
    func_801BFFBC_Struct_P *p;

    r = D_80005E44(arg0, D_80164F30);
    func_80005FAC(arg0, r, D_80164F30);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    k = (0.01f);
    arg1->unk0->unk2C->unk18 = k;
    arg1->unk0->unk2C->unk1C = k;
    arg1->unk0->unk2C->unk20 = k;
    func_8012C784(arg0, 0, 0);
    arg0->unk24->unk2C->unk4 = 0.0f;
    arg0->unk24->unk2C->unk8 = 20.0f;
    arg0->unk24->unk2C->unkC = -34.0f;
    arg0->unk24->unk2C->unk10 += 0x155;
    arg1->unk0->unk2C->unk24 |= 0x100;
    arg1->unk0->unk2C->unk30 = D_8017B558;
    arg1->unk0->unk2C->unk48 = 0;
    arg1->unk0->unk2C->unk49 = c;
    arg1->unk0->unk2C->unk4A = c;
    arg1->unk0->unk2C->unk4B = 0xFF;
    func_8012C784(arg0, 1, 1);
    k = (0.02f);
    arg1->unk4->unk2C->unk10 = 0x800;
    arg1->unk4->unk2C->unk12 = 0x1000;
    arg1->unk4->unk2C->unk4 = 0.0f;
    arg1->unk4->unk2C->unk8 = 0.0f;
    arg1->unk4->unk2C->unkC = 0.0f;
    arg1->unk4->unk2C->unk18 = k;
    arg1->unk4->unk2C->unk1C = k;
    arg1->unk4->unk2C->unk20 = k;
    arg1->unk4->unk2C->unk30 = D_8017AE98;
    func_800058DC((s32)arg0, func_801C01AC);
}
