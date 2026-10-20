#include "context.h"

typedef struct func_8024B090_SB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x10];
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8024B090_SB;
typedef struct func_8024B090_S4 { s32 w[4]; } func_8024B090_S4;
typedef struct func_8024B090_A0 { u8 pad[0x3C]; s16 unk3C; } func_8024B090_A0;
typedef struct func_8024B090_SA {
    u8 pad[0x30];
    func_8024B090_SB *unk30;
} func_8024B090_SA;

extern s32 func_80126CC0(void *, void *);
extern u8 func_80126EAC[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_800058DC(void *, void *);
struct func_8024B2D8_Struct;
void func_8024B2D8(struct func_8024B2D8_Struct *arg0, s32 arg1);
struct func_8024BC80_Struct4;
extern struct func_8024BC80_Struct4 D_80164F40;
struct func_8024C5B4_Struct;
extern struct func_8024C5B4_Struct D_801BBBF0;
extern u8 D_8017AF90[];
extern f32 D_802593D8;

void func_8024B090(func_8024B090_A0 *arg0, func_8024B090_SA **arg1) {
    func_8024B090_S4 sp28;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp28 = *(func_8024B090_S4 *)&D_80164F40;
        sp28.w[1] = 0x80000900;
        func_80005E44(arg0, &sp28);
        sp28.w[1] = 0x80000900;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x29A, 0);
        arg1[0]->unk30->unk24 |= 0x400;
        arg1[0]->unk30->unk30 = (u32)D_8017AF90 | 0x40000000;
        arg1[0]->unk30->unk4 = 100.0f;
        arg1[0]->unk30->unk8 = -410.0f;
        arg1[0]->unk30->unkC = D_802593D8;
        arg1[0]->unk30->unk12 = 0x1000;
        arg1[0]->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1[0]->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1[0]->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1[0]->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        func_8012C89C(arg0, 1, 0x28D, 2);
        arg1[1]->unk30->unk24 |= 0x400;
        arg1[1]->unk30->unk30 = (u32)D_8017AF90 | 0x40000000;
        arg1[1]->unk30->unk4 = 100.0f;
        arg1[1]->unk30->unk8 = -130.0f;
        arg1[1]->unk30->unkC = 744.0f;
        arg1[1]->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1[1]->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1[1]->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1[1]->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024B2D8);
    }
}
