#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
extern u8 D_801DAB14[];
struct func_801E1FA8_StructData {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E1FA8_StructObj {
    u8 pad[0x2C];
    struct func_801E1FA8_StructData *unk2C;
};
struct func_801E1FA8_StructMid {
    u8 pad[0x24];
    struct func_801E1FA8_StructObj *unk24;
};
struct func_801E1FA8_StructNode {
    u8 pad[8];
    struct func_801E1FA8_StructMid *unk8;
};
#define ROOT (*(struct func_801E1FA8_StructNode **)D_801DAB14)
s32 func_801E1FA8(s32 arg0, s32 arg1) {
    f32 temp = 63.4000015f;
    if (D_8038C17C(0.0f, 0.800000191f, -16.4f, 110.7f,
        4.9000001f, (-1.10000002f), 101.699997f, -9.5f,
        (-33.0999985f), 59.5f, -29.0f, (-14.8999996f),
        59.2000008f, (-37.5999985f), temp, temp) != 0) {
        ROOT->unk8->unk24->unk2C->unk4 = 9.0f;
        ROOT->unk8->unk24->unk2C->unk8 = 0.0f;
        ROOT->unk8->unk24->unk2C->unkC = -2.0f;
        ROOT->unk8->unk24->unk2C->unk12 = 0x13D2;
        D_8038C158();
        return 6;
    }
    return 5;
}
