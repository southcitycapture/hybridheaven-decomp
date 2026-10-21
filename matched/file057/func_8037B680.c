#include "context.h"
extern u16 D_801BBC1C;
struct func_8037AC58_Struct;
void func_8037B72C(struct func_8037AC58_Struct *arg0, s32 arg1);

void func_8037B680(struct func_8037EB58_Struct *arg0, s32 arg1) {
    u8 a;
    u8 b;
    s8 sp1D;

    sp1D = 0;
    if (D_801BBC1C != 0xA && D_801BBC1C != 0xB && arg0->unkA8 != 0) {
        func_80005700();
        return;
    }
    if (arg0->unkA8 == 0) {
        a = 0x92;
        b = 0x20;
    } else {
        a = 0x8B;
        b = 0xC9;
    }
    func_8037B5A0(arg0, a, b, (s32)&sp1D);
    func_80006214(arg0);
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_8037B72C);
}
