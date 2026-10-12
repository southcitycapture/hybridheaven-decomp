#include "context.h"

extern void func_80241164();

void func_8024101C(struct func_80240924_Self *arg0, struct func_80240924_Obj **arg1) {
    struct func_80240924_Copy sp28;

    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        sp28 = D_80164F40;
        sp28.unk4 = 0x80000900;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39D, 3);
        func_8012D918(arg0, 0x398, 0, 0, 0);
        (*arg1)->unk30->unk24 |= 0x4100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_80249708 | 0x40000000);
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        arg0->unk3C = 0;
        arg0->unk90 = 0xA;
        arg0->unk92 = 0x1E;
        arg0->unk9D = 0;
        arg0->unk94 = 0;
        func_8001F74C(arg0);
        func_800058DC(arg0, &func_80241164);
    }
}
