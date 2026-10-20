#include "context.h"

extern void func_80246730(void);
extern void func_802461AC(s32, s32);

void func_80246160(func_80244874_Obj *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x2D) {
        func_80246730();
        func_800058DC(arg0, (void (*)(void)) func_802461AC);
    }
}
