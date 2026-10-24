#include "context.h"

typedef struct func_80242C3C_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80242C3C_Struct;
typedef struct func_80242C3C_Arg {
    u8 pad0[0x90];
    u16 unk90;
} func_80242C3C_Arg;
extern f32 D_80258614, D_80258618, D_8025861C, D_80258620, D_80258624;
extern u8 D_802584D0[];
extern u8 D_80252164[];
struct func_802429D8_StructArg;
void func_802429D8(struct func_802429D8_StructArg *arg0, s32 arg1);

void func_80242C3C(func_80242C3C_Arg *arg0, s32 arg1) {
    func_80242C3C_Struct *s;
    if (func_800178E8() != 0) {
        s = (func_80242C3C_Struct *)&D_801BBBF0;
        s->unk1E8 = D_80258614;
        s->unk1EC = D_80258618;
        s->unk1F0 = D_8025861C;
        s->unk1F4 = D_80258620;
        s->unk1F8 = 16.5f;
        s->unk1FC = D_80258624;
        func_8011AAF4(D_802584D0, 0x3C4, arg0, 0, 1, 0.0f, s->unk1E8, s->unk1EC, s->unk1F0, 0.0f, s->unk1F4, s->unk1F8, s->unk1FC, 0.0f, 35.0f, -1, -1);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80242D48);
    }
}
