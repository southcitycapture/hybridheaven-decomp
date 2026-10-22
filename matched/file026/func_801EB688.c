#include "context.h"

struct func_801EB688_S2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EB688_S1 {
    u8 pad0[0x30];
    struct func_801EB688_S2 *unk30;
};

s32 func_801EB688(s32 arg0, s32 arg1) {
    s32 i;
    f32 x;

    for (i = 0; i != 5; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80006214(D_8038D8CC);
    for (i = 0; i != 5; i++) {
        func_8012C89C(D_8038D8CC, i, 0xA6, 0);
    }
    x = 374.0f;
    for (arg1 = 0; arg1 < 5; arg1++) {
        ((struct func_801EB688_S1 **)D_8038D8D0)[arg1]->unk30->unk4 = x;
        x -= 187.0f;
        ((struct func_801EB688_S1 **)D_8038D8D0)[arg1]->unk30->unk8 = 5.0f;
        ((struct func_801EB688_S1 **)D_8038D8D0)[arg1]->unk30->unkC = -51.0f;
        ((struct func_801EB688_S1 **)D_8038D8D0)[arg1]->unk30->unk12 = 0x1000;
    }
    return 2;
}
