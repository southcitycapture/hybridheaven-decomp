#include "context.h"

extern f64 D_802089A8;

s32 func_801EB798(s32 arg0, s32 arg1) {
    u64 r;

    if (D_80206230 == 0) goto c0;
    if (D_80206230 == 1) goto c1;
    if (D_80206230 == 2) goto c2;
    return 3;
c0:
    func_801C0D04(3, 4);
    D_80206230 = 1;
    goto end;
c1:
    if (func_801C0DE4(3, 4, 0x3FC00000) != 0) {
        func_801C0EB0(3, 4);
        func_801C0D04(3, 4);
        D_80206230 = 2;
    }
    goto end;
c2:
    if (func_801C0DE4(3, 4, 0x3FC00000) != 0) {
        func_801C0EB0(3, 4);
        return 4;
    }
    r = func_801C0F18(3, 4);
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x10) + 0x30) + 8) = ((f32)(func_80034C24(r) / D_802089A8) / 1.5f) * -23.0f;
end:
    return 3;
}
