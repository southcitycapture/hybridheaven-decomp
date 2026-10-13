#include "context.h"

struct func_801E490C_StructOuter {
    u8 pad0[0x1C];
    func_801E390C_Struct2 *unk1C;
};

struct func_801E490C_StructMid {
    u8 pad0[8];
    f32 unk8;
};

s32 func_801E490C(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F4C() != 0) {
        func_801C2F60(&sp1C);
        ((struct func_801E490C_StructMid *)((struct func_801E490C_StructOuter *)D_8038D8D0)->unk1C->unk30)->unk8 = sp1C + D_801F3D0C;
        return 0xB;
    }
    return 0xC;
}
