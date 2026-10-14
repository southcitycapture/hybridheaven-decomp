#include "context.h"

typedef struct func_802408F0_StructC {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802408F0_StructC;
typedef struct func_802408F0_StructD {
    u8 pad0[0x30];
    func_802408F0_StructC *unk30;
} func_802408F0_StructD;
typedef struct func_802408F0_StructE {
    u16 *unk0;
    s32 *unk4;
} func_802408F0_StructE;
typedef struct func_802408F0_StructB {
    u8 pad0[0x10];
    u32 unk10;
} func_802408F0_StructB;
typedef struct func_802408F0_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    func_802408F0_StructB *unk38;
    u8 pad2[0x74 - 0x3C];
    s32 unk74;
} func_802408F0_StructA;

extern void func_800058DC(void *, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_80126EAC(void);
extern s32 func_80126CC0(void *, void *);
extern void func_8001F74C();
extern void func_80240A68();
extern u8 D_80164F40[];
extern u8 D_801BBBF0[];
extern s32 func_8000522C(u16, s32, void *);
extern s32 func_8000C3B0(void *);
extern void func_8012C784(void *, s32, s32);
extern func_802408F0_StructE *D_80171CEC[];

void func_802408F0(func_802408F0_StructA *arg0, func_802408F0_StructD **arg1) {
    func_802408F0_StructE *temp;

    func_8001F74C();
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C(arg0, &D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        func_8012C784(arg0, 0, ((u32) arg0->unk38->unk10 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
        (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
        (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
        (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
        (*arg1)->unk30->unk18 = 1.0f;
        (*arg1)->unk30->unk1C = 1.0f;
        (*arg1)->unk30->unk20 = 1.0f;
        temp = D_80171CEC[arg0->unk36];
        arg0->unk74 = func_8000522C(*temp->unk0, temp->unk4[((u32) arg0->unk38->unk10 >> 8) & 0xFF], D_801BBBF0);
        arg0->unk2C = 0xC00;
        func_800058DC(arg0, &func_80240A68);
    }
}
