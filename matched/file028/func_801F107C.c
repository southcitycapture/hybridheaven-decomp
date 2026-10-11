#include "common.h"

typedef struct func_801F107C_Struct {
    s32 w[9];
} func_801F107C_Struct;

s32 func_801C18CC(s32 arg0, func_801F107C_Struct *arg1);
extern func_801F107C_Struct D_80206814;

s32 func_801F107C(s32 arg0, s32 arg1) {
    func_801F107C_Struct sp1C;

    sp1C = D_80206814;
    func_801C18CC(3, &sp1C);
    return 122;
}
