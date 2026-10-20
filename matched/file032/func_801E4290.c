#include "context.h"

struct func_801E4290_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801E4290_Struct24 {
    u8 pad0[0x2C];
    struct func_801E4290_Struct2C *unk2C;
};
struct func_801E4290_Struct8 {
    u8 pad0[0x24];
    struct func_801E4290_Struct24 *unk24;
};
struct func_801E4290_StructA {
    u8 pad0[8];
    struct func_801E4290_Struct8 *unk8;
};
struct func_801E4290_StructB {
    u8 pad0[8];
    struct func_801E4290_StructA *unk8;
};
#define Q (*(struct func_801E4290_StructB **)&D_801DAB14)

s32 func_801E4290(s32 arg0, s32 arg1) {
    struct func_801E4290_Struct24 *temp_v0;

    temp_v0 = Q->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        Q->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        Q->unk8->unk8->unk24->unk2C->unkC = -50.0f;
        Q->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x02A8005D, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
