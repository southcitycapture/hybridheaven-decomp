#include "common.h"


extern void func_800058DC(s32, void *);
extern void func_801BF6C4(s32);
extern void func_801CC9FC(void);
extern void func_801CCA44(void);
extern void func_801CCAB0(void);
extern void func_801CC278(s32 arg0, s32 arg1);
extern s32 D_801DAABC;
extern s32 D_801DAB14;
extern s32 D_801DAB18;

void func_801CC210(s32 arg0, s32 arg1) {
    D_801DAABC = 0;
    D_801DAB14 = 0;
    D_801DAB18 = 0;
    func_801BF6C4(4);
    func_801CC9FC();
    func_801CCA44();
    func_801CCAB0();
    func_800058DC(arg0, (void *)func_801CC278);
}


extern s32 func_801BF968(void);
extern void func_8013B130(void);
extern void func_801CC2C8(s32 arg0, s32 arg1);

void func_801CC278(s32 arg0, s32 arg1) {
    D_801DAABC = 1;
    if (func_801BF968() != 0) {
        func_8013B130();
        func_800058DC(arg0, func_801CC2C8);
    }
}


extern void func_801BF850(void *arg0, s32 arg1, void *arg2);
extern u8 D_801DAAB0[];
extern u8 D_801E0BB0[];

void func_801CC2C8(s32 arg0, s32 arg1) {
    D_801DAB14 = arg0;
    D_801DAB18 = arg1;
    func_801BF850(D_801DAAB0, 4, D_801E0BB0);
}



s32 func_801CC30C(void) {
    return D_801DAABC;
}


extern s32 D_801DAAC0;

s32 func_801CC318(void) {
    return (D_801DAAC0 = D_801DAAC0 + 1) < 0xA;
}


extern s32 D_801DAAC4;

s32 func_801CC334(void) {
    return (D_801DAAC4 = D_801DAAC4 + 1) < 0xA;
}

extern u8 D_801E0A48[];
extern u8 D_801E0B38[];

extern void func_800279F0(void *, s32);
extern void func_801C250C(void *);
extern void func_801C25B0(void *);
extern u8 D_801BD980[];
extern u8 D_801BEB00[];

typedef struct func_801CC350_StructBuffer {
    u8 pad[0xE0];
} func_801CC350_StructBuffer;

s32 func_801CC350(void) {
    func_801CC350_StructBuffer *p;
    u8 *q;
    s32 i;
    s32 k;
    u8 *entry;

    if (D_801DAAC0 != 0) {
        i = 0;
        if (D_801DAAC0 > 0) {
            entry = D_801E0A48;
            do {
                func_801C250C(entry);
                i++;
                entry += 0x18;
            } while (i < D_801DAAC0);
        }
        D_801DAAC0 = 0;
    }
    if (D_801DAAC4 != 0) {
        i = 0;
        if (D_801DAAC4 > 0) {
            entry = D_801E0B38;
            do {
                func_801C25B0(entry);
                i++;
                entry += 0xC;
            } while (i < D_801DAAC4);
        }
        D_801DAAC4 = 0;
    }
    func_801CC9FC();
    func_801CCA44();
    func_801CCAB0();
    for (k = 0; k < 20; k++) {
        D_801BEB00[k] = 0;
        func_800279F0(D_801BD980 + k * 0xE0, 0xE0);
    }
    return 1;
}

typedef struct func_801CC470_Struct {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801CC470_Struct;
extern func_801CC470_Struct **D_801E06D8[];

s32 func_801CC458(s32 arg0, s32 arg1) {
    D_801E06D8[arg0] = (func_801CC470_Struct **) arg1;
    return 1;
}



extern func_801CC470_Struct D_801E0660[];

s32 func_801CC470(s32 arg0, s32 arg1, u16 arg2, u16 arg3, f32 arg4) {
    func_801CC470_Struct *temp_v1;

    temp_v1 = &D_801E0660[arg0];
    temp_v1->unk0 = arg1;
    temp_v1->unk4 = arg2;
    temp_v1->unk6 = arg3;
    temp_v1->unk8 = arg4;
    *D_801E06D8[arg0] = temp_v1;
    return 1;
}

extern func_801CC470_Struct **D_801E0778[];

s32 func_801CC4C0(s32 arg0, s32 arg1) {
    D_801E0778[arg0] = (func_801CC470_Struct **) arg1;
    return 1;
}



extern func_801CC470_Struct D_801E0700[];

s32 func_801CC4D8(s32 arg0, s32 arg1, u16 arg2, u16 arg3, f32 arg4) {
    func_801CC470_Struct *temp_v1;

    temp_v1 = &D_801E0700[arg0];
    temp_v1->unk0 = arg1;
    temp_v1->unk4 = arg2;
    temp_v1->unk6 = arg3;
    temp_v1->unk8 = arg4;
    *D_801E0778[arg0] = temp_v1;
    return 1;
}


void func_801CC528(void) {
}


extern s32 D_801DAAC8;

void func_801CC530(void) {
    D_801DAAC8 = 1;
}



s32 func_801CC540(void) {
    return D_801DAAC8 == 0;
}

extern u8 D_801DAACC[];

void func_801CC550(s32 arg0) {
    ((s32 *)D_801DAACC)[arg0] = 0;
}



s32 func_801CC564(s32 arg0, s32 (*arg1)(), s32 arg2, u16 arg3, u16 arg4, f32 arg5, s32 (*arg6)(), s32 arg7, u16 arg8, u16 arg9, f32 arg10) {
    s32 *temp_v1;

    temp_v1 = (s32 *)(D_801DAACC + (arg0 * 4));
    if (*temp_v1 == 0) {
        goto case0;
    }
    if (*temp_v1 == 1) {
        goto case1;
    }
    if (*temp_v1 == 2) {
        goto case2;
    }
    return 0;
case0:
    func_801CC470(arg0, arg2, arg3, arg4, arg5);
    *temp_v1 = 1;
    goto out;
case1:
    if (arg1() != 0) {
        func_801CC4D8(arg0, arg7, arg8, arg9, arg10);
        *temp_v1 = 2;
    }
    goto out;
case2:
    if (arg6() == 0) {
        *temp_v1 = -1;
        return 1;
    }
out:
    return 0;
}


typedef struct func_801CC654_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
} func_801CC654_Struct;

extern s32 D_801DAAFC;
extern func_801CC654_Struct D_801E07A0[];

s32 func_801CC654(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11) {
    func_801CC654_Struct *temp_v1;

    temp_v1 = &D_801E07A0[D_801DAAFC];
    temp_v1->unk0 = arg0;
    temp_v1->unk4 = arg1;
    temp_v1->unk8 = arg2;
    temp_v1->unkC = arg3;
    temp_v1->unk10 = arg4;
    temp_v1->unk14 = arg5;
    temp_v1->unk18 = arg6;
    temp_v1->unk1C = arg7;
    temp_v1->unk20 = arg8;
    temp_v1->unk24 = arg9;
    temp_v1->unk28 = arg10;
    temp_v1->unk2C = arg11;
    temp_v1->unk30 = 1;
    temp_v1->unk34 = 0;
    temp_v1->unk38 = 0;
    temp_v1->unk3C = -1;
    temp_v1->unk40 = 0;
    return D_801DAAFC += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CC210/func_801CC6F4.s")


extern void func_8012D844(void *, s32, s32);
extern void func_8012D894(void *, s32, s32);

typedef struct func_801CC888_Struct {
    u8 pad[0x24];
    s32 unk24;
} func_801CC888_Struct;

void func_801CC888(s32 arg0, s32 arg1) {
    void (*var_v1)(void *, s32, s32);
    s32 temp_a0;
    s32 k = 0x44;
    s32 i = arg0 - 1;
    func_801CC888_Struct *temp_a3;
    func_801CC654_Struct *temp_v0;

    temp_a3 = (func_801CC888_Struct *)((func_801CC654_Struct *)((u8 *)D_801E07A0 + arg0 * k))[-1].unk0;
    if ((temp_a3->unk24 != 0) && (temp_v0 = (func_801CC654_Struct *)((u8 *)D_801E07A0 + i * k),temp_v0->unk30 = arg1, arg1 == 0)) {
        temp_a0 = temp_v0->unk24;
        var_v1 = NULL;
        if (temp_a0 == 1) {
            var_v1 = func_8012D844;
        } else if (temp_a0 == 2) {
            var_v1 = func_8012D894;
        }
        if (temp_v0->unk2C != 0) {
            var_v1(temp_a3, temp_v0->unk14, temp_v0->unk18);
            return;
        }
        var_v1(temp_a3, temp_v0->unk4, temp_v0->unk8);
    }
}



void func_801CC948(s32 arg0, s32 arg1) {
    void (*var_v1)(void *, s32, s32);
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_a2;
    func_801CC654_Struct *temp_a3;
    func_801CC654_Struct *temp_v0;

    temp_t1 = 0x44;
    temp_a2 = arg0 - 1;
    temp_a3 = (func_801CC654_Struct *)*(s32 *)((u8 *)D_801E07A0 + arg0 * temp_t1 - 0x44);
    if (temp_a3->unk24 != 0) {
        var_v1 = NULL;
        temp_v0 = (func_801CC654_Struct *)((u8 *)D_801E07A0 + temp_a2 * temp_t1);
        temp_a0 = temp_v0->unk24;
        temp_v0->unk2C = arg1;
        if (temp_a0 == 1) {
            var_v1 = func_8012D844;
        } else if (temp_a0 == 2) {
            var_v1 = func_8012D894;
        }
        if (arg1 != 0) {
            var_v1(temp_a3, temp_v0->unk14, temp_v0->unk18);
            return;
        }
        var_v1(temp_a3, temp_v0->unk4, temp_v0->unk8);
    }
}


extern void func_801C2608(s32, void *);
extern void func_801C26C4(s32, void *);

void func_801CC9FC(void) {
    D_801DAAC0 = 0;
    D_801DAAC4 = 0;
    func_801C2608(0xA, D_801E0A48);
    func_801C26C4(0xA, D_801E0B38);
}


void func_801CCA44(void) {
    s32 i;

    for (i = 0; i < 10; i++) {
        D_801E06D8[i] = NULL;
        D_801E0778[i] = NULL;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CC210/func_801CCAB0.s")


void func_801CCCC8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_801CCCD4(s32 arg0, s32 arg1) {
    s32 temp = D_801DAB14;

    func_800058DC(temp, (void *) func_801CC278);
}


void func_801CCD08(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

