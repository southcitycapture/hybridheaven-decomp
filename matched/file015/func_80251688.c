#include "common.h"
#define func_80010550 func_80010550__pre
#define func_8011AAF4 func_8011AAF4__pre
typedef struct func_8024E43C_StructV { s32 w[4]; } func_8024E43C_StructV;
extern func_8024E43C_StructV D_80164F40;
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_80010550(void **, s32, void **);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8012C89C(void *, s32, s32, s32);
typedef struct func_80251884_Arg {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80251884_Arg;
typedef struct func_80251884_Obj {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80251884_Obj;
typedef struct func_80251884_Ref {
    u8 pad[0x30];
    func_80251884_Obj *unk30;
} func_80251884_Ref;
void func_80251884(func_80251884_Arg *arg0, func_80251884_Ref **arg1);


typedef struct func_80251688_StructI {
    u8 pad0[4];
    f32 x4;
    f32 x8;
    f32 xC;
    u8 pad10[8];
    f32 x18;
    f32 x1C;
    f32 x20;
    u32 flags24;
    u8 pad28[8];
    u32 ptr30;
    u8 pad34[0x14];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
    u8 b4C;
    u8 b4D;
    u8 b4E;
} func_80251688_StructI;

typedef struct func_80251688_StructO {
    u8 pad[0x30];
    func_80251688_StructI *p;
} func_80251688_StructO;

typedef struct func_80251688_StructP {
    u8 pad[0x90];
    f32 f90;
    f32 f94;
    f32 f98;
} func_80251688_StructP;
extern void func_8012D814(void *, s32, s32, f32, s32);
extern u8 D_80254C78[];

void func_80251688(func_80251688_StructP *arg0, func_80251688_StructO **arg1) {
    func_8024E43C_StructV v;

    v = D_80164F40;
    v.w[1] = 0x80000600;
    func_80005E44(arg0, &v);
    func_80006214(arg0);
    arg0->f90 = 0.6f;
    arg0->f94 = 0.01f;
    arg0->f98 = 0.6f;
    func_8012C89C(arg0, 0, 0x225, 1);
    func_8012D814(arg0, 0x225, 0, 1.0f, 1);
    (*arg1)->p->flags24 |= 0x300;
    (*arg1)->p->ptr30 = (u32) D_80254C78 | 0x40000000;
    (*arg1)->p->x4 = -192.7f;
    (*arg1)->p->x8 = -128.0f;
    (*arg1)->p->xC = 450.4f;
    (*arg1)->p->x18 = arg0->f90 * 0.01;
    (*arg1)->p->x1C = arg0->f94 * 0.01;
    (*arg1)->p->x20 = arg0->f98 * 0.01;
    (*arg1)->p->b48 = 0x20;
    (*arg1)->p->b49 = 0x40;
    (*arg1)->p->b4A = 0xC0;
    (*arg1)->p->b4B = 0xFF;
    (*arg1)->p->b4C = 0x20;
    (*arg1)->p->b4D = 0x80;
    (*arg1)->p->b4E = 0xFF;
    func_800058DC(arg0, func_80251884);
}
