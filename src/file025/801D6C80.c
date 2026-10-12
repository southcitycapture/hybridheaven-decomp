#include "common.h"


extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801D6D40();
extern s32 D_801DBA24;
extern s32 D_801DBA28;
extern s32 D_801DBA2C;
extern s32 D_801DBA34;
extern s32 D_801E1770;
extern s32 D_801E1774;

void func_801D6C80(s32 arg0, s32 arg1) {
    D_801E1770 = arg0;
    D_801DBA24 = 0;
    D_801DBA28 = 0;
    D_801DBA2C = 1;
    D_801E1774 = 0;
    D_801DBA34 = func_801CC654(arg0, 0x140, 0, 0x140, 1, 0x140, 2, 0x140, 1, 1, 1, 0);
    func_8013B570(arg0, 0x142, 0, 4, (void *) func_801D6D40);
}


struct func_801D6D40_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern s32 func_800058DC(void *, void *);
extern s32 func_8012D844(void *, s32, s32);
extern s32 func_8012D894(void *, s32, s32);
extern void func_801D6D98();

void func_801D6D40(struct func_801D6D40_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x140, 0);
        func_8012D894(arg0, 0x140, 3);
        func_800058DC(arg0, func_801D6D98);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D6D98.s")



s32 func_801D6FB0(void) {
    return D_801DBA28 != 0;
}



s32 func_801D6FC0(void) {
    if (D_801DBA28 != 0) {
        return 0;
    }
    if (D_801DBA24 != 0) {
        return 0;
    }
    return D_801DBA2C;
}

extern u8 D_801E1778;

u8 *func_801D7000(void) {
    return &D_801E1778;
}


struct func_801D700C_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D700C_Struct D_801E1788;

s32 func_801D700C(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1788.unk0) {
        return 0;
    }
    return D_801E1788.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7044.s")


extern void func_801CC948(s32, s32);

void func_801D70A4(s32 arg0) {
    if (arg0 != 0) {
        func_8012D844(D_801E1770, 0x140, 2);
        func_8012D894(D_801E1770, 0x140, 6);
    }
    func_801CC948(D_801DBA34, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D70FC.s")


extern s32 D_801DBAD4;
extern s32 D_801DBAD8;
extern s32 D_801DBADC;
extern s32 D_801DBAE0;
extern s32 D_801DBAE4;
extern s32 D_801DBAE8;
extern s32 D_801DBAEC;
extern s32 D_801E17B0;
extern void func_801D72CC();

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



s32 func_801D7530(void) {
    return D_801DBAD8 != 0;
}



s32 func_801D7540(void) {
    if (D_801DBAD8 != 0) {
        return 0;
    }
    if (D_801DBAD4 != 0) {
        return 0;
    }
    return D_801DBADC;
}

extern u8 D_801E17B8;

u8 *func_801D7580(void) {
    return &D_801E17B8;
}



void func_801D758C(s32 arg0) {
    D_801DBAE4 = arg0;
}



void func_801D7598(s32 arg0) {
    D_801DBAE8 = arg0;
}


void func_80006214(s32 arg0);
void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_801D75A4(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E17B0);
        func_801C3370(D_801E17B0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DBAE0 = 1;
        return;
    }
    D_801DBAE0 = 0;
}



s32 func_801D7624(void) {
    return D_801DBAE0 == 0;
}


struct func_801D7634_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D7634_Struct D_801E17C8;

s32 func_801D7634(s32 arg0, u16 arg1) {
    if (arg0 != D_801E17C8.unk0) {
        return 0;
    }
    return D_801E17C8.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D766C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D82B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D83AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D83DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D85D0.s")

