#include "context.h"

extern s32 D_80038FF0[];

s32 func_80005144(u16 arg0) {
    return D_80038FF0[arg0] & 0x7FFFFFFF & 0x7FFFFFFF;
}
