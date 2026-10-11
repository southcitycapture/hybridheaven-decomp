#include "common.h"

extern s32 D_801DA698;
extern s32 D_801E05D0[];

s32 func_801C8050(s32 arg0) {
    if (arg0 >= 0x20) {
        return 0;
    }
    if (arg0 >= D_801DA698) {
        return 0;
    }
    D_801E05D0[arg0] = 0;
    return 1;
}
