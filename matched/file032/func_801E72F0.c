#include "context.h"

typedef struct func_801E72F0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E72F0_Struct;

extern func_801E72F0_Struct D_801EAF6C;

s32 func_801E72F0(s32 arg0, s32 arg1) {
    func_801E72F0_Struct sp1C;

    sp1C = D_801EAF6C;
    func_801C18CC(1, (void *) &sp1C);
    return 0xF;
}
