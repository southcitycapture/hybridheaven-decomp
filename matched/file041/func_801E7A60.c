#include "context.h"

typedef struct func_801E7A60_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7A60_Struct;

extern s32 func_801C18CC(s32 arg0, void *arg1);
extern func_801E7A60_Struct D_801E83BC;

s32 func_801E7A60(s32 arg0, s32 arg1) {
    func_801E7A60_Struct sp18;

    sp18 = D_801E83BC;
    func_801C18CC(2, &sp18);
    return 0x1F;
}
