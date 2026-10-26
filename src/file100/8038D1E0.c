#include "common.h"

#define func_8038D7D4 func_8038D7D4__func_8038D1E0

extern void func_801BF6C4(s32 a0);
extern s32 func_8038D7D4(s32 arg0, s32 arg1);
extern s32 D_8038E150;
extern s32 D_8038DBFC;
extern s32 D_8038DC00;

void func_8038D1E0(void) {
    D_8038E150 = 0;
    func_8038D7D4(D_8038DBFC, D_8038DC00);
    func_801BF6C4(8);
    D_8038E150 = 1;
}
#undef func_8038D7D4

#define func_8038D7E4 func_8038D7E4__func_8038D224

extern s32 func_801BF968(void);
extern void func_801BF850(void *a0, s32 a1, void *a2);
extern s32 func_8038D7E4(void);
extern u8 D_8038DBF0[];
extern u8 D_8038E190[];

void func_8038D224(void) {
    if (func_801BF968() != 0) {
        D_8038DBFC = 0;
        D_8038DC00 = 0;
        func_801BF850(D_8038DBF0, 8, D_8038E190);
        func_8038D7E4();
    }
}
#undef func_8038D7E4



s32 func_8038D278(void) {
    return D_8038E150;
}


s32 func_8038D284(void) {
    return 0x1;
}


extern void func_80020718(s32);

void func_8038D28C(s32 arg0) {
    s32 *p = &arg0;
    func_80020718(arg0 & 0xFFFF);
}


extern void func_80020BF8(s32);

void func_8038D2B0(s32 arg0) {
    s32 *p = &arg0;
    func_80020BF8(arg0 & 0xFFFF);
}


s32 func_80020DAC(s32);                             /* extern */

s32 func_8038D2D4(s32 arg0) {
    s32 var_v1;
    s32 *unused;

    unused = &arg0;
    if (func_80020DAC(arg0 & 0xFFFF) != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}


s32 func_80020D3C();

s32 func_8038D308(s32 arg0) {
    s32 var_v1;

    if (func_80020D3C(0) != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038D1E0/D_8038DD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038D1E0/func_8038D33C.s")


struct func_8038D5F4_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
};

extern struct func_8038D5F4_Struct D_8038E158;

void func_8038D5F4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    D_8038E158.unk0 = arg0;
    D_8038E158.unk4 = arg1;
    D_8038E158.unk2C = 0;
    D_8038E158.unk30 = 0;
    D_8038E158.unk8 = arg2;
    D_8038E158.unkC = arg3;
    D_8038E158.unk10 = arg4;
    D_8038E158.unk14 = arg5;
    D_8038E158.unk18 = arg6;
    D_8038E158.unk1C = arg7;
    D_8038E158.unk20 = arg8;
    D_8038E158.unk24 = arg9;
    D_8038E158.unk28 = arg10;
}


extern void func_8038D33C(f32 a, f32 b, f32 c, u16 d, f32 e, f32 f);

s32 func_8038D660(void) {
    u8 pad[8];
    f32 sp24;
    f32 sp20;
    f32 t;
    f32 z;

    if ((u32)D_8038E158.unk18 >= (u32)D_8038E158.unk2C) {
        t = (f32)(u32)D_8038E158.unk2C / (f32)(u32)D_8038E158.unk18;
        sp20 = (D_8038E158.unkC - D_8038E158.unk0) * t + D_8038E158.unk0;
        sp24 = (D_8038E158.unk10 - D_8038E158.unk4) * t + D_8038E158.unk4;
        z = (D_8038E158.unk14 - D_8038E158.unk8) * t + D_8038E158.unk8;
        if (D_8038E158.unk30 == D_8038E158.unk20) {
            func_8038D33C(sp20, sp24, z, *(u16 *)((u8 *)&D_8038E158 + 0x1E), 1.20000005f, 1.0f);
        } else if (D_8038E158.unk30 == D_8038E158.unk24) {
            func_8038D33C(sp20, sp24, z, *(u16 *)((u8 *)&D_8038E158 + 0x1E), 1.20000005f, 1.0f);
        }
        D_8038E158.unk30++;
        if ((u32)D_8038E158.unk28 < (u32)D_8038E158.unk30) {
            D_8038E158.unk30 = 0;
        }
        D_8038E158.unk2C = (u32)D_8038E158.unk2C + 1;
        return 0;
    }
    return 1;
}


s32 func_8038D7D4(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_8038D7E4(void) {
    return 0x1;
}


void func_8038D7EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_8038D7F8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_8038D804(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

