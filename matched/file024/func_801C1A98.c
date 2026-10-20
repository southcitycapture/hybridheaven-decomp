#include "context.h"
void func_801C1BDC(s32 arg0, s32 arg1);
extern s32 D_801CC8AC;
extern s32 D_801CC8B0;
extern u8 D_801CCA20[];
extern u8 D_801CEC34[];

void func_801C1A98(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 2) {
        func_8011AAF4(D_801CEC34, 0x280, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
        if (D_801CC8B4 == 0) {
            D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
        }
        if (D_801CC8B8 == 0) {
            D_801CC8B8 = func_80005670(arg0, D_801CCA20);
        }
        if (D_801CC8AC != 0) {
            func_80005700(D_801CC8AC);
        }
        if (D_801CC8B0 != 0) {
            func_80005700(D_801CC8B0);
        }
        func_800058DC(arg0, func_801C1BDC);
    }
}
