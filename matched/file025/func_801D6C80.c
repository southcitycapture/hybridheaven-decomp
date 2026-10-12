#include "common.h"

extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801D6D40();
extern s32 D_801DBA24;
extern s32 D_801DBA28;
extern s32 D_801DBA2C;
extern s32 D_801DBA34;
extern s32 D_801E1770;
extern s32 D_801E1774;

void func_801D6C80(s32 arg0, s32 arg1) {
    D_801E1770 = arg0;
    D_801DBA24 = 0;
    D_801DBA28 = 0;
    D_801DBA2C = 1;
    D_801E1774 = 0;
    D_801DBA34 = func_801CC654(arg0, 0x140, 0, 0x140, 1, 0x140, 2, 0x140, 1, 1, 1, 0);
    func_8013B570(arg0, 0x142, 0, 4, (void *) func_801D6D40);
}
