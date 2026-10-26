#include "common.h"
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern u8 D_801BBBF0[];
typedef struct func_80247978_StructGlobal {
    u8 pad[0xA2];
    u16 unkA2;
} func_80247978_StructGlobal;
extern struct func_80247978_StructGlobal *D_8025DDC0;
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(u16);
extern u8 func_80247530[];
void func_802479E8(s32 arg0, s32 arg1);


struct func_802471F4_StructG {
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
};
struct func_802471F4_StructS {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12;
    u8 pad1[0x24 - 0x14];
    u32 unk24;
    u8 pad2[0x30 - 0x28];
    u32 unk30;
    u8 pad3[0x4C - 0x34];
    u8 unk4C, unk4D, unk4E, unk4F;
};
struct func_802471F4_StructN {
    u8 pad[0x30];
    struct func_802471F4_StructS *unk30;
};
struct func_802471F4_StructP {
    struct func_802471F4_StructN *unk0;
};
struct func_802471F4_StructO {
    u8 pad0[0x90];
    f32 unk90, unk94, unk98;
    s16 unk9C;
    u8 pad1[2];
    f32 unkA0, unkA4, unkA8;
};
struct func_802453F0_Sq { u32 a; u32 b; u32 c; u32 d; };
struct func_802471F4_Sq { u32 a; u32 b; u32 c; u32 d; };
#define G (*(struct func_802471F4_StructG *)D_801BBBF0)
extern u8 func_80126EAC[];
extern s32 func_80126CC0();
extern void func_801339D0();
extern void func_80005E44();
extern void func_80006214();
extern void func_8012C89C();
extern f32 func_8001EB64();
extern f32 func_8001EAD0();
extern s32 func_80241790(f32, f32, f32, s32, s32, s32, s32, s32);

void func_802471F4(struct func_802471F4_StructO *arg0, struct func_802471F4_StructP *arg1) {
    struct func_802471F4_Sq sp38;

    if (func_80133A24(0x129) != 0) {
        func_801339D0(0x129);
        G.unk32 = 0x1000;
        G.unk198 = 0.0f;
        G.unk19C = -100.0f;
        G.unk1A0 = -520.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_802471F4_Sq *)D_80164F40;
        sp38.b = 0x80000900;
        func_80005E44(arg0, &sp38);
        func_80006214(arg0);
        arg0->unk9C = 0x1000;
        arg0->unk90 = 0.0f;
        arg0->unk94 = -100.0f;
        arg0->unk98 = -402.0f;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = func_8001EB64(arg0->unk9C) * 46.0 + arg0->unk90;
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = arg0->unk98 - func_8001EAD0(arg0->unk9C) * 46.0;
        arg1->unk0->unk30->unk12 = *(u16 *)&arg0->unk9C;
        arg1->unk0->unk30->unk4C = G.unkF32;
        arg1->unk0->unk30->unk4D = G.unkF33;
        arg1->unk0->unk30->unk4E = G.unkF34;
        arg1->unk0->unk30->unk4F = G.unkF35;
        G.unkF20 = 10;
        G.unkF21 = 20;
        G.unkF22 = 40;
        G.unkF23 = 255;
        G.unkF24 = 255;
        G.unkF25 = 255;
        G.unkF26 = 0;
        G.unkF27 = -125;
        G.unkF28 = 30;
        G.unkF29 = 100;
        G.unkF2A = 60;
        G.unkF2B = 20;
        G.unkF2C = 10;
        G.unkF2D = -125;
        G.unkF2E = -40;
        G.unkF32 = 1;
        G.unkF33 = 1;
        G.unkF34 = 1;
        G.unkF35 = 160;
        G.unk29C = 5.0f;
        G.unk2A0 = 200.0f;
        arg0->unkA4 = 0.0f;
        arg0->unkA8 = -408.0f;
        D_8025DDC0 = func_80241790(0.0f, -100.0f, -529.0f, 0x1000, 0x121, 0x129, 0x11F, 0x2C);
        if (func_80133A24(0x121) == 0) {
            func_800058DC(arg0, func_80247530);
            return;
        }
        func_800058DC(arg0, func_802479E8);
    }
}
