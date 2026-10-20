#include "context.h"
extern u8 D_801DAB14[];

extern f32 D_801E6BD0;
extern f32 D_801E6BD4;
extern f32 D_801E6BD8;
extern f32 D_801E6BDC;
extern f32 D_801E6BE0;
extern f32 D_801E6BE4;
extern f32 D_801E6BE8;
extern f32 D_801E6BEC;
extern f32 D_801E6BF0;

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

#define ROOT (*root)

s32 func_801E1FA8(s32 arg0, s32 arg1) {
    f32 temp = D_801E6BD0;
    struct func_801E1FA8_StructNode **root;
    if (D_8038C17C(0.0f, D_801E6BD4, -16.4f, 110.7f,
        D_801E6BD8, D_801E6BDC, D_801E6BE0, -9.5f,
        D_801E6BE4, 59.5f, -29.0f, D_801E6BE8,
        D_801E6BEC, D_801E6BF0, temp, temp) != 0) {
        root = (struct func_801E1FA8_StructNode **)D_801DAB14;
        ROOT->unk8->unk24->unk2C->unk4 = 9.0f;
        ROOT->unk8->unk24->unk2C->unk8 = 0.0f;
        ROOT->unk8->unk24->unk2C->unkC = -2.0f;
        ROOT->unk8->unk24->unk2C->unk12 = 0x13D2;
        D_8038C158();
        return 6;
    }
    return 5;
}
