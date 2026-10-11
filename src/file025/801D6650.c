#include "common.h"


extern void func_801D66D0();
extern s32 func_8013B570(s32 a0, s32 a1, s32 a2, s32 a3, void *cb);
extern u8 D_801BC3D8[];
extern s32 D_801DB950;
extern s32 D_801DB968;
extern s32 D_801DB96C;
extern s32 D_801DB970;
extern s32 D_801DB974;
extern s32 D_801DB978;
extern s32 D_801DB980;
extern s32 D_801E1730;

void func_801D6650(s32 arg0, s32 arg1) {
    D_801E1730 = arg0;
    D_801DB968 = 0;
    D_801DB96C = 0;
    D_801DB970 = 1;
    D_801DB974 = 0;
    D_801DB978 = 0;
    D_801DB950 = 0;
    D_801DB980 = 0;
    func_8013B570(arg0, 0x2C, 0, 4, func_801D66D0);
    *(s16 *)(D_801BC3D8 + 0x3B2) = 0;
}


typedef struct func_801D66D0_Struct {
    u8 pad[0x24];
    s32 unk24;
} func_801D66D0_Struct;

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void *);
extern void func_801D672C(void);

void func_801D66D0(func_801D66D0_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x28, 4);
        func_800058DC(arg0, func_801D672C);
        return;
    }
    func_800058DC(arg0, func_801D66D0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6650/func_801D672C.s")



s32 func_801D697C(void) {
    return D_801DB96C != 0;
}



s32 func_801D698C(void) {
    if (D_801DB96C != 0) {
        return 0;
    }
    if (D_801DB968 != 0) {
        return 0;
    }
    return D_801DB970;
}

extern u8 D_801E1738;

u8 *func_801D69CC(void) {
    return &D_801E1738;
}


struct func_801D69D8_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D69D8_Struct D_801E1748;

s32 func_801D69D8(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1748.unk0) {
        return 0;
    }
    return D_801E1748.unk4 == arg1;
}



void func_801D6A10(s32 arg0) {
    D_801DB974 = arg0;
}



s32 func_801D6A1C(void) {
    return D_801DB974;
}


extern void func_80006214(s32);
extern void func_801C3370(s32, s32, s32, u8, s32, s32, s32, s32);

void func_801D6A28(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801E1730);
        func_801C3370(D_801E1730, arg1, arg2, arg3, (s32) arg4, 1, arg5, 0);
        D_801DB978 = 1;
        return;
    }
    D_801DB978 = 0;
}



s32 func_801D6AA8(void) {
    return D_801DB978 == 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6650/func_801D6AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6650/func_801D6B18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6650/func_801D6B48.s")

