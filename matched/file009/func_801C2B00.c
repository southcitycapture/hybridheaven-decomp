#include "context.h"

extern void func_8013A1B4();
extern void func_801C2BDC();

void func_801C2B00(struct func_801C2E20_Struct0 *arg0, s32 arg1) {
    s32 sp24;

    sp24 = arg0->unk5C;
    if (D_801BBBF0.unk1B4 & 1) {
        D_801BBBF0.unk1B4 &= 0xFFFE;
        func_800058DC(arg0, func_801C2580);
        return;
    }
    if (func_80011140(arg1, sp24, D_801E0B10,
                     *(u16 *)((u8 *)&D_801BBBF0 + 0x1C4)) != 0) {
        func_8013A1B4(arg1, D_801E0B10, 0xFFFFFF);
        func_800058DC(arg0, func_801C2BDC);
    }
}
