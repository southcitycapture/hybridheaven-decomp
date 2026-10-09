#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file092/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file092/8038CFC0/func_8038CFF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file092/8038CFC0/func_8038D630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file092/8038CFC0/func_8038D740.s")


struct func_8038D7D0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 padA1[0xA8 - 0xA1];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void (*unkB0)();
};

struct func_8038D7D0_StructA {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    u16 unk30;
};

struct func_8038D7D0_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};

extern struct func_8038D7D0_StructG D_801BBBF0;
extern struct func_8038D7D0_StructA D_801BC03C;
extern struct func_8038D7D0_StructA D_801BC3D8;
extern void func_8022B3E0(void);

void func_8038D7D0(struct func_8038D7D0_Struct *arg0, s32 arg1) {
    struct func_8038D7D0_StructA *var_a1;
    struct func_8038D7D0_StructA *var_a2;
    s32 temp_v1;

    var_a1 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC03C : &D_801BC3D8;
    var_a2 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC3D8 : &D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D630(arg0, var_a1, var_a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D7D0;
        func_800058DC(arg0, func_8022B3E0, var_a2);
        return;
    }
    if ((var_a1->unk2 < (var_a1->unk0 / 5)) && (arg0->unkA0 != 0) && !(arg0->unk9A & 0x20) && ((((*(u32 *)&var_a1->unk30) << 0x1B) >> 0x1E) == 0)) {
        func_8038D630(arg0, var_a1, var_a2);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        func_8038D630(arg0, var_a1, var_a2);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file092/8038CFC0/func_8038D92C.s")

