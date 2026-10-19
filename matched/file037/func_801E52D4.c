#include "context.h"

extern f64 D_801E6DC0;
extern s32 func_801CEE30(s32 arg0, s32 arg1);

struct func_801E52D4_A {
    u8 pad0[0x8];
    struct func_801E52D4_B *unk8;
};
struct func_801E52D4_B {
    u8 pad0[0x8];
    struct func_801E52D4_C *unk8;
};
struct func_801E52D4_C {
    u8 pad0[0x24];
    struct func_801E52D4_D *unk24;
};
struct func_801E52D4_D {
    u8 pad0[0x2C];
    struct func_801E52D4_E *unk2C;
};
struct func_801E52D4_E {
    u8 pad0[0xC];
    f32 unkC;
};

s32 func_801E52D4(s32 arg0, s32 arg1) {
    u64 temp;

    if (func_801C0DE4(4, 1, 0x40000000) != 0) {
        func_801C0EB0(4, 1);
        return 3;
    }
    temp = func_801C0F18(4, 1);
    (*(struct func_801E52D4_A **)(func_801DAAF0 + 0x24))->unk8->unk8->unk24->unk2C->unkC =
        (f32)(func_80034C24(temp) / D_801E6DC0) * 0.5f * 79.0f + -49.0f;
    if (func_801CEE30(0x4100000, 0x1B) != 0 || func_801CEE30(0x4100000, 0x36) != 0) {
        func_8038D28C(0x677);
    }
    return 2;
}
