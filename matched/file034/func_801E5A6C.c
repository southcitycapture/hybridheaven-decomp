#include "context.h"

extern s32 func_801C0DE4(s32, s32, s32);
extern f64 D_801E9680;
extern f32 D_801E9688;
extern f32 D_801E968C;

s32 func_801E5A6C(s32 arg0, s32 arg1) {
    u64 t;
    f64 r;

    if (D_801E8DF8 == 0) goto c0;
    if (D_801E8DF8 == 1) goto c1;
    if (D_801E8DF8 == 2) goto c2;
    return 0xB;
c0:
    if (func_801C0DE4(4, 1, 0x40000000) != 0) {
        func_801C0EB0(4, 1);
        D_801E8DF8 = 1;
        return 0xB;
    } else {
        t = func_801C0F18(4, 1);
        r = func_80034C24(t);
        *(s16 *)((u8 *)*(s32 *)((u8 *)*(s32 *)((u8 *)*(s32 *)((u8 *)*(s32 *)((u8 *)D_801DAB14 + 8) + 8) + 0x24) + 0x2C) + 0x12) =
            (s16)(s32)((((D_801E9688 * 1.0f * (f32)((r / D_801E9680) / 2)) + D_801E968C) * 2048.0f) / 90.0f);
    }
    goto done;
c1:
    if (D_801CF3CC() != 0) {
        func_801CC470(1, 0x04100003, 0, 0x1000, 5.0f);
        D_801E8DF8 = 2;
    }
    goto done;
c2:
    if (D_801CF3CC() != 0) {
        func_801CF450(0);
        return 0xC;
    }
done:
    return 0xB;
}
