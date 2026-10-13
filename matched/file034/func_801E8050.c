#include "context.h"

struct func_801E8050_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

extern void func_801C18CC(s32 arg0, void *arg1);
extern struct func_801E8050_Struct D_801E9028;

s32 func_801E8050(s32 arg0, s32 arg1) {
    struct func_801E8050_Struct sp18;

    sp18 = D_801E9028;
    func_801C18CC(2, &sp18);
    return 0x28;
}
