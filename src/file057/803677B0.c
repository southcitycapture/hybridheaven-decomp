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


typedef struct func_8036780C_Struct {
    u8 pad0[0x32];
    u16 bf:3;
    u16 rest:13;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
} func_8036780C_Struct;

extern void func_80374F04(s32, f32);
extern void func_80368374(s32, s32);
void func_8036920C(s32 arg0, s32 arg1);
extern u8 D_80387254;
extern u8 D_801BBBF0[];
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern void func_800058DC(s32, void *);

void func_8036780C(s32 arg0, s32 arg1) {
    s32 other;
    func_8036780C_Struct *v1;
    func_8036780C_Struct *v0;

    if (arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        other = *(s32 *)(D_801BBBF0 + 0xDC);
    } else {
        other = *(s32 *)(D_801BBBF0 + 0xEC);
    }
    if (arg0 == *(s32 *)(D_801BBBF0 + 0xDC)) {
        v1 = (func_8036780C_Struct *)&D_801BC03C;
    } else {
        v1 = (func_8036780C_Struct *)&D_801BC3D8;
    }
    if (arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        v0 = (func_8036780C_Struct *)&D_801BC03C;
    } else {
        v0 = (func_8036780C_Struct *)&D_801BC3D8;
    }
    D_80387254 = 0;
    v0->bf = 0;
    v1->bf = v0->bf;
    if (v1->unk2DA != 0 || v0->unk2D8 == 0x12) {
        func_80374F04(arg0, 1.0f);
        func_800058DC(arg0, func_80368374);
        func_800058DC(other, func_80368374);
        return;
    }
    func_800058DC(arg0, func_8036920C);
    func_800058DC(other, func_8036920C);
}

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


typedef struct func_80368020_Struct {
    u8 pad0[0x30];
    u32 pad30a:9;
    u32 unk30:2;
    u32 pad30b:21;
    u8 pad34[4];
    u32 pad38a:3;
    u32 unk38:1;
    u32 pad38b:28;
} func_80368020_Struct;

typedef struct func_80368020_Tmp {
    s32 a;
    s32 b;
    s32 c;
} func_80368020_Tmp;

extern void func_80225664(func_80368020_Tmp *, s32, s32);
extern void D_8013A28C(s32, func_80368020_Tmp);
extern u8 func_80367D58(s32, func_80368020_Struct *);

void func_80368020(void *arg0, void *arg1) {
    s32 other;
    func_80368020_Struct *s;
    s32 lo;
    s32 hi;
    u8 r;
    func_80368020_Tmp tmp;

    if ((s32)arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        other = *(s32 *)(D_801BBBF0 + 0xDC);
    } else {
        other = *(s32 *)(D_801BBBF0 + 0xEC);
    }
    if ((s32)arg0 == *(s32 *)(D_801BBBF0 + 0xDC)) {
        s = (func_80368020_Struct *)&D_801BC03C;
    } else {
        s = (func_80368020_Struct *)&D_801BC3D8;
    }
    if (++D_80387254 >= 2) {
        func_8036780C((s32)arg0, (s32)arg1);
        return;
    }
    r = func_80367D58((s32)arg0, s);
    if (r == 0 || r == 0xF) {
        func_8036780C((s32)arg0, (s32)arg1);
        return;
    }
    if ((lo = r & 2) && !(r & 1)) {
        if (s->unk38 == 1) {
            lo = 0x019000A4;
            hi = 0x019000A5;
        } else {
            lo = 0x01900084;
            hi = 0x01900085;
        }
    } else if ((r & 1) && !lo) {
        if (s->unk38 == 1) {
            lo = 0x019000A2;
            hi = 0x019000A3;
        } else {
            lo = 0x01900082;
            hi = 0x01900083;
        }
    } else if ((s->unk30 == 2 && (r & 8)) || (s->unk30 == 3 && (r & 4))) {
        lo = 0x01900088;
        hi = 0x01900089;
    } else {
        lo = 0x01900086;
        hi = 0x01900087;
    }
    func_80225664(&tmp, (s32)arg0, lo);
    D_8013A28C((s32)arg1, tmp);
    func_800058DC((s32)arg0, func_80367C30);
    func_80006214(other);
    func_80225664(&tmp, other, hi);
    D_8013A28C((s32)D_8008DA88, tmp);
    func_80006214(arg0);
    func_800058DC(other, func_80367C24);
}


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


typedef struct func_80368E58_S16 { s32 w[4]; } func_80368E58_S16;
typedef struct func_80368E58_Struct { s32 a; s32 b; s32 c; } func_80368E58_Struct;
typedef struct func_80368E58_StructV { s32 pad0; u8 pad4[0x2C]; u32 pad30:9; u32 f:2; u32 g:2; u32 rest:19; } func_80368E58_StructV;
typedef struct func_80368E58_Obj { u8 pad[0x12]; s16 unk12; } func_80368E58_Obj;
extern func_80368E58_Struct D_80387258;
extern func_80368E58_S16 D_80387264;
extern void func_80224E00(s32, s16, s16);
extern void func_802256E4(void *, s32, s32);
extern void func_8013A28C(s32, func_80368E58_Struct);
extern void func_8036265C();
extern s32 D_801BBCCC;
void func_803690F8(s32 arg0, s32 arg1);

void func_80368E58(arg0, arg1, arg2, arg3)
s32 arg0;
s32 arg1;
s16 arg2;
u8 arg3;
{
    func_80368E58_Struct *sp54;
    func_80368E58_StructV *v;
    s32 pad;
    func_80368E58_Struct sp40;
    func_80368E58_S16 sp30;
    s32 pad2;
    s16 a1;

    sp54 = (func_80368E58_Struct *)((func_80367C30_Struct *)arg0)->unk5C;
    pad = D_801BBCCC;
    if (arg0 == pad) {
        v = (func_80368E58_StructV *)&D_801BC03C;
    } else {
        v = (func_80368E58_StructV *)&D_801BC3D8;
    }
    sp40 = D_80387258;
    sp30 = D_80387264;
    if (v->f == 3) {
        a1 = -arg2;
    } else {
        a1 = arg2;
    }
    (*(func_80368E58_Obj **)((u8 *)*(s32 **)arg1 + 0x2C))->unk12 += a1;
    (*(func_80368E58_Obj **)((u8 *)*(s32 **)arg1 + 0x2C))->unk12 &= 0x1FFF;
    func_80224E00(arg0, a1, arg2);
    v->g = arg3;
    if (v->g == 0) {
        func_802256E4(&sp40, arg0, 0);
    } else {
        *(s32 *)&sp40 = sp30.w[v->g];
        if (v->f == 3) {
            ((u16 *)&sp40)[3] ^= 0x10;
        }
    }
    *(func_80368E58_Struct *)((u8 *)sp54 + 0x1C) = sp40;
    func_8013A28C(arg1, *(func_80368E58_Struct *)((u8 *)sp54 + 0x1C));
    func_80010550((void *)arg1, (s32)sp54);
    if (v->g == 0) {
        func_800058DC(arg0, func_8036265C);
        return;
    }
    v->f = 0;
    func_800058DC(arg0, func_803690F8);
}


typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;



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


typedef struct func_8036920C_Struct {
    u8 pad0[0x1C];
    u8 unk1C[4];
    u16 unk20;
    u8 unk22[2];
} func_8036920C_Struct;
extern f64 D_8038AD60;
extern void func_801DB6B8();
extern s32 func_8000E634(void *);
extern s32 func_80011590(s32);
extern void func_800112B0(s32, void *);
extern void func_803693E4();

void func_8036920C(s32 arg0, s32 arg1) {
    func_8036920C_Struct *sp24;
    func_80369094_Struct *a3;
    s32 v1;
    u16 a0;

    sp24 = (func_8036920C_Struct *)((func_80367C30_Struct *)arg0)->unk5C;
    if (arg0 == D_801BBCCC) {
        a3 = &D_801BC03C;
    } else {
        a3 = &D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        v1 = (s32)&D_801BC03C;
    } else {
        v1 = (s32)&D_801BC3D8;
    }
    func_801DB6B8(arg0, arg1, 0, a3);
    if (((func_803690F8_Struct *)a3)->unk30 << 19 >> 31 == 1) {
        a0 = ((func_80369094_Struct *)v1)->unk2D9;
    } else {
        a0 = a3->unk2D9;
    }
    if (a0 == 0x3C || a0 == 0x3B || a0 == 0x3D) {
        v1 = 0;
    } else if (a0 == 0x2B) {
        v1 = func_80011590(10) & 0xFFFF;
    } else {
        v1 = (u32)((f64)(u32)func_8000E634(sp24->unk1C) * D_8038AD60) & 0xFFFF;
    }
    if (v1 < sp24->unk20) {
        func_800112B0(arg1, sp24->unk22);
        func_800058DC(arg0, func_803693E4);
    }
}

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

