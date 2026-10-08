#include "context.h"

extern s32 func_8013EB2C();
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80005700(s32);
extern s32 D_801CD234;
extern void func_801CA520();

void func_801CA4A4(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_8012FE50(0x23, 0xC4, 1, 1, 0);
        if (D_801CD234 != 0) {
            func_80005700(D_801CD234);
            D_801CD234 = 0;
        }
        func_800058DC((void *)arg0, &func_801CA520);
    }
}
