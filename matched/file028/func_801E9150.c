#include "context.h"

typedef struct func_801E9150_Struct {
    s32 w[12];
} func_801E9150_Struct;

extern func_801E9150_Struct D_80205D30;

s32 func_801E9150(s32 arg0, s32 arg1) {
    func_801E9150_Struct sp18;

    sp18 = D_80205D30;
    func_801C18CC(4, &sp18);
    return 0x95;
}
