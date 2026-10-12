#include "context.h"

extern s32 D_80089470;

s32 func_800044BC(s32 arg0) {
    s32 sp18;
    s32 temp_a1;

    temp_a1 = (D_80089470 + 7) & ~7;
    sp18 = temp_a1;
    D_80089470 = func_8000469C(arg0, temp_a1);
    return temp_a1;
}
