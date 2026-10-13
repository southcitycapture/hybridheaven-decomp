#include "context.h"

struct func_801E4FE8_StructMid {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801E4FE8_StructInner {
    u8 pad[0x30];
    struct func_801E4FE8_StructMid *unk30;
};

struct func_801E4FE8_StructOuter {
    u8 pad[0x14];
    struct func_801E4FE8_StructInner *unk14;
};

extern f32 D_801EB3A8;
extern f32 D_801EB3AC;

s32 func_801E4FE8(s32 arg0, s32 arg1) {
    ((struct func_801E4FE8_StructOuter *) D_8038D8D0)->unk14->unk30->unk4 = D_801EB3A8;
    ((struct func_801E4FE8_StructOuter *) D_8038D8D0)->unk14->unk30->unk8 = 18.0f;
    ((struct func_801E4FE8_StructOuter *) D_8038D8D0)->unk14->unk30->unkC = D_801EB3AC;
    return 2;
}
