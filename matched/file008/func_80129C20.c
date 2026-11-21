#include "common.h"
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
