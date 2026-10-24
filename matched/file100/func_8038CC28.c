#define func_8038CC28 D_8038CC28
#include "context.h"
#undef func_8038CC28

extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern s32 D_8038E138;
extern f32 D_8038E13C;
extern s32 D_8038E140;

s32 func_8038CC28(void) {
    extern void func_8038CD1C();

    if (D_8038E13C > 0.0f) {
        if (func_801C0DE4(7, 0x1F40, D_8038E13C) != 0) {
            func_801C0EB0(7, 0x1F40);
            func_8038CD1C(D_8038E140);
            D_8038E138 = 1;
            return 0;
        } else {
            D_8038E138 = 0;
            return 0;
        }
    } else {
        func_8038CD1C(D_8038E140);
        D_8038E138 = 1;
        return 0;
    }
}
