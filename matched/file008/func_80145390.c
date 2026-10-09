#include "context.h"

extern s16 D_801BEC88[];

void func_80145390(s32 arg0) {
    s32 *temp_ptr;
    s32 var_v0;

    temp_ptr = &arg0;
    arg0 = (s16)arg0;
    for (var_v0 = 0; var_v0 < 5; var_v0 = (var_v0 + 1) & 0xFF) {
        D_801BEC88[var_v0] = arg0;
    }
}
