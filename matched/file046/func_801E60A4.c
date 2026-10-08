#include "common.h"

extern s32 func_801CEDD4(void);
extern void D_801CEE74(s32, s32, s32, s32, s32, s32, s32);
extern void D_801CEF04(s32);
extern void func_801C1000(s32, s32);
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038D28C(s32);

s32 func_801E60A4(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80067, 0, 0, 2.0f);
        D_801CEE74(1, 1, 0x40200000, 0xFF, 0, 1, 1);
        func_801C1000(3, 0x2673);
        D_801CEF04(1);
        func_8038D28C(0x204);
        return 0x13;
    }
    return 0x12;
}
