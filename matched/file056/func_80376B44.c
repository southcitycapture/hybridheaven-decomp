#include "common.h"

extern s32 func_80005700(s32);
extern s32 func_80149330(u8);
extern u8 D_80389EE0;

void func_80376B44(s32 arg0, s32 arg1) {
    if (func_80149330(D_80389EE0) != 0) {
        func_80005700(arg0);
    }
}
