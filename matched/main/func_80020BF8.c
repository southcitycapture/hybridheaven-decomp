#include "context.h"

extern void func_80020C20(s32, s32);

void func_80020BF8(s32 arg0) {
    s32 *p = &arg0;
    func_80020C20(arg0 & 0xFFFF, 0);
}
