#include "common.h"

typedef struct func_801E715C_Struct {
    s32 w[9];
} func_801E715C_Struct;

extern s32 func_801C18CC(s32 arg0, func_801E6F80_Struct *arg1);
extern func_801E715C_Struct D_801EBB34;

s32 func_801E715C(s32 arg0, s32 arg1) {
    func_801E715C_Struct sp1C;

    sp1C = D_801EBB34;
    func_801C18CC(3, &sp1C);
    return 12;
}
