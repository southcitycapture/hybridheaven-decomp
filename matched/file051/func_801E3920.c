#include "context.h"

extern s32 D_801E72AC;

s32 func_801E3920(s32 arg0, s32 arg1) {
    if (D_801E72AC >= 0x1F) {
        func_8038D28C(0x203);
        func_801C1000(3, 1);
        return 8;
    }
    D_801E72AC += 1;
    return 7;
}
