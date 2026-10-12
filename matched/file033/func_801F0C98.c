#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E7E54_Struct *arg1);

typedef struct func_801F0C98_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0C98_Struct;

extern func_801F0C98_Struct D_801F3A84;

s32 func_801F0C98(s32 arg0, s32 arg1) {
    func_801F0C98_Struct sp18;

    sp18 = D_801F3A84;
    func_801C18CC(2, &sp18);
    return 0x90;
}
