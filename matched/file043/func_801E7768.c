#include "context.h"

typedef struct func_801E7768_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7768_Struct;

extern func_801E7768_Struct D_801E9988;

s32 func_801E7768(s32 arg0, s32 arg1) {
    func_801E7768_Struct sp18;

    sp18 = D_801E9988;
    func_801C18CC(2, (void *) &sp18);
    return 4;
}
