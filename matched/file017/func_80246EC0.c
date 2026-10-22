#include "context.h"

extern u8 func_80247530[];
struct func_80247978_StructGlobal;
extern struct func_80247978_StructGlobal *D_8025DDC0;
extern void func_802479E8(s32 arg0, s32 arg1);

void func_80246EC0(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_802450B0_Sq sp38;

    if (func_80133A24(0x128) != 0) {
        func_801339D0(0x128);
        G.unk32 = 0;
        G.unk198 = 0.0f;
        G.unk19C = -100.0f;
        G.unk1A0 = 520.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_802450B0_Sq *)D_80164F40;
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
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = G.unkF32;
        arg1->unk0->unk30->unk4D = G.unkF33;
        arg1->unk0->unk30->unk4E = G.unkF34;
        arg1->unk0->unk30->unk4F = G.unkF35;
        G.unkF20 = 0xA;
        G.unkF21 = 0x14;
        G.unkF22 = 0x28;
        G.unkF23 = 0xFF;
        G.unkF24 = 0xFF;
        G.unkF25 = 0xFF;
        G.unkF26 = 0;
        *(s8 *)&G.unkF27 = -0x7D;
        G.unkF28 = 0x1E;
        G.unkF29 = 0x64;
        G.unkF2A = 0x3C;
        G.unkF2B = 0x14;
        G.unkF2C = 0xA;
        G.unkF2D = -0x7D;
        G.unkF2E = -0x28;
        G.unkF32 = 1;
        G.unkF33 = 1;
        G.unkF34 = 1;
        G.unkF35 = 0xA0;
        G.unk29C = 5.0f;
        G.unk2A0 = 200.0f;
        arg0->unkA4 = 0.0f;
        arg0->unkA8 = 408.0f;
        D_8025DDC0 = func_80241790(0.0f, -100.0f, 529.0f, 0, 0x120, 0x128, 0x11E, 0x2C);
        if (func_80133A24(0x120) == 0) {
            func_800058DC(arg0, func_80247530);
            return;
        }
        func_800058DC(arg0, func_802479E8);
    }
}
