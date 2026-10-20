#include "context.h"
extern func_80246E60_StructGlobal D_80258F48;
extern s32 func_8012A564(void *, s32);

typedef struct func_80246B68_StructInner {
    u8 pad[0x78];
    s16 unk78;
} func_80246B68_StructInner;

typedef struct func_80246B68_Struct {
    u8 pad[0x5C];
    func_80246B68_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80246B68_Struct;

extern void func_80247FEC();

void func_80246B68(func_80246B68_Struct *arg0, s32 arg1) {
    func_80246B68_StructInner *sp2C;
    s16 temp_v1;

    sp2C = arg0->unk5C;
    if ((func_80244AB0() == 0) &&
        (func_8012CE9C(arg1, sp2C, D_80258F48, 10) == 0)) {
        func_80010550(arg1, sp2C);
        if (arg0->unk94-- == 0) {
            func_800058DC(arg0, func_80247FEC);
            return;
        }
        func_8012A94C(arg0, 0x80);
        if (func_8012A564(arg0, 0x42D80000) != 0) {
            sp2C->unk78 = 1;
            arg0->unk94 = func_8012C6B4(0x80) + 0x80;
            func_800058DC(arg0, func_80246488);
        }
    }
}
