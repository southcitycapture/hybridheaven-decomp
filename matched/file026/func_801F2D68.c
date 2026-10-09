#include "context.h"

extern f32 D_801FD058;
extern f32 D_801FD05C;
extern f32 D_801FD060;
extern f32 D_801FD064;
extern f32 D_801FD068;
extern f32 D_801FD06C;

s32 func_801F2D68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040F1FA0) != 0) {
        func_8038BD50(-36.0f, D_801FD058, 48.3f);
        D_8038BD88(D_801FD05C, D_801FD060, 7.6f);
        return 0x10;
    }
    D_801BBBF0.unkE8->unk2C->unk30 = D_801BBBF0.unkE8->unk2C->unk30 + D_801FD064;
    D_801BBBF0.unkE8->unk2C->unk34 = D_801BBBF0.unkE8->unk2C->unk34 + D_801FD068;
    D_801BBBF0.unkE8->unk2C->unk38 = D_801BBBF0.unkE8->unk2C->unk38 + D_801FD06C;
    return 0xF;
}
