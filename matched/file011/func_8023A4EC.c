#include "common.h"


extern u8 D_802408B8[];

s32 func_8023A4EC(u8 arg0) {
    if (D_802408B8[arg0] != 0) {
        return 1;
    }
    return 0;
}
