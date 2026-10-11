#include "common.h"

typedef struct func_801E84B8_Struct {
    s32 w[9];
} func_801E84B8_Struct;

s32 func_801C18CC(s32 arg0, func_801E84B8_Struct *arg1);
extern func_801E84B8_Struct D_80205BD4;

s32 func_801E84B8(s32 arg0, s32 arg1) {
    func_801E84B8_Struct sp1C;

    sp1C = D_80205BD4;
    func_801C18CC(3, &sp1C);
    return 92;
}
