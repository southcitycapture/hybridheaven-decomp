#include "context.h"

typedef struct func_8000FCD0_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8000FCD0_Struct;

void func_8000FCD0(u16 *arg0, func_8000FCD0_Struct *arg1, func_8000FCD0_Struct *arg2) {
    arg2[*arg0] = *arg1;
    *arg0 += 1;
}
