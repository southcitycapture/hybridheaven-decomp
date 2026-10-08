#include "context.h"

extern void func_801D1258(s32 a0);
extern f32 D_801FC898;
extern f32 D_801FD478;

s32 func_801ED1E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x035B11E0) != 0) {
        func_801D1258(0);
        func_801CC470(1, 0x01B8000E, 2, 0x1100, 2.0f);
        return 0xD;
    }
    D_801FD478 += D_801FC898;
    *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)&func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = (s16) (s32) ((D_801FD478 * 2048.0f) / 90.0f);
    return 0xC;
}
