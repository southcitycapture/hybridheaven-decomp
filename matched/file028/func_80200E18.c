#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E785C_Struct *arg1);

typedef struct func_80200E18_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80200E18_Struct;

extern func_80200E18_Struct D_80207D04;

s32 func_80200E18(s32 arg0, s32 arg1) {
    func_80200E18_Struct sp1C;

    sp1C = D_80207D04;
    func_801C18CC(1, &sp1C);
    return 0x6;
}
