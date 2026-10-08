#include "common.h"

extern s32 func_8013EB2C(void);
extern void func_80142570(void);
extern void func_800058DC(s32, void *);
extern void func_8021D84C(void);

void func_8021D808(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_800058DC(arg0, func_8021D84C);
    }
}
