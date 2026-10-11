#include "common.h"

extern s32 func_80005700(s32);
extern s32 func_80149330(u8);
extern u8 D_8038A90A;

void func_80378340(s32 arg0, s32 arg1) {
    if (func_80149330(D_8038A90A) != 0) {
        func_80005700(arg0);
    }
}
