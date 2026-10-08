#include "context.h"

s32 func_8011B260(void) {
    if (D_801BBBF0.unk254 == 2 && D_801BBBF0.unk255 == 8 && D_801BBBF0.unk256 == 1) {
        return 0;
    }
    return D_801BBBF0.unk256 + (D_801BBBF0.unk254 * 0x2710) + (D_801BBBF0.unk255 * 0x64);
}
