#include "context.h"

extern s32 func_801C3B3C();
extern s32 func_8012C6B4(s32);
extern void func_801F8AE8();

extern f32 D_8021B028;
extern f32 D_8021B02C;
extern f32 D_8021B030;

void func_801F8A44(s32 arg0, s32 arg1) {
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, 60.0f) != 0) {
            func_801F5230((struct func_801F5230_StructArg *) arg0);
            D_8021B028 = (f32) (func_8012C6B4(0xA) - 5);
            D_8021B02C = (f32) func_8012C6B4(0x14);
            D_8021B030 = (f32) (func_8012C6B4(0xA) - 5);
            func_800058DC((void *) arg0, (s32) func_801F8AE8);
        }
    }
}
