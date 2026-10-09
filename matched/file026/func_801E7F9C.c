#include "context.h"

extern void D_8038C158(void);
extern s32 D_801FB394;
extern f32 D_801FC314;
extern f32 D_801FC318;

s32 func_801E7F9C(s32 arg0, s32 arg1) {
    struct func_801E7ECC_Struct3 *s;

    if (func_801C0B8C(0x47352AA) != 0) {
        D_801FB394 = 0;
        D_8038C158();
        return 0xD;
    }
    s = D_801BBBF0.unkE8->unk2C;
    s->unk30 = s->unk30 + 0.09375f;
    s = D_801BBBF0.unkE8->unk2C;
    s->unk34 = s->unk34 + D_801FC314;
    s = D_801BBBF0.unkE8->unk2C;
    s->unk38 = s->unk38 + D_801FC318;
    return 0xC;
}
