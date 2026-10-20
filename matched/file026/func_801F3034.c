#include "context.h"
extern f32 D_801FD0B0, D_801FD0B4, D_801FD0B8, D_801FD0BC, D_801FD0C0, D_801FD0C4, D_801FD0C8;
extern f32 D_801FD0CC, D_801FD0D0, D_801FD0D4, D_801FD0D8, D_801FD0DC, D_801FD0E0;
#define PP(o) (*(struct func_801E1C38_Struct **)((u8 *)D_801BBBF0.unkE8 + 0x2C))

s32 func_801F3034(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x452C555)) {
        if (func_801C0B8C(0x47149D5)) {
            func_8038BD50(D_801FD0B0, 948.0f, 23.5f);
            D_8038BD88(-15.5f, 0.0f, 15.5f);
            return 0x13;
        }
        PP()->unk30 += D_801FD0B4;
        PP()->unk34 += D_801FD0B8;
        PP()->unk38 += D_801FD0BC;
        PP()->unk3C += D_801FD0C0;
        PP()->unk40 += D_801FD0C4;
        PP()->unk44 += D_801FD0C8;
        return 0x12;
    }
    PP()->unk30 += D_801FD0CC;
    PP()->unk34 += D_801FD0D0;
    PP()->unk38 += D_801FD0D4;
    PP()->unk3C += D_801FD0D8;
    PP()->unk40 += D_801FD0DC;
    PP()->unk44 += D_801FD0E0;
    return 0x12;
}
