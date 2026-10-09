#include "context.h"

typedef struct func_801F7130_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F7130_StructB;

typedef struct func_801F7130_StructA {
    u8 pad0[0x30];
    func_801F7130_StructB *unk30;
} func_801F7130_StructA;

typedef struct func_801F7130_StructRoot {
    u8 pad0[0x18];
    func_801F7130_StructA *unk18;
} func_801F7130_StructRoot;

s32 func_801F7130(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x047149D5) != 0) {
        ((func_801F7130_StructRoot *)D_8038D8D0)->unk18->unk30->unk4 = -16.0f;
        ((func_801F7130_StructRoot *)D_8038D8D0)->unk18->unk30->unk8 = 0.0f;
        ((func_801F7130_StructRoot *)D_8038D8D0)->unk18->unk30->unkC = -28.0f;
        ((func_801F7130_StructRoot *)D_8038D8D0)->unk18->unk30->unk12 = 0;
        return 2;
    }
    return 1;
}
