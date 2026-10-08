#include "common.h"

extern s32 func_800031EC(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_8001F430(s32 size);
extern void func_8001F540(s32 ptr);
extern s32 func_8014217C(u8 arg0, s32 arg1);

u8 func_801424D0(u8 arg0, u8 arg1, u8 arg2) {
    u8 sp27;
    s32 sp20;
    s32 ret;

    sp20 = func_8001F430(0xD00);
    ret = func_800031EC(arg0, 0, ((arg1 * 0xD00) + 0x100) & 0xFFFF, 0xD00, sp20);
    sp27 = ret;
    if (ret == 0) {
        sp27 = func_8014217C(arg2, sp20);
    }
    func_8001F540(sp20);
    return sp27;
}
