#include "context.h"

struct func_802453F0_Sq { s32 a, b, c, d; };
struct func_802453F0_Sp { struct func_802453F0_Sq q; s32 e; };
struct func_802453F0_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad1[0x198 - 0x34];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad2[0x29C - 0x1A4];
    f32 unk29C;
    f32 unk2A0;
    u8 pad3[0xF20 - 0x2A4];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25, unkF26, unkF27, unkF28, unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E;
    u8 padF2F[3];
    u8 unkF32, unkF33, unkF34, unkF35;
};
struct func_802453F0_StructO {
    u8 pad0[0x90];
    f32 unk90, unk94, unk98;
    u16 unk9C;
    u8 pad1[6];
    f32 unkA4, unkA8;
};
struct func_802453F0_StructB {
    u8 pad0[0x4];
    f32 unk4, unk8, unkC;
    u8 pad1[2];
    u16 unk12;
    u8 pad2[0x24 - 0x14];
    u32 unk24;
    u8 pad3[0x30 - 0x28];
    void *unk30;
    u8 pad4[0x4C - 0x34];
    u8 unk4C, unk4D, unk4E, unk4F;
};
struct func_802453F0_StructA { u8 pad[0x30]; struct func_802453F0_StructB *unk30; };
struct func_802453F0_StructP { struct func_802453F0_StructA *unk0; };

extern void func_80246284(s32 arg0, s32 arg1);
extern void func_801339D0(s32);
extern s32 func_80126CC0(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);
extern void *func_80241790(f32, f32, f32, s32, s32, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern struct func_802453F0_StructG D_801BBBF0;
extern f32 D_8025C908;
extern f32 D_8025C90C;
extern f32 D_8025C910;
extern u8 func_80126EAC[];
extern u8 func_80245DCC[];

void func_802453F0(struct func_802453F0_StructO *arg0, struct func_802453F0_StructP *arg1) {
    s32 sp38[4];
    if (func_80133A24(0x129) != 0) {
        func_801339D0(0x129);
        D_801BBBF0.unk32 = 0x1D55;
        D_801BBBF0.unk198 = -258.0f;
        D_801BBBF0.unk19C = 0.0f;
        D_801BBBF0.unk1A0 = 452.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        *(struct func_802453F0_Sq *)sp38 = *(struct func_802453F0_Sq *)D_80164F40;
        sp38[1] = 0x80000900;
        func_80005E44(arg0, sp38);
        func_80006214(arg0);
        arg0->unk90 = -201.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = D_8025C908;
        arg0->unk9C = 0x1D55;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (void *)((s32)D_8017AF38 | 0x40000000);
        arg1->unk0->unk30->unk4 = func_8001EB64((s16)arg0->unk9C) * 46.0 + arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = arg0->unk98 - func_8001EAD0((s16)arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = D_801BBBF0.unkF32;
        arg1->unk0->unk30->unk4D = D_801BBBF0.unkF33;
        arg1->unk0->unk30->unk4E = D_801BBBF0.unkF34;
        arg1->unk0->unk30->unk4F = D_801BBBF0.unkF35;
        D_801BBBF0.unkF22 = 0x46;
        D_801BBBF0.unkF20 = 0x64;
        D_801BBBF0.unkF21 = 0x64;
        D_801BBBF0.unkF23 = 1;
        D_801BBBF0.unkF24 = 0x50;
        D_801BBBF0.unkF25 = 0xFF;
        D_801BBBF0.unkF26 = 0xB;
        D_801BBBF0.unkF27 = 0x19;
        D_801BBBF0.unkF28 = 0xB;
        D_801BBBF0.unkF29 = 0x9D;
        D_801BBBF0.unkF2A = 0x50;
        D_801BBBF0.unkF2B = 0xFF;
        D_801BBBF0.unkF2C = -0xB;
        D_801BBBF0.unkF2D = -0x22;
        D_801BBBF0.unkF2E = 0x25;
        D_801BBBF0.unkF32 = 0x3C;
        D_801BBBF0.unkF33 = 0x14;
        D_801BBBF0.unkF34 = 0x32;
        D_801BBBF0.unkF35 = 0xAA;
        D_801BBBF0.unk29C = 5.0f;
        D_801BBBF0.unk2A0 = 500.0f;
        arg0->unkA4 = -205.0f;
        arg0->unkA8 = D_8025C90C;
        *(void **)((u8 *)&D_8025C910 + 0x14A0) = (void *)func_80241790(D_8025C910, 0.0f, 459.0f, 0x1D55, 0x119, 0x129, 0x115, 0x2A);
        if (func_80133A24(0x119) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, (void *)func_80246284);
    }
}
