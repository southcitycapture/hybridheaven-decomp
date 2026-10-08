#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D3620(void);
extern s32 D_801EA990;

s32 func_801E6E80(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200059, 0, 0, 6.0f);
        D_801EA990 = 0;
        return 0x28;
    }
    return 0x27;
}
