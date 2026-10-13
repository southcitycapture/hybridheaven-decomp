#include "context.h"

typedef struct func_801E7FD8_Struct {
    s32 w[15];
} func_801E7FD8_Struct;
extern func_801E7FD8_Struct D_80205B44;

s32 func_801E7FD8(s32 arg0, s32 arg1) {
    func_801E7FD8_Struct sp1C;

    sp1C = D_80205B44;
    func_801C18CC(5, (func_801E785C_Struct *) &sp1C);
    return 0x46;
}
