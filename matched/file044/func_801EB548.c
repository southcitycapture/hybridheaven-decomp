#include "context.h"
s32 func_801C18CC(s32 arg0, func_801EB248_Struct *arg1);

typedef struct func_801EB548_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EB548_Struct;

extern func_801EB548_Struct D_801ED2E8;

s32 func_801EB548(s32 arg0, s32 arg1) {
    func_801EB548_Struct sp18;

    sp18 = D_801ED2E8;
    func_801C18CC(2, &sp18);
    return 0x14;
}
