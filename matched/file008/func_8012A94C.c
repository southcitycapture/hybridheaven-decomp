#include "context.h"

extern void func_8012A7F4(s32, s32, s32, s16);

void func_8012A94C(s32 arg0, s16 arg1) {
    struct func_8012A72C_Vec *temp_v0;

    temp_v0 = D_801BBCD0->vec;
    func_8012A7F4(arg0, *(s32 *)&temp_v0->x, *(s32 *)&temp_v0->y, arg1);
}
