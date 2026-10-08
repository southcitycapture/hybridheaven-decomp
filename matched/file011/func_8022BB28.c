#include "common.h"

extern void func_80232E94(void);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC20;

s32 func_8022BB28(void) {
    u8 *var_v0;
    u8 temp_v1;

    temp_v1 = D_801BCC20;
    if (temp_v1 == 0) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    temp_v1 = var_v0[0x2D8];
    if (((temp_v1 == 0xC) || (temp_v1 == 0x13)) && (var_v0[0x2FA] != 0)) {
        var_v0[0x2FA] = 0;
        if (var_v0[0x2DA] != 0) {
            var_v0[0x304] = var_v0[0x304] + 1;
            func_80232E94();
        }
        return 1;
    }
    return 0;
}
