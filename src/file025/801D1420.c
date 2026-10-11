#include "common.h"


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB144;
extern s32 D_801DB148;
extern s32 D_801DB14C;
extern void func_801D1474(void);

void func_801D1420(s32 arg0, s32 arg1) {
    D_801DB144 = 0;
    D_801DB148 = 0;
    D_801DB14C = 1;
    func_8013B570(arg0, 0x2A, 0, 4, &func_801D1474);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1420/func_801D1474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1420/func_801D14D0.s")



s32 func_801D16C4(void) {
    return D_801DB148 != 0;
}



s32 func_801D16D4(void) {
    if (D_801DB148 != 0) {
        return 0;
    }
    if (D_801DB144 != 0) {
        return 0;
    }
    return D_801DB14C;
}

extern u8 D_801E1370;

u8 *func_801D1714(void) {
    return &D_801E1370;
}


struct func_801D1720_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D1720_Struct D_801E1380;

s32 func_801D1720(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1380.unk0) {
        return 0;
    }
    return D_801E1380.unk4 == arg1;
}

