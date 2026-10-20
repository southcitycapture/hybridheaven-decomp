#include "context.h"

extern u8 *D_8038D8D0;

s32 func_801E4A18() {
    f32 t;
    u8 v;

    t = (f32)(u32)D_801EA570 / 30.0f;
    if (D_801EA574 != 0) {
        if (D_801EA574 == 1) goto l1;
        goto done;
    }
    v = (u32)(128.0f * t + 127.0f);
    goto done;
l1:
    v = (u32)(-128.0f * t + 255.0f);
done:
    *(u8 *)(*(u8 **)(*(u8 **)(D_8038D8D0 + 0xC) + 0x30) + 0x48) = v;
    *(u8 *)(*(u8 **)(*(u8 **)(D_8038D8D0 + 0xC) + 0x30) + 0x49) = v;
    *(u8 *)(*(u8 **)(*(u8 **)(D_8038D8D0 + 0xC) + 0x30) + 0x4A) = v;
    D_801EA570 = D_801EA570 + 1;
    if ((u32)D_801EA570 >= 0x1F) {
        D_801EA570 = 0;
        D_801EA574 = D_801EA574 + 1;
        D_801EA574 = D_801EA574 & 1;
    }
}
