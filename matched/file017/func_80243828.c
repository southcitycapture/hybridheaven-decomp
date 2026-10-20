#include "context.h"

typedef struct func_80243828_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80243828_Struct;

extern void func_800058DC(void *, void *);
extern f32 func_8002FC20(f32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f64 D_8025C770;
extern u8 func_80243988[];

void func_80243828(func_80243828_Struct *arg0, s32 arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;

    sp3C = arg0->unk90 - D_8025DDA0;
    sp38 = arg0->unk94 - D_8025DDA4;
    sp34 = arg0->unk98 - D_8025DDA8;
    sp30 = func_8002FC20(sp3C * sp3C + sp38 * sp38 + sp34 * sp34);
    if ((f64) sp30 < D_8025C770) {
        arg0->unk40 = ((f64) sp3C * 8.0) / (f64) sp30;
        arg0->unk44 = ((f64) sp38 * 12.0) / (f64) sp30;
        arg0->unk48 = ((f64) sp34 * 8.0) / (f64) sp30;
        func_80380F94(arg0->unk90, arg0->unk94, arg0->unk98, 0, 0.0f, 0.0f, 0xF);
        arg0->unk3C = 0;
        if (*(u8 *)&arg0->unk98 == 0) {
            *(u8 *)&arg0->unk98 = 1;
            func_80020718(0x196);
        }
        func_800058DC(arg0, func_80243988);
    }
}
