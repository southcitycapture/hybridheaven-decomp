#include "common.h"

typedef struct func_801C4890_StructC {
    u8 pad[0x12];
    s16 unk12;
} func_801C4890_StructC;

typedef struct func_801C4890_StructB {
    u8 pad[0x2C];
    func_801C4890_StructC *unk2C;
} func_801C4890_StructB;

typedef struct func_801C4890_StructA {
    u8 pad[0x24];
    func_801C4890_StructB *unk24;
} func_801C4890_StructA;

s32 func_801C4890(func_801C4890_StructA *arg0, s16 arg1, s16 arg2) {
    func_801C4890_StructC *temp_v1;
    s16 temp_v0;
    s32 temp_a3;
    s32 temp_a0;

    temp_v1 = arg0->unk24->unk2C;
    temp_v0 = temp_v1->unk12;
    temp_a3 = temp_v0 - arg1;
    if (temp_a3 < 0) {
        temp_a0 = -temp_a3;
    } else {
        temp_a0 = temp_a3;
    }
    if (arg2 >= temp_a0) {
        temp_v1->unk12 = arg1;
        return 1;
    }
    if ((arg1 - temp_v0) >= 0x1000) {
        temp_v1->unk12 = (s16) (temp_v0 - arg2);
    } else {
        temp_v1->unk12 = (s16) (temp_v0 + arg2);
    }
    return 0;
}
