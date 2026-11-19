#include "common.h"


extern u8 D_80181590[];

void func_80147AA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
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
    (D_80181590 + arg0 * 24)[4] = arg1;
    (D_80181590 + arg0 * 24)[0] = arg1;
    (D_80181590 + arg0 * 24)[5] = arg2;
    (D_80181590 + arg0 * 24)[1] = arg2;
    (D_80181590 + arg0 * 24)[6] = arg3;
    (D_80181590 + arg0 * 24)[2] = arg3;
}
