#include "context.h"

struct func_80006148_Struct {
    u8 pad0[0xC];
    void *unkC;
    struct func_80006148_Struct *unk10;
    struct func_80006148_Struct *unk14;
    s32 unk18;
};
struct func_80006148_Owner {
    u8 pad0[0x24];
    struct func_80006148_Struct *unk24;
};

void *func_80006148(struct func_80006148_Struct *arg0, s32 arg1) {
    s32 temp_a3;
    struct func_80006148_Struct *temp_v1;
    struct func_80006148_Struct *sp24;
    struct func_80006148_Struct *sp20;
    void *temp_s0;
    struct func_80006148_Struct *var_v0;
    struct func_80006148_Struct *temp_v1_2;

    temp_a3 = arg0->unk18;
    temp_s0 = arg0->unkC;
    sp24 = arg0->unk14;
    sp20 = arg0->unk10;
    func_80006088(arg0);
    if (temp_s0 != NULL) {
        temp_s0 = func_80005FAC(temp_a3, (func_80005FAC_Arg1 *) temp_s0, (func_80005FAC_Arg2 *) arg1);
    } else {
        temp_s0 = func_80005E44(temp_a3, (struct func_80005E44_Struct *) arg1);
    }
    var_v0 = temp_s0;
    temp_v1 = var_v0->unk14;
    if (temp_v1 != NULL) {
        temp_v1->unk10 = var_v0->unk10;
    }
    temp_v1_2 = var_v0->unk10;
    if (temp_v1_2 != NULL) {
        temp_v1_2->unk14 = var_v0->unk14;
    }
    var_v0->unk14 = sp24;
    var_v0->unk10 = sp20;
    if (sp24 != NULL) {
        sp24->unk10 = var_v0;
    } else {
        ((struct func_80006148_Owner *) var_v0->unk18)->unk24 = var_v0;
    }
    if (sp20 != NULL) {
        sp20->unk14 = var_v0;
    }
    return var_v0;
}
