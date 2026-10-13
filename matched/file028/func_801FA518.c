#include "context.h"

typedef struct func_801FA518_Struct {
    s32 w[12];
} func_801FA518_Struct;

extern func_801FA518_Struct D_80207644;

s32 func_801FA518(s32 arg0, s32 arg1) {
    func_801FA518_Struct sp18;

    sp18 = D_80207644;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x29;
}
