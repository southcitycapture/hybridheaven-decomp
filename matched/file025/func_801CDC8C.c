#include "context.h"

extern s32 func_801BF968(void);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_801CDCD0(void);
extern s32 D_801DABCC;

void func_801CDC8C(s32 arg0, s32 arg1) {
    D_801DABCC = 1;
    if (func_801BF968() != 0) {
        func_800058DC(arg0, func_801CDCD0);
    }
}
