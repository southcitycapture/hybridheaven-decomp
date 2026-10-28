#include "common.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8000C3B0(void *);
extern s32 func_80126CC0(s32, void *);
extern u8 func_80126EAC[];
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_801339D0(s32);
extern s32 func_80133A24(s32);
typedef struct func_80243420_Vec { s32 w[4]; } func_80243420_Vec;


typedef struct func_80241550_StructSub {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; u16 unk12;
    u8 pad14[4]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8];
    s32 unk30; u8 pad34[0x14]; u8 unk48; u8 unk49; u8 unk4A; u8 unk4B;
    u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F;
} func_80241550_StructSub;
typedef struct func_80241550_StructMid { u8 pad0[0x30]; func_80241550_StructSub *unk30; } func_80241550_StructMid;
typedef struct func_80241550_Vec { s32 w[4]; } func_80241550_Vec;
extern u8 D_8017B710[];
extern struct func_80243420_Vec D_80164F40;
extern void func_80241928();
extern void func_802426EC();

void func_80241550(void *arg0, func_80241550_StructMid **arg1) {
    func_80241550_Vec sp28;

    if (func_80126CC0((s32)arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x78) == 0) {
            sp28 = *(func_80241550_Vec *)&D_80164F40;
            sp28.w[1] = 0x80000600;
            func_80005E44(arg0, &sp28);
            goto l1;
l1:
            func_80005E44(arg0, &sp28);
            sp28.w[1] = 0x80000C00;
            goto l2;
l2:
            func_80005E44(arg0, &sp28);
            func_80006214(arg0);
            func_8012C89C(arg0, 0, 0x286, 4);
            arg1[0]->unk30->unk24 |= 0x500;
            arg1[0]->unk30->unk30 = (s32)D_8017B710 | 0x40000000;
            arg1[0]->unk30->unk20 = 1.0f;
            arg1[0]->unk30->unk18 = arg1[0]->unk30->unk1C = arg1[0]->unk30->unk20;
            arg1[0]->unk30->unk48 = 0;
            arg1[0]->unk30->unk49 = 0xFF;
            arg1[0]->unk30->unk4A = 0xA6;
            arg1[0]->unk30->unk4B = 0xFF;
            arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
            arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
            arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
            arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
            func_8012C89C(arg0, 1, 0x286, 3);
            arg1[1]->unk30->unk24 |= 0x500;
            arg1[1]->unk30->unk30 = (s32)D_8017B710 | 0x40000000;
            arg1[1]->unk30->unk20 = 1.0f;
            arg1[1]->unk30->unk18 = arg1[1]->unk30->unk1C = arg1[1]->unk30->unk20;
            arg1[1]->unk30->unk48 = 0;
            arg1[1]->unk30->unk49 = 0xFF;
            arg1[1]->unk30->unk4A = 0xFF;
            arg1[1]->unk30->unk4B = 0xFF;
            arg1[1]->unk30->unk4C = D_801BBBF0[0xF32];
            arg1[1]->unk30->unk4D = D_801BBBF0[0xF33];
            arg1[1]->unk30->unk4E = D_801BBBF0[0xF34];
            arg1[1]->unk30->unk4F = D_801BBBF0[0xF35];
            func_8012C89C(arg0, 2, 0x294, 0);
            arg1[2]->unk30->unk24 |= 0x13;
            arg1[2]->unk30->unk30 = func_8000C3B0(arg1[2]);
            arg1[2]->unk30->unk20 = 1.0f;
            arg1[2]->unk30->unk18 = arg1[2]->unk30->unk1C = arg1[2]->unk30->unk20;
            arg1[2]->unk30->unk4 = -42.0f;
            arg1[2]->unk30->unk8 = 0.0f;
            arg1[2]->unk30->unkC = 272.0f;
            arg1[2]->unk30->unk12 = 0;
            arg1[2]->unk30->unk24 |= 0x400;
            arg1[2]->unk30->unk4C = D_801BBBF0[0xF32];
            arg1[2]->unk30->unk4D = D_801BBBF0[0xF33];
            arg1[2]->unk30->unk4E = D_801BBBF0[0xF34];
            arg1[2]->unk30->unk4F = D_801BBBF0[0xF35];
            func_801339D0(0x73);
            func_801339D0(0x77);
            func_800058DC(arg0, func_80241928);
        } else {
            func_800058DC(arg0, func_802426EC);
        }
    }
}
