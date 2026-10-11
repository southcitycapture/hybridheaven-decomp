#include "common.h"

extern void func_80020BF8(s32);

void func_8038D2B0(s32 arg0) {
    s32 *p = &arg0;
    func_80020BF8(arg0 & 0xFFFF);
}
