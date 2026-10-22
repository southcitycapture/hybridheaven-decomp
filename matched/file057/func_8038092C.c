#include "context.h"
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4();
extern s32 func_800058DC();
extern void func_80380AF4();
extern f64 D_8038BDF8;
extern f64 D_8038BE00;
extern struct func_80380B30_SA *D_8038CFB4;

typedef struct func_8038092C_Struct { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8038092C_Struct;
typedef struct func_8038092C_Struct0 { u8 pad[0x90]; s16 unk90; } func_8038092C_Struct0;

void func_8038092C(func_8038092C_Struct0 *arg0, s32 arg1) {
    f64 k2;
    f64 k0;
    s8 i;
    s8 a;
    s32 b, c;
    s32 d;
    func_8038092C_Struct *v;
    k2 = D_8038BDF8;
    for (k0 = D_8038BE00, i = 0; i < 1; i++) {
        a = func_8012C6B4(10);
        b = func_8012C6B4(100);
        c = func_8012C6B4(100);
        d = func_8012C6B4(100);
        v = *(func_8038092C_Struct **)((u8 *)D_8038CFB4 + 0x2C);
        func_80129FB8((f32)(((f64)(f32)(b - 0x32) * k0) + (f64)v->unk4),
                      (f32)(((f64)(f32)c * k0) + (f64)v->unk8),
                      (f32)(((f64)(f32)(d - 0x32) * k0) + (f64)v->unkC),
                      0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0, 0xFF, 0, 0, a * 4 + 0x50, -2, (f32)((f64)a * k2), 0, 0);
    }
    if (arg0->unk90++ >= 0x1A) {
        func_800058DC(arg0, func_80380AF4);
    }
}
