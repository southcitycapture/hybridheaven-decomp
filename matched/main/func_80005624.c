#include "common.h"

extern u8 D_80089378[];
extern s32 func_800059B0(void *, s32);
extern void func_80005B98();

s32 func_80005624(s32 arg0) {
    s32 var;
    s32 temp_v0;

    temp_v0 = func_800059B0(D_80089378, ((s32 *)arg0)[1]);
    var = temp_v0;
    if (temp_v0 != 0) {
        func_80005B98(var, arg0);
    }
    return var;
}
