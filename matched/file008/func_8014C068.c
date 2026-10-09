#include "context.h"
void *func_8014B7CC(s32);


s32 func_8014C068(s32 arg0) {
    u8 *temp_v0;
    s32 *arg_p;

    arg_p = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if ((temp_v0 != NULL) && (*temp_v0 & 2)) {
        return 1;
    }
    return 0;
}
