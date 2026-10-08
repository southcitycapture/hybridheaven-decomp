#include "common.h"


extern u8 D_802407DC[];

s32 func_80226980(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 &= 0xFF;
    if (D_802407DC[arg0] != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802269B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802269C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802269CC.s")


s32 func_80126944();                                /* extern */
extern u16 D_801BBC1C;
extern u8 D_802407DA;

void func_802269D8(void) {
    if (func_80126944() == 1) {
        D_802407DA = 0;
    }
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        D_802407DA = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80226A2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80226AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80227484.s")


struct func_80227750_Inner {
    u8 pad[8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};

struct func_80227750_Outer {
    u8 pad[0x30];
    struct func_80227750_Inner *unk30;
};

extern s8 func_8012C6B4(s32 arg0);

void func_80227750(struct func_80227750_Outer *arg0) {
    struct func_80227750_Inner *sp1C;

    sp1C = arg0->unk30;
    sp1C->unk8 = func_8012C6B4(0xFF);
    sp1C->unk9 = func_8012C6B4(0xFF);
    sp1C->unkA = func_8012C6B4(0xFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802277A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80227A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80227D44.s")


struct func_8022811C_Inner {
    s16 unk0;
    s16 unk2;
    s16 unk4;
};

struct func_8022811C_Outer {
    u8 pad[0x30];
    struct func_8022811C_Inner *unk30;
};

struct func_8022811C_Glob {
    u8 pad[0xE];
    u8 unkE;
    u8 unkF;
};

extern void func_80227D44(void *arg0, void *arg1, void *arg2);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern struct func_8022811C_Glob D_801BEC68;

void func_8022811C(void *arg0, struct func_8022811C_Outer **arg1) {
    struct func_8022811C_Inner *temp_v0;
    struct func_8022811C_Inner *sp18;

    temp_v0 = arg1[D_801BEC68.unkE]->unk30;
    sp18 = arg1[D_801BEC68.unkF]->unk30;
    func_80227D44(arg0, arg1, D_801BC03C);
    func_80227D44(arg0, arg1, D_801BC3D8);
    temp_v0->unk0 = 0x100 - temp_v0->unk4;
    sp18->unk0 = temp_v0->unk0 - sp18->unk4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802281BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228298.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_802286D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file011/80226980/func_80228ABC.s")

