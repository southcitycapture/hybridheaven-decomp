#include "context.h"

typedef struct func_8024FB64_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x90 - 0x60];
    s16 unk90;
} func_8024FB64_Struct;

extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80259C7C[];
extern f32 D_8025A0D8;
extern f32 D_8025A0DC;
extern f32 D_8025A0E0;
extern f32 D_8025A0E4;
extern f32 D_8025A0E8;
extern u8 func_8024FCC0[];

void func_8024FB64(void *arg0, void *arg1) {
    u8 *b;
    extern s32 func_80010550();
    s32 t = ((func_8024FB64_Struct *)arg0)->unk5C;

    if (func_80010550(arg1, t) != 0 && func_800178E8() != 0) {
        b = (u8 *)&D_801BBBF0;
        *(f32 *)(b + 0x1E8) = D_8025A0D8;
        *(f32 *)(b + 0x1EC) = -127.5f;
        *(f32 *)(b + 0x1F0) = D_8025A0DC;
        *(f32 *)(b + 0x1F4) = D_8025A0E0;
        *(f32 *)(b + 0x1F8) = D_8025A0E4;
        *(f32 *)(b + 0x1FC) = D_8025A0E8;
        func_8011AAF4(D_80259C7C, 0x4C8, arg0, 0, 1, 0.0f, *(f32 *)(b + 0x1E8), *(f32 *)(b + 0x1EC), *(f32 *)(b + 0x1F0), 0.0f, *(f32 *)(b + 0x1F4), *(f32 *)(b + 0x1F8), *(f32 *)(b + 0x1FC), 0.0f, 35.0f, -1, -1);
        func_8013A1B4(arg1, *(func_8024EF6C_Vec *)((u8 *)&D_80254AB8 + 0x54), 0xFFFFFF);
        ((func_8024FB64_Struct *)arg0)->unk90 = 0;
        func_800058DC(arg0, func_8024FCC0);
    }
}
