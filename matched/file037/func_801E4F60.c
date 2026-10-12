#include "context.h"

struct func_801E4F60_Struct_Node {
    u8 pad0[0x8];
    struct func_801E4F60_Struct_Mid *unk8;
};
struct func_801E4F60_Struct_Mid {
    u8 pad0[0x24];
    struct func_801E4F60_Struct_Obj *unk24;
};
struct func_801E4F60_Struct_Obj {
    u8 pad0[0x2C];
    struct func_801E4F60_Struct_Data *unk2C;
};
struct func_801E4F60_Struct_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
};

extern f32 D_801E6A60;

s32 func_801E4F60(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0xC) {
        D_801E6A58 = 0;
        D_801E6A60 = (*(struct func_801E4F60_Struct_Node **)D_801DAB14)->unk8->unk24->unk2C->unk8;
        func_801C0D04(4, 0);
        return 0x12;
    }
    if (D_801E6A5C == 0x12) {
        func_8038D28C(0x677);
    }
    D_801E6A5C = D_801E6A5C + 1;
    return 0x11;
}
