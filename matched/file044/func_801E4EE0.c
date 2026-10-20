#include "context.h"

struct func_801E4EE0_Ret {
    u8 pad0[0xC];
    s32 unkC;
};




extern struct func_801E4EE0_Obj *D_8038D8D0;
extern f32 D_801EDD0C;
extern f32 D_801EDD10;

s32 func_801E4EE0(s32 arg0, s32 arg1) {
    if (((struct func_801E4EE0_Ret *) func_801BF6B0(0))->unkC >= 0x11) {
        D_8038D8D0->unk1C->unk30->unk4 = D_801EDD0C;
        D_8038D8D0->unk1C->unk30->unk8 = 10.5f;
        D_8038D8D0->unk1C->unk30->unkC = D_801EDD10;
        D_8038D8D0->unk1C->unk30->unk12 = 0x1B57;
        D_8038D8D0->unk1C->unk30->unk4B = 0xFF;
        D_8038D8D0->unk1C->unk22 = 1;
        func_801C1000(3, 7);
        return 6;
    }
    return 5;
}
