#include "context.h"

extern s32 func_801CE284();
extern s32 D_801E6A58;

s32 func_801E48B4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        D_801E6A58 = 0;
        return 6;
    }
    return 5;
}
