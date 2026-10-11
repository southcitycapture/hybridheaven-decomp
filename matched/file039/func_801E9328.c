#include "common.h"

typedef struct func_801E9328_Struct {
    s32 w[9];
} func_801E9328_Struct;

s32 func_801C18CC(s32 arg0, func_801E9328_Struct *arg1);
extern func_801E9328_Struct D_801EAA04;

s32 func_801E9328(s32 arg0, s32 arg1) {
    func_801E9328_Struct sp1C;

    sp1C = D_801EAA04;
    func_801C18CC(3, &sp1C);
    return 52;
}
