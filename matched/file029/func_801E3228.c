#include "context.h"

extern s32 func_801C2570(s32 arg0, void *arg1);
extern void func_8038BA8C(void);
extern s32 D_8038DF70[];

s32 func_801E3228(s32 arg0, s32 arg1) {
    D_8038DF70[1] = 0x800;
    if (func_801C2570(0x462, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}
