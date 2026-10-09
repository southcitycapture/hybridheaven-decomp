#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF1A0.s")


extern void func_800058DC(s32, void *);
extern void func_801BF9A4(s32);
extern void func_801C00B8();
extern void func_801C0C7C();
extern void func_801C0FA8();
extern void func_801C117C();
extern void func_801C13C0();
extern void func_801C1520();
extern void func_801C1860();
extern void func_801C1D60();
extern void func_801C1FD0();
extern void func_8038BC00();
extern void func_8038C8D0();
extern void func_8038CA40();
extern void func_8038D1E0();
extern s32 D_801D8CF0;
extern s32 D_801D8CF4;
extern s32 D_801D8D00;
extern void func_801BF2AC();

void func_801BF1F8(s32 arg0, s32 arg1) {
    func_801BF9A4(0);
    D_801D8CF0 = 0;
    D_801D8D00 = 0;
    func_8038BC00();
    func_8038C8D0();
    func_8038CA40();
    func_8038D1E0();
    func_801C00B8();
    func_801C13C0();
    func_801C1520();
    func_801C1860();
    func_801C1FD0();
    func_801C117C();
    func_801C1D60();
    func_801C0C7C();
    func_801C0FA8();
    D_801D8CF4 = 0;
    func_800058DC(arg0, &func_801BF2AC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF2AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF388.s")

void func_801BF500(s32 arg0, s32 arg1);

extern s16 D_80089354;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

void func_801BF4A4(s32 arg0, s32 arg1) {
    D_80089354 = 0;
    D_8038C97C(arg0, 0, 0, 0, 0xF, 0, 1);
    func_800058DC(arg0, func_801BF500);
}


extern u8 D_801BBD54;
extern void func_80142570();
extern void func_801C0254();
extern void func_801BF54C();

void func_801BF500(s32 arg0, s32 arg1) {
    if (D_801BBD54 == 0) {
        func_80142570();
        func_801C0254();
        func_800058DC(arg0, func_801BF54C);
    }
}


extern void func_801BFFCC();
extern void func_801BF598();
extern s32 D_801D8CF8;

void func_801BF54C(s32 arg0, s32 arg1) {
    if (D_801D8CF8 == 0) {
        func_801BFFCC();
    }
    D_801D8CF4 = 0;
    func_800058DC(arg0, func_801BF598);
}



void func_801BF9B0(s32 arg0);
void func_801C0058(void);
void func_801BF388(void);
void func_801BF604(void);

void func_801BF598(s32 arg0, s32 arg1) {
    if (D_801D8CF8 != 0) {
        func_801C0058();
        func_800058DC(arg0, (void *) func_801BF604);
        return;
    }
    func_801BF9B0(arg0);
    D_801D8D00 = 0;
    func_800058DC(arg0, (void *) func_801BF388);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF61C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF628.s")


extern s32 D_801D8D04[];

s32 func_801BF680(s32 arg0, s32 *arg1) {
    s32 off;

    off = arg0 * 4;
    if (arg0 >= 9) {
        return 0;
    }
    *arg1 = *(s32 *)((u8 *)D_801D8D04 + off);
    return 1;
}



s32 func_801BF6B0(s32 arg0) {
    return D_801D8D04[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF6C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF7A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF968.s")


s32 func_801BF974(s32 arg0) {
    s32 var_v1;

    if (arg0 == -1) {
        return 0;
    }
    var_v1 = 1;
    if (arg0 != 0) {
        var_v1 = 1 << arg0;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BF9A4.s")


typedef struct func_801BF9B0_Struct {
    u8 pad[8];
    struct func_801BF9B0_Struct *unk8;
} func_801BF9B0_Struct;

extern void func_80005670(void *, void *);
extern u8 D_80044090[];
extern u8 D_801DAB94[];
extern u8 D_801DAB00[];
extern u8 D_801DABD4[];
extern u8 D_8038D81C[];
extern u8 func_8038D830[];

void func_801BF9B0(s32 arg0) {
    func_801BF9B0_Struct *p = (func_801BF9B0_Struct *)arg0;

    func_80005670((void *)p, D_80044090);
    func_80005670((void *)p->unk8, D_801DAB94);
    func_80005670((void *)p->unk8->unk8, D_8038D81C);
    func_80005670((void *)p->unk8->unk8->unk8, func_8038D830 + 0x48);
    func_80005670((void *)p->unk8->unk8->unk8->unk8, D_801DABD4);
    func_80005670((void *)p->unk8->unk8->unk8->unk8->unk8, D_801DAB00);
}


s32 func_801BFAA0();
s32 func_801BFD00();
extern s32 D_801DE828;

s32 func_801BFA58(void) {
    s32 var_v0;

    if (D_801DE828 != 0) {
        var_v0 = func_801BFAA0();
    } else {
        var_v0 = func_801BFD00();
    }
    return var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BFAA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BFD00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BFE60.s")


typedef struct func_801BFF20_Struct {
    u8 pad[8];
    s32 unk8;
} func_801BFF20_Struct;

extern s32 func_80005700(s32);
extern func_801BFF20_Struct *D_801D8D60;

void func_801BFF20(void) {
    func_801C00B8();
    func_801C13C0();
    func_801C1520();
    func_801C1860();
    func_801C1FD0();
    func_801C117C();
    func_801C1D60();
    func_801C0C7C();
    func_801C0FA8();
    func_801C0A30();
    func_801C0C44();
    func_80005700(D_801D8D60->unk8);
    D_801D8D60->unk8 = 0;
}


extern s32 D_801D8CE8;

void func_801BFFAC(void) {
    D_801D8CE8 += 1;
    D_801D8CF0 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801BFFCC.s")


extern void func_801C0760();
extern void func_801C07A8();
extern void func_801C0834();

void func_801C0058(void) {
    if (func_801C02FC() != 0) {
        func_801C0760();
        return;
    }
    if (func_801C0320() != 0) {
        func_801C07A8();
        return;
    }
    func_801C0834();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C00B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C00FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C012C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C0190.s")


s32 func_801D0AF8();                                /* extern */
s32 func_801D1B04();                                /* extern */
s32 func_801D6A1C();                                /* extern */

s32 func_801C01F0(void) {
    if (func_801D1B04() != 0) {
        return 1;
    }
    if (func_801D0AF8() != 0) {
        return 1;
    }
    if (func_801D6A1C() != 0) {
        return 1;
    }
    return 0;
}


extern s32 func_801C2090(s32, s32);
extern s32 D_801D8C00[];
extern s32 D_801D8CE4;

typedef struct func_801C0254_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unk12;
    s32 unk16;
    s32 unk20;
} func_801C0254_Struct;

void func_801C0254(void) {
    func_801BFF20();
    D_801D8CF8 = 1;
    if (D_801DE828 != 0) {
        D_801D8CF4 = ((func_801C0254_Struct *)((s32 *)D_801D8C00[D_801D8CE4])[D_801D8CE8])[D_801D8CF0].unk8;
        return;
    }
    D_801D8CF4 = func_801C2090(D_801D8CE4, D_801D8CE8);
}


extern s32 func_8012FF4C();

s32 func_801C02FC(void) {
    return func_8012FF4C() == 1;
}


extern u8 D_801BBF0A[];

s32 func_801C0320(void) {
    return D_801BBF0A[0x33] == 1;
}


s32 func_801C0334(s32 arg0) {
    s32 var_v1;

    var_v1 = arg0 == 4;
    if (var_v1 == 0) {
        var_v1 = arg0 == 0xB;
        if (var_v1 == 0) {
            var_v1 = arg0 == 0xC;
            if (var_v1 == 0) {
                var_v1 = arg0 == 0xE;
                if (var_v1 == 0) {
                    var_v1 = arg0 == 0xF;
                    if (var_v1 == 0) {
                        var_v1 = arg0 == 0x10;
                        if (var_v1 == 0) {
                            var_v1 = arg0 == 9;
                            if (var_v1 == 0) {
                                var_v1 = arg0 == 0xA;
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C039C.s")


extern void func_800023EC(void);
extern void func_80020744(s32 arg0);
extern s16 D_80089356;

void func_801C0438(void) {
    func_80020744(1);
    D_80089356 = 0;
    func_800023EC();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C0464.s")


typedef struct func_801C0640_Struct {
    s32 unk0;
    s16 unk4;
    s32 unk8;
} func_801C0640_Struct;

extern s32 func_801BF7A0(s32, func_801C0640_Struct);

s32 func_801C0640(s32 arg0, u8 *arg1) {
    s32 temp_v1;
    func_801C0640_Struct sp20;
    u8 *temp_v0;

    temp_v1 = *(u16 *)(arg1 + 4);
    temp_v0 = *(u8 **)((u8 *)D_801D8D04 + arg0 * 4) + temp_v1 * 0x18;
    *(s32 *)(temp_v0 + 0x10) = *(s32 *)(temp_v0 + 0xC);
    sp20.unk0 = 0x80040000;
    sp20.unk4 = 0;
    sp20.unk8 = 0;
    func_801BF7A0(arg0, sp20);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C06C0.s")


s32 func_801C0740(s32 arg0, s32 arg1) {
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C0750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C0760.s")


typedef struct func_801C07A8_Struct {
    u8 pad[4];
    u16 unk4;
} func_801C07A8_Struct;

extern s32 func_8012FE50(s32, u16, s32, s32, s32);
extern void func_801C088C(void);
extern void func_801C08F0(void);
extern void func_801C0914(void);

extern func_801C07A8_Struct D_801BBBF0;
extern s32 D_801D8CFC;

void func_801C07A8(void) {
    func_801C07A8_Struct *p;

    if ((D_801D8CFC == 0) && (func_801C0334(D_801D8CE4) != 0)) {
        func_801C088C();
        func_801C08F0();
        func_801C0914();
        return;
    }
    func_801C0438();
    p = &D_801BBBF0;
    p->unk4 = 0xC2;
    func_8012FE50(0xF, (u16)p->unk4, 1, 6, 2);
}


extern void func_801C08B0();

void func_801C0834(void) {
    if (D_801D8CFC != 0) {
        func_801C0438();
        func_801C08B0();
    } else {
        func_801C088C();
    }
    func_801C08F0();
    func_801C0914();
}


extern s16 D_801BBBF4;
extern s32 D_801DC930[];

void func_801C088C(void) {
    D_801BBBF4 = (s16) D_801DC930[D_801D8CE4];
}


void func_801C039C(s32 *);

void func_801C08B0(void) {
    func_801C039C(&D_801D8CE4);
    D_801BBBF4 = (s16) D_801DC930[D_801D8CE4];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C08F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801BF1A0/func_801C0914.s")

