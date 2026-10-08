#include "context.h"

extern s32 D_802170B4;
extern void func_801FA624(s32);

struct func_801FB554_Inner {
    u8 pad0[0x9];
    u8 unk9;
    u8 unkA;
};

struct func_801FB554_Sub {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FB554_Inner *unk30;
};

struct func_801FB554_Args {
    struct func_801FB554_Sub *unk0;
    struct func_801FB554_Sub *unk4;
};

struct func_801FB554_Obj {
    u8 pad0[0x24];
    void *unk24;
};

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
