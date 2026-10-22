#include "context.h"
extern f32 D_801E7294;

s32 func_801E43CC(s32 arg0, s32 arg1) {
    f32 v = D_801E7294;
    s32 i;

    for (i = 0; i < 12; i++) {
        P->unk0[i + 4]->unk30->unk4 = 0.0f;
        P->unk0[i + 4]->unk30->unk8 = v;
        v += 195.0f;
        P->unk0[i + 4]->unk30->unkC = 0.0f;
        P->unk0[i + 4]->unk30->unk12 = 0;
    }
    return 2;
}
