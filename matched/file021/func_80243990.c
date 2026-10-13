#include "context.h"

struct func_80243A00_Arg0;
void func_80243A00(struct func_80243A00_Arg0 *arg0, s32 arg1);




extern f64 D_802570D0;

void func_80243990(struct func_80243990_StructArg0 *arg0, s32 arg1) {
    struct func_80243990_StructLeaf *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_802570D0);
    if (!(arg0->unk24->unk30->unk8 < -382.0f)) {
        func_800058DC((s32) arg0, (void *) func_80243A00);
    }
}
