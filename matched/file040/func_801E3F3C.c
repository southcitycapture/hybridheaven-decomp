#include "context.h"

s32 func_801E3F3C() {
    f32 t;
    u8 v;

    t = (f32)(u32)D_801E82DC / 30.0f;
    if (D_801E82E0 != 0) {
        if (D_801E82E0 == 1) goto l1;
        goto done;
    }
    v = (u32)(128.0f * t + 127.0f);
    goto done;
l1:
    v = (u32)(-128.0f * t + 255.0f);
done:
    *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x18) + 0x30) + 0x48) = v;
    *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x18) + 0x30) + 0x49) = v;
    *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x18) + 0x30) + 0x4A) = v;
    D_801E82DC = D_801E82DC + 1;
    if ((u32)D_801E82DC >= 0x1F) {
        D_801E82DC = 0;
        D_801E82E0 = D_801E82E0 + 1;
        D_801E82E0 = D_801E82E0 & 1;
    }
}
