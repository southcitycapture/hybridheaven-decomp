#include "common.h"

void func_80242F70(u8 *arg0) {
    *(u16 *) (arg0 + 0x6) = *(u16 *) (arg0 + 0x6) & 0xFFEF;
}
