#include "context.h"

s32 func_800178E8();
s32 func_8012FFC0();
extern void func_80150794();

void func_80150734(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        if (func_8012FFC0() == 0) {
            func_800058DC(arg0, func_80150BAC);
            return;
        }
        func_800058DC(arg0, func_80150794);
    }
}
