#include "common.h"
extern u8 D_801BBBF0[];
extern s32 D_8025A290;
extern void func_800058DC(s32 arg0, void *arg1, s32 arg2);
extern void func_80244998(arg0, arg1);


struct func_80244930_Struct {
    u8 pad0[0xBA2];
    s8 a;
    s8 pad1;
    s8 b;
};
extern s32 func_80126CC0(s32 arg0, void *arg1);
extern s32 func_8015105C(s32 arg0);
extern void func_80126EAC(void);

void func_80244930(s32 arg0, s32 arg1) {
    struct func_80244930_Struct *p;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        D_8025A290 = func_8015105C(0x57);
        p = (struct func_80244930_Struct *)D_801BBBF0;
        p->a = 1;
        p->b = 1;
        func_800058DC(arg0, func_80244998, 1);
    }
}
