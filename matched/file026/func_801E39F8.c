#include "context.h"
extern u8 D_8038DF70[];
extern void func_8038BA8C();
extern s32 func_801C2571();

s32 func_801E39F8(s32 arg0, s32 arg1) {
    func_801C2420(0xA3, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x25A, D_8038DD90 + 0x18);
    D_8038BA70();
    func_801C2420(0x25C, D_8038DD90 + 0x30);
    D_8038BA70();
    func_801C2420(0x25D, D_8038DD90 + 0x48);
    D_8038BA70();
    func_801C2420(0x25E, D_8038DD90 + 0x60);
    D_8038BA70();
    func_801C2420(0x25F, D_8038DD90 + 0x78);
    D_8038BA70();
    func_801C2420(0xA4, D_8038DD90 + 0x90);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DD90 + 0xA8);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 4) = 0x1000;
    if (func_801C2571(0x25B, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x10) = 0x4000;
    if (func_801C2571(0xA8,D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}
