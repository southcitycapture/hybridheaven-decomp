#include "context.h"
struct func_801E1ED0_Struct *func_801BF6B0(s32);
extern void func_8038CB60(f32, void *);

extern u8 D_80204B78[];

s32 func_801F9C88(s32 arg0, s32 arg1) {
    if (func_801BF6B0(6)->unkC >= 2) {
        func_8038CB60(0.0f, D_80204B78);
        return 1;
    }
    return 0;
}
