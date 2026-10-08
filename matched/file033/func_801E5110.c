#include "common.h"

void func_801C0D04(s32, s32);
void func_801CC470(s32, s32, s32, s32, f32);
extern f32 D_801F480C;
extern u8 *D_801DAB14;

#define FIELD_P(p, off) (*(u8**)((u8*)(p) + (off)))

s32 func_801E5110(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FIELD_P(FIELD_P(D_801DAB14, 0x8), 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(FIELD_P(temp_v0, 0x2C) + 0x4) = 2.0f;
        *(f32 *)(FIELD_P(FIELD_P(FIELD_P(D_801DAB14, 0x8), 0x24), 0x2C) + 0x8) = 0.0f;
        *(f32 *)(FIELD_P(FIELD_P(FIELD_P(D_801DAB14, 0x8), 0x24), 0x2C) + 0xC) = D_801F480C;
        *(s16 *)(FIELD_P(FIELD_P(FIELD_P(D_801DAB14, 0x8), 0x24), 0x2C) + 0x12) = 0x1000;
        func_801CC470(0, 0x0168003E, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 3;
    }
    return 2;
}
