#include "common.h"
#include "camera.h"

/* Repeat the fixed ABI for srcbuild's include-free, isolated registry body. */
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_802425DC_Camera { u8 pad[4]; f32 unk4, unk8, unkC; };
struct func_802425DC_CameraOwner { u8 pad[0x2C]; struct func_802425DC_Camera *camera; };
struct func_802425DC_Global { u8 pad[0xE0]; struct func_802425DC_CameraOwner *owner; };
struct func_802425DC_StructE { u8 pad[0x3C]; s16 unk3C; };
extern struct func_802425DC_Global D_801BBBF0;
extern u8 D_8025C394[];
extern u8 D_8025C3CC[];
extern f32 D_8025C6EC;
extern f32 D_8025C6F0;
extern f32 D_8025C6F4;
extern f32 D_8025C6F8;
extern f32 D_8025C6FC;
extern void func_8024278C(void);
extern void func_80020718(s32);
extern void func_800058DC(void *, void *);
extern void func_80243CC0(void *, s32);

void func_802425DC(struct func_802425DC_StructE *arg0, s32 arg1) {
    if (func_8011AAF4(D_8025C394, 0x286, arg0, 0, 2, D_8025C6EC, 55.0f, D_8025C6F0, 84.0f, 4294967296.0f, -35.0f, D_8025C6F4, -39.0f, 0.0f, 55.0f, -1, -1) == 0) {
        func_8011AAF4(D_8025C3CC, 0x28A, arg0, 0, 1, 0.0f, 35.0f, D_8025C6F8, 43.0f, 0.0f, 46.0f, D_8025C6FC, 20.0f, 0.0f, 33.0f, -1, -1);
        arg0->unk3C = 0;
        D_801BBBF0.owner->camera->unk4 = 65.0f;
        D_801BBBF0.owner->camera->unkC = 0.0f;
        func_80020718(0x6C6);
        func_800058DC(arg0, func_8024278C);
    }
    func_80243CC0(arg0, arg1);
}
