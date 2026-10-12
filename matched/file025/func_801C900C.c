#include "context.h"

extern s32 func_80005E44(s32, void *);
extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern u8 D_801DA778[];
extern void func_801C904C(s32 arg0, s32 arg1);

void func_801C900C(s32 arg0, s32 arg1) {
    if (func_80005E44(arg0, D_801DA778) != 0) {
        func_800058DC(arg0, func_801C904C);
    }
}
