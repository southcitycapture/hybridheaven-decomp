#include "context.h"
extern f32 D_801FD070, D_801FD074, D_801FD078, D_801FD07C, D_801FD080, D_801FD084, D_801FD088, D_801FD08C, D_801FD090, D_801FD094;
struct func_801F2E3C_Struct2 { u8 pad[0x2C]; struct func_801F2E3C_Struct3 *unk2C; };
struct func_801F2E3C_Struct3 { u8 pad[0x30]; f32 f[6]; };
struct func_801F2E3C_Struct1 { u8 pad[0xE8]; struct func_801F2E3C_Struct2 *unkE8; };
#define Q ((struct func_801F2E3C_Struct1 *)&D_801BBBF0)

s32 func_801F2E3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0422738A) != 0) {
        func_8038BD50(D_801FD070, D_801FD074, -13.4f);
        D_8038BD88(D_801FD078, D_801FD07C, 7.8f);
        return 0x11;
    }
    Q->unkE8->unk2C->f[0] += D_801FD080;
    Q->unkE8->unk2C->f[1] += D_801FD084;
    Q->unkE8->unk2C->f[2] += D_801FD088;
    Q->unkE8->unk2C->f[3] += D_801FD08C;
    Q->unkE8->unk2C->f[4] += D_801FD090;
    Q->unkE8->unk2C->f[5] += D_801FD094;
    return 0x10;
}
