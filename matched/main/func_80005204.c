#include "context.h"

extern s32 func_8001703C(s32);
extern s32 func_80017064(s32);

void func_80005204(s32 arg0) {
    func_8001703C(func_80017064(arg0 & 0xFFFF));
}
