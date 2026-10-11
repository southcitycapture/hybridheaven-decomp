#include "context.h"

extern s32 func_802039B0();
extern void func_800058DC(s32, void *);
extern void func_80241F3C();

void func_80241F08(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80241F3C);
    }
}
