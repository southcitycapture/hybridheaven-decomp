#include "context.h"
void *func_800058DC(void *, void *);
void func_80384BF8(s32 arg1, s32 arg2);

s32 func_80126A0C(s32, s32, s32);

void func_80384BB8(s32 arg0, void *arg1) {
    if (func_80126A0C(arg0, 0xC1, 0) != 0) {
        func_800058DC(arg0, &func_80384BF8);
    }
}
