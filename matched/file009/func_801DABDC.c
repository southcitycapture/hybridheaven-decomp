#include "common.h"

extern void func_80020718(s32);
extern void func_80133980(s32);

void func_801DABDC(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_80133980(0x287);
        func_80020718(0x649);
        func_80020718(0x6C0);
    }
}
