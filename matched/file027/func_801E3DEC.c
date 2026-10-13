#include "context.h"

struct func_801E3DEC_StructOuter {
    u8 pad0[8];
    func_801E390C_Struct2 *unk8;
};

s32 func_801E3DEC(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F4C() != 0) {
        func_801C2F60(&sp1C);
        ((struct func_801E3DEC_StructOuter *)D_8038D8D0)->unk8->unk30->unk8 = sp1C + D_801F3C0C;
        return 0xB;
    }
    return 0xC;
}
