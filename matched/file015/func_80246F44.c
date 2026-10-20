#include "context.h"

extern struct func_802466A4_Vec D_802529A0;
extern u8 D_80258A00[];
extern f32 D_80258BB4, D_80258BB8, D_80258BBC, D_80258BC0, D_80258BC4;
extern void func_802470E0();

void func_80246F44(struct func_80246D34_Struct *arg0, struct func_802466A4_Obj **arg1) {
    s32 sp54;
    struct func_802466A4_Sub *s;

    sp54 = arg0->unk5C;
    s = (*arg1)->unk2C;
    if (s->unk12 >= 0x71D) {
        s->unk12 = s->unk12 - 0xB6;
    }
    if (func_80011140((s32)arg1, sp54, D_802529A0, 0x1E) != 0) {
        D_801BBBF0.f1E8 = D_80258BB4;
        D_801BBBF0.f1EC = -87.5f;
        D_801BBBF0.f1F0 = D_80258BB8;
        D_801BBBF0.f1F4 = D_80258BBC;
        D_801BBBF0.f1F8 = D_80258BC0;
        D_801BBBF0.f1FC = D_80258BC4;
        func_8011AAF4(D_80258A00, 0x4D0, arg0, 0, 1, 0.0f, D_801BBBF0.f1E8, D_801BBBF0.f1EC, D_801BBBF0.f1F0, 0.0f, D_801BBBF0.f1F4, D_801BBBF0.f1F8, D_801BBBF0.f1FC, 0.0f, 35.0f, -1, -1);
        arg0->unk90 = 0;
        func_8013A1B4(arg1, D_802529A0, 0xFFFFFF);
        func_800058DC(arg0, func_802470E0);
    }
}
