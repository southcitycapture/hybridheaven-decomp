#include "common.h"

extern void func_8021B790();
extern void func_800058DC(void *obj, void *fn);
extern void func_8021BE30();
extern u8 D_801BBBF0[];

void func_8021BDE0(u8 *arg0, s32 arg1) {
    func_8021B790();
    if (D_801BBBF0[0x299] != 0) {
        arg0[0x90] = 0;
        D_801BBBF0[0x1031] = 4;
        func_800058DC(arg0, func_8021BE30);
    }
}
