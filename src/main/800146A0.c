#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800146A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014990.s")


void func_80014990(void *a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6);
void func_80029D30(void *a0, s32 a1);

void func_80014B2C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, s16 arg5, s16 arg6) {
    s32 sp28[16];

    func_80014990(sp28, arg1, arg2, arg3, arg4, arg5, arg6);
    func_80029D30(sp28, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014F10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001500C.s")


extern void func_80014B88(void *, s16, s16, s16);
extern void func_80014E14(void *, void *, s32, s32, f32);

struct func_80015088_Struct {
    u8 pad[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
    u8 tail[4];
};

void func_80015088(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    struct func_80015088_Struct sp20;

    func_80014B88(&sp20, arg1, arg2, arg3);
    func_80014E14(&sp20, &sp20, arg4, arg5, arg6);
    sp20.f30 = arg7;
    sp20.f34 = arg8;
    sp20.f38 = arg9;
    func_80029D30(&sp20, arg0);
}


struct func_80015110_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    s32 unk18;
    s32 unk1C;
    f32 unk20;
};

struct func_80015110_Local {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    u8 pad3C[4];
};


void func_80015110(s32 arg0, struct func_80015110_Struct *arg1) {
    struct func_80015110_Local sp28;

    func_80014B88(&sp28, arg1->unk10, arg1->unk12, arg1->unk14);
    func_80014E14(&sp28, &sp28, arg1->unk18, arg1->unk1C, arg1->unk20);
    sp28.unk30 = arg1->unk4;
    sp28.unk34 = arg1->unk8;
    sp28.unk38 = arg1->unkC;
    func_80029D30(&sp28, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001518C.s")


f32 func_8001518C();                                /* extern */
extern f64 D_8004C858;
extern f64 D_8004C860;
extern f64 D_8004C868;
extern f64 D_8004C870;
extern f64 D_8004C878;

f32 func_80015214(f32 arg0) {
    if (((f64) arg0 < D_8004C858) || (D_8004C860 <= (f64) arg0)) {
        if (((f64) arg0 < 0.0) || (D_8004C868 <= (f64) arg0)) {
            arg0 = func_8001518C();
        }
        if (D_8004C870 <= (f64) arg0) {
            arg0 = (f32) ((f64) arg0 - D_8004C878);
        }
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800152C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015370.s")


f64 func_80015370(f64);                             /* extern */

f64 func_800153FC(f64 arg0) {
    return -func_80015370(-arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001559C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800158C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015A64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015D9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80015F14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016058.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800161A0.s")


s32 func_80016CE4();                                /* extern */
s32 func_80016D50(s32);                             /* extern */

s32 func_800162EC(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_80016CE4() != 0) {
        do {
            var_s0 += 1;
        } while (func_80016CE4() != 0);
    }
    return (func_80016D50(var_s0) + (1 << var_s0)) - 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800163BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001643C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016500.s")


extern s32 D_8008DC94;
extern s32 D_8008DFAC;

s32 func_800165CC(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_v1;

    temp_v1 = *(u16 *)(D_8008DFAC + ((u32) D_8008DC94 * arg2 * 2) + (arg1 * 2));
    return (((temp_v1 & 0x3E) >> 1) << 11) | (((temp_v1 & 0x7C0) >> 6) << 6) | (((temp_v1 & 0xF800) >> 11) << 1) | (temp_v1 & 1);
}


extern s32 D_8008DC98;

struct func_80016634_Struct {
    u8 pad[8];
    s32 unk8;
};

void func_80016634(struct func_80016634_Struct *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    if ((arg1 >= 0) && (arg1 < D_8008DC94) && (arg2 >= 0) && (D_8008DC98 >= arg2)) {
        if (arg0->unk8 == 0x10) {
            var_v1 = arg3 & 1;
        } else {
            var_v1 = 1;
        }
        *(u16 *)(D_8008DFAC + (D_8008DC94 * arg2 * 2) + (arg1 * 2)) = (((arg3 & 0x3E) >> 1) << 11) | (((arg3 & 0x7C0) >> 6) << 6) | (((arg3 & 0xF800) >> 11) << 1) | var_v1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800166D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016730.s")


extern u8 *D_8008DFB0;

u8 func_800167FC(s32 arg0, s32 arg1, s32 arg2) {
    return *((D_8008DC94 * arg2) + arg1 + D_8008DFB0);
}


void func_80016B40(s32, s32);
extern s32 D_8008DFB4;

void func_80016828(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg1 < 0) || (arg1 >= D_8008DC94) || (arg2 < 0) || (D_8008DC98 < arg2)) {

    }
    *(D_8008DFB0 + (D_8008DC94 * arg2) + arg1) = arg3;
    func_80016B40(D_8008DFB4, (D_8008DC94 * arg2) + arg1);
}



s32 func_800168C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 temp_v0;

    temp_v0 = (D_8008DC94 + 1) & ~1;
    temp_v1 = (temp_v0 * arg2) + arg1;
    if (temp_v1 & 1) {
        return D_8008DFB0[temp_v1 / 2] & 0xF;
    }
    return (D_8008DFB0[temp_v1 / 2] & 0xF0) >> 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016A24.s")


typedef struct func_80016A9C_Struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0xC];
    s32 unk14;
    u8 pad18[0x10];
    s32 (*unk28)(struct func_80016A9C_Struct *, s32, s32);
} func_80016A9C_Struct;

extern void func_800166D4(s32, s32);

void func_80016A9C(func_80016A9C_Struct *arg0) {
    s32 var_s0;
    s32 var_s2;

    var_s2 = 0;
    if (arg0->unk4 > 0) {
        do {
            var_s0 = 0;
            if (arg0->unk0 > 0) {
                do {
                    if (arg0->unk14 == (arg0->unk28(arg0, var_s0, var_s2) & 0xFFFE)) {
                        func_800166D4(var_s0, var_s2);
                    }
                    var_s0 += 1;
                } while (var_s0 < arg0->unk0);
            }
            var_s2 += 1;
        } while (var_s2 < arg0->unk4);
    }
}


void func_80016B40(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = (arg1 >> 3) + arg0;
    *temp_v0 |= 1 << (arg1 & 7);
}

void func_80016B64(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016BA0.s")


extern s32 D_80044080;
extern s32 D_80044084;
extern s32 D_80044088;
extern s32 D_8004408C;
extern s32 D_8008DFB8;

void func_80016CB4(s32 arg0) {
    D_80044080 = 0;
    D_80044084 = 0;
    D_80044088 = 8;
    D_8004408C = 0;
    D_8008DFB8 = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016CE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016D50.s")


extern void func_80017384(s32, s32);
extern void func_800173B8(s32, s32);

void func_80016DF0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80017384(var_s0, 0);
        func_800173B8(var_s0, 0);
        var_s0 += 1;
    } while (var_s0 != 0x100);
}


extern s32 func_80016EAC(s32, s32);
extern s32 func_8001F364(s32);
extern void func_80030640(s32, s32);
extern void func_800306C0(s32, s32);
extern s32 D_801BBC10;

s32 func_80016E40(s32 arg0) {
    s32 temp_v0;

    if (D_801BBC10 != 0) {
        return 0;
    }
    temp_v0 = func_8001F364(arg0);
    D_801BBC10 = temp_v0;
    func_80016EAC(0xFFFE, temp_v0);
    func_800306C0(temp_v0, arg0);
    func_80030640(temp_v0, arg0);
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016F34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80016F90.s")


extern u8 D_8008DFC0[];

u16 func_80017014(s32 arg0) {
    if (arg0 >= 0x100) {
        return 0xFFFF;
    }
    return *(u16 *)(D_8008DFC0 + arg0 * 8);
}


typedef struct func_8001703C_Struct {
    s32 value;
    s32 unk4;
} func_8001703C_Struct;

extern func_8001703C_Struct D_8008DFC4[];

s32 func_8001703C(s32 arg0) {
    if (arg0 >= 0x100) {
        return -1;
    }
    return D_8008DFC4[arg0].value;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800170C8.s")


s32 func_80017064(s32);
void func_800173E4(s32);

s32 func_80017120(s32 arg0) {
    s32 temp_v0;
    s32 *pad_ptr;

    pad_ptr = &arg0;
    temp_v0 = func_80017064(arg0 & 0xFFFF);
    if (temp_v0 == -1) {
        return 0;
    }
    func_800173E4(temp_v0);
    return 0;
}


s32 func_800170C8(s32);                             /* extern */

s32 func_80017164(s32 *arg0) {
    s32 temp_v1;

    for (;;) {
        temp_v1 = func_800170C8(*arg0 & 0x0FFFFFFF & 0xFFFF);
        if (*arg0 & 0x40000000) {
            break;
        }
        arg0 += 2;
    }
    return temp_v1;
}

s32 func_80016F90();                                /* extern */


s32 func_800171D0(u16 arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    var_s1 = 0;
loop_1:
    if (func_80016F90() >= var_s0) {
        temp_v0 = func_80017014(var_s0);
        if (temp_v0 != 0) {
            if (temp_v0 != arg0) {
                var_s1 = func_800170C8(temp_v0 & 0xFFFF);
            } else {
                var_s0 += 1;
            }
            goto loop_1;
        }
    }
    return var_s1;
}


s32 func_80017480(u16, s32);

s32 func_80017254(s32 arg0) {
    u16 temp_s0;
    u16 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;

    var_s1 = 0;
    var_s2 = 0;
    var_s4 = -1;
loop_1:
    if (func_80016F90() >= var_s1) {
        temp_v0 = func_80017014(var_s1);
        temp_s0 = temp_v0;
        if (temp_v0 != 0) {
            if (func_80017480(temp_s0, arg0) == var_s4) {
                var_s2 = func_800170C8(temp_s0 & 0xFFFF);
            } else {
                var_s1 += 1;
            }
            goto loop_1;
        }
    }
    return var_s2;
}


extern s32 func_800174CC(s32);
extern void func_8001F540(s32);

s32 func_800172F4(void) {
    s32 temp_s0;

    temp_s0 = D_801BBC10;
    if (temp_s0 != 0) {
        func_800173E4(func_800174CC(temp_s0));
        func_8001F540(temp_s0);
    }
    D_801BBC10 = 0;
    return temp_s0;
}


s32 func_80017344(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_800174CC(arg0);
    if (temp_v0 == -1) {
        return 0;
    }
    func_800173E4(temp_v0);
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800173B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800173E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017480.s")



s32 func_800174CC(s32 arg0) {
    s32 i;

    for (i = 0; i != 0x100; i++) {
        if (func_8001703C(i) == arg0) {
            return i;
        }
    }
    return -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001752C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017594.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001769C.s")



void func_800177BC(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_80016F90();
    var_v1 = 0;
    if (temp_v0 >= 0) {
        do {
            var_v1 += 1;
        } while (temp_v0 >= var_v1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800177F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017820.s")


extern s32 D_8008EE78;

s32 func_800178E8(void) {
    return D_8008EE78 == 0;
}


extern u8 D_8008EE82;

u8 func_800178F8(void) {
    return D_8008EE82;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017910.s")


extern u8 D_801BBBF0[];

s32 func_8001791C(void) {
    if (*(u16 *)(D_801BBBF0 + 0x354) == *(u16 *)(D_801BBBF0 + 0x352)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017948.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001796C.s")



void func_80017990(s32 arg0) {
    if (D_8008EE78 == 0) {
        D_8008EE78 = arg0;
    }
}

extern u16 D_8008EBC0;
extern u16 D_8008EBC2;
extern u16 D_8008EBCC;
extern s16 D_8008EBEC;
extern u8 D_8008EE81;
extern s8 D_8008EE83;

extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32);
extern void func_8001B204(s32, s32, s32, void *);
extern s16 D_8008EBDA;
extern s16 D_8008EBDC;
extern s16 D_8008EBDE;
extern s16 D_8008EBE0;
extern s16 D_8008EBE2;
extern s16 D_8008EBE4;
extern s16 D_8008EBE6;
extern s16 D_8008EBE8;
extern s16 D_8008EBEA;
extern s16 D_8008EBEE;
extern s16 D_8008EBF0;
extern s16 D_8008EBC4;
extern s16 D_8008EBC6;
extern s16 D_8008EBC8;
extern s16 D_8008EBCA;
extern s16 D_8008EBCE;
extern s16 D_8008EBD0;
extern s16 D_8008EBD2;
extern s16 D_8008EBD4;
extern s16 D_8008EBD6;
extern s16 D_8008EBD8;
extern s32 D_8008EE7C;
extern s8 D_8008EE80;
extern u8 D_8004CC80[];
extern u8 D_8004CC90[];

void func_800179B0(s32 arg0) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 < 7; var_s0++) {
        func_8001A804(var_s0 & 0xFF, D_8004CC80, 0, 0, 0, 0, 0);
    }
    for (var_s0 = 0; var_s0 != 0x1C; var_s0++) {
        func_8001B204(var_s0 & 0xFF, 0, 0, D_8004CC90);
    }
    D_8008EE78 = arg0;
    D_8008EE7C = 0;
    D_8008EE80 = 0;
    D_8008EE81 = 0;
    D_8008EE82 = 0;
    D_8008EE83 = 0;
    D_8008EBC0 = 0;
    D_8008EBC2 = 0;
    D_8008EBC4 = 0;
    D_8008EBC6 = 0;
    D_8008EBC8 = 0;
    D_8008EBCA = 0;
    D_8008EBCC = 0;
    D_8008EBCE = 0;
    D_8008EBD0 = 0;
    D_8008EBD2 = 0;
    D_8008EBD4 = 0x1E;
    D_8008EBD6 = 0xAB;
    D_8008EBD8 = 0x104;
    D_8008EBDA = 0x32;
    D_8008EBDC = 4;
    D_8008EBDE = 0x20;
    D_8008EBE0 = 0xAC;
    D_8008EBE2 = 0;
    D_8008EBE4 = 0x10;
    D_8008EBE6 = 4;
    D_8008EBE8 = 0;
    D_8008EBEA = 1;
    D_8008EBEC = 0;
    D_8008EBEE = 2;
    D_8008EBF0 = 0;
    *(s16 *)&D_801BBBF0[0x34E] = 0;
    *(s16 *)&D_801BBBF0[0x350] = 0;
}


extern void func_800058DC(s32, void (*)(void));
extern void func_80017BB8(void);

void func_80017B80(s32 arg0, s32 arg1) {
    func_800179B0(0);
    func_800058DC(arg0, func_80017BB8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80017BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001800C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800183D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80018518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80018684.s")


s32 func_800189BC(u32 arg0) {
    return (arg0 >> 8) & 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800189C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80018AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80018BD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80018C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80018E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80019038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80019158.s")


extern s32 func_80018BD8(void);
extern void func_800189C8(void);
extern u16 D_800892B0[];
extern void *D_80044124[];
extern s16 D_8008EBFC;

void func_8001922C(s32 arg0, s32 arg1) {
    u16 temp_v0;

    D_8008EBFC = D_800892B0[0x1E8 / 2] | D_800892B0[0x1C8 / 2];
    if (func_80018BD8() == 0) {
        func_800058DC(arg0, func_80017BB8);
        return;
    }
    temp_v0 = ((u16 *)D_80044124[D_8008EBC0])[2];
    if (temp_v0 & 0xF000) {
        if (temp_v0 & 0xB000) {
            D_8008EBEC = 0;
        } else {
            D_8008EBEC = 1;
        }
        if (D_8008EBCC == 0) {
            func_800189C8();
            func_800058DC(arg0, func_80017BB8);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800192F4.s")



void func_800193E0(s32 arg0, s32 arg1) {
    D_8008EE83 = 0;
    func_800058DC(arg0, func_80017BB8);
}


extern void func_80018AB4(void);
extern void func_80018C9C(u8);

void func_80019410(s32 arg0, s32 arg1) {
    if (func_80018BD8() == 0) {
        func_80018AB4();
        func_80018C9C(D_8008EE81);
        func_800058DC(arg0, func_80017BB8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80019460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80019758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80019898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80019CB4.s")


extern void func_80019E7C();

void func_80019E0C(s32 arg0, s32 arg1) {
    if ((s32) D_8008EBC2 < 8) {
        if (func_80018BD8() == 0) {
            func_80018AB4();
            func_800058DC(arg0, func_80019E7C);
        }
    } else {
        func_800058DC(arg0, func_80019E7C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80019E7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001A01C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001A0A4.s")

