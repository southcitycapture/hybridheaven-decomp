#include "context.h"

struct func_801E4388_StructOuter {
    u8 pad0[0x14];
    func_801E390C_Struct2 *unk14;
};

s32 func_801E4388(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F4C() != 0) {
        func_801C2F60(&sp1C);
        ((struct func_801E4388_StructOuter *)D_8038D8D0)->unk14->unk30->unk8 = sp1C + D_801F3C9C;
        return 0xB;
    }
    return 0xC;
}
