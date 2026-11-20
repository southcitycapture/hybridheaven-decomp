#include "common.h"
extern s32 func_8000469C(s32, s32);


extern s32 D_80089470;

s32 func_800044BC(s32 arg0) {
    s32 new_end;
    s32 temp_a1;

    temp_a1 = (D_80089470 + 7) & ~7;
    new_end = func_8000469C(arg0, temp_a1);
    D_80089470 = new_end;
    return temp_a1;
}
