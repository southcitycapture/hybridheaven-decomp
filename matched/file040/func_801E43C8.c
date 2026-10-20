#include "context.h"

extern void func_801C7F74(u8 *, s32, s32, s32, f32, f32, f32, f32, f32, s32);
extern u8 D_801E8910[];
extern u8 D_801E8914[];
extern u8 D_801E8918[];
extern u8 D_801E891C[];

s32 func_801E43C8(s32 arg0, s32 arg1) {
    switch (D_801E82F4) {
    default:
        return 3;
    case 0:
        if (func_801C0B8C(0x5B0B4A) != 0) {
            func_801C7F74(D_801E8910, 0x3F800000, 0x42B40000, 0xC25C0000, 19.0f, 12.0f, 4.0f, 5.0f, 5.0f, 0);
            D_801E82F4 = 1;
        }
        break;
    case 1:
        if (func_801C0B8C(0x5C91EA) != 0) {
            func_801C7F74(D_801E8914, 0x41E80000, 0x42920000, 0xC25C0000, 0.0f, 13.0f, 0.0f, 5.0f, 5.0f, 0);
            D_801E82F4 = 2;
        }
        break;
    case 2:
        if (func_801C0B8C(0x5F9F2A) != 0) {
            func_801C7F74(D_801E8918, 0xC22C0000, 0x42000000, 0xC25C0000, 0.0f, 13.0f, 0.0f, 5.0f, 5.0f, 0);
            D_801E82F4 = 3;
        }
        break;
    case 3:
        if (func_801C0B8C(0x6125CA) != 0) {
            func_801C7F74(D_801E891C, 0xC2580000, 0x42340000, 0xC2640000, 0.0f, 13.0f, 0.0f, 5.0f, 5.0f, 0);
            return 4;
        }
        break;
    }
    return 3;
}
