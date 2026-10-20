#include "context.h"

struct func_801E2F1C_StructLeaf {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_801E2F1C_StructMid {
    u8 pad[0x30];
    struct func_801E2F1C_StructLeaf *unk30;
};
struct func_801E2F1C_StructRoot {
    u8 pad[4];
    struct func_801E2F1C_StructMid *unk4;
};

s32 func_801E2F1C() {
    s32 temp_v1;
    s32 var_v0;
    f32 scale;

    if (D_801E3CFC != 0) {
        var_v0 = D_801E3D00;
    } else {
        var_v0 = 29 - D_801E3D00;
    }
    scale = 255.0f;
    scale *= (f32)var_v0 / 30.0f;
    ((struct func_801E2F1C_StructRoot *)D_8038D8D0)->unk4->unk30->unk4B = (u32)scale;
    temp_v1 = ++D_801E3D00;
    if (temp_v1 >= 30) {
        if (D_801E3CFC != 0) {
            D_801E3CFC = 0;
        } else {
            D_801E3CFC = 1;
        }
    }
    D_801E3D00 = temp_v1 % 30;
}
