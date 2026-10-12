#include "context.h"

extern s32 func_80005670();
extern u8 D_80044090[];
extern void func_8021D768(s32 arg0, s32 arg1);

void func_8021D72C(s32 arg0, s32 arg1) {
    func_80005670(arg0, D_80044090);
    func_800058DC(arg0, func_8021D768);
}
