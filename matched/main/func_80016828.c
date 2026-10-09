#include "context.h"

void func_80016B40(s32, s32);
extern s32 D_8008DC94;
extern s32 D_8008DC98;
extern u8 *D_8008DFB0;
extern s32 D_8008DFB4;

void func_80016828(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg1 < 0) || (arg1 >= D_8008DC94) || (arg2 < 0) || (D_8008DC98 < arg2)) {

    }
    *(D_8008DFB0 + (D_8008DC94 * arg2) + arg1) = arg3;
    func_80016B40(D_8008DFB4, (D_8008DC94 * arg2) + arg1);
}
