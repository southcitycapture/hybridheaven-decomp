#include "context.h"

extern void func_8013B570(s32, s32, s32, s32, void *);
extern s32 D_801DBAD4;
extern s32 D_801DBAD8;
extern s32 D_801DBADC;
extern s32 D_801DBAE0;
extern s32 D_801DBAE4;
extern s32 D_801DBAE8;
extern s32 D_801DBAEC;
extern s32 D_801E17B0;
extern void func_801D72CC(void);

void func_801D7250(s32 arg0, s32 arg1) {
    D_801E17B0 = arg0;
    D_801DBAD4 = 0;
    D_801DBAD8 = 0;
    D_801DBADC = 1;
    D_801DBAE0 = 0;
    D_801DBAE4 = 0;
    D_801DBAE8 = 0;
    D_801DBAEC = 0;
    func_8013B570(arg0, 0x11D, 0, 4, func_801D72CC);
}
