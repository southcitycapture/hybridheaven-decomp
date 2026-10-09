#include "context.h"

extern s32 D_80037770[];
extern s32 D_80037780[];

s32 func_80002BAC(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    if (D_80037780[arg0] != 0) {
        D_80037770[arg0] = 3;
    }
    return 0;
}
