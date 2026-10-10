#include "context.h"

extern struct func_801E3FB4_Sub D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern f32 D_801E51F8;

s32 func_801E3BF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2371E4B) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C) + 4) = D_801E51F8;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C) + 8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C) + 12) = -96.0f;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C) + 18) = 0;
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 5;
    }
    return 4;
}
