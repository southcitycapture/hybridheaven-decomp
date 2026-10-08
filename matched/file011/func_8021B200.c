#include "context.h"

extern void func_800172F4();
extern void func_80016E40(s32);
extern void func_800058DC(void *obj, void *fn);
extern void func_8021B240();

void func_8021B200(s32 arg0, s32 arg1) {
    func_800172F4();
    func_80016E40(0x36FC0);
    func_800058DC((void *)arg0, func_8021B240);
}
