#include "context.h"

s32 func_801517CC();                                /* extern */

typedef struct func_80151790_Struct {
    u8 pad[0x91];
    u8 unk91;
} func_80151790_Struct;

s32 func_80151790(func_80151790_Struct *arg0) {
    s32 var_v0;

    if (func_801517CC() == 0) {
        goto set_one;
    }
    var_v0 = 0;
    if (arg0->unk91 == 0) {
        goto done;
    }
set_one:
    return 1;
done:
    return var_v0;
}
