#include "common.h"


extern u8 D_80387010;

struct func_80369094_Struct *func_803677B0(arg0)
u16 arg0;
{
    u8 *ptr;

    ptr = &D_80387010;
    while (*ptr != 0x57) {
        if (arg0 == *ptr) {
            return (struct func_80369094_Struct *)ptr;
        }
        ptr += 0x14;
    }
    return (struct func_80369094_Struct *)&D_80387010;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_8036780C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80367914.s")


void func_80367C24(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80367C30_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80367C30_Struct;

extern u8 D_801BBBF0[];
extern u8 D_8008DA88[];

s32 func_80006214();
s32 func_80010550(void *, s32);
s32 func_802237B0();
void func_8035DD80(void *, s32);
void func_80368020(void *, void *);

void func_80367C30(func_80367C30_Struct *arg0, void *arg1) {
    func_80367C30_Struct *var_a2;
    s32 sp28;
    s32 sp24;

    if (arg0 != *(func_80367C30_Struct **)(D_801BBBF0 + 0xDC)) {
        var_a2 = *(func_80367C30_Struct **)(D_801BBBF0 + 0xDC);
    } else {
        var_a2 = *(func_80367C30_Struct **)(D_801BBBF0 + 0xEC);
    }
    sp28 = arg0->unk5C;
    sp24 = var_a2->unk5C;
    func_802237B0(arg0, 1, var_a2);
    func_802237B0(var_a2, 1);
    func_80006214(var_a2);
    func_80010550(D_8008DA88, sp24);
    func_80006214(arg0);
    if (func_80010550(arg1, sp28) != 0) {
        func_8035DD80(arg0, 0);
        func_80368020(arg0, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80367CE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80367D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80368020.s")


typedef struct func_80368284_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80368284_Struct;

void func_8013A334(func_80368284_Struct *, s32, s32, u16);
void func_802254F8(s32, s32, s32);
void func_802266CC(s32, u16);
void func_80371A40(s32, func_80368284_Struct);

void func_80368284(s32 arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, u16 arg5) {
    func_80368284_Struct sp1C;

    ((u8 *)arg3)[0x2FA] = 1;
    func_8013A334(&sp1C, arg1, arg2, arg4);
    func_80371A40(arg0, sp1C);
    func_802266CC(arg0, arg5);
    func_802254F8(arg0, 0x14, 4);
}


void func_803682FC(s32 arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4) {
    func_80368284_Struct sp1C;

    ((u8 *)arg3)[0x2FA] = 1;
    func_8013A334(&sp1C, arg1, arg2, arg4);
    func_80371A40(arg0, sp1C);
    func_802266CC(arg0, 0x3BB);
    func_802254F8(arg0, 0xF, 6);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80368374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80368E58.s")


typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;

extern s32 D_801BBCCC;
extern func_80369094_Struct D_801BC03C;
extern func_80369094_Struct D_801BC3D8;

void func_80368E58(s32, s32, s16, s32);

void func_80369094(s32 arg0, s32 arg1) {
    func_80369094_Struct *var_v0;
    func_80369094_Struct *temp_v0;

    if (arg0 != D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    temp_v0 = func_803677B0(var_v0->unk2D9);
    func_80368E58(arg0, arg1, temp_v0->unk8, ((u32) temp_v0->unk1 >> 6) & 0xFF);
}


typedef struct func_803690F8_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 unk30;
    u8 pad34[0x2FA - 0x34];
    u8 unk2FA;
} func_803690F8_Struct;

extern void func_80225540();
extern void func_800058DC(s32, void *);
extern void func_80365FE0(s32, s32);
extern void func_80222E84();
extern void func_8036648C();

void func_803690F8(s32 arg0, s32 arg1) {
    func_803690F8_Struct *var_v0;
    func_803690F8_Struct *var_v1;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_803690F8_Struct *) &D_801BC03C;
    } else {
        var_v0 = (func_803690F8_Struct *) &D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        var_v1 = (func_803690F8_Struct *) &D_801BC03C;
    } else {
        var_v1 = (func_803690F8_Struct *) &D_801BC3D8;
    }
    func_80225540();
    if ((var_v0->unk2 <= 0) || (((var_v0->unk30 * 2) >> 0x1E) != 0)) {
        if (((var_v0->unk30 * 2) >> 0x1E) == 0) {
            *(u8 *) &var_v0->unk30 = (u8) ((*(u8 *) &var_v0->unk30 & 0xFF9F) | 0x20);
        }
        func_800058DC(arg0, &func_80222E84);
        return;
    }
    var_v0->unk2FA = 0;
    *(u8 *) &var_v0->unk30 = (u8) (*(u8 *) &var_v0->unk30 & 0xFFFE);
    if ((var_v1->unk2 <= 0) || (((var_v1->unk30 * 2) >> 0x1E) != 0)) {
        func_800058DC(arg0, &func_8036648C);
        return;
    }
    func_80365FE0(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_8036920C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_803693E4.s")


typedef struct func_803697AC_StructTable {
    u16 values[2][3];
} func_803697AC_StructTable;

typedef struct func_803697AC_StructActor {
    u8 pad[0x36];
    u16 unk36;
} func_803697AC_StructActor;

extern void func_80020718(u16);
extern s32 func_801DFE28(void *);
extern func_803697AC_StructTable D_80387274;

void func_803697AC(func_803697AC_StructActor *arg0, s32 arg1, u8 arg2) {
    s32 padding;
    func_803697AC_StructTable table;
    u16 value;
    u8 index;

    arg2 = (s32)arg2 % 3;
    table = D_80387274;
    index = 0;
    if (func_801DFE28(arg0) == 1) {
        index = 1;
    }
    func_80020718(table.values[index][arg2]);
    value = arg0->unk36;
    if (value == 0xF6 || value == 0xF4 || value == 0xF5) {
        func_80020718(0x22E);
    }
    func_802254F8((s32)arg0, (s16)(arg2 * 10 + 5), (u8)(arg2 * 2 + 1));
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/_pad_32.s")

