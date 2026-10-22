#include "context.h"

struct func_801F7370_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801F7370_StructB {
    u8 pad[0x30];
    struct func_801F7370_StructC *unk30;
};
struct func_801F7370_StructA {
    u8 pad[0x20];
    struct func_801F7370_StructB *unk20[12];
};

s32 func_801F7370(s32 arg0, s32 arg1) {
    f32 y;
    s32 i;

    if (func_801C0B8C(0x0208531F) != 0) {
        y = -420.0f;
        for (i = 0; i < 12; i++) {
            ((struct func_801F7370_StructA *)D_8038D8D0)->unk20[i]->unk30->unk4 = 0.0f;
            ((struct func_801F7370_StructA *)D_8038D8D0)->unk20[i]->unk30->unk8 = y;
            y += 70.0f;
            ((struct func_801F7370_StructA *)D_8038D8D0)->unk20[i]->unk30->unkC = 0.0f;
            ((struct func_801F7370_StructA *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        }
        return 2;
    }
    return 1;
}
