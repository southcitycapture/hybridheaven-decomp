#include "context.h"
extern void func_800058DC(s32, void *);
void func_80387F10(s32 arg1, s32 arg2);

s32 func_80126A0C(s32, s32, s32);

void func_80387ED0(s32 arg0, void *arg1) {
    if (func_80126A0C(arg0, 0x12F, 0) != 0) {
        func_800058DC(arg0, &func_80387F10);
    }
}
