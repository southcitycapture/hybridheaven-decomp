#include "context.h"

extern void func_80249EF8(void);
extern s32 D_801BBCCC;

void func_80249EC4(void *arg0, s32 arg1) {
    if (D_801BBCCC != 0) {
        func_800058DC(arg0, func_80249EF8);
    }
}
