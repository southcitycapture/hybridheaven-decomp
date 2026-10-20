#include "context.h"
extern f32 D_801FC444;
extern f32 D_801FC448;
extern f32 D_801FC44C;
extern f32 D_801FC450;
extern f32 D_801FC454;
extern f32 D_801FC458;
extern f32 D_801FC45C;
extern f32 D_801FC460;
extern f32 D_801FC464;

s32 func_801E87E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x053D807A) != 0) {
        func_8038BD50(D_801FC444, D_801FC448, -9.6f);
        D_8038BD88(D_801FC44C, 11.5f, -8.1f);
        D_801FB394 = 0;
        return 0x11;
    }
#define P ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)
    P->unk30 += D_801FC450;
    P->unk34 += D_801FC454;
    P->unk38 += D_801FC458;
    P->unk3C += D_801FC45C;
    P->unk40 += D_801FC460;
    P->unk44 += D_801FC464;
    return 0x10;
}
