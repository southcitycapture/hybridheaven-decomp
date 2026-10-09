#include "context.h"

extern s32 func_80141D08(s32 a0);

u8 func_801423C8(u8 arg0, u8 arg1) {
    u8 var_v1;
    s32 sp20;
    s32 temp_v0;

    sp20 = func_8001F430(0xD00);
    temp_v0 = func_800031EC(arg0, 0, ((arg1 * 0xD00) + 0x100) & 0xFFFF, 0xD00, sp20);
    var_v1 = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = func_80141D08(sp20);
    }
    func_8001F540(sp20);
    return var_v1;
}
