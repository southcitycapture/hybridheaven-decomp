#include "context.h"

extern f32 D_801FD03C;
extern f32 D_801FD040;
extern f32 D_801FD044;
extern f32 D_801FD048;
extern f32 D_801FD04C;
extern f32 D_801FD050;
extern f32 D_801FD054;

s32 func_801F2C5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03CA757F) != 0) {
        func_8038BD50(D_801FD03C, D_801FD040, -10.0f);
        D_8038BD88(-3.0f, D_801FD044, 2.1f);
        return 0xF;
    }
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 += D_801FD048;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 += D_801FD04C;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 += D_801FD050;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C += D_801FD054;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44;
    return 0xE;
}
