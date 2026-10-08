#include "context.h"

extern s32 D_801FD458;
extern s32 D_801FD45C;

s32 func_801EF854(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        D_801FD458 = 0;
        D_801FD45C = 0;
        return 1;
    }
    return 0;
}
