#include "context.h"

extern s32 func_800178E8(void);
extern void func_800058DC(s32, void *);
extern void func_80107B60(void);
extern s8 D_801BBAC4;
extern s8 D_801BBAC5;

void func_801081F8(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        D_801BBAC4 = 1;
        D_801BBAC5 = 1;
        func_800058DC(arg0, func_80107B60);
    }
}
