#include "context.h"
void func_80374CB8(s32 arg0, s32 arg1);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

extern u8 D_8038B59C[];

void func_80374BAC(s32 arg0, s32 arg1) {
    s32 var_a3;

    if ((*(s16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x42) != 0) || (*(u16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x5E) = (u16) (*(u16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x5E) + 1), (s32) *(u16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x5E) >= (s32) *(u16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x5C))) {
        if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) || (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB)) {
            var_a3 = 8;
        } else {
            var_a3 = 3;
        }
        func_8011AAF4(D_8038B59C, 0x1FC, arg0, var_a3, 1, 1.0f, *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x30), *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x34), *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x38), 1.0f, *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x3C), *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x40), *(f32 *)(*(u8 **)(*(u8 **)(D_801BBBF0 + 0xE8) + 0x2C) + 0x44), 1.0f, 35.0f, 1, 0);
        func_800058DC(arg0, &func_80374CB8);
    }
}
