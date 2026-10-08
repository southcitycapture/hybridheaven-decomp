#include "common.h"

typedef struct func_801F6914_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801F6914_Struct3;

typedef struct func_801F6914_Struct2 {
    u8 pad0[0x30];
    func_801F6914_Struct3 *unk30;
} func_801F6914_Struct2;

typedef struct func_801F6914_Struct1 {
    u8 pad0[0xC];
    func_801F6914_Struct2 *unkC;
} func_801F6914_Struct1;

extern func_801F6914_Struct1 *D_8038D8D0;

s32 func_801F6914(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x43440D5) != 0) {
        D_8038D8D0->unkC->unk30->unk4 = 5120.0f;
        return 5;
    }
    D_8038D8D0->unkC->unk30->unk4 = 0.0f;
    D_8038D8D0->unkC->unk30->unk8 = 0.0f;
    D_8038D8D0->unkC->unk30->unkC = 0.0f;
    D_8038D8D0->unkC->unk30->unk12 = 0;
    return 4;
}
