#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E785C_Struct *arg1);

typedef struct func_801F1CD8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F1CD8_Struct;

extern func_801F1CD8_Struct D_80206934;

s32 func_801F1CD8(s32 arg0, s32 arg1) {
    func_801F1CD8_Struct sp1C;

    sp1C = D_80206934;
    func_801C18CC(1, &sp1C);
    return 0xB0;
}
