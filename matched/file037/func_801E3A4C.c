#include "context.h"

struct func_801E3A4C_Struct1 {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801E3A4C_Struct2 {
    u8 pad0[0x30];
    struct func_801E3A4C_Struct1 *unk30;
};

struct func_801E3A4C_Struct3 {
    u8 pad0[0xC];
    struct func_801E3A4C_Struct2 *unkC;
};

extern f32 D_801E69C4;

s32 func_801E3A4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x11EDD81) != 0) {
        func_801C0D04(3, 3);
        D_801E69C4 = ((struct func_801E3A4C_Struct3 *) D_8038D8D0)->unkC->unk30->unk8;
        return 2;
    }
    return 1;
}
