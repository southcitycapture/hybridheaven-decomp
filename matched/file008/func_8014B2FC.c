#include "context.h"

struct func_8014B420_Struct;
extern struct func_8014B420_Struct *D_8014B7CC(u16);

s32 func_8014B2FC(arg0, arg1)
    u16 arg0;
    u8 arg1;
{
    u8 *temp_v0;

    temp_v0 = (u8 *)D_8014B7CC(arg0);
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
        return 1;
    }
    return 0;
}
