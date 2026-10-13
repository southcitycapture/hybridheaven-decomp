#include "context.h"

struct func_801CC2CC_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern void func_8013A28C(s32, struct func_801CC2CC_Struct3);
extern s32 func_80010550();
extern struct func_801CC2CC_Struct3 D_801CE688;
extern void func_801CC344();

void func_801CC2CC(struct func_801CC2CC_Struct1 *arg0, s32 arg1) {
    struct func_801CC2CC_Struct2 *temp_v0;

    temp_v0 = arg0->unk5C;
    temp_v0->unk78 = 1;
    func_8013A28C(arg1, D_801CE688);
    func_80010550(arg1, temp_v0);
    func_800058DC((s32)arg0, (void *)func_801CC344);
}
