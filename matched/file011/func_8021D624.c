#include "context.h"

extern void func_800172F4();
extern void func_80016E40(s32);
extern void func_8021D664();

void func_8021D624(s32 arg0, s32 arg1) {
    func_800172F4();
    func_80016E40(0x1A000);
    func_800058DC((void *)arg0, (void *)func_8021D664);
}
