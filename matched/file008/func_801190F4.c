#include "common.h"

extern s32 func_80117DA0();
extern void func_80117E58();
extern void func_800058DC();
extern void func_8011913C();

void func_801190F4(s32 arg0) {
    if (func_80117DA0() == 0) {
        func_80117E58();
        func_800058DC(arg0, func_8011913C);
    }
}
