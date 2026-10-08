#include "context.h"

s32 func_800178E8();
void func_800179B0(void *);
extern u8 D_80252DEC[];
void func_8024814C();

void func_80248108(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_800179B0(D_80252DEC);
        func_800058DC(arg0, func_8024814C);
    }
}
