#include "common.h"

extern void func_801FCBA8(s32);

void func_801D791C(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_801FCBA8(0x38);
        return;
    }
    func_801FCBA8(0x37);
}
