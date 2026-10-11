#include "context.h"

extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_801FBC40[];
extern u8 D_801FBC44[];

s32 func_801EF9B8(s32 arg0, s32 arg1) {
    func_8001B204(0, 0, 0, D_801FBC40);
    func_8001B204(1, 0, 0, D_801FBC44);
    return 3;
}
