#include "context.h"




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
