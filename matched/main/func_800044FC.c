#include "context.h"

s32 func_80004838(s32, s32);
extern s32 D_801BBC10;

s32 func_800044FC(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = *(s32 *)((u8 *)&D_800892B0 + 0x42A8);
    temp_v0 = (D_801BBC10 + 7) & ~7;
    if (var_a1 == 0) {
        *(s32 *)((u8 *)&D_800892B0 + 0x42A8) = temp_v0;
        var_a1 = temp_v0;
    }
    if (func_80004838(arg0, var_a1) == 0) {
        return 0;
    }
    return *(s32 *)((u8 *)&D_800892B0 + 0x42A8);
}
