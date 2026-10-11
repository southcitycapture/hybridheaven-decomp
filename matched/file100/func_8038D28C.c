#include "common.h"

extern void func_80020718(s32);

void func_8038D28C(s32 arg0) {
    s32 *p = &arg0;
    func_80020718(arg0 & 0xFFFF);
}
