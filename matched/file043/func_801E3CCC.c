#include "common.h"

struct func_801E3CCC_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E3CCC_Struct2 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E3CCC_Struct1 *unk30;
};

struct func_801E3CCC_Struct3 {
    u8 pad0[4];
    struct func_801E3CCC_Struct2 *unk4;
};

extern struct func_801E3CCC_Struct3 *D_8038D8D0;

s32 func_801E3CCC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x64B53F) != 0) {
        D_8038D8D0->unk4->unk30->unk4 = 198.0f;
        D_8038D8D0->unk4->unk30->unk8 = 23.0f;
        D_8038D8D0->unk4->unk30->unkC = 167.0f;
        D_8038D8D0->unk4->unk30->unk12 = 0x1000;
        D_8038D8D0->unk4->unk22 = 1;
        return 2;
    }
    return 1;
}
