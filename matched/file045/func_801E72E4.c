#include "context.h"

typedef struct func_801E72E4_Struct {
    s32 w[6];
} func_801E72E4_Struct;

extern func_801E72E4_Struct D_801E8688;

s32 func_801E72E4(s32 arg0, s32 arg1) {
    func_801E72E4_Struct sp18;

    sp18 = D_801E8688;
    func_801C18CC(2, &sp18);
    return 0x26;
}
