#include "context.h"

struct func_801F6A14_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
    u8 pad2[0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_801F6A14_StructB {
    u8 pad0[0x30];
    struct func_801F6A14_StructC *unk30;
};

struct func_801F6A14_StructA {
    u8 pad0[0x10];
    struct func_801F6A14_StructB *unk10;
};

s32 func_801F6A14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x047149D5) != 0) {
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk4 = 0.0f;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk8 = 0.0f;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unkC = 0.0f;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk12 = 0;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk48 = 0;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk49 = 0;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk4A = 0;
        ((struct func_801F6A14_StructA *)D_8038D8D0)->unk10->unk30->unk4B = 0xFF;
        return 2;
    }
    return 1;
}
