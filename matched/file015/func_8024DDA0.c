#include "context.h"

typedef struct func_8024DDA0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024DDA0_Struct;

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_8024DF34_Struct;
void func_8024DF34(struct func_8024DF34_Struct *arg0, s32 arg1);
extern u8 D_802599A8[];
extern f32 D_80259ABC;
extern f32 D_80259AC0;
extern f32 D_80259AC4;
extern f32 D_80259AC8;

void func_8024DDA0(func_8024DDA0_Struct *arg0, s32 arg1) {
    u8 *b;
    f32 *f;
    s32 t;

    if (arg0->unk90++ >= 0x19) {
        b = (u8 *)&D_801BBBF0;
        f = (f32 *)&D_801BBBF0;
        b[0xF20] = 0x75;
        b[0xF21] = 0x6C;
        b[0xF22] = 0x40;
        b[0xF23] = 0xFF;
        b[0xF24] = 0xB0;
        b[0xF25] = 0x80;
        b[0xF26] = 0;
        ((s8 *)b)[0xF27] = 0x40;
        b[0xF28] = 0;
        f[0x1E8 / 4] = D_80259ABC;
        f[0x1EC / 4] = -120.0f;
        f[0x1F0 / 4] = 71.0f;
        f[0x1F4 / 4] = D_80259AC0;
        f[0x1F8 / 4] = D_80259AC4;
        f[0x1FC / 4] = D_80259AC8;
        func_8011AAF4(D_802599A8, 0x26B, arg0, 0, 1, 0.0f, f[0x1E8 / 4], f[0x1EC / 4], f[0x1F0 / 4], 0.0f, f[0x1F4 / 4], f[0x1F8 / 4], f[0x1FC / 4], 0.0f, 35.0f, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 8, 0, 2, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DF34);
    }
}
