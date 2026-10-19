#include "context.h"

struct func_802486B4_Struct {
    u8 pad[0xE8];
    struct func_802486B4_Node *unkE8;
    u8 pad2[0xFC];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
};
struct func_802486B4_Node {
    u8 pad[0x2C];
    f32 *unk2C;
};
struct func_802486B4_Arg {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0xC];
    u16 unk3C;
};
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_802487F8_Arg;
void func_802487F8(struct func_802487F8_Arg *arg0, s32 arg1);
extern void func_800058DC(void *, void *);
extern void func_801339D0(s32);
s32 func_80133A24(s32);
extern void *D_8025A2B0;
struct func_8024A434_StructBBF0;
extern struct func_8024A434_StructBBF0 D_801BBBF0;
extern u8 D_80253044[];
extern u8 D_80258D80[];

void func_802486B4(struct func_802486B4_Arg *arg0, s32 arg1) {
    struct func_802486B4_Node *n;
    struct func_802486B4_Struct *g;
    if (func_80133A24(0x70) != 0) {
        D_8025A2B0 = (void *)func_80005670(arg0, D_80253044);
        g = (struct func_802486B4_Struct *)&D_801BBBF0;
        n = g->unkE8;
        g->unk1E8 = n->unk2C[0xC];
        g->unk1EC = n->unk2C[0xD];
        g->unk1F0 = n->unk2C[0xE];
        g->unk1F4 = n->unk2C[0xF];
        g->unk1F8 = n->unk2C[0x10];
        g->unk1FC = n->unk2C[0x11];
        func_8011AAF4(D_80258D80, 0x169, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
        func_801339D0(0x73);
        arg0->unk3C = 0;
        arg0->unk2C |= 0x800;
        func_800058DC(arg0, func_802487F8);
    }
}
