#include "context.h"

typedef struct func_801F94AC_Struct {
    u8 pad0[0xAE];
    u8 unkAE;
} func_801F94AC_Struct;

extern s32 func_801C3B3C(void);
extern void func_801F9524();

void func_801F94AC(func_801F94AC_Struct *arg0, s32 arg1) {
    if (func_801C3B3C() == 0) {
        if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, (f32) (u32) arg0->unkAE) != 0) {
            func_801F5230((struct func_801F5230_StructArg *) arg0);
            func_800058DC(arg0, (s32) func_801F9524);
        }
    }
}
