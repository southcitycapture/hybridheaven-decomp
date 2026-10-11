#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_802039B0();

extern void func_80241B24();

void func_80241AF0(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80241B24);
    }
}
