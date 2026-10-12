#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E69C0_Struct *arg1);

typedef struct func_801E6B9C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6B9C_Struct;

extern func_801E6B9C_Struct D_801E7584;

s32 func_801E6B9C(s32 arg0, s32 arg1) {
    func_801E6B9C_Struct sp1C;

    sp1C = D_801E7584;
    func_801C18CC(1, &sp1C);
    return 0xC;
}
