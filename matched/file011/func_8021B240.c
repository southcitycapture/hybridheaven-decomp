#include "context.h"

extern s32 func_80126A0C(s32, s32, s32);
extern void func_800058DC(void *obj, void *fn);
extern void func_8021B280();

void func_8021B240(s32 arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x39, 1) != 0) {
        func_800058DC((void *)arg0, func_8021B280);
    }
}
