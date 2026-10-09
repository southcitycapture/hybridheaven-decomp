#include "context.h"

extern u8 D_800CBB90[];
extern u8 D_800CBBD8[];

s32 func_80020D4C(s32 arg0) {
    return D_800CBBD8[arg0] + D_800CBB90[arg0];
}
