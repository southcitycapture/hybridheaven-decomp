#include "context.h"

void func_802300F0(u8 *arg0) {
    u8 temp_t6;
    u8 temp_v0;

    temp_v0 = arg0[0x396];
    if (temp_v0 != 0) {
        temp_t6 = temp_v0 - 1;
        arg0[0x396] = temp_t6;
        if (!(temp_t6 & 0xFF)) {
            arg0[0x30] = (u8) (arg0[0x30] & 0xFFE1);
        }
    }
}
