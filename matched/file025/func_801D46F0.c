#include "context.h"

extern void func_8013B570(s32, s32, s32, s32, s32);
extern s32 D_801DB590;
extern s32 D_801DB5A8;
extern s32 D_801DB5AC;
extern s32 D_801DB5B4;
extern s32 D_801DB5B8;
extern s32 D_801E1600;
extern void func_801D475C(void);

void func_801D46F0(s32 arg0, s32 arg1) {
    D_801E1600 = arg0;
    D_801DB5A8 = 0;
    D_801DB5AC = 0;
    D_801DB5B4 = 1;
    D_801DB590 = 0;
    D_801DB5B8 = 0;
    func_8013B570(arg0, 0x30, 0, 4, (s32)func_801D475C);
}
