#include "common.h"

extern void func_80005700();

void func_8037ACCC(void *arg0, s32 arg1) {
    if (((s16 *)arg0)[0x58]++ >= 0x1F) {
        func_80005700();
    }
}
