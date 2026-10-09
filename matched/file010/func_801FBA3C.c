#include "context.h"

struct func_801FBA3C_Struct {
    u8 pad0[0x24];
    void *unk24;
    u8 pad28[0xAF - 0x28];
    u8 unkAF;
};

struct func_801FBA3C_Inner {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};

struct func_801FBA3C_Entry {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FBA3C_Inner *unk30;
};

void func_801FBA3C(struct func_801FBA3C_Struct *arg0, struct func_801FBA3C_Entry **arg1) {
    s32 var_a0;
    struct func_801FBA3C_Inner *temp_v0;

    func_801FA29C(arg0->unk24);
    var_a0 = 0;
    do {
        if (arg0->unkAF == 1) {
            temp_v0 = arg1[var_a0]->unk30;
            temp_v0->unkA = temp_v0->unkA + 0xF;
            temp_v0 = arg1[var_a0]->unk30;
            temp_v0->unk9 = temp_v0->unkA;
        } else {
            temp_v0 = arg1[var_a0]->unk30;
            temp_v0->unkA = temp_v0->unkA + 0xF;
            temp_v0 = arg1[var_a0]->unk30;
            temp_v0->unk8 = temp_v0->unkA;
        }
        var_a0 = (var_a0 + 1) & 0xFF;
    } while (var_a0 < 4);
    if (arg1[0]->unk22 == 0) {
        D_802170B4 = 0;
        func_80005700((s32)arg0);
        func_801FA624(0x112);
    }
}
