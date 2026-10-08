#include "context.h"

struct func_801F63CC_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F63CC_Struct2 {
    u8 pad0[0x30];
    struct func_801F63CC_Struct3 *unk30;
};

struct func_801F63CC_Struct1 {
    u8 pad0[0x8];
    struct func_801F63CC_Struct2 *unk8;
};

s32 func_801F63CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x47149D5) != 0) {
        ((struct func_801F63CC_Struct1 *)D_8038D8D0)->unk8->unk30->unk4 = 0.0f;
        ((struct func_801F63CC_Struct1 *)D_8038D8D0)->unk8->unk30->unk8 = 0.0f;
        ((struct func_801F63CC_Struct1 *)D_8038D8D0)->unk8->unk30->unkC = 0.0f;
        ((struct func_801F63CC_Struct1 *)D_8038D8D0)->unk8->unk30->unk12 = 0;
        return 2;
    }
    return 1;
}
