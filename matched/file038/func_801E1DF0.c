#include "context.h"
extern void D_8038C158(void);
extern s32 func_801C0B8C(u64);

s32 func_801E1DF0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        D_8038C158();
        return 4;
    }
    return 3;
}
