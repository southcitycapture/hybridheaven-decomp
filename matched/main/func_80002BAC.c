#include "common.h"


extern s32 D_80037770[];
extern s32 D_80037780[];

s32 func_80002BAC(u8 arg0) {
    if (D_80037780[arg0] != 0) {
        D_80037770[arg0] = 3;
    }
    return 0;
}
