#include "context.h"
extern void func_80010550(s32, void *, void *, s32);
extern s32 func_8012CE9C(s32, s32, struct func_80246828_Triple, s32);

struct func_80244FDC_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
};
extern struct func_80246828_Triple D_802484B8;

void func_80244FDC(struct func_80244FDC_Obj *arg0, s32 arg1) {
    s32 temp_a1;
    extern void func_80010550();

    temp_a1 = arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_802484B8, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
    }
}
