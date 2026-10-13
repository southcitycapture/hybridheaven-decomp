#include "context.h"

typedef struct func_801E77B4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E77B4_Struct;

extern func_801E77B4_Struct D_801E8374;
extern s32 func_801C18CC(s32 arg0, func_801E77B4_Struct *arg1);

s32 func_801E77B4(s32 arg0, s32 arg1) {
    func_801E77B4_Struct sp18;

    sp18 = D_801E8374;
    func_801C18CC(2, &sp18);
    return 0x14;
}
