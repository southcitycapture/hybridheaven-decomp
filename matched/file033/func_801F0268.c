#include "common.h"

typedef struct func_801F0268_Struct {
    s32 w[9];
} func_801F0268_Struct;

s32 func_801C18CC(s32 arg0, func_801F0268_Struct *arg1);
extern func_801F0268_Struct D_801F3994;

s32 func_801F0268(s32 arg0, s32 arg1) {
    func_801F0268_Struct sp1C;

    sp1C = D_801F3994;
    func_801C18CC(3, &sp1C);
    return 99;
}
