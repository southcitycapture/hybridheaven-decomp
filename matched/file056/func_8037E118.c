#include "context.h"

extern u8 D_80006214(void *);

s32 func_8037E118(void *arg0, s32 arg1) {
    s16 sp5E;
    s32 pad;
    u8 r;
    u8 i;

    r = D_80006214(arg0);
    func_80146208((s32)arg0, &sp5E, 0x26, 0x70, 0x25, 0x60, 0x14, 0, 0, 0xFF, 0x20E, 6);
    func_80146208((s32)arg0, &sp5E, 0x66, 0x70, 0x28, 0x60, 0x10, 0, 0, 0xFF, 0x21E, 0);
    func_80145348((s32)arg0, 1, 0);
    D_8038A99C = ((s32 *)arg1)[r];
    r = D_80006214(arg0);
    for (i = 0; i < 4; i++) {
        func_80146208((s32)arg0, &sp5E, 0x66, 0x78, i * 30 + 0x4B, 0x50, 0x10, 0, 0, 0xFF, 0x21E, 1);
        func_80145348((s32)arg0, 2, 0);
    }
    D_8038A9B0 = ((s32 *)arg1)[r];
    r = D_80006214(arg0);
    for (i = 0; i < 4; i++) {
        func_80146208((s32)arg0, &sp5E, 0x66, 0x78, i * 30 + 0x4B, 0x50, 0x10, 0, 0, 0xFF, 0x21E, D_80388C00[i]);
        func_80145348((s32)arg0, 2, 0);
    }
    D_8038A9B4 = ((s32 *)arg1)[r];
    func_8037DF24(arg0);
}
