#include "context.h"

typedef struct func_80251574_Struct {
    u8 pad[0x96];
    u16 f96;
} func_80251574_Struct;

extern f32 func_8001EB64(s16);
extern u8 D_801BBDA0[];
extern f64 D_8025D590;
extern f64 D_8025D598;
extern f64 D_8025D5A0;
extern f64 D_8025D5A8;

void func_80251574(func_80251574_Struct *arg0, s32 arg1) {
    s32 t;

    t = arg0->f96++;
    D_801BBDA0[0x56] = (u32)((f64)func_8001EB64((s16)(t * 100) & 0x1FFF) * D_8025D590 + D_8025D598);
    D_801BBDA0[0x58] = (u32)((f64)func_8001EB64((s16)(t * 110) & 0x1FFF) * D_8025D5A0 + D_8025D5A8);
}
