#include "context.h"

extern void D_8038BA70(void);
extern void func_801C2420(s32, void *);
extern s32 func_801C2570(s32, void *);
extern void func_8038BA8C(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 func_8038DDD4[];
extern u8 D_8038DE08[];
extern u8 D_8038DF70[];

s32 func_801E3DCC(s32 arg0, s32 arg1) {
    func_801C2420(0x263, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x443, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0x444, func_8038DDD4 + 4);
    D_8038BA70();
    func_801C2420(0x445, func_8038DDD4 + 0x1C);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DE08);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x3000;
    if (func_801C2570(0x43C, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    ((s32 *)D_8038DF70)[4] = 0xE000;
    if (func_801C2570(0x2DD, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}
