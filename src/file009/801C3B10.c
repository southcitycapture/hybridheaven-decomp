#include "common.h"


extern s16 D_801BBD7E;

void func_801C3B10(s32 arg0) {
    s32 *p;
    p = &arg0;
    D_801BBD7E = *p;
}



u16 func_801C3B20(void) {
    return D_801BBD7E;
}


void func_801C3B2C(u16 arg0) {
    (&D_801BBD7E)[1] = arg0;
}


u16 func_801C3B3C(void) {
    return *(u16 *)((u8 *)&D_801BBD7E + 2);
}


struct func_801C3B48_Struct {
    u8 pad[0xE];
    s16 unkE;
};
extern struct func_801C3B48_Struct D_801BBD86;

s32 func_801C3B48(s32 arg0) {
    s32 *p = &arg0;
    D_801BBD86.unkE = *p;
    return 1;
}

extern struct func_801C3D90_StructA D_801BBBF0;

u16 func_801C3B5C(void) {
    u16 *p;
    u16 temp_v0;

    p = (u16 *)((u8 *)&D_801BBBF0 + 0x1A4);
    temp_v0 = *p;
    *p = 0;
    return temp_v0;
}


void func_801C3B70(void) {
    D_801BBD86.unkE = 0;
}


extern s32 D_801BBD98;

void func_801C3B7C(s32 arg0) {
    D_801BBD98 = arg0;
}



s32 func_801C3B88(void) {
    return D_801BBD98;
}


extern s32 D_801BBD9C;

void func_801C3B94(s32 arg0) {
    D_801BBD9C = arg0;
}



s32 func_801C3BA0(void) {
    return D_801BBD9C;
}


struct func_801C3BAC_Struct {
    u8 pad[2];
    s16 unk2;
};

extern struct func_801C3BAC_Struct D_801BBDA0;

void func_801C3BAC(u16 arg0) {
    D_801BBDA0.unk2 = arg0;
}


extern u16 D_801BBDA2;

u16 func_801C3BBC(void) {
    return D_801BBDA2;
}


void func_801C3BC8(void) {
    u32 base;

    base = (u32) &D_801BBBF0;
    if (*(s32 *) (base + 0x1E4) == 0) {
        *(s32 *) (base + 0x1E4) = *(s32 *) (*(u32 *) (base + 0xDC) + 0x54);
    }
}


extern void func_801C4A5C(void *, s32);

void func_801C3BF0(void) {
    s32 val;

    val = *(s32 *) ((u8 *) &D_801BBBF0 + 0x1E4);
    if (val != 0) {
        *(s32 *) (*(u8 **) ((u8 *) &D_801BBBF0 + 0xDC) + 0x54) = val;
        func_801C4A5C(*(void **) ((u8 *) &D_801BBBF0 + 0xDC), 0);
        *(s32 *) ((u8 *) &D_801BBBF0 + 0x1E4) = 0;
    }
}


void func_801C3C3C(s32 arg0) {
    if (*(s32 *)((u8 *)&D_801BBBF0 + 0x1E4) != 0) {
        *(s32 *)((u8 *)*(void **)((u8 *)&D_801BBBF0 + 0xDC) + 0x54) = arg0;
    }
}


extern f32 func_8002FC20(f32);

struct func_801C3C60_Vec {
    u8 pad[0x438];
    f32 unk438;
    f32 unk43C;
    f32 unk440;
};

struct func_801C3C60_Node {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801C3C60_Mid {
    u8 pad[0x2C];
    struct func_801C3C60_Node *unk2C;
};

struct func_801C3C60_Actor {
    u8 pad[0x24];
    struct func_801C3C60_Mid *unk24;
};

s32 func_801C3C60(struct func_801C3C60_Actor *arg0, f32 arg1) {
    f32 temp_fv1;
    f32 temp_fa1;
    f32 temp_ft4;

    temp_fv1 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk438;
    temp_fa1 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk43C;
    temp_ft4 = ((struct func_801C3C60_Vec *) &D_801BBBF0)->unk440;
    if (func_8002FC20((temp_fv1 * temp_fv1) + (temp_fa1 * temp_fa1) + (temp_ft4 * temp_ft4)) <= arg1) {
        arg0->unk24->unk2C->unk4 = arg0->unk24->unk2C->unk4 + temp_fv1;
        arg0->unk24->unk2C->unk8 = arg0->unk24->unk2C->unk8 + temp_fa1;
        arg0->unk24->unk2C->unkC = arg0->unk24->unk2C->unkC + temp_ft4;
        return 1;
    }
    return 0;
}

struct func_801C4848_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};
struct func_801C4848_Obj {
    u8 pad0[0x2C];
    struct func_801C4848_Vec *vec;
};
extern struct func_801C4848_Obj *D_801BBCD0;

s32 func_801C3D20(f32 arg0, f32 arg1, f32 arg2) {
    struct func_801C4848_Vec *temp_v0;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v0 = D_801BBCD0->vec;
    temp_fv0 = temp_v0->x - arg0;
    temp_fv1 = temp_v0->y - arg1;
    if (func_8002FC20((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)) <= arg2) {
        return 1;
    }
    return 0;
}


struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};

struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};


s32 func_801C3D90(void) {
    if ((D_801BBBF0.unkE0 != 0) && (D_801BBBF0.unkDC->unk63 != 0)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/D_801E29D0.s")

/* hh-block asm/nonmatchings/file009/801C3B10/_ro_func_801C3DC8.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file009/801C3B10/func_801C3DC8.s","D_801E2B3C"],[".rodata","asm/nonmatchings/file009/801C3B10/func_801C3DC8.s","D_801E2B80"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/_ro_func_801C3DC8.s")


extern u8 D_801E2B3C[];
extern u8 D_801E2B80[];
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#ifdef D
#define N (D_801BBCD8->n)
#else
struct func_801C3DC8_Node {
    u8 pad0[0x30];
    f32 u30, u34, u38, u3C, u40, u44;
};
struct func_801C3DC8_Struct {
    u8 pad0[0x2C];
    struct func_801C3DC8_Node *n;
};
extern struct func_801C4058_Struct *D_801BBCD8;
#define N (((struct func_801C3DC8_Struct *)D_801BBCD8)->n)
#endif

s32 func_801C3DC8(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    func_8011AAF4(D_801E2B3C, 0x18C, arg0, 0, 1, 0.0f,
        N->u30 + ((arg1 - N->u30) * arg7),
        N->u34 + ((arg2 - N->u34) * arg7),
        N->u38 + ((arg3 - N->u38) * arg7), 0.0f,
        N->u3C + ((arg4 - N->u3C) * arg7),
        N->u40 + ((arg5 - N->u40) * arg7),
        N->u44 + ((arg6 - N->u44) * arg7), 0.0f, arg8, -1, -1);
    if (((s32) ((f64) (arg1 - N->u30) * 0.5) == 0) && ((s32) ((f64) (arg2 - N->u34) * 0.5) == 0) && ((s32) ((f64) (arg3 - N->u38) * 0.5) == 0) && ((s32) ((f64) (arg4 - N->u3C) * 0.5) == 0) && ((s32) ((f64) (arg5 - N->u40) * 0.5) == 0) && ((s32) ((f64) (arg6 - N->u44) * 0.5) == 0)) {
        func_8011AAF4(D_801E2B80, 0x194, arg0, 0, 1, 0.0f, arg1, arg2, arg3, 0.0f, arg4, arg5, arg6, 0.0f, arg8, -1, -1);
        return 0;
    }
    return 1;
}
#undef N

/* hh-block asm/nonmatchings/file009/801C3B10/_ro_func_801C4058.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file009/801C3B10/func_801C4058.s","D_801E2BC4"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/_ro_func_801C4058.s")


extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern u8 D_801E2BC4[];
extern s16 D_8001EF38(f32, f32);
struct func_801C4058_Struct {
    u8 pad0[0x2C];
    struct func_801C4058_Node *n;
};
struct func_801C4058_Node {
    u8 pad0[0x30];
    f32 u30, u34, u38, u3C, u40, u44;
};

void func_801C4058(s32 arg0, f32 arg1, f32 arg2, s16 arg3) {
    s16 a;
    f32 dx, dz, d;
    s32 b;
    f32 c;
    struct func_801C4058_Node *n;
    s32 pad;
    f32 s;

    n = D_801BBCD8->n;
    dx = n->u30 - n->u3C;
    dz = n->u38 - n->u44;
    a = D_8001EF38(dx, dz) + arg3;
    a &= 0x1FFF;
    d = func_8002FC20(dx * dx + dz * dz) + arg2;
    b = a * 1;
    s = func_8001EAD0(b);
    c = func_8001EB64(b);
    func_8011AAF4(D_801E2BC4, 0x1B6, arg0, 0, 1, 0.0f, s * d + D_801BBCD8->n->u3C, D_801BBCD8->n->u34 + arg1, c * d + D_801BBCD8->n->u44, 0.0f, D_801BBCD8->n->u3C, D_801BBCD8->n->u40, D_801BBCD8->n->u44, 0.0f, 35.0f, -1, -1);
}

/* hh-block asm/nonmatchings/file009/801C3B10/_ro_func_801C419C.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file009/801C3B10/func_801C419C.s","D_801E2C08"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/_ro_func_801C419C.s")


extern u8 D_801E2C08[];
struct func_801C419C_Struct {
    u8 pad0[0x2C];
    struct func_801C419C_Node *n;
};
struct func_801C419C_Node {
    u8 pad0[0x30];
    f32 u30, u34, u38, u3C, u40, u44;
};

void func_801C419C(s32 arg0, f32 arg1, f32 arg2, s16 arg3, f32 arg4) {
    s16 a;
    f32 dx, dz, d;
    s32 b;
    f32 c;
    struct func_801C4058_Node *n;
    s32 pad;
    f32 s;

    n = D_801BBCD8->n;
    dx = n->u30 - n->u3C;
    dz = n->u38 - n->u44;
    a = D_8001EF38(dx, dz) + arg3;
    a &= 0x1FFF;
    d = func_8002FC20(dx * dx + dz * dz) + arg2;
    b = a * 1;
    s = func_8001EAD0(b);
    c = func_8001EB64(b);
    func_8011AAF4(D_801E2C08, 0x1D5, arg0, 0, 1, 0.0f, s * d + D_801BBCD8->n->u3C, D_801BBCD8->n->u34 + arg1, c * d + D_801BBCD8->n->u44, 0.0f, D_801BBCD8->n->u3C, D_801BBCD8->n->u40, D_801BBCD8->n->u44, 0.0f, arg4, -1, -1);
}

#define func_801C4750 func_801C4750__func_801C42DC

typedef struct func_801C42DC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad2A4[0xF20 - 0x2A4];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    s8 unkF2C;
    s8 unkF2D;
    s8 unkF2E;
    u8 padF2F[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_801C42DC_Struct;

extern s32 D_801C4700(s32, s32, u32);
f32 func_801C4750(f32 arg0, f32 arg1, f32 arg2);

#define D (*(func_801C42DC_Struct *)&D_801BBBF0)

s32 func_801C42DC(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, s8 arg6, s8 arg7, s8 arg8, u8 arg9, u8 arg10, u8 arg11, s8 arg12, s8 arg13, s8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, f32 arg19, f32 arg20, u8 arg21, f32 arg22) {
    D.unkF20 = D_801C4700(D.unkF20, arg0, arg21);
    D.unkF21 = D_801C4700(D.unkF21, arg1, arg21);
    D.unkF22 = D_801C4700(D.unkF22, arg2, arg21);
    D.unkF23 = D_801C4700(D.unkF23, arg3, arg21);
    D.unkF24 = D_801C4700(D.unkF24, arg4, arg21);
    D.unkF25 = D_801C4700(D.unkF25, arg5, arg21);
    D.unkF26 = D_801C4700(D.unkF26, arg6, arg21);
    D.unkF27 = D_801C4700(D.unkF27, arg7, arg21);
    D.unkF28 = D_801C4700(D.unkF28, arg8, arg21);
    D.unkF29 = D_801C4700(D.unkF29, arg9, arg21);
    D.unkF2A = D_801C4700(D.unkF2A, arg10, arg21);
    D.unkF2B = D_801C4700(D.unkF2B, arg11, arg21);
    D.unkF2C = D_801C4700(D.unkF2C, arg12, arg21);
    D.unkF2D = D_801C4700(D.unkF2D, arg13, arg21);
    D.unkF2E = D_801C4700(D.unkF2E, arg14, arg21);
    D.unkF32 = D_801C4700(D.unkF32, arg15, arg21);
    D.unkF33 = D_801C4700(D.unkF33, arg16, arg21);
    D.unkF34 = D_801C4700(D.unkF34, arg17, arg21);
    D.unkF35 = D_801C4700(D.unkF35, arg18, arg21);
    D.unk29C = func_801C4750(D.unk29C, arg19, arg22);
    D.unk2A0 = func_801C4750(D.unk2A0, arg20, arg22);
    return arg0 == D.unkF20 && arg1 == D.unkF21 && arg2 == D.unkF22 && arg3 == D.unkF23
        && arg4 == D.unkF24 && arg5 == D.unkF25 && arg6 == D.unkF26 && arg7 == D.unkF27
        && arg8 == D.unkF28 && arg9 == D.unkF29 && arg10 == D.unkF2A && arg11 == D.unkF2B
        && arg12 == D.unkF2C && arg13 == D.unkF2D && arg14 == D.unkF2E && arg15 == D.unkF32
        && arg16 == D.unkF33 && arg17 == D.unkF34 && arg18 == D.unkF35
        && arg19 == D.unk29C && arg20 == D.unk2A0;
}
#undef func_801C4750


s32 func_801C4700(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == arg1) {
        return arg1;
    }
    if (arg0 < arg1) {
        arg0 = arg0 + arg2;
        if (arg0 >= arg1) {
            arg0 = arg1;
        }
        goto block_ret;
    }
    arg0 = arg0 - arg2;
    if (arg1 < arg0) {
        goto block_ret;
    }
    arg0 = arg1;
block_ret:
    return arg0;
}


f32 func_801C4750(f32 arg0, f32 arg1, f32 arg2) {
    if (arg0 == arg1) {
        return arg1;
    }
    if (arg2 < 0.0f) {
        arg2 = -arg2;
    }
    if (arg0 < arg1) {
        arg0 = arg0 + arg2;
        if (arg1 <= arg0) {
            arg0 = arg1;
        }
    } else {
        arg0 = arg0 - arg2;
        if (arg0 <= arg1) {
            arg0 = arg1;
        }
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C47E0.s")




struct func_801C4848_Arg {
    u8 pad0[0x24];
    struct func_801C4848_Obj *obj;
};

void func_8001EF38(f32, f32);

void func_801C4848(struct func_801C4848_Arg *arg0) {
    struct func_801C4848_Vec *a;
    struct func_801C4848_Vec *b;

    a = D_801BBCD0->vec;
    b = arg0->obj->vec;
    func_8001EF38(a->x - b->x, a->y - b->y);
}


typedef struct func_801C4890_StructC {
    u8 pad[0x12];
    s16 unk12;
} func_801C4890_StructC;

typedef struct func_801C4890_StructB {
    u8 pad[0x2C];
    func_801C4890_StructC *unk2C;
} func_801C4890_StructB;

typedef struct func_801C4890_StructA {
    u8 pad[0x24];
    func_801C4890_StructB *unk24;
} func_801C4890_StructA;

s32 func_801C4890(func_801C4890_StructA *arg0, s16 arg1, s16 arg2) {
    func_801C4890_StructC *temp_v1;
    s16 temp_v0;
    s32 temp_a3;
    s32 temp_a0;

    temp_v1 = arg0->unk24->unk2C;
    temp_v0 = temp_v1->unk12;
    temp_a3 = temp_v0 - arg1;
    if (temp_a3 < 0) {
        temp_a0 = -temp_a3;
    } else {
        temp_a0 = temp_a3;
    }
    if (arg2 >= temp_a0) {
        temp_v1->unk12 = arg1;
        return 1;
    }
    if ((arg1 - temp_v0) >= 0x1000) {
        temp_v1->unk12 = (s16) (temp_v0 - arg2);
    } else {
        temp_v1->unk12 = (s16) (temp_v0 + arg2);
    }
    return 0;
}


struct func_801C4908_B { u8 pad0[4]; f32 x; u8 pad1[4]; f32 z; u8 pad2[2]; s16 unk12; };
struct func_801C4908_M { u8 pad[0x2C]; struct func_801C4908_B *b; };
struct func_801C4908_A { u8 pad[0x24]; struct func_801C4908_M *m; };

s32 func_801C4908(struct func_801C4908_A *arg0, f32 arg1, f32 arg2, s16 arg3) {
    s16 v0;
    s16 a0;
    struct func_801C4908_B *b;

    b = arg0->m->b;
    v0 = D_8001EF38(arg1 - b->x, arg2 - b->z);
    b = arg0->m->b;
    a0 = v0 - b->unk12;
    if (a0 & 0x1000) {
        a0 = (a0 & 0x1FFF) - 0x2000;
    } else {
        a0 = a0 & 0x1FFF;
    }
    if ((f64)(a0 < 0 ? -a0 : a0) < (f64)arg3) {
        b->unk12 = v0;
        return 0;
    }
    if (a0 >= 0) {
        b->unk12 = (s32)((f64)b->unk12 + (f64)arg3);
        b = arg0->m->b;
        b->unk12 &= 0x1FFF;
        return 1;
    }
    b->unk12 = (s32)((f64)b->unk12 - (f64)arg3);
    b = arg0->m->b;
    b->unk12 &= 0x1FFF;
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C4A5C.s")


extern s32 func_80108480(s32, s32, s32, s32, f32, f32);

s32 func_801C5A1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 *fp;
    s32 *ap;
    fp = (f32 *) &arg2;
    ap = &arg3;
    if (func_80108480(arg0, arg1, arg2, arg3, fp[2], fp[3]) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C5A5C.s")


struct func_801C787C_StructV { f32 x, y, z; };
struct func_801C787C_StructG {
    u8 pad[0xEC4];
    s32 unkEC4;
    u8 padEC8[0xED8 - 0xEC8];
    struct func_801C787C_StructV v[2];
    u8 padEF0[0xEF6 - 0xEF0];
    u8 unkEF6;
};
struct func_801C787C_StructA {
    u8 pad[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x44 - 0x34];
    f32 unk44;
    u8 pad48[0x58 - 0x48];
    s32 unk58;
};
extern u16 func_801C5A5C(void *);
struct func_801C787C_StructP { s32 a, b; };
extern struct func_801C787C_StructP D_801E0B78;

#define G ((struct func_801C787C_StructG *)&D_801BBBF0)

void func_801C787C(struct func_801C787C_StructA *arg0) {
    struct func_801C787C_StructV sp60[2];
    f32 sp58[2];
    u8 i;
    u16 sp54;

    *(struct func_801C787C_StructP *)sp58 = D_801E0B78;
    if (arg0->unk2C & 0x100) {
        if (arg0->unk30 & 4) {
            arg0->unk30 |= 2;
        } else {
            arg0->unk30 &= ~2;
        }
        arg0->unk30 &= ~4;
        arg0->unk30 &= ~8;
        sp54 = func_801C5A5C(arg0);
        arg0->unk58 = G->unkEC4;
        if (sp54 != 0) {
            i = 0;
            do {
                sp60[i].x = G->v[i].x;
                sp60[i].y = G->v[i].y;
                sp60[i].z = G->v[i].z;
                sp58[i] = G->v[i].x * G->v[i].x + G->v[i].y * G->v[i].y + G->v[i].z * G->v[i].z;
                sp58[i] = func_8002FC20(sp58[i]);
                if ((f64)sp58[i] != 0.0) {
                    sp60[i].y = sp60[i].y / sp58[i];
                } else {
                    sp60[i].y = 5.0f;
                }
                i++;
            } while (i < 2);
            if ((sp54 & 1) && G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                arg0->unk30 |= 4;
                arg0->unk44 = 0.0f;
            }
            if ((sp54 & 0x20) && G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                arg0->unk44 = 0.0f;
            }
            if ((sp54 & 0xFDE) && (f64)sp60[1].y != 5.0) {
                if ((f64)(sp60[1].y < 0.0f ? -sp60[1].y : sp60[1].y) < 0.01) {
                    arg0->unk30 |= 8;
                    return;
                }
                if (G->unkEF6 != 0x16 && G->unkEF6 != 0x1A) {
                    arg0->unk44 = 0.0f;
                    arg0->unk30 |= 4;
                }
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801C3B10/func_801C7B18.s")


s32 func_8010843C(f32, f32, s32, s32, f32, f32);

void func_801C7FEC(f32 arg0, f32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5) {
    s32 *p2;

    p2 = &arg2;
    if (func_8010843C(arg0, arg1, arg2, *(s32 *)arg3, *(f32 *)arg4, *(f32 *)arg5) == 1) {
        *(f32 *)arg3 = *(f32 *)((u8 *)&D_801BBBF0 + 0x374);
        *(f32 *)arg4 = *(f32 *)((u8 *)&D_801BBBF0 + 0x378);
        *(f32 *)arg5 = *(f32 *)((u8 *)&D_801BBBF0 + 0x37C);
    }
}

