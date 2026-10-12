#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E7E54_Struct *arg1);

typedef struct func_801F01C0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F01C0_Struct;

extern func_801F01C0_Struct D_801F3988;

s32 func_801F01C0(s32 arg0, s32 arg1) {
    func_801F01C0_Struct sp1C;

    sp1C = D_801F3988;
    func_801C18CC(1, &sp1C);
    return 0x60;
}
