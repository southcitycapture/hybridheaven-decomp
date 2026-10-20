#include "context.h"

typedef struct func_801E5018_StructE {
    u8 pad[0x12];
    s16 unk12;
} func_801E5018_StructE;
typedef struct func_801E5018_StructD {
    u8 pad[0x2C];
    func_801E5018_StructE *unk2C;
} func_801E5018_StructD;
typedef struct func_801E5018_StructC {
    u8 pad[0x24];
    func_801E5018_StructD *unk24;
} func_801E5018_StructC;
typedef struct func_801E5018_StructB {
    u8 pad[8];
    func_801E5018_StructC *unk8;
} func_801E5018_StructB;
typedef struct func_801E5018_StructA {
    u8 pad[8];
    func_801E5018_StructB *unk8;
} func_801E5018_StructA;

s32 func_801E5018(s32 arg0, s32 arg1) {
    u32 temp_v0;
    f32 fraction;

    if (func_801BF6B0(0)->unkC >= 11) {
        func_801C10D8(4, 1);
        func_801C1000(4, 1);
        return 21;
    }
    temp_v0 = func_801C1134(4, 1);
    if (temp_v0 < 20U) {
        fraction = (f32)temp_v0 / 20.0f;
        (*(func_801E5018_StructA **)(func_801DAAF0 + 0x24))->unk8->unk8->unk24->unk2C->unk12 =
            (s16)(s32)(((-32.0f * fraction + 62.0f) * 2048.0f) / 90.0f);
    }
    return 20;
}
