#include "context.h"

typedef struct func_801EBC08_Struct {
    s32 w[12];
} func_801EBC08_Struct;

extern func_801EBC08_Struct D_801ED348;

s32 func_801EBC08(s32 arg0, s32 arg1) {
    func_801EBC08_Struct sp18;

    sp18 = D_801ED348;
    func_801C18CC(4, (func_801EB248_Struct *) &sp18);
    return 0x39;
}
