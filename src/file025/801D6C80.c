#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D6C80.s")


struct func_801D6D40_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern s32 func_800058DC(void *, void *);
extern s32 func_8012D844(void *, s32, s32);
extern s32 func_8012D894(void *, s32, s32);
extern void func_801D6D98(void);

void func_801D6D40(struct func_801D6D40_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x140, 0);
        func_8012D894(arg0, 0x140, 3);
        func_800058DC(arg0, func_801D6D98);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D6D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D6FB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D6FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D700C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7044.s")


extern s32 D_801DBA34;
extern s32 D_801E1770;
extern void func_801CC948(s32, s32);

void func_801D70A4(s32 arg0) {
    if (arg0 != 0) {
        func_8012D844(D_801E1770, 0x140, 2);
        func_8012D894(D_801E1770, 0x140, 6);
    }
    func_801CC948(D_801DBA34, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D70FC.s")


extern void func_8013B570(s32, s32, s32, s32, void *);
extern s32 D_801DBAD4;
extern s32 D_801DBAD8;
extern s32 D_801DBADC;
extern s32 D_801DBAE0;
extern s32 D_801DBAE4;
extern s32 D_801DBAE8;
extern s32 D_801DBAEC;
extern s32 D_801E17B0;
extern void func_801D72CC(void);

void func_801D7250(s32 arg0, s32 arg1) {
    D_801E17B0 = arg0;
    D_801DBAD4 = 0;
    D_801DBAD8 = 0;
    D_801DBADC = 1;
    D_801DBAE0 = 0;
    D_801DBAE4 = 0;
    D_801DBAE8 = 0;
    D_801DBAEC = 0;
    func_8013B570(arg0, 0x11D, 0, 4, func_801D72CC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D72CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D758C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D75A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D766C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D82B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D83AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D83DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D85D0.s")

