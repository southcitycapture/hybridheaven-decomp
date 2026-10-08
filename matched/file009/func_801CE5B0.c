#include "context.h"

extern s32 func_80006088(s32);

typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;

void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1) {
    s32 var_s0;

    var_s0 = 0;
    if (arg0->unk94 > 0) {
        do {
            func_80006088(arg1[var_s0]);
            var_s0 = (var_s0 + 1) & 0xFFFF;
        } while (var_s0 < arg0->unk94);
    }
}
