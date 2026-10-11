#include "context.h"

extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DDD8[];
extern u8 D_8038DDF0[];
extern u8 D_8038DE08[];
extern u8 D_8038DE20[];
extern u8 D_8038DF70[];
extern void D_8038BA70(void);
extern void func_801C2420(s32, void *);
extern s32 func_801C2570(s32, void *);
extern void func_8038BA8C(void);

s32 func_801E3E00(s32 arg0, s32 arg1) {
    func_801C2420(0x259, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x25D, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x43F, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0xA4, D_8038DDD8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDF0);
    D_8038BA70();
    func_801C2420(0x37, D_8038DE08);
    D_8038BA70();
    func_801C2420(0x38, D_8038DE20);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 4) = 0x1000;
    if (func_801C2570(0x441, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x10) = 0x800;
    if (func_801C2570(0x440, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}
