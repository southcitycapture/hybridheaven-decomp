#include "common.h"
extern s32 D_801E8178;
extern s32 D_801E81C8;
extern s32 func_801C0B8C(u64);
extern s32 func_801C86FC(s32, f32, s32, f32, f32, f32, s32);


struct func_801E5610_Struct {
    s32 state;
};

s32 func_801E5610(s32 arg0, s32 arg1) {
    switch ((u32)D_801E8178) {
    case 0:
        if (func_801C0B8C(0x989680) != 0) {
            func_801C86FC(1, -28.0f, 0xC1D00000, 27.0f, 8.0f, 8.0f, 0x28);
            D_801E8178 = *(u32 *)((u8 *)&D_801E81C8 - 0x50) + 1;
        }
        break;
    case 1:
        if (func_801C0B8C(0x9EB0FF) != 0) {
            func_801C86FC(0, -33.0f, 0xC1C00000, 34.0f, 7.0f, 7.0f, 0x28);
            D_801E8178 = *(u32 *)((u8 *)&D_801E81C8 - 0x50) + 1;
        }
        break;
    case 2:
        if (func_801C0B8C(0xA037A0) != 0) {
            func_801C86FC(0, -30.0f, 0xC1880000, 32.0f, 7.0f, 7.0f, 0x28);
            do {} while (0);
            D_801E8178 += 1;
        }
        break;
    case 3:
        if (func_801C0B8C(0xA1BE40) != 0) {
            func_801C86FC(0, -29.0f, 0xC1400000, 29.0f, 7.0f, 7.0f, 0x28);
            do {} while (0);
            if (&D_801E8178) {}
            D_801E8178 += 1;
        }
        break;
    case 4:
        if (func_801C0B8C(0xA7D8C0) != 0) {
            func_801C86FC(0, -31.0f, 0xC1900000, 19.0f, 7.0f, 7.0f, 0x28);
            do {} while (0);
            D_801E8178 += 1;
        }
        break;
    case 5:
        if (func_801C0B8C(0xAF79E0) != 0) {
            func_801C86FC(0, -32.0f, 0xC1B80000, 34.0f, 8.0f, 8.0f, 0x28);
            do {} while (0);
            ((struct func_801E5610_Struct *)&D_801E8178)->state += 1;
        }
        break;
    case 6:
        if (func_801C0B8C(0xBBAEE0) != 0) {
            func_801C86FC(0, -31.0f, 0xC1880000, 33.0f, 7.0f, 7.0f, 0x28);
            return 8;
        }
        break;
    }
    return 7;
}
