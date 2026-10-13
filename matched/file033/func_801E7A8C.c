#include "context.h"

typedef struct func_801E7A8C_Struct {
    s32 w[6];
} func_801E7A8C_Struct;

extern func_801E7A8C_Struct D_801F2F04;

s32 func_801E7A8C(s32 arg0, s32 arg1) {
    func_801E7A8C_Struct sp18;

    sp18 = D_801F2F04;
    func_801C18CC(2, &sp18);
    return 0x3;
}
