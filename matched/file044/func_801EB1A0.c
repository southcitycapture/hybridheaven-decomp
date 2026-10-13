#include "context.h"

typedef struct func_801EB1A0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EB1A0_Struct;

extern func_801EB1A0_Struct D_801ED27C;

s32 func_801EB1A0(s32 arg0, s32 arg1) {
    func_801EB1A0_Struct sp1C;
    void *sp;

    sp1C = D_801ED27C;
    sp = &sp1C;
    func_801C18CC(1, sp);
    return 0x4;
}
