#include "context.h"

extern f32 D_801EB398;
extern f32 D_801EB39C;
extern struct func_801E77A0_A func_801DAAF0;

s32 func_801E66FC(s32 arg0, s32 arg1) {
    u8 *p;

    if (func_801C0B8C(0xD7261F) != 0) {
        p = (u8 *) &func_801DAAF0;
        p += 0x24;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 4) = D_801EB398;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 8) = 0.0f;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 0xC) = D_801EB39C;
        *(s16 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 0x12) = 0x1000;
        func_801CC470(0, 0x03480070, 0, 1, 1.0f);
        return 0x1A;
    }
    return 0x19;
}
