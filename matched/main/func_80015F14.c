#include "context.h"

void func_80015F14(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s2 = 1;

    while (1) {
        switch ((u32)func_80016D50(2)) {
        case 0:
            if (func_80016CE4() == 0) {
                return;
            }
            if (func_80016CE4() == 0) {
                arg1 -= 2;
            } else {
                arg1 += 2;
            }
            break;
        case 1:
            arg1 -= 1;
            break;
        case 2:
            break;
        case 3:
            arg1 += 1;
            break;
        }
        if (arg1 < D_8008DC94) {
            arg2 += 1;
            if (arg2 >= D_8008DC98) {
                var_s2 = 0;
            }
            if (var_s2 != 0) {
                ((func_80015D9C_Struct *)arg0)->unk24(arg0, arg1, arg2, arg3);
            }
        } else {
            return;
        }
    }
}
