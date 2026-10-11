#include "context.h"
extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern s32 func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DF70[];

s32 func_801E1EB0(s32 arg0, s32 arg1) {
    func_801C2420(0x463, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x464, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x46E, D_8038DDC0);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x2800;
    if (func_801C2570(0x46F, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}
