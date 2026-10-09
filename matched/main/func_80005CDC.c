#include "context.h"

struct func_80005CDC_Struct {
    u8 pad0[0xB6];
    u16 unkB6;
    u8 padB8[0x4];
    s32 unkBC;
    u8 padC0[0x4];
    u8 *unkC4;
};

extern struct func_80005CDC_Struct D_800892B0;

s32 func_80005CDC(void) {
    s32 var_a0;
    s32 var_v0;
    u8 *var_v1;

    var_v1 = D_800892B0.unkC4;
    var_a0 = D_800892B0.unkBC;
    var_v0 = 0;
    if ((s32) D_800892B0.unkB6 > 0) {
        do {
            var_v0 += 1;
            if (*var_v1 != 0) {
                var_v1 += 1;
                var_a0 += 0x50;
            } else {
                *var_v1 = 1;
                return var_a0;
            }
        } while (var_v0 < (s32) D_800892B0.unkB6);
    }
    return 0;
}
