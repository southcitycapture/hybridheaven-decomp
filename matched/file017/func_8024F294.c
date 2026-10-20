#include "context.h"

extern f64 D_8025D2F0;

void func_8024F294(func_8024D030_Ctx *arg0, func_8024D030_Args *arg1) {
    f64 k;
    k = D_8025D2F0;
    arg1->unkC->unk30->unk4D = (u32)(arg0->unk92 * k);
    arg1->unk10->unk30->unk4D = (u32)(arg0->unk90 * k);
    arg1->unk14->unk30->unk4C = (u32)(arg0->unk90 * k);
    arg0->unk90 = arg0->unk90 + 1;
    arg0->unk92 = arg0->unk92 - 1;
}
