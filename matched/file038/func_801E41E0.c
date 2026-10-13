#include "context.h"

typedef struct func_801E41E0_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E41E0_Struct2;

typedef struct func_801E41E0_Struct1 {
    u8 pad0[0x30];
    func_801E41E0_Struct2 *unk30;
} func_801E41E0_Struct1;

typedef struct func_801E41E0_Struct0 {
    u8 pad0[0xC];
    func_801E41E0_Struct1 *unkC;
} func_801E41E0_Struct0;

s32 func_801E41E0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6E5F35) != 0) {
        ((func_801E41E0_Struct0 *)D_8038D8D0)->unkC->unk30->unk4 = 49.0f;
        ((func_801E41E0_Struct0 *)D_8038D8D0)->unkC->unk30->unk8 = -116.0f;
        ((func_801E41E0_Struct0 *)D_8038D8D0)->unkC->unk30->unkC = 49.0f;
        ((func_801E41E0_Struct0 *)D_8038D8D0)->unkC->unk30->unk12 = 0x1800;
        return 0xC;
    }
    return 0xB;
}
