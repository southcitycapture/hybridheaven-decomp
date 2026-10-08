#include "common.h"

extern u8 D_8018E2FC[];
extern u8 D_8018E300[];

u8 *func_8013D140(s32 arg0) {
    s32 *p = &arg0;

    arg0 &= 0xFF;
    if (arg0 < 0xE) {
        return D_8018E2FC;
    }
    return D_8018E300;
}
