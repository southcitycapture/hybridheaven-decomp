#include "context.h"

struct func_801F9524_Pos { u8 pad0[4]; f32 x; f32 y; f32 z; u8 pad10[2]; s16 unk12; };
struct func_801F9524_Mid { u8 pad0[0x2C]; struct func_801F9524_Pos *unk2C; };
struct func_801F9524_Obj {
    u8 pad0[0x24];
    struct func_801F9524_Mid *unk24;
    u8 pad28[0x16];
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    void *unk5C;
};
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 D_8013A334(f32 *, s32, void *, s32);
extern u8 D_80218AFC[];
extern u8 func_801F9664[];

void func_801F9524(struct func_801F9524_Obj *arg0, s32 arg1) {
    void *t;
    f32 v[3];

    t = arg0->unk5C;
    D_8013A334(v, arg1, t, 6);
    if (D_8011AAF4(D_80218AFC, 0x8E0, arg0, 0, 2, 3.0f, ((struct func_801F9524_Mid *)D_801BBCD0)->unk2C->x, ((struct func_801F9524_Mid *)D_801BBCD0)->unk2C->y + 22.0f, ((struct func_801F9524_Mid *)D_801BBCD0)->unk2C->z, 3.0f, v[0], v[1], v[2], 3.0f, 50.0f, -1, -1) == 0) {
        func_801F5210(arg0);
        arg0->unk3E = 2;
        arg0->unk44 = 2.0f;
        arg0->unk48 = func_8001EB64(arg0->unk24->unk2C->unk12) * -1.0f;
        arg0->unk40 = func_8001EAD0(arg0->unk24->unk2C->unk12) * -1.0f;
        func_800058DC(arg0, (s32)func_801F9664);
    }
}
