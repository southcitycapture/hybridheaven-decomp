#include "context.h"

typedef struct func_801E7118_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7118_Struct;

extern func_801E7118_Struct D_801E8664;

s32 func_801E7118(s32 arg0, s32 arg1) {
    func_801E7118_Struct sp1C;

    sp1C = D_801E8664;
    func_801C18CC(1, &sp1C);
    return 0x1E;
}
