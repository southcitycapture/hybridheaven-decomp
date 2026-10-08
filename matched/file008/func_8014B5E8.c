#include "context.h"

extern u8 D_801BED38;
extern u8 D_801BEF38;

void *func_8014B5E8(void) {
    u8 *var_v1;

    for (var_v1 = &D_801BED38; ; ) {
        if (!(var_v1[0x0] & 1)) {
            return var_v1;
        }
        if (!(var_v1[0x10] & 1)) {
            return var_v1 + 0x10;
        }
        if (!(var_v1[0x20] & 1)) {
            return var_v1 + 0x20;
        }
        if (!(var_v1[0x30] & 1)) {
            return var_v1 + 0x30;
        }
        var_v1 += 0x40;
        if (var_v1 == &D_801BEF38) {
            return NULL;
        }
    }
}
