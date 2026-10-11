#include "context.h"
extern void func_800058DC(void *, void *);
void func_802413A8(s32 arg0, s32 arg1);

extern s32 func_802039B0();

void func_80241374(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_802413A8);
    }
}
