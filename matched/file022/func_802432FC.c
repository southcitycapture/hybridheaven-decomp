#include "context.h"

extern s32 func_8012C6B4();
extern f64 D_80252698;
extern f64 D_802526A0;

void func_802432FC(s32 arg0, u16 arg1) {
    u32 var_v0;

    if ((arg1 >= 0xDC) && (arg1 < 0xE9)) {
        if (func_8012C6B4(0x1F4) >= 0xC9) {
            func_802429C0(arg0, 181.0f, -760.0f, (f32) (0x30 - (((arg1 - 0xDC) & 0xFFFF) * 8)), -1);
        }
        if (func_8012C6B4(0x1F4) >= 0xC9) {
            var_v0 = (arg1 - 0xDC) & 0xFFFF;
            func_802429C0(arg0, (f32) (((f64) var_v0 * D_80252698) + D_802526A0), -760.0f, (f32) (((s32) var_v0 * 7) - 0x84), -1);
        }
    }
}
