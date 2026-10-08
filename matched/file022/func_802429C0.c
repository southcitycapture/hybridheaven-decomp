#include "common.h"

void *func_80005670(s32 arg0, u8 *arg1);
extern u8 D_802503B4[];

s32 func_802429C0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s8 arg4) {
    void *temp_v0;

    temp_v0 = func_80005670(arg0, D_802503B4);
    if (temp_v0 != NULL) {
        *(f32 *)((u8 *)temp_v0 + 0x90) = arg1;
        *(f32 *)((u8 *)temp_v0 + 0x94) = arg2;
        *(f32 *)((u8 *)temp_v0 + 0x98) = arg3;
        *(s8 *)((u8 *)temp_v0 + 0xA0) = arg4;
        return 1;
    }
    return 0;
}
