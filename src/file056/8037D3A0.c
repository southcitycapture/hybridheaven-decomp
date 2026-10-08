#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037D3A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037D418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037D508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037D598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037D5C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037D82C.s")


typedef struct func_8037D9BC_Struct {
    s32 unk0[4];
} func_8037D9BC_Struct;

extern void func_8037D5C4(s32, s32, u16, s32, s32, s32, s32, s32);
extern func_8037D9BC_Struct D_80388C88;

void func_8037D9BC(s32 arg0, s32 arg1) {
    s32 var_s0;
    func_8037D9BC_Struct sp44;
    s32 var_s1;

    sp44 = D_80388C88;
    var_s0 = 0;
    var_s1 = 0;
    do {
        func_8037D5C4(arg0, arg1, *(u16 *) sp44.unk0[var_s0], 0x7C, (var_s1 * 0x10) + 0x86, 1, 0, 0);
        var_s0 = (var_s0 + 1) & 0xFF;
        var_s1 = var_s0;
    } while (var_s0 < 4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037DA84.s")


extern u8 func_80006214(void);
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, void *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_8008DA88[];

s32 func_8037DC30(s32 arg0, s16 arg1, s16 arg2) {
    s8 sp3F;
    u8 sp3E;

    sp3E = func_80006214();
    func_80146208(arg0, &sp3F, 0x66, arg1, arg2, 0x50, 0x10, 0, 0, 0xFF, 0x21E, 1);
    func_80145348(arg0, 0x10, 0x11);
    return D_8008DA88[sp3E];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037DCC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037DD6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037DF24.s")


struct func_8037DFDC_Sub {
    s16 unk0;
    s16 unk2;
};

struct func_8037DFDC_Obj {
    u8 pad0[0x10];
    struct func_8037DFDC_Obj *unk10;
    u8 pad1[0x1C];
    struct func_8037DFDC_Sub *unk30;
    u8 pad2[0x63];
    s8 unk97;
};

extern void func_80145310(void *, s32, s32);
extern void func_8001B204(s32, s32, s16, void *, s32, s32, s32);
extern s32 D_80388C04[];
extern s32 D_803899D0;
extern s32 D_803899D8;
extern struct func_8037DFDC_Obj *D_8038A9B8;
extern struct func_8037DFDC_Obj *D_8038A9BC;

void func_8037DFDC(struct func_8037DFDC_Obj *arg0) {
    s8 var_s0;
    struct func_8037DFDC_Obj *var_s2;
    struct func_8037DFDC_Obj *var_s3;
    struct func_8037DFDC_Sub *temp_s1;

    var_s2 = D_8038A9B8;
    var_s3 = D_8038A9BC;
    for (var_s0 = 0; var_s0 < 5; var_s0++) {
        temp_s1 = var_s3->unk30;
        if (var_s0 == arg0->unk97) {
            func_80145310(var_s2, 0x10, 0x11);
            func_8001B204((var_s0 + 2) & 0xFF, 0x7D0, temp_s1->unk2, &D_803899D0, 0xFF, 0, D_80388C04[var_s0]);
        } else {
            func_80145310(var_s2, 2, 0);
            func_8001B204((var_s0 + 2) & 0xFF, 0x7D0, temp_s1->unk2, &D_803899D8, 0x82, 0, D_80388C04[var_s0]);
        }
        var_s2 = var_s2->unk10;
        var_s3 = var_s3->unk10;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037E118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037E38C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037E630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037E920.s")


struct func_8037EABC_Struct {
    u8 pad0[0x10];
    struct func_8037EABC_Struct *unk10;
    u8 pad1[0xE];
    u8 unk22;
    u8 pad2[0x72];
    u8 unk95;
    s8 unk96;
};

extern void func_801453CC(void *, s32, s32, s32, s32, s32, s32);
extern struct func_8037EABC_Struct *D_8038A9C0;

void func_8037EABC(struct func_8037EABC_Struct *arg0) {
    struct func_8037EABC_Struct *temp_s0;

    temp_s0 = D_8038A9C0;
    temp_s0->unk22 = 1;
    func_801453CC(temp_s0, 0x180, 0, 0x1A, 1, 3, 0x1A);
    if (arg0->unk96 == 0) {
        temp_s0->unk22 = 0;
        func_80145310(temp_s0, 0, 1);
    }
    temp_s0 = temp_s0->unk10;
    temp_s0->unk22 = 1;
    func_801453CC(temp_s0, 0, 0, 0x1A, 1, 3, 0x1A);
    if (((s32) arg0->unk95 < 0xA) || (arg0->unk95 == (arg0->unk96 + 0xA))) {
        temp_s0->unk22 = 0;
        func_80145310(temp_s0, 0, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037EBB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037ED08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037EDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037EF2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F0C8.s")


extern u8 D_801BBC06[];

s32 func_8037F138(void) {
    if (D_801BBC06[1] == 0) {
        return 1;
    }
    return 2;
}


s32 func_8037F15C(void) {
    if ((s8) D_801BBC06[2] == 1) {
        return 1;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F1AC.s")


s32 func_8037F1D0(void) {
    if (D_801BBC06[5] == 1) {
        return 1;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F1F8.s")



void func_8037F220(s32 arg0) {
    s32 temp_v0;
    s32 *arg_ptr;

    arg_ptr = &arg0;
    temp_v0 = arg0 & 0xFF;
    if (temp_v0 == 1) {
        D_801BBC06[1] = 0;
        return;
    }
    if (temp_v0 == 2) {
        D_801BBC06[1] = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F258.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F2C8.s")


void func_8037F300(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0;
    if (temp_v0 == 1) {
        D_801BBC06[5] = 1;
        return;
    }
    if (temp_v0 == 2) {
        D_801BBC06[5] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F338.s")


extern s32 D_80388BE8[];
extern u8 D_8038A950[];

void func_8037F370(u8 *arg0) {
    void (*temp_v1)(u8);
    s8 temp_v0;

    temp_v0 = arg0[0x96];
    temp_v1 = (void (*)(u8)) D_80388BE8[temp_v0];
    if (temp_v1 != NULL) {
        temp_v1(D_8038A950[temp_v0]);
    }
}


extern s32 D_80388BD0[];

void func_8037F3B4(void) {
    u8 i;
    s8 (*fn)();

    for (i = 0; i < 6; i++) {
        fn = (s8 (*)())D_80388BD0[i];
        if (fn != NULL) {
            D_8038A950[i] = fn();
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037F42C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037FCF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037FE88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037FED4.s")


struct func_803800C4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x59];
    s8 unk97;
};

extern s32 D_8038A9B0;
extern s32 D_8038A9B4;
extern void func_80380168();
extern void func_80380584();
extern s32 func_8037DD6C(void *a0, s32 a1, s32 a2, s32 a3);
extern void func_8037E38C(void *a0, s32 a1);
extern void func_801471DC(s32 a0);
extern void func_800058DC(void *a0, void (*a1)());

void func_803800C4(struct func_803800C4_Struct *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    if (func_8037DD6C(arg0, D_8038A9B0, D_8038A9B4, 0x28) == 0) {
        if (arg0->unk97 == 3) {
            arg0->unk97 = 0;
            func_801471DC(D_8038A9B0);
            func_8037E38C(arg0, arg1);
            func_800058DC(arg0, func_80380584);
            return;
        }
        func_800058DC(arg0, func_80380168);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_80380168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_803803E4.s")


typedef struct func_803804F0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x97 - 0x3E];
    s8 unk97;
} func_803804F0_Struct;

extern s32 func_8037E118(void *, s32);
extern s32 func_8037FED4;

void func_803804F0(func_803804F0_Struct *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    if (func_8037DD6C(arg0, D_8038A9B0, D_8038A9B4, (s16) ((arg0->unk97 * 0x1E) + 0x4B)) == 0) {
        func_801471DC(D_8038A9B0);
        func_8037E118(arg0, arg1);
        func_800058DC(arg0, &func_8037FED4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_80380584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_80380778.s")


struct func_80380908_Sub {
    u8 pad0[0x4];
    u16 unk4;
};
struct func_80380908_Obj {
    u8 pad0[0xA4];
    struct func_80380908_Sub *unkA4;
};

extern void func_80147DCC(s32 a0);
extern void func_80148E44(void *a0);
extern void func_80148FC4(void *a0, void (*a1)(), s32 a2, s32 a3);
extern void func_8014AB48();

void func_80380908(struct func_80380908_Obj *arg0, s32 arg1) {
    struct func_80380908_Sub *temp_v0;
    s32 temp_v1;

    temp_v0 = arg0->unkA4;
    temp_v1 = temp_v0->unk4;
    if (temp_v1 & 0x4000) {
        func_801471DC((s32)D_8038A9B8);
        func_80147DCC(2);
        func_8037E38C(arg0, arg1);
        func_800058DC(arg0, func_80380584);
        return;
    }
    if (temp_v1 & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 4, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_803809A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_80380C5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_80380E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_80380E4C.s")

