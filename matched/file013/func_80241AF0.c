#include "common.h"

typedef struct func_80241AF0_StructBBBF0 {
    u8 pad0[0x192];
    s16 unk192;
    s16 unk194;
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad1[0xF00 - 0x1A4];
    s16 unkF00;
    u8 pad2[0xF04 - 0xF02];
    f32 unkF04;
    f32 unkF08;
    s16 unkF0C;
    u8 pad3[0xF10 - 0xF0E];
    s32 unkF10;
} func_80241AF0_StructBBBF0;

extern func_80241AF0_StructBBBF0 D_801BBBF0;
extern void func_800058DC(void *, void *);
extern f32 D_80249AD8;
extern f32 D_80249ADC;
extern void func_80241B88(void);

void func_80241AF0(u8 *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = *(s16 *)(arg0 + 0x94);
    *(s16 *)(arg0 + 0x94) = temp_v0 - 1;
    if (temp_v0 == 0) {
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unk192 = 2;
        D_801BBBF0.unk198 = D_80249AD8;
        D_801BBBF0.unk1A0 = 332.0f;
        D_801BBBF0.unkF04 = D_80249ADC;
        D_801BBBF0.unkF08 = 1.0f;
        D_801BBBF0.unkF10 = 0x0168003E;
        D_801BBBF0.unkF0C = 0;
        D_801BBBF0.unkF00 = 0x1100;
        func_800058DC(arg0, func_80241B88);
    }
}
