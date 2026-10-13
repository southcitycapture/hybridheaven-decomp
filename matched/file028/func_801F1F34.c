#include "context.h"

typedef struct func_801F1F34_Struct {
    s32 w[12];
} func_801F1F34_Struct;

extern func_801F1F34_Struct D_80206958;

s32 func_801F1F34(s32 arg0, s32 arg1) {
    func_801F1F34_Struct sp18;

    sp18 = D_80206958;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0xBB;
}
