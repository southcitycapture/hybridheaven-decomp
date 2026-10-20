#include "context.h"

extern u16 D_80037A30[];

u8 func_800051A4(u32 arg0) {
    s32 i;

    i = 0;
    if (arg0 == 0) {
        return i;
    }
    if (D_80037A30[0] != 0) {
        do {
            if (arg0 < D_80037A30[i]) {
                return ((u8 *)&D_80037A30[i])[3];
            }
            i += 2;
        } while (D_80037A30[i] != 0);
    }
    return 0xFF;
}
