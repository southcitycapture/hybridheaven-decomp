#include "common.h"


f32 func_8037D3A0(u8 *arg0) {
    f32 var_fv1;
    u8 *var_v0;

    var_fv1 = 0.0f;
    var_v0 = arg0;
    while (*var_v0 != 0) {
        if (*var_v0 >= 0x20 && *var_v0 < 0x81) {
            var_fv1 = (f32) ((f64) var_fv1 + 1.0);
        } else {
            var_v0 += 1;
            var_fv1 = (f32) ((f64) var_fv1 + 0.5);
        }
        var_v0 += 1;
    }
    return var_fv1;
}


void func_8037D418(u8 *arg0, u8 *arg1, s32 arg2) {
    s16 temp_a0;
    s16 var_v1;
    u8 var_v0;

    temp_a0 = 0xF5 - (s16) (s32) (func_8037D3A0(arg1) * 10.0f);
    var_v1 = temp_a0;
    var_v0 = *arg1;
    if (var_v0 != 0) {
        do {
            *arg0 = var_v0;
            var_v0 = arg1[1];
            arg0 += 1;
            arg1 += 1;
        } while (var_v0 != 0);
    }
    if ((temp_a0 % 10) == 5) {
        arg0[0] = 0xA1;
        arg0[1] = 0xB8;
        arg0 += 2;
        var_v1 = temp_a0 - 5;
    }
    if (var_v1 > 0) {
        do {
            var_v1 -= 0xA;
            *arg0 = 0x20;
            arg0 += 1;
        } while (var_v1 > 0);
    }
    *arg0 = 0;
}


typedef struct func_8037D508_Struct {
    s32 unk0[5];
} func_8037D508_Struct;

extern s32 func_8012C4D0(s32, func_8037D508_Struct, s32);
extern s32 D_80388C60;
extern func_8037D508_Struct D_80388C64;

s32 func_8037D508(void) {
    if (D_80388C60 == 0) {
        D_80388C60 = func_8012C4D0(0, D_80388C64, 3);
        if (D_80388C60 != 0) {
            return 1;
        }
    }
    return 0;
}

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

extern s32 D_8038A9A4;

typedef struct { s16 x, y; } func_8037DA84_P;
typedef struct { func_8037DA84_P v[6]; } func_8037DA84_SA;
typedef struct { u16 *p[4]; } func_8037DA84_SB;
typedef struct { u8 v[4][2]; } func_8037DA84_SC;
typedef struct { u8 pad[0x91]; s8 k; } func_8037DA84_S;
extern u8 func_80006214(void);
extern func_8037DA84_SA D_80388C98;
extern func_8037DA84_SB D_80388CB0;
extern func_8037DA84_SB D_80388CC0;
extern func_8037DA84_SC D_80388CD0;

#define arg0 ((func_8037DA84_S *)a0)
#define arg1 ((s32 *)a1)
void func_8037DA84(void *a0, void *a1) {
    func_8037DA84_SA a;
    s16 pad0;
    s16 s74;
    u8 pad1;
    u8 r;
    s32 i;
    func_8037DA84_SB b;
    func_8037DA84_SB c;
    func_8037DA84_SC d;
    u16 *q;

    a = D_80388C98;
    s74 = 1;
    b = D_80388CB0;
    c = D_80388CC0;
    d = D_80388CD0;
    b.p[2] = (u16 *)&s74;
    b.p[3] = (u16 *)&s74;
    r = func_80006214();
    q = c.p[arg0->k];
    for (i = 0; i < 6; i = (i + 1) & 0xFF) {
        func_8037D5C4((s32)arg0, (s32)arg1, *q, (s16)(a.v[i].x + 0x1B), a.v[i].y + 0x23, d.v[arg0->k][0], d.v[arg0->k][1], 0);
        q += 1;
    }
    D_8038A9A4 = arg1[r];
}
#undef arg0
#undef arg1


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


extern u8 D_80388C00[];

s32 func_8037DCC8(void *arg0, s16 arg1, s16 arg2) {
    u8 sp3F;
    u8 sp3E;

    sp3E = func_80006214();
    func_80146208((s32) arg0, &sp3F, 0x66, arg1, arg2, 0x50, 0x10, 0, 0, 0xFF, 0x21E, D_80388C00[*((s8 *) arg0 + 0x97)]);
    func_80145348((s32) arg0, 1, 0);
    return D_8008DA88[sp3E];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037DD6C.s")


typedef struct func_8037DF24_Struct {
    u8 pad0[0x10];
    struct func_8037DF24_Struct *unk10;
    u8 pad1[0x83];
    s8 unk97;
} func_8037DF24_Struct;

extern void func_80145310(void *, s32, s32);
extern s32 D_8038A9B0;
extern s32 D_8038A9B4;

void func_8037DF24(func_8037DF24_Struct *arg0) {
    s8 var_s2;
    func_8037DF24_Struct *var_s0;
    func_8037DF24_Struct *var_s1;

    var_s0 = (func_8037DF24_Struct *)D_8038A9B0;
    var_s1 = (func_8037DF24_Struct *)D_8038A9B4;
    var_s2 = 0;
    do {
        if (var_s2 == arg0->unk97) {
            func_80145310(var_s0, 0x10, 0x11);
            func_80145310(var_s1, 1, 0);
        } else {
            func_80145310(var_s0, 2, 0);
            func_80145310(var_s1, 2, 0);
        }
        var_s2 += 1;
        var_s0 = var_s0->unk10;
        var_s1 = var_s1->unk10;
    } while (var_s2 < 4);
}


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


#define arg1 ((u8 **)a1)
void func_8037E38C(void *arg0, s32 a1) {
    s16 sp5E;
    u8 sp5D;
    u8 i;
    extern u8 func_80006214();

    func_80146208((s32)arg0, &sp5E, 0x66, 0x78, 0x28, 0x50, 0x10, 0, 0, 0xFF, 0x21E, 1);
    func_80145348((s32)arg0, 0x10, 0x11);
    D_8038A9B0 = (s32)arg1[func_80006214(arg0) - 1];
    func_80146208((s32)arg0, &sp5E, 0x66, 0x78, 0x28, 0x50, 0x10, 0, 0, 0xFF, 0x21E, D_80388C00[3]);
    func_80145348((s32)arg0, 1, 0);
    D_8038A9B4 = (s32)arg1[func_80006214(arg0) - 1];
    sp5D = func_80006214(arg0);
    for (i = 0; i < 5; i++) {
        func_80146208((s32)arg0, &sp5E, 0x66, 0x78, i * 0x16 + 0x4B, 0x50, 0x10, 0, 0, 0xFF, 0x21E, 1);
        func_80145348((s32)arg0, 2, 0);
    }
    D_8038A9B8 = (void *)arg1[sp5D];
    sp5D = func_80006214(arg0);
    for (i = 0; i < 5; i++) {
        func_80146208((s32)arg0, &sp5E, 0x66, 0x78, i * 0x16 + 0x4B, 0x50, 0x10, 0, 0, 0xFF, 0x21E, D_80388C00[i]);
        (*(u8 **)(a1 + func_80006214(arg0) * 4 - 4))[0x22] = 0;
    }
    D_8038A9BC = (void *)arg1[sp5D];
    func_8037DFDC(arg0);
}
#undef arg1

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


struct func_8037F0C8_Sub {
    u8 pad0[0x2];
    s16 unk2;
};

struct func_8037F0C8_Inner {
    u8 pad0[0x30];
    struct func_8037F0C8_Sub *unk30;
};

struct func_8037F0C8_Struct {
    u8 pad0[0x96];
    s8 unk96;
};

void func_8037F0C8(struct func_8037F0C8_Struct *arg0) {
    ((struct func_8037F0C8_Inner *) D_8038A9C0)->unk30->unk2 = (s16) ((arg0->unk96 * 0x14) + 0x4A);
    func_801453CC(D_8038A9C0, 0x180, 0, 0x1A, 1, 3, 0x1A);
}


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


s32 func_8037F184(void) {
    if ((s8) D_801BBC06[3] == 1) {
        return 1;
    }
    return 2;
}


extern u8 D_8017DCCC;

s32 func_8037F1AC(void) {
    if (D_8017DCCC == 0) {
        return 1;
    }
    return 2;
}


s32 func_8037F1D0(void) {
    if (D_801BBC06[5] == 1) {
        return 1;
    }
    return 2;
}


s32 func_8037F1F8(void) {
    if (D_801BBC06[6] == 1) {
        return 1;
    }
    return 2;
}



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


void func_8037F2C8(s32 arg0) {
    s32 temp_v0;
    s32 *arg_ptr;

    arg_ptr = &arg0;
    temp_v0 = arg0 & 0xFF;
    if (temp_v0 == 1) {
        D_8017DCCC = 0;
        return;
    }
    if (temp_v0 == 2) {
        D_8017DCCC = 1;
    }
}


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

/* starting point: func_8037F300 (file056), whose assembly is 100% the same as this function's */

void func_8037F338(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0;
    if (temp_v0 == 1) {
        D_801BBC06[6] = 1;
        return;
    }
    if (temp_v0 == 2) {
        D_801BBC06[6] = 0;
    }
}


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


struct func_8037FCF8_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
};
struct func_8037FCF8_Obj {
    u8 pad0[0x91];
    s8 unk91;
    u8 pad92[2];
    s8 unk94;
    u8 pad95[0xF];
    struct func_8037FCF8_Sub *unkA4;
};
extern void func_80020744(s32);
extern void func_80148C60(void *, s32, s32);
extern void func_801498CC();
extern void func_8014AB48();
extern void func_80148E44(void *a0);
extern s32 func_80148FC4();
extern s32 func_8037FED4;
extern void func_801471DC(s32 a0);
extern s32 D_8038A9A0;
extern void *D_8038A9A8;

void func_8037FCF8(struct func_8037FCF8_Obj *arg0, u8 *arg1) {
    struct func_8037FCF8_Sub *sub = arg0->unkA4;
    s8 old = arg0->unk91;
    u16 f = sub->unkC;

    if (f & 0x800) {
        arg0->unk91 = arg0->unk91 - 1;
        arg0->unk94 = 1;
    } else if (f & 0x400) {
        arg0->unk91 = arg0->unk91 + 1;
        arg0->unk94 = 1;
    }
    if (arg0->unk91 < 0) {
        arg0->unk91 = 3;
    }
    arg0->unk91 = arg0->unk91 % 4;
    if (old != arg0->unk91) {
        func_80020744(0x300);
    }
    func_80148C60(arg0, D_8038A9A0, 4);
    func_801453CC(D_8038A9A8, 0x100, 0, 0, 1, 0x22, 0x22);
    if (arg0->unk94 != 0) {
        func_801471DC(D_8038A9A4);
        func_8037DA84(arg0, arg1);
        arg0->unk94 = 0;
    }
    if (sub->unk4 & 0x4000) {
        func_801471DC(*(s32 *)(arg1 + 4));
        func_80148FC4(arg0, func_801498CC, 3, 0);
        return;
    }
    if (sub->unk4 & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 3, 1);
    }
}

extern void func_800058DC(void *a0, void (*a1)());
extern s32 func_8037E118(void *, s32);

extern s32 func_80126A0C(void *a0, s32 a1, s32 a2);

void func_8037FE88(void *arg0, s32 arg1) {
    if (func_80126A0C(arg0, 0x123, 0) != 0) {
        func_8037E118(arg0, arg1);
        func_800058DC(arg0, (void (*)())&func_8037FED4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_8037FED4.s")


struct func_803800C4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x59];
    s8 unk97;
};

extern void func_80380168();
extern void func_80380584();
extern s32 func_8037DD6C(void *a0, s32 a1, s32 a2, s32 a3);

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


extern s32 D_8038A9AC;
extern s8 func_8037ED08(void *);
extern void func_803803E4();

void func_80380168(s32 arg0, s32 *arg1) {
    s16 sp46;
    u8 sp45;
    struct func_8037EABC_Struct *temp_t6;
    extern u8 func_80006214();

    sp45 = func_80006214();
    func_80146208(arg0, &sp46, 0x66, 0x20, 0x3C, 0x100, 8, 0, 0, 0xFF, 0x21E, 6);
    func_80145348(arg0, 1, 0);
    func_80146208(arg0, &sp46, 0x76, 0x20, 0x44, 0x100, 0x88, 0, 0, 0xFF, 0x21E, 7);
    func_80145348(arg0, 1, 0);
    func_80146208(arg0, &sp46, 0x66, 0x20, 0xCC, 0x100, 8, 0, 0, 0xFF, 0x21E, 8);
    func_80145348(arg0, 1, 0);
    D_8038A9AC = arg1[sp45];
    sp45 = func_80006214(arg0);
    func_80146208(arg0, &sp46, 0x66, 0x29, 0x4A, 8, 8, 0, 0, 0xFF, 0x209, 5);
    func_80145348(arg0, 0, 1);
    func_80146208(arg0, &sp46, 0xE6, 0x29, 0xBE, 8, 8, 0, 8, 0xFF, 0x209, 5);
    func_80145348(arg0, 0, 1);
    D_8038A9C0 = (struct func_8037EABC_Struct *) arg1[sp45];
    D_8038A9C0->unk10->unk22 = 0;
    D_8038A9C0->unk22 = D_8038A9C0->unk10->unk22;
    ((struct func_8037EABC_Struct *) arg0)->unk95 = func_8037ED08((void *) arg0);
    func_800058DC((void *) arg0, func_803803E4);
}

typedef struct func_803804F0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x97 - 0x3E];
    s8 unk97;
} func_803804F0_Struct;
void func_803804F0(func_803804F0_Struct *arg0, s32 arg1);
extern void func_80147DCC(s32 a0);

typedef struct func_803803E4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x57];
    u8 unk95;
    s8 unk96;
    u8 pad2[0xD];
    struct func_8037FCF8_Sub *unkA4;
} func_803803E4_Struct;

extern void func_8037EBB0(void *);

void func_803803E4(func_803803E4_Struct *arg0, s32 arg1) {
    struct func_8037FCF8_Sub *sp24;
    s32 temp_a2;
    s32 var_v0;
    u16 temp_a1;

    sp24 = arg0->unkA4;
    temp_a1 = sp24->unkC;
    var_v0 = arg0->unk96;
    temp_a2 = var_v0 & 0xFFFF;
    if ((temp_a1 & 0x800) && (var_v0 > 0)) {
        arg0->unk96 = var_v0 - 1;
        var_v0 = arg0->unk96;
    }
    if ((temp_a1 & 0x400) && (var_v0 < (arg0->unk95 - 0xA))) {
        arg0->unk96 = var_v0 + 1;
        var_v0 = arg0->unk96;
    }
    if (temp_a2 != var_v0) {
        func_80020744(0x300);
        func_8037EBB0(arg0);
    }
    func_8037EABC((struct func_8037EABC_Struct *)arg0);
    var_v0 = sp24->unk4;
    if (var_v0 & 0x4000) {
        func_80147DCC(2);
        arg0->unk3C = 0;
        func_801471DC(D_8038A9AC);
        func_800058DC(arg0, func_803804F0);
        return;
    }
    if (var_v0 & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 4, 1);
    }
}




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


extern void func_8037EDF4(void *);
extern void func_8037EF2C(void *);
extern void func_80380C5C();
extern s32 D_8038A99C;
extern s32 D_8038A9C8;

void func_803809A4(u8 *arg0, s32 *arg1)
{
  s16 sp5E;
  u8 sp5D;
  s32 i;
  s32 j;
  extern u8 func_80006214();
  if (func_80126A0C(arg0, 0x124, 0) != 0)
  {
    sp5D = func_80006214(arg0);
    func_80146208((s32) arg0, &sp5E, 0x26, 0x70, 0x25, 0x60, 0x14, 0, 0, 0xFF, 0x20E, 6);
    func_80146208((s32) arg0, &sp5E, 0x66, 0x80, 0x28, 0x40, 0x10, 0, 0, 0xFF, 0x21F, 0);
    func_80145348((s32) arg0, 1, 0);
    D_8038A99C = arg1[sp5D];
    sp5D = func_80006214(arg0);
    i = 0;
    j = 0;
    do
    {
      func_80146208((s32) arg0, &sp5E, 0x66, 0x94, (s16) ((j * 0x14) + 0x46), 0x40, 0x10, 0, 0, 0xFF, 0x21F, 1);
      func_80146208((s32) arg0, &sp5E, 0x66, 0xDA, (s16) ((j * 0x14) + 0x46), 0x40, 0x10, 0, 0, 0xFF, 0x21F, 1);
      i = (i + 1) & 0xFF;
      j = i;
    }
    while (i < 6);
    D_8038A9C8 = arg1[sp5D];
 if (0) { }
    func_80146208((s32) arg0, &sp5E, 0x66, 0x2A, 0x4A, 8, 8, 0, 0, 0xFF, 0x209, 6);
    func_80145348((s32) arg0, 0x1A, 3);
    D_8038A9C0 = (void *) arg1[func_80006214(arg0) - 1];
    arg0[0x96] = 0;
    func_8037F3B4();
    func_8037EDF4(arg0);
    func_8037EF2C(arg0);
    func_800058DC(arg0, func_80380C5C);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_80380C5C.s")


extern void func_80005670(s32, void *);
extern u8 D_80181D64[];
extern void func_80380E4C(s32 arg0, s32 arg1);

void func_80380E10(s32 arg0, s32 arg1) {
    func_80005670(arg0, D_80181D64);
    func_800058DC(arg0, func_80380E4C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037D3A0/func_80380E4C.s")

