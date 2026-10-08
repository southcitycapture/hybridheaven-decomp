#include "context.h"

s32 func_80126880(u16 arg0) {
    if ((D_801BBBF0.unk182 != 0) || (D_801BBBF0.unk187 != 0)) {
        return 0;
    }
    D_801BBBF0.unk187 = 1;
    D_801BBBF0.unk186 = 1;
    D_801BBBF0.unk184 = arg0;
    return 1;
}
