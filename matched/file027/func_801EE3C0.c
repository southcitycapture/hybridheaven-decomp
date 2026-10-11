#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E8814_Struct *arg1);

typedef struct func_801EE3C0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EE3C0_Struct;

extern func_801EE3C0_Struct D_801F4984;

s32 func_801EE3C0(s32 arg0, s32 arg1) {
    func_801EE3C0_Struct sp1C;

    sp1C = D_801F4984;
    func_801C18CC(1, &sp1C);
    return 0x8;
}
