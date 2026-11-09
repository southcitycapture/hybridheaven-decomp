#include "common.h"
extern s32 D_801E8178;
extern s32 func_801C0B8C(u64);

extern s32 func_801C86FC(s32, f32, s32, f32, f32, f32, s32);

s32 func_801E5370(s32 arg0, s32 arg1) {
    switch (D_801E8178) {
    case 0:
        if (func_801C0B8C(0x6ACFC0) != 0) {
            func_801C86FC(1, 0.0f, 0xC1100000, 0.0f, 13.0f, 13.0f, 0x28);
            D_801E8178 += 1;
        }
        break;
    case 1:
        if (func_801C0B8C(0x73F77F) != 0) {
            func_801C86FC(0, 0.0f, 0xC2480000, 0.0f, 13.0f, 13.0f, 0x28);
            D_801E8178 += 1;
        }
        break;
    case 2:
        if (func_801C0B8C(0x7A1200) != 0) {
            func_801C86FC(0, 0.0f, 0xC2040000, 0.0f, 13.0f, 13.0f, 0x28);
            D_801E8178 += 1;
        }
        break;
    case 3:
        if (func_801C0B8C(0x81B320) != 0) {
            func_801C86FC(0, 0.0f, 0xC1D00000, 0.0f, 13.0f, 13.0f, 0x28);
            D_801E8178 += 1;
        }
        break;
    case 4:
        if (func_801C0B8C(0x87CD9F) != 0) {
            func_801C86FC(0, 0.0f, 0xC1980000, 0.0f, 13.0f, 13.0f, 0x28);
            D_801E8178 += 1;
        }
        break;
    case 5:
        if (func_801C0B8C(0x8DE820) != 0) {
            func_801C86FC(0, 0.0f, 0xC1700000, 0.0f, 13.0f, 13.0f, 0x28);
            D_801E8178 += 1;
        }
        break;
    case 6:
        if (func_801C0B8C(0x94029F) != 0) {
            func_801C86FC(0, 0.0f, 0xC1200000, 0.0f, 13.0f, 13.0f, 0x28);
            D_801E8178 = 0;
            return 7;
        }
        break;
    }
    return 6;
}
