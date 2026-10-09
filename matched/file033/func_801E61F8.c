#include "context.h"
extern s32 D_801F2DB4;
void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801D58DC(void);
s32 func_801D58EC(void);


s32 func_801E61F8(s32 arg0, s32 arg1) {
    if (D_801F2DB4 == 0) {
        goto case0;
    }
    if (D_801F2DB4 == 1) {
        goto case1;
    }
    return 6;
case0:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x0320003D, 0, 0, 5.0f);
        D_801F2DB4 = 1;
    }
    goto ret6;
case1:
    if (func_801D58EC() != 0) {
        return 7;
    }
ret6:
    return 6;
}
