#include "common.h"

typedef struct func_801EB248_Struct {
    s32 w[9];
} func_801EB248_Struct;

s32 func_801C18CC(s32 arg0, func_801EB248_Struct *arg1);
extern func_801EB248_Struct D_801ED288;

s32 func_801EB248(s32 arg0, s32 arg1) {
    func_801EB248_Struct sp1C;

    sp1C = D_801ED288;
    func_801C18CC(3, &sp1C);
    return 7;
}
