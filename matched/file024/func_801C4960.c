#include "context.h"

extern u8 D_801BBF0A[];
extern u8 D_801CEE74[];
extern u8 D_801CEE80[];
extern u8 D_801CEE8C[];
extern u8 D_801CEE98[];
extern u8 D_801CEEA4[];
extern u8 D_801CEEA8[];
extern u8 D_801CEEAC[];
extern void func_801C4AA8();

void func_801C4960(s32 arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    if (D_801BBF0A[0x32] == 0) {
        var_v0 = 2;
        var_v1 = 6;
        D_801CC8C8 = 0;
    } else {
        var_v0 = 6;
        var_v1 = 2;
        D_801CC8C8 = 1;
    }
    func_8001B204(0, 0x7D0, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEE74);
    func_8001B204(1, 0x7D0, 0x8A, D_801CEE80, var_v0);
    func_8001B204(2, 0x7D0, 0x94, D_801CEE8C, var_v1);
    func_8001B204(3, 0x7D0, 0x9E, D_801CEE98);
    func_8001B204(4, 0, 0, D_801CEEA4);
    func_8001B204(5, 0, 0, D_801CEEA8);
    func_8001B204(6, 0, 0, D_801CEEAC);
    func_800058DC(arg0, func_801C4AA8);
}
