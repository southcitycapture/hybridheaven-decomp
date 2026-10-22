#include "context.h"

extern s32 func_8012AF88(f32, f32, f32, f32, f32, f32, s32);
extern f32 D_80256F88;
extern f32 D_80256F8C;
extern f32 D_80256F90;
extern f32 D_80256F94;
void func_80241020(s32 arg0, s32 arg1);

#define GG ((struct func_80240CF8_G *)&D_801BBBF0)

void func_80240F0C(s32 arg0, s32 arg1) {
    f32 t;

    if (GG->a->f63 != 0 && *(u16 *)&GG->pad1[0x18E - 0xE4] == 0 &&
        func_80133A24(0x1A7) == 0 &&
        func_8012AF88(D_80256F88, -364.0f, -739.0f, D_80256F88, -720.0f, 30.0f, 0) != 0) {
        func_801268F4(0);
        t = D_80256F8C;
        GG->f192 = 5;
        GG->f198 = t;
        GG->f1A0 = D_80256F90;
        GG->fF14 = t;
        GG->fF18 = -720.0f;
        GG->fF04 = D_80256F94;
        GG->fF08 = 1.0f;
        GG->fF10 = 0x0168003E;
        GG->fF0C = 0;
        GG->fF00 = 0x1100;
        func_800058DC((void *)arg0, (void *)func_80241020);
    }
}
