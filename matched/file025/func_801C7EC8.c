#include "common.h"

extern s32 D_801DA680;
extern s32 D_801E0550[];

s32 func_801C7EC8(s32 arg0) {
    if (arg0 >= 0x20) {
        return 0;
    }
    if (arg0 >= D_801DA680) {
        return 0;
    }
    D_801E0550[arg0] = 0;
    return 1;
}
