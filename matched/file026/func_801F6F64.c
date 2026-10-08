#include "context.h"

struct func_801F6F64_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801F6F64_StructB {
    u8 pad0[0x30];
    struct func_801F6F64_StructC *unk30;
};

struct func_801F6F64_StructA {
    u8 pad0[0x14];
    struct func_801F6F64_StructB *unk14;
};

s32 func_801F6F64(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8DE81F) != 0) {
        ((struct func_801F6F64_StructA *)D_8038D8D0)->unk14->unk30->unk4 = 0.0f;
        ((struct func_801F6F64_StructA *)D_8038D8D0)->unk14->unk30->unk8 = 5.0f;
        ((struct func_801F6F64_StructA *)D_8038D8D0)->unk14->unk30->unkC = 0.0f;
        return 2;
    }
    return 1;
}
