#include "context.h"

void func_80024918(void) {
    s32 var_v1;

    *((u8 *) D_800CBDA4 + 0x6) = (u8) (*((u8 *) D_800CBDA4 + 0x6) | 1);
    *((u8 *) D_800CBDA4 + 0x47) = (u8) (*((u8 *) D_800CBDA4 + 0x47) - 1);
    if (*((u8 *) D_800CBDA4 + 0x47) != 0) {
        var_v1 = *((u16 *) ((u8 *) D_800CBDA4 + 0x3A));
        var_v1 += *((s16 *) ((u8 *) D_800CBDA4 + 0x44));
        if (var_v1 < 0) {
            var_v1 = 0;
        } else if (var_v1 >= 0xFF01) {
            var_v1 = 0xFF00;
        }
        *((u16 *) ((u8 *) D_800CBDA4 + 0x3A)) = (u16) var_v1;
        return;
    }
    *((u16 *) ((u8 *) D_800CBDA4 + 0x3A)) = (u16) (*((u8 *) D_800CBDA4 + 0x46) << 8);
}
