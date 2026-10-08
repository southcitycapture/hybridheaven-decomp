#include "common.h"

void func_80201DD4(void *arg0, s32 arg1) {
    u16 *flags = (u16 *) ((u8 *) arg0 + 0xA8);

    *flags = *flags | 8;
}
