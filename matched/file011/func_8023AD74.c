#include "context.h"

extern s32 func_801453CC(s32, s32, s32, u8, s32, s32, s32);

void func_8023AD74(void) {
    if (*(s32 *) &D_80240880 != 0) {
        func_801453CC(*(s32 *) &D_80240880, 0x100, 4, D_80240880.unk19, (s32) D_80240880.unk18, 0, 0);
    }
}
