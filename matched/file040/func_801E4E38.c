#include "common.h"
extern s32 D_801E82F4;
extern s32 func_801C0B8C(u64 time);
extern void func_801C7F74(u8 *, s32, s32, s32, f32, f32, f32, f32, f32, s32);


extern u8 D_801E8920[];
extern u8 D_801E8924[];
extern u8 D_801E8928[];
extern u8 D_801E892C[];

s32 func_801E4E38(s32 arg0, s32 arg1) {
    switch (D_801E82F4) {
    case 0:
        do {
            func_801C7F74(D_801E8920, 0xC1D00000, 0x42300000, 0x42240000, 33.0f, 169.0f, 15.0f, 6.0f, 6.0f, 0);
            D_801E82F4 = 1;
        } while (0);
        break;
    case 1:
        do {
            func_801C7F74(D_801E8924, 0xC2540000, 0x42640000, 0x42240000, 33.0f, 169.0f, 15.0f, 6.0f, 6.0f, 0);
            D_801E82F4 = 2;
        } while (0);
        break;
    case 2:
        do {
            func_801C7F74(D_801E8928, 0xC1B00000, 0x42580000, 0x422C0000, 33.0f, 169.0f, 15.0f, 6.0f, 6.0f, 0);
            D_801E82F4 = 3;
        } while (0);
        break;
    case 3:
        do {
            func_801C7F74(D_801E892C, 0xC2540000, 0x427C0000, 0x42240000, 33.0f, 169.0f, 15.0f, 6.0f, 6.0f, 0);
            D_801E82F4 = 4;
        } while (0);
        break;
    case 4:
        do {
            if (func_801C0B8C(0x234110B) != 0) {
                D_801E82F4 = 0;
                return 0xE;
            }
        } while (0);
        break;
    }
    return 0xD;
}
