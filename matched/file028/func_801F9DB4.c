#include "context.h"

typedef struct func_801F9DB4_Struct {
    s32 w[12];
} func_801F9DB4_Struct;
extern func_801F9DB4_Struct D_80207548;

s32 func_801F9DB4(s32 arg0, s32 arg1) {
    func_801F9DB4_Struct sp18;

    sp18 = D_80207548;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 6;
}
