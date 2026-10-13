#include "context.h"

typedef struct func_801E885C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E885C_Struct;

extern func_801E885C_Struct D_801EB164;

s32 func_801E885C(s32 arg0, s32 arg1) {
    func_801E885C_Struct sp18;

    sp18 = D_801EB164;
    func_801C18CC(2, &sp18);
    return 0x6E;
}
