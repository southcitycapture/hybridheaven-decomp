#include "context.h"

extern f64 D_801FD140, D_801FD148, D_801FD150, D_801FD158, D_801FD160, D_801FD168;
extern f64 D_801FD170, D_801FD178, D_801FD180, D_801FD188, D_801FD190, D_801FD198;

#define FP ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801F3420(s32 arg0, s32 arg1) {
    f64 t;
    f32 f;
    u64 r;

    if (func_801C0B8C(0x05392DB5) != 0) {
        return 0x16;
    }
    r = func_801C0B2C();
    t = (f32)(func_80034C24(r) / D_801FD140 - D_801FD148) / 5.5;
    FP->unk30 = t * D_801FD150 + D_801FD158;
    FP->unk34 = t * D_801FD160 + D_801FD168;
    FP->unk38 = t * D_801FD170 + D_801FD178;
    FP->unk3C = t * -1.0 + -14.5;
    FP->unk40 = t * D_801FD180 + D_801FD188;
    FP->unk44 = t * D_801FD190 + D_801FD198;
    return 0x15;
}
