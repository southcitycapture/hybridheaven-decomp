#include "context.h"

extern u8 func_80006214(void);
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_8008DA88[];

s32 func_8037DC30(s32 arg0, s16 arg1, s16 arg2) {
    s8 sp3F;
    u8 sp3E;

    sp3E = func_80006214();
    func_80146208(arg0, &sp3F, 0x66, arg1, arg2, 0x50, 0x10, 0, 0, 0xFF, 0x21E, 1);
    func_80145348(arg0, 0x10, 0x11);
    return D_8008DA88[sp3E];
}
