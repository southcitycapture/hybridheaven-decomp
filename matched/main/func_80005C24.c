#include "context.h"

extern s32 func_80005CB0(void);
extern s32 D_80043394;
extern u16 D_80043398;

s32 func_80005C24(void) {
    if (D_80043394 == 0x43781902) {
        return (D_80043398 - func_80005CB0()) & 0xFFFF;
    }
    return 0;
}
