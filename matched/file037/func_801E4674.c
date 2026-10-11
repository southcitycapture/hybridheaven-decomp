#include "context.h"
extern u8 D_801DAB14[];
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);
extern void func_801C0D04(s32 arg0, s32 arg1);

struct func_801E4674_Node {
    u8 pad0[0x8];
    struct func_801E4674_Mid *unk8;
};

struct func_801E4674_Mid {
    u8 pad0[0x24];
    struct func_801E4674_Obj *unk24;
};

struct func_801E4674_Obj {
    u8 pad0[0x2C];
    struct func_801E4674_Data *unk2C;
};

struct func_801E4674_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};

s32 func_801E4674(s32 arg0, s32 arg1) {
    struct func_801E4674_Obj *temp_v0;

    temp_v0 = (*(struct func_801E4674_Node **)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 9.0f;
        (*(struct func_801E4674_Node **)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801E4674_Node **)D_801DAB14)->unk8->unk24->unk2C->unkC = -60.0f;
        (*(struct func_801E4674_Node **)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x01680040, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 3;
    }
    return 2;
}
