#include "context.h"

s32 func_801E3CB8() {
    f32 t;
    u8 v;

    t = (f32)(u32)D_801E69F8 / 30.0f;
    if (D_801E69FC != 0) {
        if (D_801E69FC == 1) goto l1;
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
    D_801E69F8 = D_801E69F8 + 1;
    if ((u32)D_801E69F8 >= 0x1F) {
        D_801E69F8 = 0;
        D_801E69FC = D_801E69FC + 1;
        D_801E69FC = D_801E69FC & 1;
    }
}
