#include "context.h"
struct func_802424D8_C { u8 pad[0xC]; f32 unkC; u8 pad2[0x22-0x10]; u8 unk22; };
struct func_802424D8_A { u8 pad[0x8]; struct func_802424D8_B *unk8; };
struct func_802424D8_B { u8 pad[0x30]; struct func_802424D8_C *unk30; };
struct func_802424D8_S { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x94-0x30]; s16 unk94; };
struct func_802424D8_R { struct func_802424D8_C *unk0; struct func_802424D8_C *unk4; struct func_802424D8_C *unk8; };
struct func_802424D8_R2 { u8 pad[8]; struct func_802424D8_B *unk8; };
extern f64 D_80249B08;
extern f32 D_80249B10;
extern f32 D_80249B14;
extern f32 D_80249B18;
extern u8 func_802425F4[];

void func_802424D8(struct func_802424D8_S *arg0, struct func_802424D8_R *arg1) {
    struct func_802424D8_C *c;
    extern void func_800058DC();
    extern void func_80133980();
    c = ((struct func_802424D8_R2 *)arg1)->unk8->unk30;
    c->unkC = c->unkC + D_80249B08;
    if (arg0->unk94--) {
    } else {
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unk192 = 2;
        D_801BBBF0.unk198 = D_80249B10;
        D_801BBBF0.unk1A0 = 312.0f;
        D_801BBBF0.unkF04 = D_80249B14;
        D_801BBBF0.unkF08 = D_80249B18;
        D_801BBBF0.unkF10 = 0x0168003E;
        D_801BBBF0.unkF0C = 0x1000;
        D_801BBBF0.unkF00 = 0x1102;
        func_80133980(3);
        c = ((struct func_802424D8_R2 *)arg1)->unk8->unk30;
        c->unkC = c->unkC + 1000.0f;
        func_80020744(0x1C7);
        arg0->unk2C = 0;
        arg1->unk0->unk22 = 0;
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 0;
        func_800058DC(arg0, func_802425F4, arg1);
    }
}
