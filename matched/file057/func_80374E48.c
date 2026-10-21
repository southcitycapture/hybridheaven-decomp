#include "context.h"

s32 func_80374E48(s32 arg0, u16 *arg1, u8 arg2) {
    u32 t = arg2;
    if (arg1 == NULL) {
        return 0;
    }
    return func_80374260(arg0, arg1[0], arg1[1], t);
}
