#include "common.h"


extern void func_8013B570(s32 a0, s32 a1, s32 a2, s32 a3, void *a4);
extern void func_801D0700(void);
extern u8 D_801BC3D8[];
extern s32 D_801DAFC0;
extern s32 D_801DAFD8;
extern s32 D_801DAFDC;
extern s32 D_801DAFE4;
extern s32 D_801DAFEC;
extern s32 D_801E1300;

void func_801D0690(s32 arg0, s32 arg1) {
    D_801E1300 = arg0;
    D_801DAFD8 = 0;
    D_801DAFDC = 0;
    D_801DAFE4 = 1;
    D_801DAFEC = 0;
    D_801DAFC0 = 0;
    func_8013B570(arg0, 0x57, 0, 4, func_801D0700);
    *(s16 *)&D_801BC3D8[0x3B2] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0A24.s")


s32 func_801D0A34(void) {
    if (D_801DAFDC != 0) {
        return 0;
    }
    return D_801DAFE4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0A68.s")


struct func_801D0A74_Struct {
    u8 pad0[0x24];
    u8 *unk24;
    u8 pad1[0x30 - 0x28];
    u8 *unk30;
};

extern void func_80006214(s32);
extern struct func_801D0A74_Struct D_8008DA88;
extern s32 D_801DAFE8;

void func_801D0A74(s32 arg0) {
    if (D_801DAFE8 != 0) {
        func_80006214(D_801E1300);
        if (arg0 != 0) {
            D_8008DA88.unk30[0x22] = 0;
            D_8008DA88.unk24[0x22] = 0;
            return;
        }
        D_8008DA88.unk30[0x22] = 1;
        D_8008DA88.unk24[0x22] = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D0690/func_801D0B64.s")

