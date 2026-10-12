#include "common.h"

extern s32 func_80133A24(s32);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_8024217C();

void func_80242140(s32 arg0, s32 arg1) {
    if (func_80133A24(493) != 0) {
        func_800058DC(arg0, func_8024217C);
    }
}
