#include "context.h"

s32 func_80002A94(s32);
extern s32 D_80037770[];
extern s32 D_80037780[];

void func_80002A04(void) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 != 4; var_s0++) {
        if (func_80002A94(var_s0 & 0xFF) == 0) {
            D_80037780[var_s0] = 1;
            D_80037770[var_s0] = 3;
        }
    }
}
