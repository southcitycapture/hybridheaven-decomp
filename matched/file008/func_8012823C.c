#include "context.h"

typedef struct func_8012823C_Struct30 {
    u8 pad0[0x18];
    f32 f18;
    f32 f1C;
    u8 pad20[0x4];
    u32 w24;
    u8 pad28[0x8];
    s32 w30;
    u8 pad34[0x14];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
} func_8012823C_Struct30;

typedef struct func_8012823C_Struct24 {
    u8 pad0[0x30];
    func_8012823C_Struct30 *p30;
} func_8012823C_Struct24;

typedef struct func_8012823C_Struct {
    u8 pad0[0x24];
    func_8012823C_Struct24 *p24;
    u8 pad28[4];
    s32 flags;
    u8 pad30[0x10];
    f32 f40;
    f32 f44;
    f32 f48;
    u8 pad4C[0x44];
    u8 b90;
} func_8012823C_Struct;

extern f64 D_8018CC38;
extern f32 D_8018CC40;
extern f64 D_8018CC48;
extern u8 func_801283AC[];

void func_8012823C(func_8012823C_Struct *arg0, func_8012823C_Struct24 **arg1) {
    arg0->b90 = 0xF8;
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D844(arg0, 1, 0);
    arg0->p24->p30->w24 = 0x6000F;
    (*arg1)->p30->w30 = func_8000C3B0(arg0->p24);
    arg0->p24->p30->b4B = 0x80;
    arg0->p24->p30->b48 = 0xFF;
    arg0->p24->p30->b49 = 0;
    arg0->p24->p30->b4A = 0xFF;
    arg0->flags |= 0x20;
    arg0->f40 = ((f64)(f32)func_8012C6B4(0xC8) - 100.0) / D_8018CC38;
    arg0->f44 = D_8018CC40;
    arg0->f48 = ((f64)(f32)func_8012C6B4(0xC8) - 100.0) / D_8018CC48;
    (*arg1)->p30->f18 = 0.0f;
    (*arg1)->p30->f1C = 0.0f;
    func_800058DC(arg0, func_801283AC);
}
