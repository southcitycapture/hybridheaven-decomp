#include "context.h"

extern s16 D_8017DD8C;
extern s16 D_8017DD8E;

void func_80152CC8(u8 arg0, u16 arg1) {
    s16 *var_v0;

    if (arg0 == 0) {
        var_v0 = &D_8017DD8C;
    } else {
        var_v0 = &D_8017DD8E;
    }
    *var_v0 = arg1;
}
