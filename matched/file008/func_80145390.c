#include "common.h"
extern s16 D_801BEC88[];


void func_80145390(s16 arg0) {
    s32 i;

    for (i = 0; i < 5; i = (i + 1) & 0xFF) {
        D_801BEC88[i] = arg0;
    }
}
