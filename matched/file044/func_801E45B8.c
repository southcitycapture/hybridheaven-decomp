#include "context.h"
extern s32 D_801ECB90;
extern s32 D_801ECB94;
extern struct func_801E4EE0_Obj *D_8038D8D0;
struct func_801E4EE0_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x4B - 0x14];
    u8 unk4B;
};
struct func_801E4EE0_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E4EE0_Leaf *unk30;
};
struct func_801E4EE0_Obj {
    u8 pad0[0x1C];
    struct func_801E4EE0_Mid *unk1C;
};

struct func_801E45B8_StructLeaf {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_801E45B8_StructMid {
    u8 pad[0x30];
    struct func_801E45B8_StructLeaf *unk30;
};
struct func_801E45B8_StructRoot {
    u8 pad[8];
    struct func_801E45B8_StructMid *unk8;
};

s32 func_801E45B8(void) {
    s32 temp_v1;
    s32 var_v0;
    f32 scale;

    if (D_801ECB90 != 0) {
        var_v0 = D_801ECB94;
    } else {
        var_v0 = 29 - D_801ECB94;
    }
    scale = 255.0f;
    scale *= (f32)var_v0 / 30.0f;
    ((struct func_801E45B8_StructRoot *)D_8038D8D0)->unk8->unk30->unk4B = (u32)scale;
    temp_v1 = ++D_801ECB94;
    if (temp_v1 >= 30) {
        if (D_801ECB90 != 0) {
            D_801ECB90 = 0;
        } else {
            D_801ECB90 = 1;
        }
    }
    D_801ECB94 = temp_v1 % 30;
}
