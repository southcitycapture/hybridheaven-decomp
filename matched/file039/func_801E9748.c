#include "common.h"

typedef struct func_801E9748_Struct {
    s32 w[9];
} func_801E9748_Struct;

s32 func_801C18CC(s32 arg0, func_801E9748_Struct *arg1);
extern func_801E9748_Struct D_801EAA88;

s32 func_801E9748(s32 arg0, s32 arg1) {
    func_801E9748_Struct sp1C;

    sp1C = D_801EAA88;
    func_801C18CC(3, &sp1C);
    return 69;
}
