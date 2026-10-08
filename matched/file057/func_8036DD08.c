#include "context.h"

extern void func_800058DC(s32, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8036DF48(void);

void func_8036DD08(s32 arg0, s32 arg1) {
    u8 *var_v0;

    if (arg0 == D_801BBCCC) {
        var_v0 = D_801BC3D8;
    } else {
        var_v0 = D_801BC03C;
    }
    if ((((u32) *(u32 *) (var_v0 + 0x30)) << 0xB) >> 0x1E != 0) {
        func_800058DC(arg0, func_8036DF48);
    }
}
