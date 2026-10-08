#include "common.h"

extern u8 D_801BBD54;
extern void func_80142570();
extern void func_801C0254();
extern void func_800058DC(s32, void *);
extern void func_801BF54C();

void func_801BF500(s32 arg0, s32 arg1) {
    if (D_801BBD54 == 0) {
        func_80142570();
        func_801C0254();
        func_800058DC(arg0, func_801BF54C);
    }
}
