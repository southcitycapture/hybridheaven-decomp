#include "context.h"

struct func_801E4048_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E4048_Struct1 {
    u8 pad0[0x30];
    struct func_801E4048_Struct2 *unk30;
};

struct func_801E4048_Struct0 {
    u8 pad0[0xC];
    struct func_801E4048_Struct1 *unkC;
};

s32 func_801E4048(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        ((struct func_801E4048_Struct0 *)D_8038D8D0)->unkC->unk30->unk4 = 49.0f;
        ((struct func_801E4048_Struct0 *)D_8038D8D0)->unkC->unk30->unk8 = -69.0f;
        ((struct func_801E4048_Struct0 *)D_8038D8D0)->unkC->unk30->unkC = 49.0f;
        ((struct func_801E4048_Struct0 *)D_8038D8D0)->unkC->unk30->unk12 = 0x1800;
        return 9;
    }
    return 8;
}
