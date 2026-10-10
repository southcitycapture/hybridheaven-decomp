#include "context.h"

extern u8 D_80388C00[];

s32 func_8037DCC8(void *arg0, s16 arg1, s16 arg2) {
    u8 sp3F;
    u8 sp3E;

    sp3E = func_80006214();
    func_80146208((s32) arg0, &sp3F, 0x66, arg1, arg2, 0x50, 0x10, 0, 0, 0xFF, 0x21E, D_80388C00[*((s8 *) arg0 + 0x97)]);
    func_80145348((s32) arg0, 1, 0);
    return D_8008DA88[sp3E];
}
