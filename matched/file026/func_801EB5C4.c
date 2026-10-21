#include "context.h"
extern void func_8038BA8C(void);
extern s32 D_8038DF70[];
extern s32 D_801C2570(s32, void *);
s32 func_801EB5C4(s32 arg0, s32 arg1) {
    func_801C2420(0xA6, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x261, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x262, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0xA9, D_8038DDD8);
    D_8038BA70();
    func_801C2420(3, D_8038DDF0);
    D_8038BA70();
    D_8038DF70[1] = 0x4000;
    if (D_801C2570(0xAA, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}
