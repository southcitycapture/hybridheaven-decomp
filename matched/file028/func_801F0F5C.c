#include "common.h"

typedef struct func_801F0F5C_Struct {
    s32 w[9];
} func_801F0F5C_Struct;

s32 func_801C18CC(s32 arg0, func_801F0F5C_Struct *arg1);
extern func_801F0F5C_Struct D_802067F0;

s32 func_801F0F5C(s32 arg0, s32 arg1) {
    func_801F0F5C_Struct sp1C;

    sp1C = D_802067F0;
    func_801C18CC(3, &sp1C);
    return 117;
}
