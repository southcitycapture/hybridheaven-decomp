#include "context.h"
extern s32 func_80005670();
extern void func_800058DC();
extern void func_80237694();

extern u8 D_80181D78[];

struct func_80237630_Struct {
    u8 pad0[0x91];
    s8 unk91;
    u8 pad1[0x6];
    s32 unk98;
    s32 unk9C;
    u8 pad2[0xA];
    s8 unkAA;
};

void func_80237630(struct func_80237630_Struct *arg0, s32 arg1) {
    struct func_80237630_Struct *temp_v0;
    s32 sp20;
    s32 sp1C;

    sp20 = arg0->unk98;
    sp1C = arg0->unk9C;
    temp_v0 = (struct func_80237630_Struct *) func_80005670(arg0, D_80181D78);
    temp_v0->unk91 = arg0->unkAA;
    temp_v0->unk98 = sp20;
    temp_v0->unk9C = sp1C;
    func_800058DC(arg0, func_80237694);
}
