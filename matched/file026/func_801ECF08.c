#include "context.h"

extern f32 D_801FC890;
extern f32 D_801FC894;

struct func_801ECF08_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801ECF08_Struct2 {
    u8 pad0[0x2C];
    struct func_801ECF08_Struct3 *unk2C;
};

struct func_801ECF08_Node {
    u8 pad0[8];
    struct func_801ECF08_Node *unk8;
    u8 pad1[0x18];
    struct func_801ECF08_Struct2 *unk24;
};

s32 func_801ECF08(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01406F40) != 0) {
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801FC890;
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FC894;
        (*(struct func_801ECF08_Node **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        return 4;
    }
    return 3;
}
