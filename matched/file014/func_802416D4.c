#include "context.h"

struct func_802416D4_StructV { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802416D4_StructO { u8 pad0[0x2C]; struct func_802416D4_StructV *unk2C; u8 pad30[0x10]; f32 unk40; u8 pad44[4]; f32 unk48; };
struct func_802416D4_StructG { u8 pad0[0xDC]; struct func_802416D4_StructO *unkDC; struct func_802416D4_StructO *unkE0; };

struct func_802416D4_StructArg { u8 pad0[0x3C]; u16 unk3C; };
struct func_80241834_StructArg0;
void func_80241834(struct func_80241834_StructArg0 *arg0, s32 arg1);
struct func_80241960_StructObj;
extern struct func_80241960_StructObj *D_801BBCD0;
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_80242390();
extern void func_8024252C();
extern void func_800058DC(void *, void *);
extern f32 func_8002FC20(f32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern u8 D_8024A3B4[];

void func_802416D4(struct func_802416D4_StructArg *arg0, s32 arg1) {
    struct func_802416D4_StructV *p;
    f32 dx;
    f32 dz;
    struct func_802416D4_StructG *g;

    p = (*(struct func_802416D4_StructO **)&D_801BBCD0)->unk2C;
    dx = p->unk4 - 55.0f;
    dz = p->unkC - 110.0f;
    if ((f64)func_8002FC20(dx * dx + dz * dz) < 5.0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        arg0->unk3C = 0;
        g = (struct func_802416D4_StructG *)&D_801BBBF0;
        g->unkDC->unk40 = 0.0f;
        g->unkDC->unk48 = 0.0f;
        func_8011AAF4(D_8024A3B4, 0xFD, (s32)arg0, 0, 1, 0.0f, 20.0f, 5.0f, 270.0f, 0.0f, g->unkE0->unk2C->unk4, g->unkE0->unk2C->unk8 + 15.0f, g->unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
        func_80133980(0x6A);
        func_800058DC(arg0, (void *)func_80241834);
    }
}
