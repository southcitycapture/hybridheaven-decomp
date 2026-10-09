#include "context.h"

extern s32 func_80018BD8();
extern void func_80018AB4();
extern void func_800058DC(s32, void *);
extern void func_80019E7C();
extern u16 D_8008EBC2;

void func_80019E0C(s32 arg0, s32 arg1) {
    if ((s32) D_8008EBC2 < 8) {
        if (func_80018BD8() == 0) {
            func_80018AB4();
            func_800058DC(arg0, func_80019E7C);
        }
    } else {
        func_800058DC(arg0, func_80019E7C);
    }
}
