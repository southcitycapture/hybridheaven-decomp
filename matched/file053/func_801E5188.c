#include "common.h"

struct func_801E5188_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E5188_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5188_Struct4 *unk2C;
};
struct func_801E5188_Struct2 {
    u8 pad0[0x24];
    struct func_801E5188_Struct3 *unk24;
};
struct func_801E5188_Struct1 {
    u8 pad0[8];
    struct func_801E5188_Struct2 *unk8;
};
struct func_801E5188_Struct0 {
    u8 pad0[8];
    struct func_801E5188_Struct1 *unk8;
};
extern struct func_801E5188_Struct0 *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801E5188(s32 arg0, s32 arg1) {
    struct func_801E5188_Struct3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 4.80000019f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = (-476.700012f);
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x04100022, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
