#include "context.h"

s32 func_801EACFC(s32 arg0, s32 arg1) {
    func_801C2420(0x2D2, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D4, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDC0);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x1800;
    if (func_801C2570(0x2DC, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}
