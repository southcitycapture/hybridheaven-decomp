#include "context.h"

struct func_801E2B54_Struct_C {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
};

struct func_801E2B54_Struct_B {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_801E2B54_Struct_C *unk30;
};

struct func_801E2B54_Struct_A {
    u8 pad[0x24];
    struct func_801E2B54_Struct_B *unk24;
};

extern u32 func_801C1134(s32 a0, s32 a1);
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern struct func_801E2B54_Struct_A *D_8038D8D0;

s32 func_801E2B54(s32 arg0, s32 arg1) {
    f32 temp_fv0;

    f32 temp_ft3;

    temp_ft3 = (f32) func_801C1134(3, 0) / 30.0f;
    temp_fv0 = 30.0f * temp_ft3;
    D_8038D8D0->unk24->unk30->unk18 = temp_fv0;
    D_8038D8D0->unk24->unk30->unk1C = temp_fv0;
    if (func_801C1088(3, 0, 0x1E) != 0) {
        func_801C10D8(3, 0);
        D_8038D8D0->unk24->unk22 = 0;
        return 5;
    }
    return 4;
}
