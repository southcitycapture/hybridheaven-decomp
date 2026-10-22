#include "context.h"

extern u8 func_80247530[];
extern struct func_80247978_StructGlobal *D_8025DDC0;
extern void func_802479E8(s32 arg0, s32 arg1);

void func_802471F4(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_802450B0_Sq sp38;

    if (func_80133A24(0x129) != 0) {
        func_801339D0(0x129);
        G.unk32 = 0x1000;
        G.unk198 = 0.0f;
        G.unk19C = -100.0f;
        G.unk1A0 = -520.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp38 = *(struct func_802450B0_Sq *)D_80164F40;
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
        arg1->unk0->unk30->unk12 = arg0->unk9C;
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
        *(s8 *)&G.unkF27 = -125;
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
