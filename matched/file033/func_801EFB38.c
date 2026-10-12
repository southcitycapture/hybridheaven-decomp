#include "context.h"
s32 func_801C18CC(s32 arg0, func_801E7E54_Struct *arg1);

typedef struct func_801EFB38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EFB38_Struct;

extern func_801EFB38_Struct D_801F3904;

s32 func_801EFB38(s32 arg0, s32 arg1) {
    func_801EFB38_Struct sp18;

    sp18 = D_801F3904;
    func_801C18CC(2, &sp18);
    return 0x43;
}
