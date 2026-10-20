#include "context.h"

extern s32 D_801E5804;
extern s32 D_801E5808;

struct func_801E3588_Struct1 {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_801E3588_Struct2 {
    u8 pad0[0x30];
    struct func_801E3588_Struct1 *unk30;
};
struct func_801E3588_Struct3 {
    u8 pad0[0x1C];
    struct func_801E3588_Struct2 *unk18;
};

s32 func_801E3588() {
    f32 t;
    u8 v;
    t = (f32) D_801E5804 / 30.0f;
    if (D_801E5808 != 0) {
        v = (u8)(255.0f * t);
    } else {
        v = (u8)(-255.0f * t + 255.0f);
    }
    ((struct func_801E3588_Struct3 *)D_8038D8D0)->unk18->unk30->unk4B = v;
    D_801E5804 += 1;
    if (D_801E5804 >= 31) {
        if (D_801E5808 != 0) {
            D_801E5808 = 0;
        } else {
            D_801E5808 = 1;
        }
        D_801E5804 = 0;
    }
}
