#include "context.h"

extern s32 func_801BF968(void);
extern void func_8013B130(void);
extern void func_800058DC(s32, void *);
extern void func_801CC2C8(s32 arg0, s32 arg1);
extern s32 D_801DAABC;

void func_801CC278(s32 arg0, s32 arg1) {
    D_801DAABC = 1;
    if (func_801BF968() != 0) {
        func_8013B130();
        func_800058DC(arg0, func_801CC2C8);
    }
}
