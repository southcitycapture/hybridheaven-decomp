#include "context.h"
void func_800058DC(void *, void (*)());
void func_80244458(void *arg0, s32 *arg1);

extern s32 func_80129554(s32, s32, s32);

void func_80244418(s32 arg0, s32 arg1) {
    if (func_80129554(arg0, 0xFF, 64) != 0) {
        func_800058DC((void *)arg0, func_80244458);
    }
}
