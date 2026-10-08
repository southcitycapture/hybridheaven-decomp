#include "context.h"

struct func_801E3B84_StructOuter {
    u8 pad0[4];
    func_801E390C_Struct2 *unk4;
};

extern f32 D_801F3BD4;

s32 func_801E3B84(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F4C() != 0) {
        func_801C2F60(&sp1C);
        ((struct func_801E3B84_StructOuter *)D_8038D8D0)->unk4->unk30->unk8 = sp1C + D_801F3BD4;
        return 0xB;
    }
    return 0xC;
}
