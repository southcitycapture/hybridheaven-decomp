#include "common.h"
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
extern void *D_8025A2B0;
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C2F0C(s32 arg0, void *arg1);
struct func_802486B4_Arg {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0xC];
    u16 unk3C;
};
struct func_802486B4_Node {
    u8 pad[0x2C];
    f32 *unk2C;
};
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
struct func_802487F8_E {
    u8 pad[0xC];
    f32 unkC;
};
struct func_802487F8_D {
    u8 pad[0x2C];
    struct func_802487F8_E *unk2C;
};
struct func_802487F8_C {
    u8 pad[0x24];
    struct func_802487F8_D *unk24;
};

extern f64 D_80259118;
extern f32 D_80259120;
extern f32 D_80259124;
extern f32 D_80259128;
extern f32 D_8025912C;
extern f32 D_80259130;
extern f32 D_80259134;
extern f32 D_80259138;
extern u8 D_80258E40[];
extern u8 D_80258E80[];
void func_80248E18(void *arg0, s32 arg1);

union func_80248B7C_U { f32 f; s32 w; struct { s16 x, y; } h; };
struct func_80248B7C_Struct {
    union func_80248B7C_U a, b, c, d, e, g, h;
};

void func_80248B7C(struct func_802486B4_Arg *arg0, s32 arg1) {
    s32 pad;
    struct func_80248B7C_Struct s;
#define gv ((struct func_802486B4_Struct *)&D_801BBBF0)
    s32 t;

    t = arg0->unk3C++;
    func_8011AAF4(D_80258E40, 0x1BC, arg0, 0, 1, 0.0f, gv->unk1E8, gv->unk1EC, gv->unk1F0, 0.0f, gv->unk1F4, gv->unk1F8, gv->unk1FC, 0.0f, 35.0f, -1, -1);
    gv->unk1EC = gv->unk1EC + D_80259118;
    if (t == 0) {
        s.a.h.x = 0x1000;
        s.b.w = 0x01B8000B;
        s.c.f = 1.0f;
        s.d.h.x = 0xA;
        func_801C2F0C(5, &s);
    }
    if (t == 0x28) {
        s.c.f = 0.0f;
        s.d.h.x = 0x1100;
        s.e.w = 0x01680040;
        s.h.h.x = 0;
        s.h.h.y = 0x96;
        s.a.f = 100.0f;
        s.b.f = -160.0f;
        s.g.f = D_80259120;
        func_801C2F0C(2, &s);
    }
    if (((struct func_802487F8_C *)D_8025A2B0)->unk24->unk2C->unkC < -400.0f) {
        gv->unk1E8 = D_80259124;
        gv->unk1EC = D_80259128;
        gv->unk1F0 = D_8025912C;
        gv->unk1F4 = D_80259130;
        gv->unk1F8 = D_80259134;
        gv->unk1FC = D_80259138;
        func_8011AAF4(D_80258E80, 0x1E8, arg0, 0, 1, 0.0f, gv->unk1E8, gv->unk1EC, gv->unk1F0, 0.0f, gv->unk1F4, gv->unk1F8, gv->unk1FC, 0.0f, 35.0f, -1, -1);
        arg0->unk2C &= ~0x800;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80248E18);
    }
}
