#include "context.h"

struct func_8014B420_Struct;
extern struct func_8014B420_Struct *D_8014B7CC(u16);

s32 func_8014B28C(u16 arg0, u8 arg1) {
    u8 *p = (u8 *)D_8014B7CC(arg0);
    if (p != NULL) {
        p[1] = arg1;
        return 1;
    }
    return 0;
}
