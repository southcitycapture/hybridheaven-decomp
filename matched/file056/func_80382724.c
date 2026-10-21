#include "context.h"

typedef struct {
    u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[4]; s16 h14 ; u8 pad16[2]; f32 f18; f32 f1C; f32 f20; s32 i24; u8 pad28[8]; s32 i30; u8 pad34[0x14];
    u8 b48; u8 b49; u8 b4A; u8 b4B; u8 b4C; u8 b4D; u8 b4E;
} func_80382724_StructB;
typedef struct { u8 pad[0x30]; func_80382724_StructB *p30; } func_80382724_StructA;
typedef struct { u8 pad[0x94]; f32 f94; f32 f98; f32 f9C; } func_80382724_StructC;

extern u8 D_80388E98[];
extern f32 D_80389B28;
extern void func_8012D918();

void func_80382724(func_80382724_StructC *arg0, func_80382724_StructA **arg1) {
    struct func_803813A8_Struct16 sp28;

    sp28 = D_80164F40;
    sp28.b = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B4, 0);
    func_8012D918(arg0, 0x4B4, 1, 0, 0);
    (*arg1)->p30->i24 = 0x300;
    (*arg1)->p30->i30 = (s32)D_80388E98 | 0x40000000;
    (*arg1)->p30->f4 = arg0->f94;
    (*arg1)->p30->f8 = arg0->f98;
    (*arg1)->p30->fC = arg0->f9C;
    (*arg1)->p30->h14 = 0x800;
    (*arg1)->p30->f18 = 0.5f;
    (*arg1)->p30->f1C = D_80389B28;
    (*arg1)->p30->f20 = 0.5f;
    (*arg1)->p30->b48 = 0xFF;
    (*arg1)->p30->b49 = 0xFF;
    (*arg1)->p30->b4A = 0xFF;
    (*arg1)->p30->b4B = 0;
    (*arg1)->p30->b4C = 0xFF;
    (*arg1)->p30->b4D = 0x40;
    (*arg1)->p30->b4E = 0;
}
