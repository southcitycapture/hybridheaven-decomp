#include "context.h"

extern f32 D_801E886C;

s32 func_801E3978(s32 arg0, s32 arg1) {
    s32 i;
    f32 f;

    f = D_801E886C;
    for (i = 0; i < 12; i++) {
        P->unk0[i + 3]->unk30->unk4 = 0.0f;
        P->unk0[i + 3]->unk30->unk8 = f;
        f += 195.0f;
        P->unk0[i + 3]->unk30->unkC = 0.0f;
        P->unk0[i + 3]->unk30->unk12 = 0;
    }
    return 2;
}
