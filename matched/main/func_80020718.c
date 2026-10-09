#include "context.h"

extern s32 func_800207D0(s32, s32, s32);

void func_80020718(s32 arg0) {
    s32 *p = &arg0;
    func_800207D0(arg0 & 0xFFFF, 0, 0);
}
