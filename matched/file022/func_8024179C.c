#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_802039B0();
void func_802417D0(void *arg0, s32 arg1);


void func_8024179C(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_802417D0);
    }
}
