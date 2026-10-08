#include "context.h"

extern s32 D_801E72FC;

s32 func_801E6050(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0xF) {
        D_801E72FC = 0;
        return 6;
    }
    return 5;
}
