#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E785C_Struct *arg1);

typedef struct func_801F1138_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1138_Struct;

extern func_801F1138_Struct D_80206838;

s32 func_801F1138(s32 arg0, s32 arg1) {
    func_801F1138_Struct sp18;

    sp18 = D_80206838;
    func_801C18CC(2, &sp18);
    return 0x7D;
}
