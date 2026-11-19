#include "common.h"


s32 func_80148124(s32 arg0, s32 arg1) {
    s32 *p = &arg0;
    return (p[1] * 4 + p[0]) & 0xFF;
}
