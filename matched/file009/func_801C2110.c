#include "context.h"

extern void func_801C2170();

void func_801C2110(func_801C1EE0_StructArg *arg0, s32 arg1) {
    func_801C1EE0_StructBBBF0 *src;
    func_801C1EE0_StructInner *inner;

    src = (func_801C1EE0_StructBBBF0 *) D_801BBBF0;
    inner = arg0->unk5C;
    D_801E0B00.unk4 = 0;
    D_801E0B00.unk0 = src->unkF10;
    D_801E0B00.unk6 = src->unkF00;
    D_801E0B00.unk8 = src->unkF08;
    inner->unk78 = 1;
    func_800058DC(arg0, func_801C2170, src);
}
