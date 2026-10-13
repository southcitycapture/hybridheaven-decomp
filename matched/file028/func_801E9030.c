#include "context.h"

typedef struct func_801E9030_Struct {
    s32 w[12];
} func_801E9030_Struct;

extern func_801E9030_Struct D_80205D00;

s32 func_801E9030(s32 arg0, s32 arg1) {
    func_801E9030_Struct sp18;

    sp18 = D_80205D00;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x90;
}
