#include "context.h"

typedef struct func_801E6B54_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6B54_Struct;

extern func_801E6B54_Struct D_801E8610;

s32 func_801E6B54(s32 arg0, s32 arg1) {
    func_801E6B54_Struct sp1C;

    sp1C = D_801E8610;
    func_801C18CC(1, (void *) &sp1C);
    return 3;
}
