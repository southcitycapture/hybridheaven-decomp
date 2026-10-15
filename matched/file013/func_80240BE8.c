#include "context.h"

extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80240D00();
extern u8 D_802498E8[];
extern f32 D_80249A90;

void func_80240BE8(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_802498E8, 0xE6, arg0, 0, 2, 1.0f, 668.0f, 35.0f, 179.0f, 1.5f, D_80249A90, 18.0f, 249.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_80020744(0x1BF);
        *(s16 *)((u8 *)&D_801BBBF0 + 0x194) = 1;
        *(s16 *)((u8 *)&D_801BBBF0 + 0x192) = 4;
        *(s32 *)((u8 *)&D_801BBBF0 + 0xF10) = 0x03480017;
        *(s16 *)((u8 *)&D_801BBBF0 + 0xF0C) = 0;
        *(s16 *)((u8 *)&D_801BBBF0 + 0xF00) = 0x1000;
        *(f32 *)((u8 *)&D_801BBBF0 + 0xF08) = 6.5f;
        func_800058DC((void *)arg0, (void *)func_80240D00);
    }
}
