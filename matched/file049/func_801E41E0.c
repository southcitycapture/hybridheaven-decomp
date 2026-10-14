#include "context.h"

typedef struct func_801E41E0_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E41E0_Struct4;

typedef struct func_801E41E0_Struct3 {
    u8 pad0[0x2C];
    func_801E41E0_Struct4 *unk2C;
} func_801E41E0_Struct3;

typedef struct func_801E41E0_Struct2 {
    u8 pad0[0x24];
    func_801E41E0_Struct3 *unk24;
} func_801E41E0_Struct2;

typedef struct func_801E41E0_Struct1 {
    u8 pad0[0x8];
    func_801E41E0_Struct2 *unk8;
} func_801E41E0_Struct1;

extern s32 func_801CE2D0(s32, s32);
extern f32 D_801E76F8;
extern f32 D_801E76FC;

s32 func_801E41E0(s32 arg0, s32 arg1) {
    func_801E41E0_Struct4 *temp_v0;

    if (func_801CE274() == 0) {
        temp_v0 = (*(func_801E41E0_Struct1 **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67D, D_801E76F8, 1.0f);
        func_801CC470(0, 0x01B8001B, 0, 0x1100, 2.0f);
        func_801C1000(4, 0);
        if ((func_801CE2D0(0x01B8001B, 0x18) != 0) || (func_801CE2D0(0x01B8001B, 0x3C) != 0)) {
            temp_v0 = (*(func_801E41E0_Struct1 **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
            func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67D, D_801E76FC, 1.0f);
        }
        return 0xE;
    }
    return 0xD;
}
