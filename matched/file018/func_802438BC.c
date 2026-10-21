#include "context.h"

struct func_802438BC_StructB {
    u8 pad0[0x6A];
    u8 unk6A;
};
struct func_802438BC_StructA {
    u8 pad0[0x2C];
    struct func_802438BC_StructB *unk2C;
};
struct func_802438BC_Arg1 {
    u8 pad0[0x18];
    struct func_802438BC_StructA *unk18;
};
struct func_802438BC_Body {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_802438BC_Node {
    u8 pad0[0x2C];
    struct func_802438BC_Body *unk2C;
};
struct func_802438BC_Cam {
    u8 pad0[0x2C];
    struct func_802437C4_Leaf *unk2C;
};

extern void func_80010454(void *, void *, s32);
extern s32 func_8012CF10(void *, void *, struct func_80242C60_Cfg, s32, s32);
extern void func_8037BB4C(s16, f32, f32, s16);
extern void func_8013A334();
extern struct func_80242C60_Cfg D_80258DC8;
extern f32 D_8025BF74;
extern s16 D_8025C6E2;
s32 D_80242714(void *);
extern u8 D_80243AF0[];

void func_802438BC(arg0, arg1)
struct func_802437C4_Struct *arg0;
struct func_802438BC_Arg1 *arg1;
{
    struct func_802437C4_Inner *sp54;
    f32 sp48[3];
    struct func_802437C4_Leaf *v;
    f32 a;
    f32 b;
    f32 c;
    f32 t;

    sp54 = arg0->unk5C;
    if (func_80242620() == 0 && D_80242714(arg0) == 0) {
        func_8013A334(sp48, arg1, sp54, 0xC);
        if (arg0->unk94 != 0) {
            v = (*((struct func_802438BC_Cam **)&D_8025C6E4 - 0x28285))->unk2C;
            t = v->unk8;
            if (t < sp48[1]) {
                a = -(t - sp48[1]);
            } else {
                a = t - sp48[1];
            }
            t = v->unk4;
            if (t < sp48[0]) {
                b = -(t - sp48[0]);
            } else {
                b = t - sp48[0];
            }
            t = *(f32 *)&v->unkC;
            if (t < sp48[2]) {
                c = -(t - sp48[2]);
            } else {
                c = t - sp48[2];
            }
            if (c * 1.0f + (b + a) < 30.0f) {
                arg0->unk94 = 0;
                func_8037BB4C(((struct func_802438BC_Node *)arg0->unk24)->unk2C->unk12 + 0x800, 2.0f, 2.0f, D_8025C6E2);
            }
        }
        func_80010454(arg1, sp54, 0xE3F001);
        if (func_8012CF10(arg1, sp54, D_80258DC8, 0xA, 0x1C0FFE) == 0) {
            func_80010454(arg1, sp54, 0x1C0FFE);
            func_80010550(arg1, sp54);
            if (arg1->unk18->unk2C->unk6A != 0) {
                sp54->unk78 = 1;
                arg0->unk94 = 0x40;
                v = arg0->unk24->unk2C;
                func_80127430(v->unk4, v->unk8, v->unkC, 0x668, D_8025BF74, 1.0f);
                func_800058DC(arg0, (void (*)())D_80243AF0);
            }
        }
    }
}
