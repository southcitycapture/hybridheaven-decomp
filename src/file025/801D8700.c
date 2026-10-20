#include "common.h"

extern s32 D_801DBB74;
extern s32 D_801DBB78;
extern s32 D_801DBB7C;
extern s32 D_801DBB80;
extern s32 D_801E1BB0;
extern s32 func_801C354C(s32);
extern u8 D_801D8764[];
extern u8 D_801E1BB8;
extern void func_80006214();
extern void func_801D8764();
extern void func_801D87AC();

extern s32 func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);


void func_801D8700(s32 arg0, s32 arg1) {
    D_801E1BB0 = arg0;
    D_801DBB74 = 0;
    D_801DBB78 = 0;
    D_801DBB7C = 1;
    D_801DBB80 = 0;
    func_8013B570(arg0, 0x11E, 0, 4, func_801D8764);
}

struct func_801D8764_Struct { u8 pad[0x24]; s32 unk24; };

void func_801D8764(struct func_801D8764_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D87AC);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D8764);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D8700/func_801D87AC.s")



s32 func_801D89B8(void) {
    return D_801DBB78 != 0;
}



s32 func_801D89C8(void) {
    if (D_801DBB78 != 0) {
        return 0;
    }
    if (D_801DBB74 != 0) {
        return 0;
    }
    return D_801DBB7C;
}


u8 *func_801D8A08(void) {
    return &D_801E1BB8;
}


void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_801D8A14(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E1BB0);
        func_801C3370(D_801E1BB0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DBB80 = 1;
        return;
    }
    D_801DBB80 = 0;
}



s32 func_801D8A94(void) {
    return D_801DBB80 == 0;
}


struct func_801D8AA4_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D8AA4_Struct D_801E1BC8;

s32 func_801D8AA4(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1BC8.unk0) {
        return 0;
    }
    return D_801E1BC8.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D8700/func_801D8ADC.s")



void func_801D8BD0(s32 arg0) {
    func_80006214();
    D_801DBB80 = func_801C354C(arg0) == 0;
}

