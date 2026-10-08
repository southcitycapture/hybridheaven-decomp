#include "common.h"


typedef struct func_801C2980_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    s32 unk98;
    u16 unk9C;
    u8 pad9E[2];
    u16 unkA0;
} func_801C2980_Struct;

extern void *func_80005670(void *, void *);
extern void *D_8038D8CC;
extern u8 D_801DA23C[];

s32 func_801C2980(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, u16 arg8) {
    func_801C2980_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA23C);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg0;
    temp_v0->unk91 = arg1;
    temp_v0->unk92 = arg2;
    temp_v0->unk94 = arg3;
    temp_v0->unk95 = arg4;
    temp_v0->unk96 = arg5;
    temp_v0->unk97 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = 0;
    temp_v0->unkA0 = arg8;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C2A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C2BC4.s")


extern u8 D_801DA270[];
extern f32 D_801DEF80;
extern f32 D_801DEF84;
extern f32 D_801DEF88;

s32 func_801C2C90(f32 arg0, f32 arg1, f32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, u16 arg8) {
    func_801C2980_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA270);
    if (temp_v0 == NULL) {
        return 0;
    }
    D_801DEF80 = arg0;
    D_801DEF84 = arg1;
    D_801DEF88 = arg2;
    temp_v0->unk94 = arg3;
    temp_v0->unk95 = arg4;
    temp_v0->unk96 = arg5;
    temp_v0->unk97 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = 0;
    temp_v0->unkA0 = arg8;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C2D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C2E9C.s")


extern void func_801C0D04(s32, s32);
extern s32 D_801DA288;

void func_801C2EF8(void) {
    func_801C0D04(3, 0x1F40);
    D_801DA288 = 0xFC84;
}


extern void func_801C0EB0(s32, s32);

void func_801C2F24(void) {
    func_801C0EB0(3, 0x1F40);
    D_801DA288 = 0;
}



s32 func_801C2F4C(void) {
    return D_801DA288 == 0xFC84;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C2F60.s")


typedef struct func_801C2FE0_Struct {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    s8 unk92;
    u8 pad93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    s32 unk98;
    s16 unk9C;
    u8 pad9E[2];
    u16 unkA0;
    u8 padA2[2];
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    s32 unkA8;
} func_801C2FE0_Struct;

extern u8 D_801DA28C[];

s32 func_801C2FE0(s32 arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, s32 arg12, u16 arg13) {
    func_801C2FE0_Struct *temp_v0;
    func_801C2FE0_Struct *temp_v1;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA28C);
    temp_v1 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg1;
    temp_v0->unk91 = arg2;
    temp_v0->unk92 = arg3;
    temp_v0->unk94 = arg4;
    temp_v0->unk95 = arg5;
    temp_v0->unk96 = arg6;
    temp_v0->unk97 = arg7;
    temp_v0->unkA4 = arg8;
    temp_v0->unkA5 = arg9;
    temp_v0->unkA6 = arg10;
    temp_v1->unkA7 = arg11;
    temp_v1->unk98 = arg12;
    temp_v1->unk9C = 0;
    temp_v1->unkA0 = arg13;
    temp_v1->unkA8 = arg0;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C30A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C3260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C3370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C354C.s")


extern s32 D_801DA2B0;
extern s32 D_801DA2B4;
extern s32 D_801DA2B8;
extern u8 D_801DA2BC[];
extern u8 D_801DF790;
extern u8 D_801DF791;
extern u8 D_801DF792;
extern u8 D_801DF793;
extern u8 D_801DF794;
extern u8 D_801DF795;
extern u8 D_801DF796;
extern u8 D_801DF797;
extern s16 D_801DF798;
extern u16 D_801DF79A;

s32 func_801C3718(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u16 arg8) {
    if (func_80005670(D_8038D8CC, D_801DA2BC) == 0) {
        return 0;
    }
    D_801DF790 = arg0;
    D_801DF791 = arg1;
    D_801DF792 = arg2;
    D_801DF793 = arg3;
    D_801DF794 = arg4;
    D_801DF795 = arg5;
    D_801DF796 = arg6;
    D_801DF797 = arg7;
    D_801DF798 = 0;
    D_801DF79A = arg8;
    D_801DA2B0 = 1;
    D_801DA2B4 = 1;
    D_801DA2B8 = 0;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C37F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C37FC.s")


s32 func_801C3808(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u16 arg8) {
    if (D_801DA2B0 == 0) {
        return 0;
    }
    D_801DF790 = arg0;
    D_801DF791 = arg1;
    D_801DF792 = arg2;
    D_801DF793 = arg3;
    D_801DF794 = arg4;
    D_801DF795 = arg5;
    D_801DF796 = arg6;
    D_801DF797 = arg7;
    D_801DF798 = 0;
    D_801DF79A = arg8;
    D_801DA2B4 = 1;
    D_801DA2B8 = 1;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C38BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C3940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C39E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C4028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C4220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C44F4.s")


extern u8 D_801DA354[];

typedef struct func_801C4644_Struct {
    u8 pad0[0x90];
    f32 f90;
    f32 f94;
    f32 f98;
    f32 f9C;
    f32 fA0;
    f32 fA4;
    u16 uA8;
    u16 uAA;
    u16 uAC;
} func_801C4644_Struct;

s32 func_801C4644(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u16 arg6) {
    func_801C4644_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA354);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->f90 = arg0;
    temp_v0->f94 = arg1;
    temp_v0->f98 = arg2;
    temp_v0->f9C = arg3;
    temp_v0->fA0 = arg4;
    temp_v0->fA4 = arg5;
    temp_v0->uA8 = 0;
    temp_v0->uAC = arg6;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C46D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C480C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C48A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C4A98.s")


struct func_801C4D3C_Struct {
    u8 pad0[0x30];
    u8 *unk30;
};

struct func_801C4D3C_Struct2 {
    u8 pad0[0xB0];
    u16 unkB0;
    u16 unkB2;
};

extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
extern s32 D_801DA37C[];

void func_801C4D3C(struct func_801C4D3C_Struct2 *arg0, struct func_801C4D3C_Struct **arg1) {
    s32 temp_v0;
    s32 idx;

    temp_v0 = arg0->unkB0;
    idx = (temp_v0 / (s32) arg0->unkB2) & 7;
    arg0->unkB0 = temp_v0 + 1;
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0x2DD, D_801DA37C[idx]);
    arg0->unkB0 = arg0->unkB0 + 1;
}


typedef struct func_801C4DD4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
} func_801C4DD4_Struct;

extern u8 D_801DA4C0[];

s32 func_801C4DD4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_801C4DD4_Struct *temp_v0;

    temp_v0 = func_80005670(D_8038D8CC, D_801DA4C0);
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v0->unk90 = arg5;
    temp_v0->unk94 = arg6;
    temp_v0->unk98 = arg7;
    temp_v0->unk9C = arg8;
    temp_v0->unkA0 = arg0;
    temp_v0->unkA4 = arg1;
    temp_v0->unkA8 = arg2;
    temp_v0->unkAC = arg3;
    temp_v0->unkB0 = arg4;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C4E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C51A0.s")


extern f32 D_801DA4F8;
extern f32 D_801DA4FC;
extern f32 D_801DA500;
extern s32 D_801DA504;

void func_801C53E0(f32 arg0, f32 arg1, f32 arg2) {
    D_801DA4F8 = arg0;
    D_801DA4FC = arg1;
    D_801DA500 = arg2;
    D_801DA504 = 0x77543897;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C5414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C5644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C595C.s")


typedef struct func_801C5B2C_Struct {
    u8 pad0[0xA4];
    u16 unkA4;
    u16 unkA6;
} func_801C5B2C_Struct;

typedef struct func_801C5B2C_Struct5 {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 wC;
    s32 w10;
} func_801C5B2C_Struct5;

extern u8 D_8005C4B0[];
extern func_801C5B2C_Struct D_800892B0;
extern func_801C5B2C_Struct5 D_801DA518;
extern s32 D_801DA514;

s32 func_801C5B2C(void) {
    func_801C5B2C_Struct5 sp1C;
    void *temp_v0;

    if (*(s32 *) (D_8005C4B0 + 0x898) == 0) {
        D_800892B0.unkA6 = 1;
        D_800892B0.unkA4 = 2;
        sp1C = D_801DA518;
        temp_v0 = func_80005670(D_8038D8CC, &sp1C);
        if (temp_v0 == NULL) {
            return 0;
        }
        *(u16 *) ((u8 *) temp_v0 + 0x90) = 0;
        D_801DA514 = 1;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C5BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C5BE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C61C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C6294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C63B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C640C.s")


extern void func_801C78C0();
extern s32 D_801DA230;

void func_801C6434(void) {
    func_801C78C0();
    D_801DA230 = 1;
}


typedef struct func_801C645C_Struct {
    f32 f0;
    f32 f4;
    s32 w8;
    s32 wC;
    f32 f10;
    f32 f14;
    s32 w18;
} func_801C645C_Struct;

extern void func_801C64F4(f32, f32, s32, s32, f32, f32, s32);

void func_801C645C(u32 arg0, void *arg1) {
    u32 var_s1;
    func_801C645C_Struct *var_s0;
    func_801C645C_Struct *var_s2;

    if (arg0 != 0) {
        var_s1 = 0;
        if (arg0 != 0) {
            var_s0 = arg1;
            var_s2 = arg1;
            do {
                func_801C64F4(var_s0->f0, var_s0->f4, var_s0->w8, var_s0->wC, var_s0->f10, var_s0->f14, var_s2->w18);
                var_s1 += 1;
                var_s0++;
                var_s2++;
            } while (var_s1 < arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C64E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C64F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C6580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C699C.s")


typedef struct func_801C6C30_Struct {
    f32 f0;
    f32 f4;
    s32 w8;
    s32 wC;
    f32 f10;
    f32 f14;
    s32 w18;
    s32 w1C;
} func_801C6C30_Struct;

extern void func_801C6CC4(f32, f32, s32, s32, f32, f32, s32, s32);

void func_801C6C30(u32 arg0, void *arg1) {
    u32 var_s2;
    func_801C6C30_Struct *var_s0;
    func_801C6C30_Struct *var_s1;

    if (arg0 != 0) {
        var_s2 = 0;
        if (arg0 != 0) {
            var_s0 = arg1;
            var_s1 = arg1;
            do {
                func_801C6CC4(var_s0->f0, var_s0->f4, var_s0->w8, var_s0->wC, var_s0->f10, var_s0->f14, var_s1->w18, var_s1->w1C);
                var_s2 += 1;
                var_s0++;
                var_s1++;
            } while (var_s2 < arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C6CC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C6D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C70A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C72B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C72D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C7364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C7424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C2980/func_801C7634.s")

