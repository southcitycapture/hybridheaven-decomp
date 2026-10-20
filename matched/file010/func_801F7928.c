#include "context.h"

struct func_801F7A5C_Struct;
void func_801F7A5C(struct func_801F7A5C_Struct *arg0, s32 arg1);
struct func_801F7928_B { u8 pad0[0x30]; f32 f30; f32 f34; f32 f38; f32 f3c; f32 f40; f32 f44; };
struct func_801F7928_A { u8 pad0[0x2C]; struct func_801F7928_B *unk2C; };
struct func_801F7928_C { u8 pad0[0x50]; f32 unk50; };
struct func_801F7928_D { u8 pad0[0x24]; struct func_801F3FFC_Node *unk24; u8 pad1[0x14]; s16 unk3C; u8 pad2[0x1E]; struct func_801F7928_C *unk5C; };
extern struct func_801F7928_A *D_801BBCD8;
extern u8 D_80218994[];
extern f64 D_80218CD0;
extern f64 D_80218CD8;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_801F7928(struct func_801F7928_D *arg0, s32 arg1) {
    struct func_801F7928_C *c;
    struct func_801F7928_B *b;
    f32 t;

    c = arg0->unk5C;
    t = (f32)(((f64)c->unk50 * D_80218CD0) / D_80218CD8);
    func_8011AAF4(D_80218994, 0x6DD, arg0, 0, 1, 3.0f, D_801BBCD8->unk2C->f30, D_801BBCD8->unk2C->f34 + t, D_801BBCD8->unk2C->f38, 3.0f, D_801BBCD8->unk2C->f3c, D_801BBCD8->unk2C->f40 + t, D_801BBCD8->unk2C->f44, 0.0f, 35.0f, -1, -1);
    if ((c->unk50 + arg0->unk24->unk2C->unk8) < D_801BBCD8->unk2C->f34) {
        arg0->unk3C = 0;
        func_800058DC(arg0, (s32)func_801F7A5C);
    }
}
