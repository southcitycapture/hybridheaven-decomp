#include "context.h"

#define arg1 ((u8 **)a1)
void func_8037E38C(void *arg0, s32 a1) {
    s16 sp5E;
    u8 sp5D;
    u8 i;
    extern u8 func_80006214();

    func_80146208((s32)arg0, &sp5E, 0x66, 0x78, 0x28, 0x50, 0x10, 0, 0, 0xFF, 0x21E, 1);
    func_80145348((s32)arg0, 0x10, 0x11);
    D_8038A9B0 = (s32)arg1[func_80006214(arg0) - 1];
    func_80146208((s32)arg0, &sp5E, 0x66, 0x78, 0x28, 0x50, 0x10, 0, 0, 0xFF, 0x21E, D_80388C00[3]);
    func_80145348((s32)arg0, 1, 0);
    D_8038A9B4 = (s32)arg1[func_80006214(arg0) - 1];
    sp5D = func_80006214(arg0);
    for (i = 0; i < 5; i++) {
        func_80146208((s32)arg0, &sp5E, 0x66, 0x78, i * 0x16 + 0x4B, 0x50, 0x10, 0, 0, 0xFF, 0x21E, 1);
        func_80145348((s32)arg0, 2, 0);
    }
    D_8038A9B8 = (void *)arg1[sp5D];
    sp5D = func_80006214(arg0);
    for (i = 0; i < 5; i++) {
        func_80146208((s32)arg0, &sp5E, 0x66, 0x78, i * 0x16 + 0x4B, 0x50, 0x10, 0, 0, 0xFF, 0x21E, D_80388C00[i]);
        (*(u8 **)(a1 + func_80006214(arg0) * 4 - 4))[0x22] = 0;
    }
    D_8038A9BC = (void *)arg1[sp5D];
    func_8037DFDC(arg0);
}
#undef arg1
