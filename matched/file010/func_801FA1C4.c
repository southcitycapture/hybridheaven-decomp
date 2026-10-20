#include "context.h"

extern s32 func_801F546C(void);
extern void func_801FA0B0(u16, u8);
extern s32 func_801FA13C(u16);
extern s16 D_8021B0D2;

s32 func_801FA1C4(void) {
    s32 temp_v0;
    u8 var_a1;

    if (func_801F546C() != 0) {
        temp_v0 = func_801FA13C((u16) D_8021B0D2);
        var_a1 = temp_v0;
        if (temp_v0 > 0) {
            var_a1 = temp_v0;
            var_a1--;
        }
        func_801FA0B0((u16) D_8021B0D2, var_a1);
        return 1;
    }
    return 0;
}
