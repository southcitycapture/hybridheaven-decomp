#include "context.h"
extern void func_800058DC(void *a0, void (*a1)());
extern s32 func_8037E118(void *, s32);
extern s32 func_8037FED4;

extern s32 func_80126A0C(void *a0, s32 a1, s32 a2);

void func_8037FE88(void *arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x123, 0) != 0) {
        func_8037E118(arg0, arg1);
        func_800058DC(arg0, (void (*)())&func_8037FED4);
    }
}
