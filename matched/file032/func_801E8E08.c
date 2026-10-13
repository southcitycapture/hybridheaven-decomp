#include "context.h"

struct func_801E8E08_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

extern struct func_801E8E08_Struct D_801EB1F4;

s32 func_801E8E08(s32 arg0, s32 arg1) {
    struct func_801E8E08_Struct sp18;

    sp18 = D_801EB1F4;
    func_801C18CC(2, (void *) &sp18);
    return 0x86;
}
