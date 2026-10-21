#include "context.h"

typedef struct func_801E70D0_StructC {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[0x37];
    u8 unk4B;
    u8 pad4C[3];
    u8 unk4F;
} func_801E70D0_StructC;

typedef struct func_801E70D0_StructB {
    u8 pad0[0x30];
    func_801E70D0_StructC *unk30;
} func_801E70D0_StructB;

typedef struct func_801E70D0_StructA {
    u8 pad0[0x30];
    func_801E70D0_StructB *unk30;
} func_801E70D0_StructA;

s32 func_801E70D0(s32 arg0, s32 arg1) {
    func_801E70D0_StructC *temp_v1;
    u8 v;
    f32 f;

    if (func_801C1088(3, 9, 0x1E) != 0) {
        func_801C10D8(3, 9);
        return 3;
    }
    f = (f32)func_801C1134(3, 9) / 30.0f;
    arg0 = (u32)(127.0f * f);
    ((func_801E70D0_StructA *)D_8038D8D0)->unk30->unk30->unk4B = arg0;
    ((func_801E70D0_StructA *)D_8038D8D0)->unk30->unk30->unk4F = arg0;
    ((func_801E70D0_StructA *)D_8038D8D0)->unk30->unk30->unk12 += 0x22;
    return 2;
}
