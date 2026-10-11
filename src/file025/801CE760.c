#include "common.h"


extern s32 func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_801CE7D4(void);
extern s32 D_801DAD10;
extern s32 D_801DAD28;
extern s32 D_801DAD2C;
extern s32 D_801DAD34;
extern s32 D_801DAD38;
extern s32 D_801DAD3C;
extern s32 D_801E11F0;

void func_801CE760(s32 arg0, s32 arg1) {
    D_801E11F0 = arg0;
    D_801DAD28 = 0;
    D_801DAD2C = 0;
    D_801DAD34 = 1;
    D_801DAD10 = 0;
    D_801DAD38 = 0;
    D_801DAD3C = 0;
    func_8013B570(arg0, 0x2D, 0, 4, func_801CE7D4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CE7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CE830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEA50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CED5C.s")


extern s32 D_801DAD54;

void func_801CEDBC(s32 arg0) {
    D_801DAD54 = arg0;
}


extern s32 D_801DAD58;

void func_801CEDC8(s32 arg0) {
    D_801DAD58 = arg0;
}



s32 func_801CEDD4(void) {
    return D_801DAD2C != 0;
}



s32 func_801CEDE4(void) {
    if (D_801DAD2C != 0) {
        return 0;
    }
    if (D_801DAD28 != 0) {
        return 0;
    }
    return D_801DAD34;
}

extern u8 D_801E11F8;

u8 *func_801CEE24(void) {
    return &D_801E11F8;
}


struct func_801CEE30_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801CEE30_Struct D_801E1208;

s32 func_801CEE30(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1208.unk0) {
        return 0;
    }
    return D_801E1208.unk4 == arg1;
}



void func_801CEE68(s32 arg0) {
    D_801DAD38 = arg0;
}


void func_80006214(s32 arg0);
void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_801CEE74(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E11F0);
        func_801C3370(D_801E11F0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DAD3C = 1;
        return;
    }
    D_801DAD3C = 0;
}



s32 func_801CEEF4(void) {
    return D_801DAD3C == 0;
}


extern s32 D_801DAD60;

void func_801CEF04(s32 arg0) {
    D_801DAD60 = arg0;
}


extern s8 D_801DAD5C;

void func_801CEF10(s32 arg0) {
    s32 *p = &arg0;
    D_801DAD5C = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEF20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF080.s")


extern void func_801CF124(void);
extern s32 D_801DADE0;
extern s32 D_801DADFC;
extern s32 D_801DAE00;
extern s32 D_801DAE08;
extern s32 D_801DADE4;
extern s32 D_801DAE0C;
extern s32 D_801E1230;

void func_801CF0B0(s32 arg0, s32 arg1) {
    D_801E1230 = arg0;
    D_801DADFC = 0;
    D_801DAE00 = 0;
    D_801DAE08 = 1;
    D_801DADE0 = 0;
    D_801DADE4 = 0;
    D_801DAE0C = 0;
    func_8013B570(arg0, 0x30, 0, 4, func_801CF124);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF180.s")



s32 func_801CF3BC(void) {
    return D_801DAE00 != 0;
}



s32 func_801CF3CC(void) {
    if (D_801DAE00 != 0) {
        return 0;
    }
    if (D_801DADFC != 0) {
        return 0;
    }
    return D_801DAE08;
}

extern u8 D_801E1238;

u8 *func_801CF40C(void) {
    return &D_801E1238;
}


struct func_801CF418_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801CF418_Struct D_801E1248;

s32 func_801CF418(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1248.unk0) {
        return 0;
    }
    return D_801E1248.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF4B0.s")



void func_801CF514(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801E1230);
        func_801C3370(D_801E1230, arg1, arg2, arg3, (s32) arg4, 0, arg5, 0);
        D_801DAE0C = 1;
        return;
    }
    D_801DAE0C = 0;
}



s32 func_801CF590(void) {
    return D_801DAE0C == 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF5A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF860.s")


extern s32 D_801DAEB0;
extern s32 D_801DAECC;
extern s32 D_801DAED0;
extern s32 D_801DAEF0;
extern s32 D_801DAEF4;
extern void func_801CF8F4(void);

void func_801CF890(s32 arg0, s32 arg1) {
    D_801DAEB0 = arg0;
    D_801DAECC = 0;
    D_801DAED0 = 0;
    D_801DAEF0 = 1;
    D_801DAEF4 = 0;
    func_8013B570(arg0, 0x11C, 0, 4, func_801CF8F4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF8F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFAC8.s")


extern s32 D_801DAEE8;

void func_801CFD28(s32 arg0) {
    D_801DAEE8 = arg0;
}


extern s32 D_801DAEEC;

void func_801CFD34(s32 arg0) {
    D_801DAEEC = arg0;
}



s32 func_801CFD40(void) {
    return D_801DAED0 != 0;
}



s32 func_801CFD50(void) {
    if (D_801DAED0 != 0) {
        return 0;
    }
    if (D_801DAECC != 0) {
        return 0;
    }
    return D_801DAEF0;
}

extern u8 D_801E1280;

u8 *func_801CFD90(void) {
    return &D_801E1280;
}



void func_801CFD9C(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5) {
    if (arg0 != 0) {
        func_80006214(D_801DAEB0);
        func_801C3370(D_801DAEB0, arg1, arg2, arg3, (s32) arg4, 0, arg5, 0);
        D_801DAEF4 = 1;
        return;
    }
    D_801DAEF4 = 0;
}



s32 func_801CFE18(void) {
    return D_801DAEF4 == 0;
}


struct func_801CFE28_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801CFE28_Struct D_801E1290;

s32 func_801CFE28(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1290.unk0) {
        return 0;
    }
    return D_801E1290.unk4 == arg1;
}



s32 func_801CFE60(void) {
    return D_801DAEB0;
}


extern s32 D_801DAEB4;

s32 func_801CFE6C(void) {
    return D_801DAEB4;
}

extern u8 D_801E12A0;

u8 *func_801CFE78(void) {
    return &D_801E12A0;
}

extern u8 D_801E12B0;

u8 *func_801CFE84(void) {
    return &D_801E12B0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFE90.s")


extern s32 D_801E12C0;
extern s32 D_801DAF18;
extern s32 D_801DAF1C;
extern s32 D_801DAF40;
extern s32 D_801DAF00;
extern void func_801CFF24(void);

void func_801CFEC0(s32 arg0, s32 arg1) {
    D_801E12C0 = arg0;
    D_801DAF18 = 0;
    D_801DAF1C = 0;
    D_801DAF40 = 1;
    D_801DAF00 = 0;
    func_8013B570(arg0, 0x57, 0, 4, func_801CFF24);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFF24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D003C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D01B4.s")


extern s32 D_801DAF38;

void func_801D03E0(s32 arg0) {
    D_801DAF38 = arg0;
}


extern s32 D_801DAF3C;

void func_801D03EC(s32 arg0) {
    D_801DAF3C = arg0;
}



s32 func_801D03F8(void) {
    return D_801DAF1C != 0;
}



s32 func_801D0408(void) {
    if (D_801DAF1C != 0) {
        return 0;
    }
    if (D_801DAF18 != 0) {
        return 0;
    }
    return D_801DAF40;
}

extern u8 D_801E12C8;

u8 *func_801D0448(void) {
    return &D_801E12C8;
}


struct func_801D0454_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D0454_Struct D_801E12D8;

s32 func_801D0454(s32 arg0, u16 arg1) {
    if (arg0 != D_801E12D8.unk0) {
        return 0;
    }
    return D_801E12D8.unk4 == arg1;
}


extern s32 D_801DAF44;

void func_801D048C(s32 arg0) {
    D_801DAF44 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0498.s")


extern u8 D_8008DA88[];

void func_801D04F8(void) {
    func_80006214(D_801E12C0);
    *(u8 *)(*(u8 **)(D_8008DA88 + 0x4C) + 0x22) = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0528.s")

