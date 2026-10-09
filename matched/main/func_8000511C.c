#include "context.h"

extern u32 D_80038FEC[];

s32 func_8000511C(u16 arg0) {
    return D_80038FEC[arg0] & 0x7FFFFFFF;
}
