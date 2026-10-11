#include "common.h"

typedef struct func_801EB368_Struct {
    s32 w[9];
} func_801EB368_Struct;

s32 func_801C18CC(s32 arg0, func_801EB368_Struct *arg1);
extern func_801EB368_Struct D_801ED2AC;

s32 func_801EB368(s32 arg0, s32 arg1) {
    func_801EB368_Struct sp1C;

    sp1C = D_801ED2AC;
    func_801C18CC(3, &sp1C);
    return 12;
}
