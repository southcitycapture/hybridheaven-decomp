#include "context.h"

extern void func_80141F28(s32 a0);

u8 func_80142450(u8 arg0, u8 arg1) {
    u8 sp27;
    s32 sp20;
    u8 temp_v0;

    sp20 = func_8001F430(0xD00);
    func_80141F28(sp20);
    temp_v0 = func_800032E0(arg0, 0, ((arg1 * 0xD00) + 0x100) & 0xFFFF, 0xD00, sp20);
    sp27 = temp_v0;
    func_8001F540(sp20);
    return sp27;
}
