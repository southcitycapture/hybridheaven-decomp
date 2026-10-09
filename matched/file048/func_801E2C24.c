#include "context.h"

extern void func_801C2420(s32 a0, void *a1);
extern s32 func_801C2570(s32 a0, void *a1);
extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern void D_8038DD90(void);
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DF70[];

s32 func_801E2C24(s32 arg0, s32 arg1) {
    func_801C2420(0x46A, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x4D9, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x447, D_8038DDC0);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 0x4) = 0x4000;
    if (func_801C2570(0x46B, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x10) = 0x4000;
    if (func_801C2570(0x46C, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x1C) = 0x8000;
    if (func_801C2570(0x46D, D_8038DF70 + 0x18) != 0) {
        func_8038BA8C();
    }
    return 1;
}
