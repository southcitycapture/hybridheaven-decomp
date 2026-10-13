#include "context.h"

struct func_801E460C_StructInner {
    u8 pad0[8];
    f32 unk8;
};

struct func_801E460C_StructMid {
    u8 pad0[0x30];
    struct func_801E460C_StructInner *unk30;
};

struct func_801E460C_StructOuter {
    u8 pad0[0x18];
    struct func_801E460C_StructMid *unk18;
};

s32 func_801E460C(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F4C() != 0) {
        func_801C2F60(&sp1C);
        ((struct func_801E460C_StructOuter *)D_8038D8D0)->unk18->unk30->unk8 = sp1C + D_801F3CD4;
        return 0xB;
    }
    return 0xC;
}
