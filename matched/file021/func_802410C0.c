#include "context.h"
extern void func_800058DC(void *, void *);

extern s32 func_802039B0();
extern void func_802410F4(s32 arg0, s32 arg1);

void func_802410C0(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_802410F4);
    }
}
