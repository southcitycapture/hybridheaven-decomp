#include "common.h"

struct func_801E3AC8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801E3AC8_StructB {
    u8 pad0[0x30];
    struct func_801E3AC8_StructC *unk30;
};

struct func_801E3AC8_StructA {
    u8 pad0[4];
    struct func_801E3AC8_StructB *unk4;
};

extern struct func_801E3AC8_StructA *D_8038D8D0;
extern s32 func_801C0B8C(u64 time);

s32 func_801E3AC8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038D8D0->unk4->unk30->unk4 = -160.0f;
        D_8038D8D0->unk4->unk30->unk8 = 33.0f;
        D_8038D8D0->unk4->unk30->unkC = -6.0f;
        return 5;
    }
    return 4;
}
