#include "context.h"
extern s32 D_801D8DF0[];

s32 func_801C2000(s32 arg0, s32 arg1) {
    return ((s32 *)D_801D8DF0[arg0])[arg1] != 0;
}
