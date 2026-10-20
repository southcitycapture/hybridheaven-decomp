#include "context.h"

extern u8 D_80248DC0[][3];

void func_80241010(u8 *arg0, u8 *arg1, u8 *arg2, u8 arg3) {
    u8 *temp_v0;

    if (arg3 >= 9) {
        arg3 = 0;
    }
    temp_v0 = D_80248DC0[arg3];
    *arg0 = temp_v0[0];
    *arg1 = temp_v0[1];
    *arg2 = temp_v0[2];
}
