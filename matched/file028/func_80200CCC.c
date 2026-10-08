#include "context.h"

extern void func_8038CB60(f32, void *);
extern u8 D_80205378[];

s32 func_80200CCC(s32 arg0, s32 arg1) {
    if (func_801BF6B0(6)->unkC >= 2) {
        func_8038CB60(0.0f, D_80205378);
        func_8038D28C(8);
        return 1;
    }
    return 0;
}
