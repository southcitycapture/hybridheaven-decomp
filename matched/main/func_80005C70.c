#include "context.h"

extern s32 func_80005CB0(void);
extern s32 D_80043394;

s32 func_80005C70(void) {
    if (D_80043394 == 0x43781902) {
        return func_80005CB0();
    }
    return 0;
}
