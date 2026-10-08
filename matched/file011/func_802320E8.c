#include "common.h"

extern u8 D_801BBBF0[];

u8 func_802320E8(u8 *arg0) {
    if (arg0 == D_801BBBF0 + 0x7E8) {
        if ((*(u8 **)(D_801BBBF0 + 0x448))[0x74] == 3) {
            return (*(u8 **)(arg0 + 0x334))[0x56];
        }
    }
    return 0;
}
