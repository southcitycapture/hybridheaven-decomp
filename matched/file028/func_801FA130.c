#include "context.h"

typedef struct func_801FA130_Struct {
    s32 w[12];
} func_801FA130_Struct;
extern func_801FA130_Struct D_802075B4;

s32 func_801FA130(s32 arg0, s32 arg1) {
    func_801FA130_Struct sp18;

    sp18 = D_802075B4;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x18;
}
