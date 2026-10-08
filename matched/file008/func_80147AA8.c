#include "context.h"

extern u8 D_80181590[];

void func_80147AA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_v0;

    if (&arg0 == NULL) {
        arg0 = 0;
    }
    if (&arg1 == NULL) {
        arg1 = 0;
    }
    if (&arg2 == NULL) {
        arg2 = 0;
    }
    if (&arg3 == NULL) {
        arg3 = 0;
    }
    arg0 = arg0 & 0xFF;
    temp_v0 = D_80181590 + arg0 * 24;
    temp_v0[4] = arg1;
    temp_v0[0] = arg1;
    temp_v0[5] = arg2;
    temp_v0[1] = arg2;
    temp_v0[6] = arg3;
    temp_v0[2] = arg3;
}
