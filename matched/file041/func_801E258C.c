#include "context.h"
extern void D_8038C158(void);
extern s32 func_801C0B8C(u64 time);


s32 func_801E258C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x989680) != 0) {
        D_8038C158();
        return 0x19;
    }
    return 0x18;
}
