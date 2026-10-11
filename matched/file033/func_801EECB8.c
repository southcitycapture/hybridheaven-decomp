#include "common.h"

typedef struct func_801EECB8_Struct {
    s32 w[9];
} func_801EECB8_Struct;

s32 func_801C18CC(s32 arg0, func_801EECB8_Struct *arg1);
extern func_801EECB8_Struct D_801F373C;

s32 func_801EECB8(s32 arg0, s32 arg1) {
    func_801EECB8_Struct sp1C;

    sp1C = D_801F373C;
    func_801C18CC(3, &sp1C);
    return 3;
}
