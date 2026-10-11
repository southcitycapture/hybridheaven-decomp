#include "context.h"
extern void D_8038C158(void);
extern s32 func_801C0B8C(u64);

s32 func_801E234C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        D_8038C158();
        return 0x15;
    }
    return 20;
}
