#include "common.h"

struct func_801F5F18_StructDF70 {
    u8 pad[4];
    u32 unk4;
};

extern void D_8038BA70();
extern void func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern void func_8038BA8C();
extern u8 D_8038DDA8[];
extern u8 D_8038DD90[];
extern u8 D_8038DDC0[];
extern struct func_801F5F18_StructDF70 D_8038DF70;

s32 func_801F5F18(s32 arg0, s32 arg1) {
    func_801C2420(0x2D9, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D7, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDC0);
    D_8038BA70();
    D_8038DF70.unk4 = 0xE000;
    if (func_801C2570(0x2DD, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}
