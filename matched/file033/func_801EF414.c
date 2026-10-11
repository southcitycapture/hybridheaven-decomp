#include "common.h"

typedef struct func_801EF414_Struct {
    s32 w[9];
} func_801EF414_Struct;

s32 func_801C18CC(s32 arg0, func_801EF414_Struct *arg1);
extern func_801EF414_Struct D_801F382C;

s32 func_801EF414(s32 arg0, s32 arg1) {
    func_801EF414_Struct sp1C;

    sp1C = D_801F382C;
    func_801C18CC(3, &sp1C);
    return 37;
}
