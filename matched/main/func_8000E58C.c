#include "context.h"

s32 func_8000511C(u16);
extern u32 *D_80171CEC[];

s64 func_8000E58C(s32 arg0) {
    s32 ret;

    ret = func_8000511C(**(u16 **) D_80171CEC[((u32) (arg0 & 0xFFFF0000) >> 0x10) & 0xFFFF]);
    return ret;
}
