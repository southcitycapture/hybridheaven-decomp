#include "context.h"

struct func_801E7AA8_Obj30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801E7AA8_Obj48 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E7AA8_Obj30 *unk30;
};

struct func_801E7AA8_Obj {
    u8 pad0[0x48];
    struct func_801E7AA8_Obj48 *unk48;
};

s32 func_801E7AA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02285E3C) != 0) {
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk18 = 0.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk1C = 1.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk20 = 1.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk22 = 1;
        func_801C1000(3, 0xB);
        func_8038D28C(0x20B);
        return 2;
    }
    return 1;
}
