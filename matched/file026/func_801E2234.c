#include "context.h"

extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_801FBBD0[];
extern u8 D_801FBBD4[];

s32 func_801E2234(s32 arg0, s32 arg1) {
    func_8001B204(0, 0, 0, D_801FBBD0);
    func_8001B204(1, 0, 0, D_801FBBD4);
    return 2;
}
