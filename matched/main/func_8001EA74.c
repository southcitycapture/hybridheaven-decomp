#include "context.h"

void func_8001EA74(void) {
    if ((D_801BBBF0.unk15D & 0x70) == 0x80) {
        D_801BBBF0.unk156 = 1;
        *(s16 *)&D_801BBBF0.pad[0x154] = 1;
    }
}
