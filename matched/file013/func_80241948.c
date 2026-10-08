#include "common.h"

extern s32 func_80133A24(s32);
extern void func_800058DC(s32, void *);
extern void func_80241984(void);

void func_80241948(s32 arg0, s32 arg1) {
    if (func_80133A24(2) != 0) {
        func_800058DC(arg0, func_80241984);
    }
}
