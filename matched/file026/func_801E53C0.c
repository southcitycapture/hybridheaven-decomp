#include "common.h"
extern s32 D_801FB224;
s32 func_801C0B8C(u64 time);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801CF450(s32 arg0);


extern s32 D_801CF3CC(void);
extern s32 func_801CF3BC(void);
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E53C0(s32 arg0, s32 arg1) {
    switch (D_801FB224) {
    case 0:
        func_801CC470(2, 0x01B80003, 0, 0x1000, 5.0f);
        D_801FB224 = 1;
        break;
    case 1:
        if (D_801CF3CC() != 0) {
            func_801CC470(2, 0x01B80004, 0, 0x1000, 5.0f);
            D_801FB224 = 2;
        }
        break;
    case 2:
        if (D_801CF3CC() != 0) {
            func_801CC470(2, 0x01B80004, 0, 0x1000, 5.0f);
            D_801FB224 = 3;
        }
        break;
    case 3:
        if (D_801CF3CC() != 0) {
            func_801CC470(2, 0x01B80004, 0, 0x1000, 5.0f);
            D_801FB224 = 4;
        }
        break;
    case 4:
        if (func_801C0B8C(0x069D4490) != 0) {
            func_801CC4D8(2, 0x01B80005, 0, 0x1000, 3.0f);
            func_801CF450(0);
            D_801FB224 = 5;
        }
        break;
    case 5:
        if (func_801CF3BC() == 0) {
            func_801CC470(2, 0x01B80005, 0, 0x1000, 7.0f);
            D_801FB224 = 6;
        }
        break;
    case 6:
        if (D_801CF3CC() != 0) {
            return 4;
        }
        break;
    }
    return 3;
}
