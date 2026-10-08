#include "context.h"

extern s32 D_801DAB20;

s32 func_801CCE0C(s32 arg0) {
    if (arg0 >= 6) {
        D_801DAB20 = 4;
        return 0;
    }
    if (arg0 < 0) {
        D_801DAB20 = 0;
        return 0;
    }
    D_801DAB20 = arg0;
    return 1;
}
