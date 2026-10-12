#include "context.h"
extern void D_8038BA70(void);
extern u8 D_8038DD90[];

extern void func_8038BA8C(void);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DDA8[];
extern u8 D_8038DF70[];

s32 func_801E3BA0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(2)->unkC <= 0) {
        return 0;
    }
    func_801C2420(0x261, D_8038DD90);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDA8);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 4) = 0x3000;
    if (func_801C2570(0x43C, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x10) = 0x1800;
    if (func_801C2570(0x43D, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}
