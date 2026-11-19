#include "common.h"


extern u8 D_802407DC[];

s32 func_80226980(u8 arg0) {
    if (D_802407DC[arg0] != 0) {
        return 1;
    }
    return 0;
}
