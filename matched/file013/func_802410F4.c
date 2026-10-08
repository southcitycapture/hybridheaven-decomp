#include "common.h"

extern s32 func_80133A24(s32);
extern void func_80020744(s32);
extern void func_800058DC(void *, void *);
extern void func_802411A8();
extern u8 D_801BBBF0[];
extern f32 D_80249AB0;

void func_802410F4(u8 *arg0, void *arg1) {
    u8 *v0;
    u8 *v1;

    if (func_80133A24(1) != 0) {
        *(s16 *)(arg0 + 0x90) = 0xF;
        func_80020744(0x1C3);
        v0 = D_801BBBF0;
        v1 = *(u8 **)(v0 + 0xE0);
        *(s16 *)(v0 + 0x194) = 1;
        *(s16 *)(v0 + 0x192) = 6;
        *(f32 *)(v0 + 0x198) = (f32) *(f32 *)(*(u8 **)(v1 + 0x2C) + 4);
        *(f32 *)(v0 + 0x1A0) = (f32) *(f32 *)(*(u8 **)(v1 + 0x2C) + 0xC);
        *(f32 *)(v0 + 0xF14) = D_80249AB0;
        *(f32 *)(v0 + 0xF18) = 332.0f;
        *(s16 *)(v0 + 0xF00) = 0x1100;
        *(f32 *)(v0 + 0xF04) = 1.0f;
        *(f32 *)(v0 + 0xF08) = 1.0f;
        func_800058DC(arg0, func_802411A8);
    }
}
