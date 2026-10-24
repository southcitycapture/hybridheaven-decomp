#define func_80005670 D_80005670
#include "context.h"
#undef func_80005670

typedef struct func_80005670_StructNode {
    struct func_80005670_StructNode *unk0;
    s32 unk4;
    struct func_80005670_StructNode *unk8;
    struct func_80005670_StructNode *unkC;
} func_80005670_StructNode;

typedef struct func_80005670_StructPool {
    u8 pad[0xAC];
    func_80005670_StructNode *unkAC;
} func_80005670_StructPool;

func_80005670_StructNode *func_80005670(func_80005670_StructNode *arg0, s32 *arg1) {
    func_80005670_StructNode *var_a0;
    func_80005670_StructNode *temp_v0;

    if (arg0->unk8 != NULL) {
        var_a0 = (func_80005670_StructNode *)func_800059B0(arg0->unk8, arg1[1]);
    } else {
        temp_v0 = ((func_80005670_StructPool *)&D_800892B0)->unkAC;
        if (temp_v0 != NULL) {
            var_a0 = temp_v0;
            ((func_80005670_StructPool *)&D_800892B0)->unkAC = temp_v0->unk0;
            arg0->unk8 = temp_v0;
            temp_v0->unk0 = NULL;
            temp_v0->unk4 = 0;
            temp_v0->unk8 = NULL;
            temp_v0->unkC = arg0;
        } else {
            var_a0 = NULL;
        }
    }
    if (var_a0 != NULL) {
        func_80005B98((void *)var_a0, arg1);
    }
    return var_a0;
}
