#include "context.h"

typedef struct func_80005FAC_Node {
    void *unk0;
    s32 unk4;
    s32 unk8;
    void *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} func_80005FAC_Node;

typedef struct func_80005FAC_Pool {
    u8 pad[0xB0];
    func_80005FAC_Node *unkB0;
} func_80005FAC_Pool;

typedef struct func_80005FAC_Arg1 {
    u8 pad[8];
    func_80005FAC_Node *unk8;
} func_80005FAC_Arg1;

typedef struct func_80005FAC_Arg2 {
    u8 pad4[4];
    s32 unk4;
    u8 pad8[2];
    u16 unkA;
} func_80005FAC_Arg2;

func_80005FAC_Node *func_80005FAC(s32 arg0, func_80005FAC_Arg1 *arg1, func_80005FAC_Arg2 *arg2) {
    func_80005FAC_Node *var_s0;
    func_80005FAC_Node *temp_v0;

    if (arg1->unk8 != NULL) {
        var_s0 = (func_80005FAC_Node *) func_800063BC(arg1->unk8, arg2->unk4);
    } else {
        temp_v0 = ((func_80005FAC_Pool *) &D_800892B0)->unkB0;
        if (temp_v0 != NULL) {
            var_s0 = temp_v0;
            ((func_80005FAC_Pool *) &D_800892B0)->unkB0 = temp_v0->unk0;
            arg1->unk8 = temp_v0;
            temp_v0->unk0 = NULL;
            temp_v0->unk4 = 0;
            temp_v0->unk8 = 0;
            temp_v0->unkC = arg1;
            temp_v0->unk18 = arg0;
        } else {
            var_s0 = NULL;
        }
    }
    if (var_s0 != NULL) {
        if (func_80005D9C(var_s0, arg2->unkA) == 0) {
            return NULL;
        }
        func_80006370(arg0, var_s0);
        if (func_800065EC(var_s0, arg2) != 0) {
            func_80006088(var_s0);
            return NULL;
        }
    }
    return var_s0;
}
