#include "context.h"

struct func_801E3C78_Struct_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E3C78(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6E5F35) != 0) {
        ((struct func_801E3C78_Struct_Leaf *)D_8038D8D0->unk8->unk30)->unk4 = 49.0f;
        ((struct func_801E3C78_Struct_Leaf *)D_8038D8D0->unk8->unk30)->unk8 = -116.0f;
        ((struct func_801E3C78_Struct_Leaf *)D_8038D8D0->unk8->unk30)->unkC = 49.0f;
        ((struct func_801E3C78_Struct_Leaf *)D_8038D8D0->unk8->unk30)->unk12 = 0x1800;
        return 0xC;
    }
    return 0xB;
}
