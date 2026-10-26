#include "context.h"

#define HH80245A80 (*(struct func_802453F0_StructG *)&D_801BBBF0)
extern void func_80245DCC();
extern void func_80246284(s32, s32);
extern f32 D_8025C91C;
extern f32 D_8025C920;

void func_80245A80(struct func_802450B0_StructO *arg0, struct func_802450B0_StructP *arg1) {
    struct func_80245A80_V { s32 w[4]; } sp;

    if (func_80133A24(0x12B) != 0) {
        func_801339D0(0x12B);
        HH80245A80.unk32 = 0xAAA;
        HH80245A80.unk198 = 272.0f;
        HH80245A80.unk19C = 0.0f;
        HH80245A80.unk1A0 = -446.0f;
    }
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp = *(struct func_80245A80_V *)D_80164F40;
        sp.w[1] = 0x80000900;
        func_80005E44(arg0, &sp);
        func_80006214(arg0);
        arg0->unk90 = 201.0f;
        arg0->unk94 = 0.0f;
        arg0->unk98 = D_8025C91C;
        arg0->unk9C = 0xD55;
        func_8012C89C(arg0, 0, 0x30A, 0);
        arg1->unk0->unk30->unk24 |= 0x400;
        arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
        arg1->unk0->unk30->unk4 = (f32)((f64)func_8001EB64(arg0->unk9C) * 46.0 + (f64)arg0->unk90);
        arg1->unk0->unk30->unk8 = arg0->unk94;
        arg1->unk0->unk30->unkC = (f32)((f64)arg0->unk98 - (f64)func_8001EAD0(arg0->unk9C) * 46.0);
        arg1->unk0->unk30->unk12 = arg0->unk9C;
        arg1->unk0->unk30->unk4C = HH80245A80.unkF32;
        arg1->unk0->unk30->unk4D = HH80245A80.unkF33;
        arg1->unk0->unk30->unk4E = HH80245A80.unkF34;
        arg1->unk0->unk30->unk4F = HH80245A80.unkF35;
        HH80245A80.unkF22 = 0x46;
        HH80245A80.unkF20 = 0x64;
        HH80245A80.unkF21 = 0x64;
        HH80245A80.unkF23 = 1;
        HH80245A80.unkF24 = 0x50;
        HH80245A80.unkF25 = 0xFF;
        HH80245A80.unkF26 = 0xB;
        HH80245A80.unkF27 = 0x19;
        HH80245A80.unkF28 = 0xB;
        HH80245A80.unkF29 = 0x9D;
        HH80245A80.unkF2A = 0x50;
        HH80245A80.unkF2B = 0xFF;
        HH80245A80.unkF2C = -0xB;
        HH80245A80.unkF2D = -0x22;
        HH80245A80.unkF2E = 0x25;
        HH80245A80.unkF32 = 0x3C;
        HH80245A80.unkF33 = 0x14;
        HH80245A80.unkF34 = 0x32;
        HH80245A80.unkF35 = 0xAA;
        HH80245A80.unk29C = 5.0f;
        HH80245A80.unk2A0 = 500.0f;
        arg0->unkA4 = 205.0f;
        arg0->unkA8 = D_8025C920;
        D_8025DDB0 = (void *)func_80241790(280.0f, 0.0f, -449.0f, 0xAAA, 0x11B, 0x12B, 0x117, 0x2A);
        if (func_80133A24(0x11B) == 0) {
            func_800058DC(arg0, func_80245DCC);
            return;
        }
        func_800058DC(arg0, func_80246284);
    }
}
