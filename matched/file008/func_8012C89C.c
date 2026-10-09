#include "context.h"

void func_8012C89C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_8008DA88[arg1]->unk2C != NULL) {
        D_8008DA88[arg1]->unk2C->unk28 = D_80171CF0[arg2 - 1]->unk4[arg3];
        D_8008DA88[arg1]->unk2C->unk0 = D_80171CF0[arg2 - 1]->unk0[0];
        D_8008DA88[arg1]->unk2C->unk2C = D_80171CF0[arg2 - 1]->unk0[1];
        return;
    }
    D_8008DA88[arg1]->unk30->unk28 = D_80171CF0[arg2 - 1]->unk4[arg3];
    D_8008DA88[arg1]->unk30->unk0 = D_80171CF0[arg2 - 1]->unk0[0];
    D_8008DA88[arg1]->unk30->unk2C = D_80171CF0[arg2 - 1]->unk0[1];
}
