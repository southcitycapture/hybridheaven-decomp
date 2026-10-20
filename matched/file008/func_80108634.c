#include "context.h"

extern void func_80109560(f32, f32);

void func_80108634(f32 arg0, f32 arg1, s32 arg2) {
    D_801BBAD4 = (void (*)(void)) func_80108664;
    func_80109560(arg0, arg1);
}
