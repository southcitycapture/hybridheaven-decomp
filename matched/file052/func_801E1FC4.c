#include "common.h"

extern void D_8038BA70();
extern void func_801C2420();
extern s32 func_801C2570();
extern void func_8038BA8C();
extern s32 D_8038DD90[];
extern s32 D_8038DF70[];

s32 func_801E1FC4(s32 arg0, s32 arg1) {
    func_801C2420(0x470, D_8038DD90);
    D_8038BA70();
    D_8038DF70[1] = 0x800;
    if (func_801C2570(0x378, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70[4] = 0x1000;
    if (func_801C2570(0x471, &D_8038DF70[3]) != 0) {
        func_8038BA8C();
    }
    return 1;
}
