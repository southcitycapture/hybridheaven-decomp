#include "context.h"

void func_801CCEC8(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    u8 *temp_v0;

    if (arg1 == -0x80) {
        arg1 = 0x7F;
    }
    if (arg2 == -0x80) {
        arg2 = 0x7F;
    }
    if (arg3 == -0x80) {
        arg3 = 0x7F;
    }
    if (arg1 == 0) {
        arg1 = 1;
    }
    temp_v0 = (u8 *) &D_801E0BC0 + arg0 * 16;
    if (arg2 == 0) {
        arg2 = 1;
    }
    if (arg3 == 0) {
        arg3 = 1;
    }
    temp_v0[0x10] = arg1;
    temp_v0[0x11] = arg2;
    temp_v0[0x12] = arg3;
    temp_v0[0x13] = 0;
}
