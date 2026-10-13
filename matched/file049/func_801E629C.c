#include "context.h"

typedef struct func_801E629C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E629C_Struct;

extern func_801E629C_Struct D_801E7344;

s32 func_801E629C(s32 arg0, s32 arg1) {
    func_801E629C_Struct sp1C;

    sp1C = D_801E7344;
    func_801C18CC(1, &sp1C);
    return 0x7;
}
