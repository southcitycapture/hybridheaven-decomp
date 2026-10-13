#include "context.h"

extern s32 D_801DEF70;

s32 func_801C2090(s32 arg0, s32 arg1) {
    return ((s32 *)(((s32 *)D_801D8DF0[arg0])[arg1] + (D_801DEF70 << 5)))[6];
}
