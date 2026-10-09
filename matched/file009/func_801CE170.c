#include "context.h"

typedef struct func_801CE170_Struct {
    u8 pad0[5];
    u8 unk5;
    u8 pad6[2];
} func_801CE170_Struct;

extern func_801CE170_Struct D_801E1200;

func_801CE170_Struct *func_801CE170(u8 arg0) {
    func_801CE170_Struct *var_v1;
    s32 key;

    key = arg0;
    for (var_v1 = &D_801E1200; var_v1->unk5 != 0xFF; var_v1++) {
        if (key == var_v1->unk5) {
            return var_v1;
        }
    }
    return NULL;
}
