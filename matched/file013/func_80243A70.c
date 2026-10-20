#include "context.h"


extern s32 func_80010550(s32, void *);
extern void func_80020744(s32);
extern s32 func_8012CE9C(s32, void *, func_8024388C_StructD, s32);
extern func_8024388C_StructD D_80246CA0;

void func_80243A70(func_80243A70_Struct *arg0, s32 arg1) {
    func_80243688_StructE *sp2C;
    s32 temp_t6;
    s32 temp_v1;
    u8 var_v0;

    sp2C = arg0->unk5C;
    if (func_8012CE9C(arg1, sp2C, D_80246CA0, 10) == 0) {
        func_80010550(arg1, sp2C);
        arg0->unk24->unk2C->unkC = -30.0f;
        if (arg0->unk70 == 0x19) {
            if (arg0->unk91 == 0) {
                func_80020744(0x322);
            } else {
                func_80020744(0x323);
            }
            arg0->unk91 = (u8)(arg0->unk91 ^ 1);
        }
        if (arg0->unk92 > 0) {
            arg0->unk92--;
        }
        if (arg0->unk92 == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, &func_80243930);
        }
    }
}
