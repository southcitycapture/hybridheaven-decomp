#include "common.h"

extern s32 func_8038D28C(s32 arg0);
extern s32 D_801E732C;

s32 func_801E4864(s32 arg0, s32 arg1) {
    if (D_801E732C == 0x12) {
        func_8038D28C(0x677);
    }
    D_801E732C = D_801E732C + 1;
    return 8;
}
