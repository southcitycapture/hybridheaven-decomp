#include "context.h"
struct func_802450B0_StructG {
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
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25;
    s8 unkF26;
    u8 unkF27, unkF28, unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E;
    u8 padF2F[3];
    u8 unkF32, unkF33, unkF34, unkF35;
};
struct func_802450B0_StructO {
    u8 pad0[0x90];
    f32 unk90, unk94, unk98;
    u16 unk9C;
    u8 pad1[6];
    f32 unkA4, unkA8;
};
struct func_802450B0_StructT {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad1[2];
    u16 unk12;
    u8 pad2[0x24 - 0x14];
    u32 unk24;
    u8 pad3[0x30 - 0x28];
    u32 unk30;
    u8 pad4[0x4C - 0x34];
    u8 unk4C, unk4D, unk4E, unk4F;
};
struct func_802450B0_StructN {
    u8 pad[0x30];
    struct func_802450B0_StructT *unk30;
};
struct func_802450B0_StructP { struct func_802450B0_StructN *unk0; };
struct func_802450B0_Sq { s32 a, b, c, d; };
extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);
extern void *func_80241790(f32, f32, f32, s32, s32, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern u8 func_80126EAC[];
extern void func_80245DCC();
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(u16);
extern void func_80246284(s32 arg0, s32 arg1);
extern void func_801339D0(s32);
extern s32 func_80126CC0(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern f32 D_8025C900;
extern f32 D_8025C904;
struct func_802453F0_StructG;
extern struct func_802453F0_StructG D_801BBBF0;
struct func_80246214_StructGlobal;
extern struct func_80246214_StructGlobal *D_8025DDB0;
#define G (*(struct func_802450B0_StructG *)&D_801BBBF0)

void func_802450B0(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_802450B0_Sq sp38;

    if (func_80133A24(0x128) != 0) {
        func_801339D0(0x128);
        G.unk32 = 0x2AA;
        G.unk198 = 260.0f;
        G.unk19C = 0.0f;
        G.unk1A0 = 450.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_802450B0_Sq *)D_80164F40;
        sp38.b = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk9C = 0x2AA;
        arg0->unk90 = 202.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = 348.0f;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = func_8001EB64((s16)arg0->unk9C) * 46.0 + arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = arg0->unk98 - func_8001EAD0((s16)arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = G.unkF32;
        arg1->unk0->unk30->unk4D = G.unkF33;
        arg1->unk0->unk30->unk4E = G.unkF34;
        arg1->unk0->unk30->unk4F = G.unkF35;
        G.unkF20 = 0x28;
        G.unkF21 = 0x28;
        G.unkF22 = 0x28;
        G.unkF23 = 0xFF;
        G.unkF24 = 0xFF;
        G.unkF25 = 0xFF;
        G.unkF26 = -0x28;
        G.unkF27 = 0x7D;
        G.unkF28 = 0x1E;
        G.unkF29 = 0x96;
        G.unkF2A = 0x64;
        G.unkF2B = 0x64;
        G.unkF2C = 0x64;
        G.unkF2D = 0;
        G.unkF2E = 0x5A;
        G.unkF32 = 0x16;
        G.unkF33 = 0xC;
        G.unkF34 = 0x1C;
        G.unkF35 = 0x7C;
        G.unk29C = 5.0f;
        G.unk2A0 = 500.0f;
        arg0->unkA4 = 205.0f;
        arg0->unkA8 = D_8025C900;
        *(void **)&D_8025DDB0 = func_80241790(D_8025C904, 0.0f, 458.0f, 0x2AA, 0x118, 0x128, 0x114, 0x2A);
        if (func_80133A24(0x118) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, func_80246284);
    }
}
