#include "context.h"

extern f32 D_801EA54C;

struct func_801E5DF8_Obj30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801E5DF8_Obj24 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E5DF8_Obj30 *unk30;
};

struct func_801E5DF8_Top {
    u8 pad0[0x24];
    struct func_801E5DF8_Obj24 *unk24;
};

s32 func_801E5DF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x15BE67F) != 0) {
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unk4 = 0.0f;
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unk8 = 13.0f;
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unkC = D_801EA54C;
        func_801E5BF8();
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk22 = 1;
        func_801C1000(3, 6);
        return 2;
    }
    return 1;
}
