#include "context.h"

struct func_801E2EFC_StructLeaf {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_801E2EFC_StructMid {
    u8 pad[0x30];
    struct func_801E2EFC_StructLeaf *unk30;
};
struct func_801E2EFC_StructRoot {
    u8 pad[8];
    struct func_801E2EFC_StructMid *unk8;
};

s32 func_801E2EFC() {
    s32 temp_v1;
    s32 var_v0;
    f32 scale;

    if (D_801E8150 != 0) {
        var_v0 = D_801E8154;
    } else {
        var_v0 = 29 - D_801E8154;
    }
    scale = 255.0f;
    scale *= (f32)var_v0 / 30.0f;
    ((struct func_801E2EFC_StructRoot *)(void *)D_8038D8D0)->unk8->unk30->unk4B = (u32)scale;
    temp_v1 = ++D_801E8154;
    if (temp_v1 >= 30) {
        if (D_801E8150 != 0) {
            D_801E8150 = 0;
        } else {
            D_801E8150 = 1;
        }
    }
    D_801E8154 = temp_v1 % 30;
}
