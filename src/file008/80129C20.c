#include "common.h"

#define D_80164F40 D_80164F40__func_80129C20
#define D_80175D98 D_80175D98__func_80129C20
#define func_80005700 func_80005700__func_80129C20
#define func_800058DC func_800058DC__func_80129C20
#define func_80005E44 func_80005E44__func_80129C20
#define func_80006214 func_80006214__func_80129C20
#define func_8001F74C func_8001F74C__func_80129C20
#define func_80129E68 func_80129E68__func_80129C20
#define func_80129E68_Obj func_80129E68_Obj__func_80129C20
#define func_80129E68_Outer func_80129E68_Outer__func_80129C20
#define func_80129E68_Sub func_80129E68_Sub__func_80129C20
#define func_80129FB8_Obj func_80129FB8_Obj__func_80129C20
#define func_8012C89C func_8012C89C__func_80129C20
#define func_8012D8C8 func_8012D8C8__func_80129C20
#define func_8012D918 func_8012D918__func_80129C20
void func_80005700();
void func_8001F74C();
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
} func_80129E68_Obj;
typedef struct {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[0x3B];
    u8 b;
} func_80129E68_Sub;
typedef struct {
    u8 pad0[0x30];
    func_80129E68_Sub *sub;
} func_80129E68_Outer;
void func_80129E68(func_80129E68_Obj *arg0, func_80129E68_Outer **arg1);
typedef struct {
    u8 pad0[0x3C]; s16 u3C; u8 pad3E[2]; f32 u40; f32 u44; f32 u48;
    u8 pad4C[0x44]; u8 u90; u8 u91; s16 u92; f32 u94; f32 u98; f32 u9C; f32 uA0; f32 uA4;
    u8 uA8; u8 uA9; u8 uAA; u8 uAB; u8 uAC; u8 uAD; u8 uAE;
} func_80129FB8_Obj;


typedef struct { s32 w0, w4, w8, wC; } func_80129C20_StructInit;
typedef struct {
    u16 u0, u2, u4, u6, u8, uA, uC, uE;
    s32 w10, w14, w18;
} func_80129C20_StructTable;
typedef struct {
    u8 pad0[4]; f32 x, y, z; u8 pad10[8]; f32 sx, sy, sz;
    s32 w24; u8 pad28[8]; s32 w30; u8 pad34[0x14];
    u8 b48, b49, b4A, b4B, b4C, b4D, b4E;
} func_80129C20_StructSub;
typedef struct {
    u8 pad0[0x30]; func_80129C20_StructSub *sub;
} func_80129C20_StructOuter;
extern func_80129C20_StructInit D_80164F40;
extern func_80129C20_StructTable D_80175D98[];
extern s32 func_80005E44(void *, func_80129C20_StructInit *);
extern void func_80006214(void *);
extern void func_800058DC(void *, void (*)(func_80129E68_Obj *, func_80129E68_Outer **));
extern void func_8012C89C(void *, s32, u16, u16);
extern void func_8012D8C8(void *, u32, u16, f32, s32, void *);
extern void func_8012D918(void *, u16, u16, s32, s32);

void func_80129C20(func_80129FB8_Obj *arg0, func_80129C20_StructOuter **arg1)
{
    func_80129C20_StructInit init;
    u8 index;
    u16 temp_a1;
    func_80129C20_StructTable *table;

    index = arg0->u90;
    init = D_80164F40;
    table = &D_80175D98[index];
    init.w4 = D_80175D98[index].w10;
    if (func_80005E44(arg0, &init) == 0) {
        func_80005700(arg0);
        return;
    }
    func_80006214(arg0);
    (*arg1)->sub->x = arg0->u98;
    (*arg1)->sub->y = arg0->u9C;
    (*arg1)->sub->z = arg0->uA0;
    (*arg1)->sub->sx = arg0->uA4;
    (*arg1)->sub->sy = arg0->uA4;
    (*arg1)->sub->sz = arg0->uA4;
    (*arg1)->sub->b48 = arg0->uA8;
    (*arg1)->sub->b49 = arg0->uA9;
    (*arg1)->sub->b4A = arg0->uAA;
    (*arg1)->sub->b4B = arg0->uAB;
    (*arg1)->sub->b4C = arg0->uAC;
    (*arg1)->sub->b4D = arg0->uAD;
    (*arg1)->sub->b4E = arg0->uAE;
    func_8012C89C(arg0, 0, D_80175D98[index].u2, D_80175D98[index].u4);
    if (D_80175D98[index].u6 != 0) {
        if (arg0->u91 & 1) {
            func_8012D8C8(arg0, (s32)D_80175D98[index].u6, D_80175D98[index].u8, 1.0f, 1, 0);
        } else {
            func_8012D8C8(arg0, (s32)D_80175D98[index].u6, D_80175D98[index].u8, 1.0f, 0, 0);
        }
    }
    temp_a1 = D_80175D98[index].uA;
    if (temp_a1 != 0) {
        func_8012D918(arg0, temp_a1, D_80175D98[index].uC, 0, 0);
    }
    (*arg1)->sub->w24 = D_80175D98[index].w14;
    (*arg1)->sub->w30 = D_80175D98[index].w18 | 0x40000000;
    func_8001F74C(arg0);
    func_800058DC(arg0, func_80129E68);
}
#undef D_80164F40
#undef D_80175D98
#undef func_80005700
#undef func_800058DC
#undef func_80005E44
#undef func_80006214
#undef func_8001F74C
#undef func_80129E68
#undef func_80129E68_Obj
#undef func_80129E68_Outer
#undef func_80129E68_Sub
#undef func_80129FB8_Obj
#undef func_8012C89C
#undef func_8012D8C8
#undef func_8012D918

/* starting point: func_801E0198 (file009), whose assembly is 91% the same as this function's */

typedef struct {
    u8 pad0[0x4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[0x3B];
    u8 b;
} func_80129E68_Sub;

typedef struct {
    u8 pad0[0x30];
    func_80129E68_Sub *sub;
} func_80129E68_Outer;

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
} func_80129E68_Obj;

extern u16 D_801BCAE0;
void func_8001F74C();
void func_8001F75C();
void func_80005700();

void func_80129E68(func_80129E68_Obj *arg0, func_80129E68_Outer **arg1) {
    s32 var_v1;

    if (D_801BCAE0 & 0x10) {
        func_8001F74C();
    } else {
        func_8001F75C();
    }
    (*arg1)->sub->x = (*arg1)->sub->x + arg0->f40;
    (*arg1)->sub->y = (*arg1)->sub->y + arg0->f44;
    (*arg1)->sub->z = (*arg1)->sub->z + arg0->f48;
    arg0->f44 = arg0->f44 + arg0->f94;
    var_v1 = (*arg1)->sub->b;
    var_v1 += arg0->s92;
    if (var_v1 < 0x18) {
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


extern u8 D_80175D78;
extern u8 D_80175D7C;
extern u8 D_80175D80;
extern u8 D_80175D84;
extern u8 D_80175D88;
extern u8 D_80175D8C;
extern u8 D_80175D90;
extern u8 D_80175D94;

void func_80129F70(void) {
    D_80175D78 = 0xFF;
    D_80175D7C = 0xFF;
    D_80175D80 = 0xFF;
    D_80175D84 = 0xFF;
    D_80175D88 = 0xFF;
    D_80175D8C = 0xFF;
    D_80175D90 = 0xFF;
    D_80175D94 = 0;
}


typedef struct { s32 w[5]; } func_80129FB8_Struct20;
typedef struct {
    u8 pad0[0x3C]; s16 u3C; u8 pad3E[2]; f32 u40; f32 u44; f32 u48;
    u8 pad4C[0x44]; u8 u90; u8 u91; s16 u92; f32 u94; f32 u98; f32 u9C; f32 uA0; f32 uA4;
    u8 uA8; u8 uA9; u8 uAA; u8 uAB; u8 uAC; u8 uAD; u8 uAE;
} func_80129FB8_Obj;

extern s32 func_80005C70();
extern func_80129FB8_Obj *func_8012C4D0(s32, func_80129FB8_Struct20, s32);
extern func_80129FB8_Struct20 D_80175C40;
extern s32 D_801BBC2C;

s32 func_80129FB8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, u8 a7, u8 a8, u8 a9, u8 a10, u8 a11, u8 a12, u8 a13, s8 a14, f32 a15, u8 a16, u8 a17) {
    func_80129FB8_Obj *o;
    if (func_80005C70() < 0x21) return 0;
    o = func_8012C4D0(D_801BBC2C, D_80175C40, 4);
    if (o != NULL) {
        o->u40 = arg3; o->u44 = arg4; o->u48 = arg5; o->u94 = arg6;
        o->u92 = a14; o->u91 = a17; o->u90 = a16; o->u3C = 0;
        o->uA4 = a15; o->u98 = arg0; o->u9C = arg1; o->uA0 = arg2;
        o->uA8 = a7; o->uA9 = a8; o->uAA = a9; o->uAC = a10; o->uAD = a11; o->uAE = a12; o->uAB = a13;
        return 1;
    }
    return 0;
}

