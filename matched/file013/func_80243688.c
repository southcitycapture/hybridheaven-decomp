#include "context.h"
extern void func_800058DC(void *, void *);



void func_80242F80(void *, void *);
extern f64 D_80249B48;
extern u8 D_80246C64[];
extern void func_8024373C();

void func_80243688(func_80243688_Struct *arg0, s32 arg1) {
    func_80243688_StructE *sp1C;
    f64 sub;

    sub = D_80249B48;
    sp1C = arg0->unk5C;
    arg0->unk24->unk2C->unkC = (f32) ((f64) arg0->unk24->unk2C->unkC - sub);
    arg0->unk24->unk2C->unk4 = (f32) ((f64) arg0->unk24->unk2C->unk4 - sub);
    if (func_80010550(arg1, sp1C, arg0) != 0) {
        sp1C->unk78 = 1;
        arg0->unkA0 = 0x50;
        func_80242F80(arg0, D_80246C64);
        func_800058DC(arg0, (void *) func_8024373C);
    }
}
