#include "common.h"


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB334;
extern s32 D_801DB338;
extern s32 D_801DB33C;
extern void func_801D2CF4(void);

void func_801D2CA0(s32 arg0, s32 arg1) {
    D_801DB334 = 0;
    D_801DB338 = 0;
    D_801DB33C = 1;
    func_8013B570(arg0, 0x2F, 0, 4, &func_801D2CF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D2CA0/func_801D2CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D2CA0/func_801D2D3C.s")



s32 func_801D2F30(void) {
    return D_801DB338 != 0;
}



s32 func_801D2F40(void) {
    if (D_801DB338 != 0) {
        return 0;
    }
    if (D_801DB334 != 0) {
        return 0;
    }
    return D_801DB33C;
}

extern u8 D_801E1460;

u8 *func_801D2F80(void) {
    return &D_801E1460;
}


struct func_801D2F8C_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D2F8C_Struct D_801E1470;

s32 func_801D2F8C(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1470.unk0) {
        return 0;
    }
    return D_801E1470.unk4 == arg1;
}

