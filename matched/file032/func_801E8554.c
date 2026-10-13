#include "context.h"

typedef struct func_801E8554_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8554_Struct;

extern func_801E8554_Struct D_801EB11C;

s32 func_801E8554(s32 arg0, s32 arg1) {
    func_801E8554_Struct sp18;

    sp18 = D_801EB11C;
    func_801C18CC(2, (void *) &sp18);
    return 0x61;
}
