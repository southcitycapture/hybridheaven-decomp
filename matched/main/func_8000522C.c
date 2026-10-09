#include "context.h"

s32 func_8001703C(s32);                             /* extern */
s32 func_80017064(s32);                             /* extern */

s32 func_8000522C(s32 arg0, s32 arg1) {
    return func_8001703C(func_80017064(arg0 & 0xFFFF)) + (arg1 & 0xFFFFFF);
}
