#include "context.h"

extern s32 func_8001F430(s32 size);
extern void func_8001F540(s32 ptr);
extern s32 func_800031EC(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80141A74(s32 a0, s32 a1);

u8 func_801422E4(u8 arg0, s32 arg1) {
    u8 var;
    s32 sp20;
    s32 temp;

    sp20 = func_8001F430(0x100);
    temp = func_800031EC(arg0, 0, 0, 0x100, sp20);
    var = temp;
    if (temp == 0) {
        var = func_80141A74(arg1, sp20);
    }
    func_8001F540(sp20);
    return var;
}
