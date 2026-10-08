#include "common.h"

extern void func_801C0D04(s32 a0, s32 a1);
extern void func_8038CC28(void);
extern void func_8038CCC4(void);
extern void func_8038CD0C(void);
extern void *D_8038E128[];
extern s32 D_8038E134;
extern s32 D_8038E138;
extern f32 D_8038E13C;
extern s32 D_8038E140;

void func_8038CB60(f32 arg0, s32 arg1) {
    D_8038E134 = 0x65C816;
    D_8038E138 = 0;
    D_8038E13C = arg0;
    D_8038E128[0] = func_8038CC28;
    D_8038E128[1] = func_8038CCC4;
    D_8038E128[2] = func_8038CD0C;
    if (D_8038E13C > 0.0f) {
        func_801C0D04(7, 0x1F40);
    }
    D_8038E140 = arg1;
}
