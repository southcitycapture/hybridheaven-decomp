#include "common.h"

extern void func_80020718(s32 arg0);
extern void func_801FC720(s32 arg0, s32 arg1, s32 arg2);

void func_801D7398(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 2) {
        func_80020718(0x6BA);
        func_801FC720(0x6AA, 2, 1);
    }
}
