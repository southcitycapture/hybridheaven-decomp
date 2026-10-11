#include "common.h"

typedef struct func_801F092C_Struct {
    s32 w[9];
} func_801F092C_Struct;

s32 func_801C18CC(s32 arg0, func_801F092C_Struct *arg1);
extern func_801F092C_Struct D_8020673C;

s32 func_801F092C(s32 arg0, s32 arg1) {
    func_801F092C_Struct sp1C;

    sp1C = D_8020673C;
    func_801C18CC(3, &sp1C);
    return 90;
}
