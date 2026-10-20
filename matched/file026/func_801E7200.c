#include "context.h"
extern f32 D_801FC0BC;
extern f32 D_801FC0C0;
extern f32 D_801FC0C4;
extern f32 D_801FC0C8;
extern f32 D_801FC0CC;
extern f32 D_801FC0D0;
extern f32 D_801FC0D4;

s32 func_801E7200(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016694E0) != 0) {
        func_8038BD50(D_801FC0BC, 17.0f, -16.0f);
        D_8038BD88(74.0f, 15.5f, -11.4f);
        return 4;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += D_801FC0C0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FC0C4;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FC0C8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += D_801FC0CC;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += D_801FC0D0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += D_801FC0D4;
    return 3;
}
