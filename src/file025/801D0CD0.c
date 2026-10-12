#include "common.h"


extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801D0D90();
extern s32 D_801DB084;
extern s32 D_801DB088;
extern s32 D_801DB0A8;
extern s32 D_801DB0B0;
extern s32 D_801E1330;
extern s32 D_801E1334;

void func_801D0CD0(s32 arg0, s32 arg1) {
    D_801E1330 = arg0;
    D_801DB084 = 0;
    D_801DB088 = 0;
    D_801DB0A8 = 1;
    D_801E1334 = 0;
    D_801DB0B0 = func_801CC654(arg0, 0x140, 0, 0x140, 1, 0x140, 2, 0x140, 1, 1, 1, 0);
    func_8013B570(arg0, 0x141, 0, 4, (void *) func_801D0D90);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0CD0/func_801D0D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0CD0/func_801D0DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0CD0/func_801D0F74.s")


extern s32 D_801DB0A0;

void func_801D11AC(s32 arg0) {
    D_801DB0A0 = arg0;
}


extern s32 D_801DB0A4;

void func_801D11B8(s32 arg0) {
    D_801DB0A4 = arg0;
}



s32 func_801D11C4(void) {
    return D_801DB088 != 0;
}



s32 func_801D11D4(void) {
    if (D_801DB088 != 0) {
        return 0;
    }
    if (D_801DB084 != 0) {
        return 0;
    }
    return D_801DB0A8;
}

extern u8 D_801E1338;

u8 *func_801D1214(void) {
    return &D_801E1338;
}


struct func_801D1220_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D1220_Struct D_801E1348;

s32 func_801D1220(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1348.unk0) {
        return 0;
    }
    return D_801E1348.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0CD0/func_801D1258.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0CD0/func_801D12B8.s")

