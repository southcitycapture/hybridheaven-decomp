#include "context.h"

extern void func_8001F74C();
extern s32 func_80126CC0(s32, void *);
extern void func_800058DC(s32, void *);
extern void func_80126EAC();
extern void func_80242E40();

void func_80242DF8(s32 arg0, s32 arg1) {
    func_8001F74C();
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80242E40);
    }
}
