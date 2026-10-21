#include "context.h"

s32 func_801F7768(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;
    f32 a;

    if (func_801C0B8C(0x047149D5) != 0) {
        a = 130.0f;
        for (i = 0; i < 12; i++) {
            A->unk20[i]->unk30->unk4 = 0.0f;
            A->unk20[i]->unk30->unk8 = a;
            a += 70.0f;
            A->unk20[i]->unk30->unkC = 0.0f;
            A->unk20[i]->unk30->unk12 = 0;
        }
        return 4;
    } else {
        for (j = 0; j < 12; j++) {
            if ((s32)A->unk20[j]->unk30->unk8 >= 420) {
                A->unk20[j]->unk30->unk8 = -420.0f;
            }
            A->unk20[j]->unk30->unk8 += 5.0f;
        }
        return 3;
    }
}
