#include "common.h"
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern void D_8038C158();

s32 func_801E39DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x4C;
    }
    return 0x4B;
}
