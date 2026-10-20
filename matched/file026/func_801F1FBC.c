#include "context.h"
extern f32 D_801FCE84, D_801FCE88, D_801FCE8C, D_801FCE90, D_801FCE94, D_801FCE98, D_801FCE9C, D_801FCEA0, D_801FCEA4, D_801FCEA8;

s32 func_801F1FBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01DA8C5F) != 0) {
        func_8038BD50(D_801FCE84, D_801FCE88, 4.0f);
        D_8038BD88(D_801FCE8C, D_801FCE90, 1.0f);
        return 0xA;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += D_801FCE94;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FCE98;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FCE9C;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += D_801FCEA0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += D_801FCEA4;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += D_801FCEA8;
    return 9;
}
