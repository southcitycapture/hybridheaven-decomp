#include "context.h"

typedef struct func_801E7F1C_Struct {
    s32 w[18];
} func_801E7F1C_Struct;

extern func_801E7F1C_Struct D_80205AFC;

s32 func_801E7F1C(s32 arg0, s32 arg1) {
    func_801E7F1C_Struct sp18;

    sp18 = D_80205AFC;
    func_801C18CC(6, (func_801E785C_Struct *) &sp18);
    return 0x43;
}
