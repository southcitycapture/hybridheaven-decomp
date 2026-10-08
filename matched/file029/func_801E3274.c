#include "common.h"

extern s32 func_801C4DD4(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8);
extern void func_801D5288(void);
extern void func_801D5294(void);
extern void func_801D52A0(void);
extern u8 D_801D52AC[];

s32 func_801E3274(s32 arg0, s32 arg1) {
    func_801C4DD4(0, func_801D5288, func_801D5294, func_801D52A0, D_801D52AC, 0.0f, 1.0f, 0.0f, 0.0f);
    return 2;
}
