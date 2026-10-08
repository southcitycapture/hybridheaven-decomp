#include "context.h"

extern s32 func_80117DA0();
extern void func_80117E58();
extern void func_80118BB0();

void func_80118B70(s32 arg0) {
    if (func_80117DA0() == 0) {
        func_80117E58();
        func_800058DC(arg0, func_80118BB0);
    }
}
