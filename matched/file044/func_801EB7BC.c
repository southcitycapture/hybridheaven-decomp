#include "context.h"
s32 func_801C18CC(s32 arg0, func_801EB248_Struct *arg1);

typedef struct func_801EB7BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EB7BC_Struct;

extern func_801EB7BC_Struct D_801ED318;

s32 func_801EB7BC(s32 arg0, s32 arg1) {
    func_801EB7BC_Struct sp1C;

    sp1C = D_801ED318;
    func_801C18CC(1, &sp1C);
    return 0x1F;
}
