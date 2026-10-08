#include "common.h"

struct func_801E3018_Struct {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[8];
    s32 unk10;
};

extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern void func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 func_8038DDD4[];
extern struct func_801E3018_Struct D_8038DF70;

s32 func_801E3018(s32 arg0, s32 arg1) {
    func_801C2420(0x444, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x263, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0xA7, &func_8038DDD4[4]);
    D_8038BA70();
    D_8038DF70.unk4 = 0x3000;
    if (func_801C2570(0x43C, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk10 = 0xE000;
    if (func_801C2570(0x2DD, (u8 *)&D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}
