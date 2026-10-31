#include "common.h"

/* hh-block asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012A0F0.s {"functions":["func_8012A0F0"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012A0F0.s")

/* hh-block asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012A564.s {"functions":["func_8012A564"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012A564.s")

#define D_801BBCD0 D_801BBCD0__func_8012A630
#define func_8012A72C_Obj func_8012A72C_Obj__func_8012A630
#define func_8012A72C_Vec func_8012A72C_Vec__func_8012A630
struct func_8012A72C_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};
struct func_8012A72C_Obj {
    u8 pad0[0x2C];
    struct func_8012A72C_Vec *vec;
};

typedef struct func_8012A630_StructVec {
    u8 pad[4];
    f32 x, y, z;
} func_8012A630_StructVec;

typedef struct func_8012A630_StructObj {
    u8 pad[0x2C];
    func_8012A630_StructVec *a, *b;
} func_8012A630_StructObj;

typedef struct func_8012A630_StructArg {
    u8 pad[0x24];
    func_8012A630_StructObj *obj;
} func_8012A630_StructArg;

extern struct func_8012A72C_Obj *D_801BBCD0;

s32 func_8012A630(arg0, arg1)
    func_8012A630_StructArg *arg0;
    s32 arg1;
{
    f32 d;
    func_8012A630_StructObj *obj;
    func_8012A630_StructVec *a, *b;

    obj = arg0->obj;
    a = obj->a;
    if (a != NULL) {
        b = ((func_8012A630_StructObj *)D_801BBCD0)->a;
        d = (a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y) + (a->z - b->z) * (a->z - b->z);
        if (d < *(f32 *)&arg1 * *(f32 *)&arg1) {
            return 1;
        }
        return 0;
    }
    a = obj->b;
    b = ((func_8012A630_StructObj *)D_801BBCD0)->a;
    d = (a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y) + (a->z - b->z) * (a->z - b->z);
    if (d < *(f32 *)&arg1 * *(f32 *)&arg1) {
        return 1;
    }
    return 0;
}
#undef D_801BBCD0
#undef func_8012A72C_Obj
#undef func_8012A72C_Vec


struct func_8012A72C_Vec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
};

struct func_8012A72C_Obj {
    u8 pad0[0x2C];
    struct func_8012A72C_Vec *vec;
};

struct func_8012A72C_Arg {
    u8 pad0[0x24];
    struct func_8012A72C_Obj *obj;
};

extern struct func_8012A72C_Obj *D_801BBCD0;
void func_8001EF38(f32, f32);

void func_8012A72C(struct func_8012A72C_Arg *arg0) {
    struct func_8012A72C_Vec *a;
    struct func_8012A72C_Vec *b;

    a = D_801BBCD0->vec;
    b = arg0->obj->vec;
    func_8001EF38(a->x - b->x, a->y - b->y);
}


typedef struct func_8012A774_Vec {
    u8 pad0[0x12];
    s16 unk12;
} func_8012A774_Vec;

typedef struct func_8012A774_Obj {
    u8 pad0[0x2C];
    func_8012A774_Vec *unk2C;
} func_8012A774_Obj;

typedef struct func_8012A774_Arg {
    u8 pad0[0x24];
    func_8012A774_Obj *unk24;
} func_8012A774_Arg;

s32 func_8012A774(func_8012A774_Arg *arg0, s16 arg1, s16 arg2) {
    func_8012A774_Vec *temp_v1;
    s16 temp_v0;
    s32 temp_a3;
    s32 var_a0;

    temp_v1 = arg0->unk24->unk2C;
    temp_v0 = temp_v1->unk12;
    temp_a3 = temp_v0 - arg1;
    if (temp_a3 < 0) {
        var_a0 = -temp_a3;
    } else {
        var_a0 = temp_a3;
    }
    if (arg2 >= (var_a0 & 0x1FFF)) {
        temp_v1->unk12 = arg1;
        return 1;
    }
    if (((arg1 - temp_v0) & 0x1FFF) >= 0x1000) {
        temp_v1->unk12 = (s16) (temp_v0 - arg2);
    } else {
        temp_v1->unk12 = (s16) (temp_v0 + arg2);
    }
    return 0;
}

/* hh-block asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012A7F4.s {"functions":["func_8012A7F4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012A7F4.s")


extern void func_8012A7F4(s32, s32, s32, s16);

void func_8012A94C(s32 arg0, s16 arg1) {
    struct func_8012A72C_Vec *temp_v0;

    temp_v0 = D_801BBCD0->vec;
    func_8012A7F4(arg0, *(s32 *)&temp_v0->x, *(s32 *)&temp_v0->y, arg1);
}



struct func_8012A988_B { u8 pad0[4]; f32 x; u8 pad1[4]; f32 z; u8 pad2[2]; s16 unk12; };
struct func_8012A988_M { u8 pad[0x2C]; struct func_8012A988_B *b; };
extern s32 B_8001EF38(f32, f32);
struct func_8012A988_A { u8 pad[0x24]; struct func_8012A988_M *m; };

s32 func_8012A988(struct func_8012A988_A *arg0, f32 arg1, f32 arg2, s16 arg3, s16 arg4) {
    s16 v0;
    s16 a0;
    struct func_8012A988_B *b;

    b = arg0->m->b;
    v0 = (B_8001EF38(arg1 - b->x, arg2 - b->z) + arg4) & 0x1FFF;
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

#define func_8002FC20 func_8002FC20__func_8012AAE8
extern f32 func_8002FC20(f32, f32);


typedef struct func_8012AAE8_Struct {
    u8 pad0[0x24];
    struct func_8012AAE8_Obj *obj;
    u8 pad28[0x18];
    f32 v40;
    f32 v44;
    f32 v48;
} func_8012AAE8_Struct;
typedef struct func_8012AAE8_Obj {
    u8 pad0[0x2C];
    f32 *a;
    f32 *b;
} func_8012AAE8_Obj;

s32 func_8012AAE8(func_8012AAE8_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 *x, *y, *z;
    f32 d, curx, cury, curz;

    if (arg0->obj->a != NULL) {
        x = arg0->obj->a + 1; y = arg0->obj->a + 2; z = arg0->obj->a + 3;
    } else {
        x = arg0->obj->b + 1; y = arg0->obj->b + 2; z = arg0->obj->b + 3;
    }
    d = func_8002FC20((arg1 - *x) * (arg1 - *x) + (arg2 - *y) * (arg2 - *y) + (arg3 - *z) * (arg3 - *z), arg2 - *y);
    if (d * arg4 == 0.0f) {
        arg0->v40 = 0.0f;
        arg0->v44 = 0.0f;
        arg0->v48 = 0.0f;
        return 0;
    }
    arg0->v40 = ((arg1 - *x) / d) * arg4;
    arg0->v44 = ((arg2 - *y) / d) * arg4;
    arg0->v48 = ((arg3 - *z) / d) * arg4;
    curx = *x;
    if ((arg1 - ((f64)arg0->v40 + curx)) * (f64)(arg1 - curx) < 0.0 ||
        (cury = *y, (arg2 - ((f64)arg0->v44 + cury)) * (f64)(arg2 - cury) < 0.0) ||
        (curz = *z, (arg3 - ((f64)arg0->v48 + curz)) * (f64)(arg3 - curz) < 0.0)) {
        *x = arg1;
        *y = arg2;
        *z = arg3;
        arg0->v40 = 0.0f;
        arg0->v44 = 0.0f;
        arg0->v48 = 0.0f;
        return 0;
    }
    return 1;
}
#undef func_8002FC20

extern f32 func_8002FC20(f32, f32);
typedef struct func_8012AE54_StructVec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
} func_8012AE54_StructVec;
typedef struct func_8012AE54_StructObj {
    u8 pad0[0x2C];
    func_8012AE54_StructVec *unk2C;
    func_8012AE54_StructVec *unk30;
} func_8012AE54_StructObj;

typedef struct func_8012ACDC_StructArg {
    u8 pad0[0x24];
    func_8012AE54_StructObj *unk24;
    u8 pad1[0x18];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
} func_8012ACDC_StructArg;

s32 func_8012ACDC(func_8012ACDC_StructArg *arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 *px;
    f32 *py;
    f32 d;
    f32 t;
    f32 t2;

    if (arg0->unk24->unk2C != NULL) {
        px = &arg0->unk24->unk2C->x;
        py = &arg0->unk24->unk2C->y;
    } else {
        px = &arg0->unk24->unk30->x;
        py = &arg0->unk24->unk30->y;
    }
    d = func_8002FC20((arg1 - *px) * (arg1 - *px) + (arg2 - *py) * (arg2 - *py), arg2);
    if (d * arg3 == 0.0f) {
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        return 0;
    }
    arg0->unk40 = ((arg1 - *px) / d) * arg3;
    arg0->unk48 = ((arg2 - *py) / d) * arg3;
    t2 = *px;
    if ((((f64)arg1 - ((f64)arg0->unk40 + (f64)t2)) * (f64)(arg1 - t2)) < 0.0
        || (t = *py, (((f64)arg2 - ((f64)arg0->unk48 + (f64)t)) * (f64)(arg2 - t)) < 0.0)) {
        *px = arg1;
        *py = arg2;
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        return 0;
    }
    return 1;
}





typedef struct func_8012AE54_StructArg {
    u8 pad0[0x24];
    func_8012AE54_StructObj *unk24;
} func_8012AE54_StructArg;

s32 func_8012AE54(func_8012AE54_StructArg *arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8012AE54_StructObj *temp_v1;
    f32 *var_a0;
    f32 *var_a1;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v1 = arg0->unk24;
    if (temp_v1->unk2C != NULL) {
        var_a0 = &temp_v1->unk2C->x;
        var_a1 = &temp_v1->unk2C->y;
    } else {
        var_a0 = &temp_v1->unk30->x;
        var_a1 = &temp_v1->unk30->y;
    }
    temp_fv0 = arg2 - *var_a1;
    temp_fv1 = arg1 - *var_a0;
    temp_fv0 = func_8002FC20((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1), arg2);
    if (arg3 < temp_fv0) {
        return 1;
    }
    return 0;
}

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
typedef struct func_8012AEE0_Struct { u8 pad0[0x12]; s16 unk12; } func_8012AEE0_Struct;
typedef struct func_8012AEE0_Obj { u8 pad0[0x2C]; func_8012AEE0_Struct *unk2C; func_8012AEE0_Struct *unk30; } func_8012AEE0_Obj;
typedef struct func_8012AEE0_Arg { u8 pad0[0x24]; func_8012AEE0_Obj *unk24; u8 pad1[0x18]; f32 unk40; u8 pad2[4]; f32 unk48; } func_8012AEE0_Arg;
void func_8012AEE0(func_8012AEE0_Arg *arg0, f32 arg1) {
    f32 v;
    if (arg0->unk24->unk2C != NULL) {
        v = arg0->unk24->unk2C->unk12;
    } else {
        v = arg0->unk24->unk30->unk12;
    }
    arg0->unk40 = (f64)(func_8001EAD0((s16)v) * arg1);
    arg0->unk48 = (f64)(func_8001EB64((s16)v) * arg1);
}

/* hh-block asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012AF88.s {"functions":["func_8012AF88"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012AF88.s")

/* hh-block asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012B1E4.s {"functions":["func_8012B1E4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012B1E4.s")


typedef struct func_8012B7C0_Vec {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
} func_8012B7C0_Vec;

typedef struct func_8012B7C0_Obj {
    u8 pad0[0x2C];
    func_8012B7C0_Vec *vecA;
    func_8012B7C0_Vec *vecB;
} func_8012B7C0_Obj;

typedef struct func_8012B7C0_Arg {
    u8 pad0[0x24];
    func_8012B7C0_Obj *obj;
    u8 pad1[0x4];
    u32 flags;
    u8 pad2[0x48];
    f32 outX;
    f32 outY;
    f32 outZ;
} func_8012B7C0_Arg;

void func_8012B7C0(func_8012B7C0_Arg *arg0) {
    func_8012B7C0_Obj *temp_v0;
    func_8012B7C0_Vec *var_v1;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fa0;

    if (arg0->flags & 0x400) {
        temp_v0 = arg0->obj;
        if (temp_v0 != NULL) {
            var_v1 = temp_v0->vecA;
            if (var_v1 != NULL) {
                var_fv0 = var_v1->x;
                var_fv1 = var_v1->y;
                var_fa0 = var_v1->z;
            } else {
                var_v1 = temp_v0->vecB;
                var_fv0 = var_v1->x;
                var_fv1 = var_v1->y;
                var_fa0 = var_v1->z;
            }
            arg0->outX = var_fv0;
            arg0->outY = var_fv1;
            arg0->outZ = var_fa0;
        }
    }
}


extern s32 func_8010854C(s32, s32, s32, s32, f32, f32);

s32 func_8012B81C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 *fp;
    s32 *ap;
    fp = (f32 *) &arg2;
    ap = &arg3;
    if (func_8010854C(arg0, arg1, arg2, arg3, fp[2], fp[3]) != 0) {
        return 1;
    }
    return 0;
}

/* hh-block asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012B85C.s {"functions":["func_8012B85C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file008/8012A0F0/_mrg_keep_text_func_8012B85C.s")

extern u8 D_801BBBF0[];

typedef struct func_8012BFA0_Struct {
    u8 pad0[0x24];
    func_8012A774_Obj *unk24;
    u8 pad28[4];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x10];
    f32 unk44;
    u8 pad48[0x10];
    s32 unk58;
} func_8012BFA0_Struct;

extern s32 func_8012B85C();
extern s32 D_8001EF38(f32, f32, void *);

void func_8012BFA0(func_8012BFA0_Struct *arg0) {
    s32 r;
    u32 v;
    s32 y;
    u16 a;

    if (arg0->unk2C & 0x100) {
        if (arg0->unk30 & 4) {
            arg0->unk30 |= 2;
        } else {
            arg0->unk30 &= ~2;
        }
        arg0->unk30 &= ~4;
        arg0->unk30 &= ~0xD8;
        r = func_8012B85C();
        arg0->unk58 = *(s32 *)(D_801BBBF0 + 0xD2C);
        v = r * 1;
        if (r != 0) {
            if (v & 0x21F) {
                arg0->unk30 |= 4;
                arg0->unk44 = 0.0f;
            }
            if (v & 0x1E0) {
                if (*(s32 *)(D_801BBBF0 + 0xD3C) != 0x21) {
                    arg0->unk30 |= 8;
                } else {
                    arg0->unk30 |= 0x80;
                }
            }
            if (v & 0x20) {
                y = ((u16)D_8001EF38((f32)(u32)-*(s32 *)(D_801BBBF0 + 0xD38), (f32)*(u32 *)(D_801BBBF0 + 0xD30), D_801BBBF0) + 0x1800);
                a = (arg0->unk24->unk2C->unk12 - (s16)y - 0x1000) & 0x1FFF;
                if (a < 0x400 || (a >= 0x1C01 && a < 0x1FFF)) {
                    if (*(s32 *)(D_801BBBF0 + 0xD3C) != 0x21) {
                        arg0->unk30 |= 0x10;
                    } else {
                        arg0->unk30 |= 0x40;
                    }
                }
            }
        }
    }
}


s32 func_8010843C(f32, f32, s32, s32, f32, f32);

void func_8012C148(f32 arg0, f32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5) {
    s32 *p2;
    f32 *p4;
    f32 *p5;
    f32 *p3;

    p2 = &arg2;
    p4 = arg4;
    p5 = arg5;
    p3 = arg3;
    if (func_8010843C(arg0, arg1, *p2, *(s32 *)p3, *p4, *p5) == 1) {
        *p3 = *(f32 *)(D_801BBBF0 + 0x374);
        *p4 = *(f32 *)(D_801BBBF0 + 0x378);
        *p5 = *(f32 *)(D_801BBBF0 + 0x37C);
    }
}


typedef struct func_8012C1BC_Struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_8012C1BC_Struct;

typedef struct func_8012C1BC_Mid {
    u8 pad0[0x2C];
    func_8012C1BC_Struct *unk2C;
} func_8012C1BC_Mid;

typedef struct func_8012C1BC_Outer {
    u8 pad0[0x24];
    func_8012C1BC_Mid *unk24;
} func_8012C1BC_Outer;


void func_8012C1BC(func_8012C1BC_Outer *arg0) {
    func_8012C1BC_Struct *temp_v0;

    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = temp_v0->unk8 - 20.0f;
    temp_v0 = arg0->unk24->unk2C;
    func_8012C148(temp_v0->unk4, temp_v0->unk8 + 40.0f, temp_v0->unkC, &temp_v0->unk4, &temp_v0->unk8, &temp_v0->unkC);
}


typedef struct func_8012C228_StructData {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8012C228_StructData;

typedef struct func_8012C228_StructSub {
    u8 pad0[0x30];
    func_8012C228_StructData *unk30;
} func_8012C228_StructSub;

typedef struct func_8012C228_StructArg {
    u8 pad0[0x24];
    func_8012C228_StructSub *unk24;
    u8 pad1[0x4];
    s32 unk2C;
    u8 pad2[0x44];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_8012C228_StructArg;

typedef struct func_8012C228_StructEntry {
    u16 *unk0;
    s32 *unk4;
} func_8012C228_StructEntry;

extern func_8012C228_StructEntry *D_80171CEC[];
s32 func_8000522C(u16, s32, s32);

void func_8012C228(func_8012C228_StructArg *arg0, s32 arg1, s32 arg2) {
    func_8012C228_StructEntry *temp_v0;

    arg0->unk2C |= 0x800;
    temp_v0 = D_80171CEC[arg1];
    arg0->unk74 = func_8000522C(*temp_v0->unk0, temp_v0->unk4[arg2], arg2);
    arg0->unk78 = arg0->unk24->unk30->unk4;
    arg0->unk7C = arg0->unk24->unk30->unk8;
    arg0->unk80 = arg0->unk24->unk30->unkC;
    arg0->unk84 = arg0->unk24->unk30->unk10;
    arg0->unk86 = arg0->unk24->unk30->unk12;
    arg0->unk88 = arg0->unk24->unk30->unk14;
}


typedef struct func_8012C2DC_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    void *unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8012C2DC_StructInner;

typedef struct func_8012C2DC_StructOuter {
    u8 pad0[0x30];
    func_8012C2DC_StructInner *unk30;
} func_8012C2DC_StructOuter;

extern void *D_8008DA88[];
extern u8 D_8017AF38[];

void func_8012C2DC(s32 arg0) {
    func_8012C2DC_StructOuter **temp_v0;

    temp_v0 = (func_8012C2DC_StructOuter **) &D_8008DA88[arg0];
    (*temp_v0)->unk30->unk24 = (*temp_v0)->unk30->unk24 | 0x400;
    (*temp_v0)->unk30->unk30 = D_8017AF38;
    (*temp_v0)->unk30->unk4C = D_801BBBF0[0xF32];
    (*temp_v0)->unk30->unk4D = D_801BBBF0[0xF33];
    (*temp_v0)->unk30->unk4E = D_801BBBF0[0xF34];
    (*temp_v0)->unk30->unk4F = D_801BBBF0[0xF35];
}


void func_8012C360(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_8012C36C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_80005700(s32 arg0, s32 arg1);

void func_8012C378(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8012A0F0[] = {
    0xB6, 0xF5, 0xA4, 0xAD, 0x44, 0x4F, 0x42, 0x4A, 0xA4, 0xAC, 0xA4, 0xA2, 0xA4, 0xEA, 0xA4, 0xDE,
    0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0x65, 0x78, 0x70, 0x6C, 0x6F, 0x64, 0x65, 0x20,
    0x3A, 0x20, 0xB6, 0xF5, 0xA4, 0xAD, 0xA3, 0xC7, 0xA3, 0xCF, 0xA3, 0xC2, 0xA3, 0xCA, 0xA4, 0xAC,
    0x25, 0x64, 0xA4, 0xE8, 0xA4, 0xEA, 0xBE, 0xAF, 0xA4, 0xCA, 0xA4, 0xA4, 0xA4, 0xCE, 0xA4, 0xC7,
    0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00,
    0xCE, 0xA5, 0xB0, 0xCA, 0xC6, 0xE2, 0xA4, 0xCB, 0xA4, 0xCF, 0xA4, 0xA4, 0xA4, 0xC3, 0xA4, 0xBF,
    0xA4, 0xE9, 0x20, 0x25, 0x66, 0x20, 0x25, 0x66, 0x20, 0x25, 0x66, 0x20, 0x25, 0x66, 0x0A, 0x00,
    0xC0, 0xB5, 0xCC, 0xCC, 0xA4, 0xCB, 0xCD, 0xE8, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xEB, 0xA4, 0xAB,
    0xA4, 0xCE, 0xA5, 0xC6, 0xA5, 0xB9, 0xA5, 0xC8, 0x25, 0x78, 0x0A, 0x00, 0xC0, 0xB5, 0xCC, 0xCC,
    0xA4, 0xF2, 0xB8, 0xFE, 0xA4, 0xA4, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xEB, 0xA4, 0xAB, 0xA5, 0xC6,
    0xA5, 0xB9, 0xA5, 0xC8, 0x25, 0x78, 0x0A, 0x00, 0x80, 0x12, 0xA1, 0x2C, 0x80, 0x12, 0xA1, 0xB0,
    0x80, 0x12, 0xA2, 0x34, 0x80, 0x12, 0xA2, 0xB8, 0x80, 0x12, 0xA3, 0x3C, 0x80, 0x12, 0xA3, 0xC0,
    0x80, 0x12, 0xA4, 0x44, 0x80, 0x12, 0xA4, 0xC8, 0x80, 0x12, 0xB3, 0x7C, 0x80, 0x12, 0xB3, 0xA0,
    0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB3, 0xE8, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC,
    0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB4, 0x30, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC,
    0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC,
    0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB4, 0x74, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC,
    0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC,
    0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC,
    0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB6, 0xEC,
    0x80, 0x12, 0xB6, 0xEC, 0x80, 0x12, 0xB4, 0xBC, 0x80, 0x12, 0xBA, 0x34, 0x80, 0x12, 0xBA, 0x34,
    0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBA, 0x34, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18,
    0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBA, 0x34, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18,
    0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18,
    0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBA, 0x34, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18,
    0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18,
    0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18,
    0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBF, 0x18,
    0x80, 0x12, 0xBF, 0x18, 0x80, 0x12, 0xBB, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
