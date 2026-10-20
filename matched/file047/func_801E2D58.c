#include "context.h"
struct func_801E2D58_StructLeaf {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_801E2D58_StructMid {
    u8 pad[0x30];
    struct func_801E2D58_StructLeaf *unk30;
};
struct func_801E2D58_StructRoot {
    struct func_801E2D58_StructMid *unk0;
};

s32 func_801E2D58() {
    s32 temp_v1;
    s32 var_v0;
    f32 scale;

    if (D_801E3CE4 != 0) {
        var_v0 = D_801E3CE8;
    } else {
        var_v0 = 29 - D_801E3CE8;
    }
    scale = 255.0f;
    scale *= (f32)var_v0 / 30.0f;
    ((struct func_801E2D58_StructRoot *)D_8038D8D0)->unk0->unk30->unk4B = (u32)scale;
    temp_v1 = ++D_801E3CE8;
    if (temp_v1 >= 30) {
        if (D_801E3CE4 != 0) {
            D_801E3CE4 = 0;
        } else {
            D_801E3CE4 = 1;
        }
    }
    D_801E3CE8 = temp_v1 % 30;
}
