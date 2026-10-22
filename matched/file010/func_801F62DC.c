#include "context.h"

extern void func_801F60D8();

void func_801F62DC(struct func_801F6008_Struct *arg0, s32 arg1)
{
    struct func_801F5230_StructB *sp2C;

    sp2C = arg0->unk5C;
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((struct func_801F5230_StructArg *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    func_8012A94C(arg0, 0x100);
    if (D_8012CE9C(arg1, (s32)sp2C, *(func_801F63E0_Struct3 *)&D_8021B018, 10) == 0) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F60D8);
    }
}
