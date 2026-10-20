#include "common.h"
extern s32 func_801C0B8C(u64 time);
extern s32 func_801C0B8C(u64 time);

extern void D_8038C158(void);

s32 func_801E25DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x16;
    }
    return 0x15;
}
