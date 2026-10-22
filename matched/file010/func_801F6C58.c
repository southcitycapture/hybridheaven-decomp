#include "context.h"

extern void func_801F6E4C();
extern void func_801F6F50();

void func_801F6C58(func_801F60D8_Obj *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    u16 temp_v0;

    sp2C = arg0->unk5C;
    func_801F4A48((void *)arg0);
    if ((func_801F55EC((void *)arg0) == 0) && (arg0->unk93 != 0)) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F6F50);
        return;
    }
    if ((func_801F5630(arg0) != 0) && (func_801F55EC((void *)arg0) != 0)) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F74FC);
        return;
    }
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((void *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230((void *)arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if ((func_801F55EC((void *)arg0) != 0) &&
        (D_8012CE9C(arg1, (s32)sp2C, D_8021AFE8, 5) == 0)) {
        func_801F42E4((void *)arg0, arg0->unk9A);
        temp_v0 = arg0->unk3C;
        if ((s32)temp_v0 > 0) {
            arg0->unk3C = temp_v0 - 1;
        } else {
            if (arg0->unk93 != 0) {
                sp2C->unk78 = 1;
                func_801F3B6C(arg0);
                func_800058DC(arg0, (s32)func_801F6E4C);
            }
            D_801F474C(arg0, arg0->unk90, (f32)arg0->unk94, (f32)arg0->unk96);
        }
        func_80010550(arg1, sp2C);
    }
}
