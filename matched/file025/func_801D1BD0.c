#include "context.h"
extern s32 func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

extern s32 D_801E13C0;
extern s32 D_801DB198;
extern s32 D_801DB19C;
extern s32 D_801DB1C0;
extern s32 D_801DB180;
extern void func_801D1C34(void);

void func_801D1BD0(s32 arg0, s32 arg1) {
    D_801E13C0 = arg0;
    D_801DB198 = 0;
    D_801DB19C = 0;
    D_801DB1C0 = 1;
    D_801DB180 = 0;
    func_8013B570(arg0, 0x31, 0, 4, func_801D1C34);
}
