#include "context.h"

extern s32 func_800178E8();
extern void func_80020718(s32);
extern void func_80248190();

void func_8024814C(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80020718(7);
        func_800058DC(arg0, func_80248190);
    }
}
