#include "context.h"

typedef struct func_80246EC0_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad1[0x198 - 0x34];
    f32 unk198, unk19C, unk1A0;
    u8 pad2[0x29C - 0x1A4];
    f32 unk29C, unk2A0;
    u8 pad3[0xF20 - 0x2A4];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25, unkF26;
    s8 unkF27;
    u8 unkF28, unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E;
    u8 unkF2F, unkF30, unkF31, unkF32, unkF33, unkF34, unkF35;
} func_80246EC0_StructG;
typedef struct func_80246EC0_StructS {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12;
    u8 pad1[0x24 - 0x14];
    u32 unk24;
    u8 pad2[0x30 - 0x28];
    u32 unk30;
    u8 pad3[0x4C - 0x34];
    u8 unk4C, unk4D, unk4E, unk4F;
} func_80246EC0_StructS;
typedef struct func_80246EC0_StructN {
    u8 pad[0x30];
    func_80246EC0_StructS *unk30;
} func_80246EC0_StructN;
typedef struct func_80246EC0_StructP {
    func_80246EC0_StructN *unk0;
} func_80246EC0_StructP;
typedef struct func_80246EC0_StructO {
    u8 pad0[0x90];
    f32 unk90, unk94, unk98;
    s16 unk9C;
    u8 pad1[2];
    f32 unkA0, unkA4, unkA8;
} func_80246EC0_StructO;

extern u8 func_80126EAC[];
extern u8 func_80247530[];
extern u8 D_8017AF38[];
extern s32 func_80126CC0();
extern void func_801339D0();
extern f32 func_8001EB64();
extern f32 func_8001EAD0();
extern s32 func_80241790(f32, f32, f32, s32, s32, s32, s32, s32);
struct func_80247978_StructGlobal;
extern struct func_80247978_StructGlobal *D_8025DDC0;
extern void func_802479E8(s32 arg0, s32 arg1);

#define GG (*(func_80246EC0_StructG *)&D_801BBBF0)

void func_80246EC0(func_80246EC0_StructO *arg0, func_80246EC0_StructP *arg1) {
    struct func_80246290_Sq sp38;

    if (func_80133A24(0x128) != 0) {
        func_801339D0(0x128);
        GG.unk32 = 0;
        GG.unk198 = 0.0f;
        GG.unk19C = -100.0f;
        GG.unk1A0 = 520.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_80246290_Sq *)D_80164F40;
        sp38.b = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk9C = 0;
        arg0->unk90 = 0.0f;
        arg0->unk94 = -100.0f;
        arg0->unk98 = 402.0f;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = (f64)func_8001EB64(arg0->unk9C) * 46.0 + (f64)arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = (f64)arg0->unk98 - (f64)func_8001EAD0(arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = *(u16 *)&arg0->unk9C;
        arg1->unk0->unk30->unk4C = GG.unkF32;
        arg1->unk0->unk30->unk4D = GG.unkF33;
        arg1->unk0->unk30->unk4E = GG.unkF34;
        arg1->unk0->unk30->unk4F = GG.unkF35;
        GG.unkF20 = 0xA;
        GG.unkF21 = 0x14;
        GG.unkF22 = 0x28;
        GG.unkF23 = 0xFF;
        GG.unkF24 = 0xFF;
        GG.unkF25 = 0xFF;
        GG.unkF26 = 0;
        GG.unkF27 = -0x7D;
        GG.unkF28 = 0x1E;
        GG.unkF29 = 0x64;
        GG.unkF2A = 0x3C;
        GG.unkF2B = 0x14;
        GG.unkF2C = 0xA;
        GG.unkF2D = -0x7D;
        GG.unkF2E = -0x28;
        GG.unkF32 = 1;
        GG.unkF33 = 1;
        GG.unkF34 = 1;
        GG.unkF35 = 0xA0;
        GG.unk29C = 5.0f;
        GG.unk2A0 = 200.0f;
        arg0->unkA4 = 0.0f;
        arg0->unkA8 = 408.0f;
        *(s32 *)&D_8025DDC0 = func_80241790(0.0f, -100.0f, 529.0f, 0, 0x120, 0x128, 0x11E, 0x2C);
        if (func_80133A24(0x120) == 0) {
            func_800058DC(arg0, func_80247530);
            return;
        }
        func_800058DC(arg0, func_802479E8);
    }
}
