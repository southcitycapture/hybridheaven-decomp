#include "context.h"

typedef struct func_801FA010_Struct {
    s32 raw[12];
} func_801FA010_Struct;

extern func_801FA010_Struct D_80207584;

s32 func_801FA010(s32 arg0, s32 arg1) {
    func_801FA010_Struct sp18;

    sp18 = D_80207584;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x13;
}
