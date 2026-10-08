#include "common.h"

void func_80131CC4(u16 *arg0, u16 *arg1, u16 *arg2) {
    *arg1 = (0x200 - *arg1) & 0x3FF;
    *arg0 = (*arg0 + 0x200) & 0x3FF;
    *arg2 = (*arg2 + 0x200) & 0x3FF;
}
