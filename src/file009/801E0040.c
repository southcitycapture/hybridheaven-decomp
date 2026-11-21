#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801E0040/D_801E3FB0.s")


extern void func_8001F74C();
extern void func_8001F75C();
extern void func_80005700();
extern u16 D_801BCAE0;

typedef struct func_801E0040_StructB {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[8];
    f32 f18;
    f32 f1C;
    f32 f20;
    u8 pad24[0x27];
    u8 b4B;
} func_801E0040_StructB;

typedef struct func_801E0040_StructA {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0xC];
    f32 f40;
    f32 f44;
    f32 f48;
    u8 pad4C[0x46];
    s16 s92;
    f32 f94;
} func_801E0040_StructA;

typedef struct func_801E0040_StructC {
    u8 pad0[0x30];
    func_801E0040_StructB *p;
} func_801E0040_StructC;

void func_801E0040(func_801E0040_StructA *arg0, func_801E0040_StructC **arg1) {
    s32 v;
    f64 k;
    if (D_801BCAE0 & 0x10) {
        func_8001F74C();
        return;
    }
    func_8001F75C();
    k = 0.01;
    (*arg1)->p->f4 = (*arg1)->p->f4 + arg0->f40;
    (*arg1)->p->f8 = (*arg1)->p->f8 + arg0->f44;
    (*arg1)->p->fC = (*arg1)->p->fC + arg0->f48;
    (*arg1)->p->f18 = (f64)(*arg1)->p->f18 + k;
    (*arg1)->p->f1C = (f64)(*arg1)->p->f1C + k;
    (*arg1)->p->f20 = (f64)(*arg1)->p->f20 + k;
    arg0->f44 = arg0->f44 + arg0->f94;
    v = (*arg1)->p->b4B;
    v += arg0->s92;
    if (v < 0) v = 0;
    if (v >= 0x100) v = 0xFF;
    (*arg1)->p->b4B = v;
    if ((arg0->flags & 0x20) || v == 0) {
        func_80005700(arg0, arg1);
    }
}


typedef struct {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[0x3B];
    u8 b;
} func_801E0198_Sub;

typedef struct {
    u8 pad0[0x30];
    func_801E0198_Sub *sub;
} func_801E0198_Outer;

typedef struct {
    u8 pad0[0x30];
    s32 flags;
    u8 pad34[0xC];
    f32 f40;
    f32 f44;
    f32 f48;
    u8 pad4C[0x46];
    s16 s92;
    f32 f94;
} func_801E0198_Obj;


void func_801E0198(func_801E0198_Obj *arg0, func_801E0198_Outer **arg1) {
    s32 var_v1;

    if (D_801BCAE0 & 0x10) {
        func_8001F74C();
        return;
    }
    func_8001F75C();
    (*arg1)->sub->x = (*arg1)->sub->x + arg0->f40;
    (*arg1)->sub->y = (*arg1)->sub->y + arg0->f44;
    (*arg1)->sub->z = (*arg1)->sub->z + arg0->f48;
    arg0->f44 = arg0->f44 + arg0->f94;
    var_v1 = (*arg1)->sub->b;
    var_v1 += arg0->s92;
    if (var_v1 < 0) {
        var_v1 = 0;
    }
    if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    (*arg1)->sub->b = (u8) var_v1;
    if ((arg0->flags & 0x20) || (var_v1 == 0)) {
        func_80005700(arg0, arg1);
    }
}


extern u8 D_801E20F8;
extern u8 D_801E20FC;
extern u8 D_801E2100;
extern u8 D_801E2104;
extern u8 D_801E2108;
extern u8 D_801E210C;
extern u8 D_801E2110;
extern u8 D_801E2114;

void func_801E0294(void) {
    D_801E20F8 = 0xFF;
    D_801E20FC = 0xFF;
    D_801E2100 = 0xFF;
    D_801E2104 = 0xFF;
    D_801E2108 = 0xFF;
    D_801E210C = 0xFF;
    D_801E2110 = 0xFF;
    D_801E2114 = 0;
}

#define D_80164F40 D_80164F40__func_801E02DC
#define D_801BBBF0 D_801BBBF0__func_801E02DC
#define D_801BBC2C D_801BBC2C__func_801E02DC
#define D_801E2070 D_801E2070__func_801E02DC
#define D_801E2084 D_801E2084__func_801E02DC
#define D_801E2118 D_801E2118__func_801E02DC
#define func_80005E44 func_80005E44__func_801E02DC
#define func_80006214 func_80006214__func_801E02DC
#define func_80017064 func_80017064__func_801E02DC
#define func_8012C4D0 func_8012C4D0__func_801E02DC
#define func_8012C89C func_8012C89C__func_801E02DC
#define func_8012CF8C func_8012CF8C__func_801E02DC
#define func_8012D814 func_8012D814__func_801E02DC
#define func_801E0648_E func_801E0648_E__func_801E02DC
#define func_801E0648_S4 func_801E0648_S4__func_801E02DC
#define func_801E0648_S5 func_801E0648_S5__func_801E02DC
typedef struct { s32 a[4]; } func_801E0648_S4;
extern func_801E0648_S4 D_80164F40;
extern s32 D_801BBC2C;
typedef struct { s32 a[5]; } func_801E0648_S5;
extern func_801E0648_S5 D_801E2070;
typedef struct { u16 u0, u2, u4, u6, u8; u8 pad[6]; s32 u10, u14, u18; } func_801E0648_E;
extern func_801E0648_E D_801E2118[];
extern void func_80005E44(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_80017064(u16);
extern void *func_8012C4D0(s32, func_801E0648_S5, s32);
extern void func_8012C89C(void *, s32, u16, u16);
extern void func_8012D814();


typedef struct { u16 u0,u2,u4,u6,u8,uA,uC; u8 pad[2]; s32 u10,u14,u18; } func_801E02DC_StructEntry;
typedef struct {
    u8 pad0[4]; f32 f4,f8,fC; s16 s10,s12,s14; u8 pad16[2];
    f32 f18,f1C,f20; s32 i24; u8 pad28[8]; s32 i30; u8 pad34[0x14];
    u8 b48,b49,b4A,b4B,b4C,b4D,b4E;
} func_801E02DC_StructInner;
typedef struct { u8 pad0[0x30]; func_801E02DC_StructInner *inner; } func_801E02DC_StructMid;
typedef struct { u8 pad0[0x24]; func_801E02DC_StructMid *mid; u8 pad28[0x14]; s16 s3C; u8 pad3E[2]; f32 f40,f44,f48; u8 pad4C[0x44]; u8 b90,b91; s16 s92; f32 f94; } func_801E02DC_StructObj;
typedef struct { u8 pad[0xF32]; u8 r,g,b; } func_801E02DC_StructColors;
extern func_801E02DC_StructColors D_801BBBF0;
extern func_801E0648_S5 D_801E2084;
extern void func_8012CF8C(void *, void *, u16, u16);

s32 func_801E02DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 arg7, u8 arg8, u8 arg9, func_801E02DC_StructEntry *entry, s32 arg11, u8 arg12, u8 arg13, s8 arg14, f32 arg15, u8 arg16, u8 arg17) {
    func_801E02DC_StructObj *obj;
    func_801E0648_S4 sp3C;
    func_801E0648_S5 *var_v0;
    entry = (func_801E02DC_StructEntry *)&D_801E2118[arg16];
    if (func_80017064(entry->u0) == -1) return 0;
    if (arg16 != 0) var_v0 = &D_801E2084;
    else var_v0 = &D_801E2070;
    obj = func_8012C4D0(D_801BBC2C, *var_v0, 4);
    if (obj != NULL) {
        obj->f40 = arg3;
        obj->f44 = arg4;
        obj->f48 = arg5;
        obj->f94 = arg6;
        D_801E2114 = arg14;
        obj->s92 = (s8)D_801E2114;
        obj->b91 = arg17;
        obj->b90 = arg16;
        obj->s3C = 0;
        sp3C = D_80164F40;
        sp3C.a[1] = D_801E2118[arg16].u10;
        func_80005E44(obj, &sp3C);
        func_80006214(obj);
        obj->mid->inner->f4 = arg0;
        obj->mid->inner->f8 = arg1;
        obj->mid->inner->fC = arg2;
        obj->mid->inner->s10 = 0x1800;
        obj->mid->inner->s12 = 0;
        obj->mid->inner->s14 = 0;
        obj->mid->inner->f18 = arg15;
        obj->mid->inner->f1C = arg15;
        obj->mid->inner->f20 = arg15;
        obj->mid->inner->b48 = D_801E20F8 = arg7;
        obj->mid->inner->b49 = D_801E20FC = arg8;
        obj->mid->inner->b4A = D_801E2100 = arg9;
        obj->mid->inner->b4B = *(u8 *)((u32)&D_801E2110 ^ 0U) = arg13;
        obj->mid->inner->b4C = *(u8 *)((u32)&D_801E2104 ^ 0U) = D_801BBBF0.r;
        obj->mid->inner->b4D = *(u8 *)((u32)&D_801E2108 ^ 0U) = D_801BBBF0.g;
        obj->mid->inner->b4E = *(u8 *)((u32)&D_801E210C ^ 0U) = D_801BBBF0.b;
        func_8012C89C(obj, 0, entry->u2, entry->u4);
        arg11 = entry->u6 & 0xFFFF;
        if (arg11 != 0) {
            if (arg17 & 1) func_8012D814(obj, (arg11 ^ 0U), entry->u8, 0x3F800000, 1);
            else func_8012D814(obj, (arg11 ^ 0U), entry->u8, 0x3F800000, 0);
        }
        if (entry->uA != 0) func_8012CF8C(obj, (u8 *)obj->mid->inner + 0x40, entry->uA, entry->uC);
        obj->mid->inner->i24 = entry->u14;
        obj->mid->inner->i30 = entry->u18 | 0x40000000;
        return 1;
    }
    return 0;
}
#undef D_80164F40
#undef D_801BBBF0
#undef D_801BBC2C
#undef D_801E2070
#undef D_801E2084
#undef D_801E2118
#undef func_80005E44
#undef func_80006214
#undef func_80017064
#undef func_8012C4D0
#undef func_8012C89C
#undef func_8012CF8C
#undef func_8012D814
#undef func_801E0648_E
#undef func_801E0648_S4
#undef func_801E0648_S5

typedef struct { s32 a[5]; } func_801E0648_S5;
typedef struct { s32 a[4]; } func_801E0648_S4;
typedef struct { s32 a[3]; } func_801E0648_S3;
typedef struct { u8 pad[4]; f32 f4, f8, fC; s16 s10, s12, s14; u8 p16[2]; f32 f18, f1C, f20; s32 i24; u8 p28[0x20]; u8 b48,b49,b4A,b4B,b4C,b4D,b4E,b4F; } func_801E0648_Inner;
typedef struct { u8 p0[0x24]; func_801E0648_Inner *in; } func_801E0648_Mid;
typedef struct { u8 pad[0x24]; func_801E0648_Mid *m; } func_801E0648_Obj0;
typedef struct { u8 pad[0x24]; func_801E0648_Mid *m; } func_801E0648_ObjX;
typedef struct { u8 pad[0x24]; struct func_801E0648_MidB *m; u8 p28[4]; u32 f2C; u8 p30[0xC]; u16 h3C; u8 p3E[2]; f32 f40; f32 f44; f32 f48; u8 p4C[0x44]; u8 b90; u8 b91; s16 s92; f32 f94; } func_801E0648_Obj;
struct func_801E0648_MidB { u8 p0[0x30]; func_801E0648_Inner *in; };
typedef struct { u16 u0, u2, u4, u6, u8; u8 pad[6]; s32 u10, u14, u18; } func_801E0648_E;
extern void func_80005E44(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_80017064(u16);
extern void *func_8012C4D0(s32, func_801E0648_S5, s32);
extern void func_8012C89C(void *, s32, u16, u16);
extern void func_8012D814();
extern func_801E0648_S4 D_80164F40;
extern s32 D_801BBC2C;
extern func_801E0648_S5 D_801E2070;
extern func_801E0648_E D_801E2118[];

s32 func_801E0648(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u8 arg8, u8 arg9) {
    func_801E0648_E *e;

    e = &D_801E2118[arg8];
    if (func_80017064(e->u0) == -1) {
        return 0;
    }
    {
    func_801E0648_S4 sp3C;
    func_801E0648_Obj *o;
    s32 t;

    o = func_8012C4D0(D_801BBC2C, D_801E2070, 4);
    if (o != NULL) {
        o->f40 = arg3;
        o->f44 = arg4;
        o->f48 = arg5;
        o->f94 = arg6 * 25.0f;
        o->s92 = (s8)D_801E2114;
        o->b91 = arg9;
        o->b90 = arg8;
        o->h3C = 0;
        o->f2C |= 0x60;
        sp3C = D_80164F40;
        sp3C.a[1] = D_801E2118[arg8].u10;
        func_80005E44(o, &sp3C);
        func_80006214(o);
        o->m->in->f4 = arg0;
        o->m->in->f8 = arg1;
        o->m->in->fC = arg2;
        o->m->in->s10 = 0x1800;
        o->m->in->s12 = 0;
        o->m->in->s14 = 0;
        o->m->in->f18 = arg7;
        o->m->in->f1C = arg7;
        o->m->in->f20 = arg7;
        o->m->in->b48 = D_801E20F8;
        o->m->in->b49 = D_801E20FC;
        o->m->in->b4A = D_801E2100;
        o->m->in->b4B = D_801E2110;
        o->m->in->b4C = D_801E2104;
        o->m->in->b4D = D_801E2108;
        o->m->in->b4E = D_801E210C;
        o->m->in->b4F = D_801E2110;
        func_8012C89C(o, 0, e->u2, e->u4);
        t = e->u6;
        if (t != 0) {
            if (arg9 & 1) {
                func_8012D814(o, t + (arg9 & 0), e->u8, 0x3F800000, 1);
            } else {
                func_8012D814(o, t + (arg9 & 0), e->u8, 0x3F800000, 0);
            }
        }
        o->m->in->i24 = e->u14;
        *(u32 *)&o->m->in->p28[8] = e->u18 | 0x40000000;
        return 1;
    }
    }
    return 0;
}

