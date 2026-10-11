#include "common.h"

extern s32 func_8013EB2C(void);
extern void func_80142570(void);
extern void func_800058DC(void *obj, void *fn);
extern void func_80377478(void);

void func_803771A4(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_800058DC(arg0, func_80377478);
    }
}
