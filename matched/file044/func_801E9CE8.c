#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D3620(void);
extern s32 func_801D3630(void);
extern s32 D_801ED0F8;

s32 func_801E9CE8(s32 arg0, s32 arg1) {
    switch (D_801ED0F8) {
    case 0:
        if (func_801D3630() != 0) {
            func_801CC4D8(2, 0x0320005E, 0, 0, 5.0f);
            D_801ED0F8 = 1;
        }
        break;
    case 1:
        if (func_801D3620() == 0) {
            func_801CC470(2, 0x0320005E, 0, 0, 10.0f);
            D_801ED0F8 = 2;
        }
        break;
    case 2:
        if (func_801D3630() != 0) {
            func_801CC4D8(2, 0x0320005F, 0, 0, 5.0f);
            D_801ED0F8 = 3;
        }
        break;
    case 3:
        if (func_801D3620() == 0) {
            func_801CC470(2, 0x0320005F, 0, 0, 4.0f);
            D_801ED0F8 = 4;
        }
        break;
    case 4:
        if (func_801D3630() != 0) {
            return 0xE;
        }
        break;
    }
    return 0xD;
}
