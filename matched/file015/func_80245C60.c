#include "context.h"

extern u8 func_80245CE4[];

void func_80245C60(func_80245588_StructObj *arg0, s32 arg1) {
    if (arg0->counter++ == 5) {
        func_80133980(0x77);
    }
    if (func_801C3B5C() == 4) {
        arg0->counter = 0;
        func_800058DC(arg0, func_80245CE4);
    }
    func_80246598(arg0, arg1);
}
