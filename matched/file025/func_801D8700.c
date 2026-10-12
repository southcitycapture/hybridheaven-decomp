#include "context.h"
extern s32 func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

extern s32 D_801E1BB0;
extern s32 D_801DBB74;
extern s32 D_801DBB78;
extern s32 D_801DBB7C;
extern s32 D_801DBB80;
extern void func_801D8764();

void func_801D8700(s32 arg0, s32 arg1) {
    D_801E1BB0 = arg0;
    D_801DBB74 = 0;
    D_801DBB78 = 0;
    D_801DBB7C = 1;
    D_801DBB80 = 0;
    func_8013B570(arg0, 0x11E, 0, 4, func_801D8764);
}
