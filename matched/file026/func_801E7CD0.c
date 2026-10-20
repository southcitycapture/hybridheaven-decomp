#include "context.h"
extern f32 D_801FC2B8;
extern f32 D_801FC2BC;
extern f32 D_801FC2C0;
extern f32 D_801FC2C4;
extern f32 D_801FC2C8;
extern f32 D_801FC2CC;
extern f32 D_801FC2D0;
extern f32 D_801FC2D4;
extern f32 D_801FC2D8;

s32 func_801E7CD0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03D09000) != 0) {
        func_8038BD50(D_801FC2B8, D_801FC2BC, -14.7f);
        D_8038BD88(-197.0f, D_801FC2C0, -5.8f);
        return 0xA;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += D_801FC2C4;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FC2C8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FC2CC;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += D_801FC2D0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 += D_801FC2D4;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 += D_801FC2D8;
    return 9;
}
