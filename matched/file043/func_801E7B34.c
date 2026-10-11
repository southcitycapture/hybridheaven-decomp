#include "common.h"

typedef struct func_801E7B34_Struct {
    s32 w[9];
} func_801E7B34_Struct;

s32 func_801C18CC(s32 arg0, func_801E7B34_Struct *arg1);
extern func_801E7B34_Struct D_801E99F4;

s32 func_801E7B34(s32 arg0, s32 arg1) {
    func_801E7B34_Struct sp1C;

    sp1C = D_801E99F4;
    func_801C18CC(3, &sp1C);
    return 20;
}
