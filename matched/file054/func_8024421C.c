#include "context.h"

struct func_8024421C_Inner { u8 pad0[8]; f32 unk8; };
struct func_8024421C_Node { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; struct func_8024421C_Inner *unk30; };
struct func_8024421C_Arg1 { u8 pad0[0x18]; struct func_8024421C_Node *unk18; };
struct func_8024421C_Arg0 { u8 pad0[0x3C]; u16 unk3C; u8 pad3E[0x56]; f32 unk94; };
#undef F
#define F(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
extern u8 D_80247E38[];
extern f64 D_802485D8, D_802485E0, D_802485E8, D_802485F0, D_802485F8, D_80248600, D_80248608, D_80248610, D_80248618;
extern f32 D_80248620, D_80248624, D_80248628, D_8024862C, D_80248630, D_80248634;
extern void func_802445C8();

void func_8024421C(struct func_8024421C_Arg0 *arg0, struct func_8024421C_Arg1 *arg1) {
    s32 v;
    f64 d;
    struct func_8024421C_Arg0 **pp = &arg0;

    v = arg0->unk3C++;
    if (v < 0x3C) {
        arg1->unk18->unk30->unk8 += (*pp)->unk94;
        (*pp)->unk94 = (*pp)->unk94 - D_802485D8;
    }
    if (v == 0x3C) {
        func_802465F8(17.0f, 82.0f, -43.0f, 0.4f);
    }
    if (v == 0x40) {
        arg1->unk18->unk22 = 0;
    }
    if (v % 16 == 0) goto l0;
    if (v % 16 == 4) goto l4;
    if (v % 16 == 8) goto l8;
    if (v % 16 != 12) goto done;
    goto l12;
l0:
    func_802465F8(23.0f, 13.0f, -13.0f, 0.5f);
    goto done;
l4:
    func_802465F8(-13.0f, 13.0f, -13.0f, 0.5f);
    goto done;
l8:
    func_802465F8(21.0f, 52.0f, -16.0f, 0.4f);
    goto done;
l12:
    func_802465F8(0.0f, 56.0f, 10.0f, 0.5f);
done:
    func_8011AAF4(D_80247E38, 0x678, *pp, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    F(0x1E8) = F(0x1E8) + D_802485E0;
    F(0x1EC) = F(0x1EC) + D_802485E8;
    F(0x1F0) = F(0x1F0) + D_802485F0;
    F(0x1F4) = F(0x1F4) + D_802485F8;
    F(0x1F8) = F(0x1F8) + D_80248600;
    F(0x1FC) = F(0x1FC) + D_80248608;
    if (!(v % 2)) {
        d = D_80248610;
    } else {
        d = D_80248618;
    }
    F(0x1EC) = F(0x1EC) + d;
    if (v >= 0x2D) {
        F(0x1E8) = D_80248620;
        F(0x1EC) = D_80248624;
        F(0x1F0) = D_80248628;
        F(0x1F4) = D_8024862C;
        F(0x1F8) = D_80248630;
        F(0x1FC) = D_80248634;
        func_801512CC(D_80248800, 8.0f, 0.0f, -138.0f);
        func_80151430(D_80248800, 0xF49);
        func_8015115C(D_80248800, D_80246888);
        (*pp)->unk3C = 0;
        func_800058DC(*pp, func_802445C8);
    }
}
