#include "context.h"

s32 func_801FBF48(s32 arg0, s32 arg1) {
    func_801C2420(0x2D9, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D7, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDC0);
    D_8038BA70();
    *(u32 *)((u8 *)&D_8038DF70 + 0x4) = 0xE000;
    if (func_801C2570(0x2DD, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(u32 *)((u8 *)&D_8038DF70 + 0x10) = 0x4000;
    if (func_801C2570(0xA8, (u8 *)&D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}
