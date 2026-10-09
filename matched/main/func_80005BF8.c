#include "context.h"

extern s32 D_80043394;
extern u16 D_80043398;

u16 func_80005BF8(void) {
    if (D_80043394 == 0x43781902) {
        return D_80043398;
    }
    return 0U;
}
