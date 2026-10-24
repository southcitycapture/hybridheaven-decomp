#include "context.h"

typedef struct func_801F6F50_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
    u8 pad92;
    u8 unk93;
    u8 pad94[0xAE - 0x94];
    u8 unkAE;
    u8 unkAF;
} func_801F6F50_Struct;

void func_801F6F50(func_801F6F50_Struct *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp2C;
    func_801F63E0_Struct2 *v;

    sp2C = arg0->unk5C;
    if (func_801F5630() != 0 && func_801F55EC((func_801F55EC_Struct *)arg0) != 0) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F74FC);
        return;
    }
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *)arg0, (f32)(u32)arg0->unkAE) != 0) {
            arg0->unkAF = func_801F53E8((s32)arg0);
            func_801F5230(arg0);
            func_800058DC(arg0, (s32)func_801F70E0);
            return;
        }
    }
    if (func_801F55EC((func_801F55EC_Struct *)arg0) != 0) {
        if (D_8012CE9C(arg1, (s32)sp2C, D_8021AFF8, 10) == 0) {
            func_801F4A48((func_801F4A48_Struct *)arg0);
            if (arg0->unk93 == 0) {
                sp2C->unk78 = 1;
                func_800058DC(arg0, (s32)func_801F6C58);
            }
            v = (func_801F63E0_Struct2 *)D_801BBCD0->unk2C;
            func_801F474C(arg0, (s16)(arg0->unk90 * 2), v->unk4, v->unkC);
            func_80010550(arg1, sp2C);
        }
    }
}
