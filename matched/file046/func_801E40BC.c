#include "context.h"
extern struct func_801E4D04_StructOuter *D_8038D8D0;
extern s32 D_801EA708;
extern s32 D_801EA70C;
struct func_801E4D04_StructInner {
    u8 pad[0x22];
    u8 flag;
};
struct func_801E4D04_StructOuter {
    u8 pad[0xC];
    struct func_801E4D04_StructInner *unkC;
};

struct func_801E40BC_StructLeaf {
    u8 pad[0x4B];
    u8 unk4B;
};
struct func_801E40BC_StructMid {
    u8 pad[0x30];
    struct func_801E40BC_StructLeaf *unk30;
};
struct func_801E40BC_StructRoot {
    struct func_801E40BC_StructMid *unk0;
};

s32 func_801E40BC(void) {
    s32 temp_v1;
    s32 var_v0;
    f32 scale;

    if (D_801EA708 != 0) {
        var_v0 = D_801EA70C;
    } else {
        var_v0 = 29 - D_801EA70C;
    }
    scale = 255.0f;
    scale *= (f32)var_v0 / 30.0f;
    ((struct func_801E40BC_StructRoot *)D_8038D8D0)->unk0->unk30->unk4B = (u32)scale;
    temp_v1 = ++D_801EA70C;
    if (temp_v1 >= 30) {
        if (D_801EA708 != 0) {
            D_801EA708 = 0;
        } else {
            D_801EA708 = 1;
        }
    }
    D_801EA70C = temp_v1 % 30;
}
