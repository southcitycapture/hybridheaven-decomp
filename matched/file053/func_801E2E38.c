#include "common.h"
struct func_801E2F88_Struct2 {
    u8 pad0[4];
    f32 unk4;
};
struct func_801E2F88_Struct1 {
    u8 pad0[0x30];
    struct func_801E2F88_Struct2 *unk30;
};
struct func_801E2F88_Struct0 {
    u8 pad0[0x24];
    struct func_801E2F88_Struct1 *unk24;
};
extern struct func_801E2F88_Struct0 *D_8038D8D0;
s32 func_801C1088(s32 a0, s32 a1, s32 a2);
void func_801C10D8(s32 a0, s32 a1);
s32 func_801C1134(s32 a0, s32 a1);


struct func_801E2E38_Struct1 {
    u8 pad0[0x30];
    struct func_801E2E38_Struct2 *unk30;
};
struct func_801E2E38_Struct2 {
    u8 pad0[4];
    f32 unk4;
};
struct func_801E2E38_Struct0 {
    u8 pad0[8];
    struct func_801E2E38_Struct1 *unk8;
    struct func_801E2E38_Struct1 *unkC;
};

s32 func_801E2E38(s32 arg0, s32 arg1) {
    f32 t;

    t = (f32)(u32)func_801C1134(3, 0) / 10.0f;
    ((struct func_801E2E38_Struct0 *)D_8038D8D0)->unk8->unk30->unk4 = 15.0f * t;
    ((struct func_801E2E38_Struct0 *)D_8038D8D0)->unkC->unk30->unk4 = -15.0f * t;
    if (func_801C1088(3, 0, 10) != 0) {
        func_801C10D8(3, 0);
        return 4;
    }
    return 3;
}
