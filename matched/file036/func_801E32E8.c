#include "common.h"

extern void D_8038BA70(void);
extern void func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern void func_8038BA8C(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern s32 D_8038DF70[];

s32 func_801E32E8(s32 arg0, s32 arg1) {
    func_801C2420(0xA2, D_8038DD90);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDA8);
    D_8038BA70();
    D_8038DF70[1] = 0x1000;
    if (func_801C2570(0x442, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70[4] = 0x4000;
    if (func_801C2570(0xA8, &D_8038DF70[3]) != 0) {
        func_8038BA8C();
    }
    D_8038DF70[7] = 0x6000;
    if (func_801C2570(0x472, &D_8038DF70[6]) != 0) {
        func_8038BA8C();
    }
    return 1;
}
