#include "context.h"

extern s32 D_802170B4;
extern s32 func_801FA624();





void func_801FB554(struct func_801FB554_Obj *arg0, struct func_801FB554_Args *arg1) {
    func_801FA29C((struct func_801FA29C_Struct *) arg0->unk24);
    arg1->unk0->unk30->unkA = (u8) (arg1->unk0->unk30->unkA + 0xF);
    arg1->unk0->unk30->unk9 = arg1->unk0->unk30->unkA;
    arg1->unk4->unk30->unkA = (u8) (arg1->unk4->unk30->unkA + 0xF);
    arg1->unk4->unk30->unk9 = arg1->unk4->unk30->unkA;
    if (arg1->unk0->unk22 == 0) {
        D_802170B4 = 0;
        func_80005700((s32) arg0);
        func_801FA624(0x112);
    }
}
