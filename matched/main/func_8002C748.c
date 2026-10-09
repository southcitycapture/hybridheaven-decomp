#include "context.h"

extern void func_80026890(s32);
extern void func_800268C0(s32, s32);

void func_8002C748(s32 arg0, s32 arg1) {
    func_80026890(arg1);
    func_800268C0(arg1, arg0 + 0x14);
}
