#include "common.h"

struct func_8023466C_Struct {
    u8 pad[0xA3];
    s8 unkA3;
    u8 unkA4;
    s8 unkA5;
};

extern void func_80145310(s32, s32, s32);
extern void func_801453CC(s32, s32, s32, s32, s32, s32, s32);

void func_8023466C(struct func_8023466C_Struct *arg0, s32 *arg1) {
    s8 var_s0;

    var_s0 = 0;
    if (arg0->unkA3 > 0) {
        do {
            if (var_s0 == arg0->unkA5) {
                func_801453CC(arg1[var_s0], 0x200, 4, 0xB, 1, 4, 3);
            } else {
                func_80145310(arg1[var_s0], 0xD, 0xD);
            }
            var_s0 += 1;
        } while (var_s0 < arg0->unkA3);
    }
}
