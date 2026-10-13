#include "context.h"

typedef struct func_801E70BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E70BC_Struct;

extern func_801E70BC_Struct D_80205988;

s32 func_801E70BC(s32 arg0, s32 arg1) {
    func_801E70BC_Struct sp1C;

    sp1C = D_80205988;
    func_801C18CC(1, &sp1C);
    return 5;
}
