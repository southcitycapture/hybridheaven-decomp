#include "common.h"
extern void *func_8014B7CC(s32);


s32 func_8014C0F0(u16 arg0) {
    u8 *temp_v0;
    u8 temp_v1;

    temp_v0 = func_8014B7CC(arg0);
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0;
        if ((temp_v1 & 2) && (temp_v1 & 8)) {
            return 1;
        }
    }
    return 0;
}
