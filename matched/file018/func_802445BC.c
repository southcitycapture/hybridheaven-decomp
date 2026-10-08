#include "context.h"

struct func_802445BC_Struct1 {
    u8 pad0[0x30];
    f32 unk30_f;
};

struct func_802445BC_Struct0 {
    u8 pad0[0x24];
    struct func_802445BC_Inner *unk24;
};

struct func_802445BC_Inner {
    u8 pad0[0x30];
    struct func_802445BC_Leaf *unk30;
};

struct func_802445BC_Leaf {
    u8 pad0[0x4];
    f32 unk4;
};

extern f32 D_8025BF7C;

void func_802445BC(struct func_802445BC_Struct0 *arg0, s32 arg1) {
    if (func_80133A24(0x144) != 0) {
        arg0->unk24->unk30->unk4 = D_8025BF7C;
    }
}
