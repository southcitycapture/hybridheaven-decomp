#include "common.h"

extern s32 func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_801CF124();
extern s32 D_801DADE0;
extern s32 D_801DADFC;
extern s32 D_801DAE00;
extern s32 D_801DAE08;
extern s32 D_801DADE4;
extern s32 D_801DAE0C;
extern s32 D_801E1230;

void func_801CF0B0(s32 arg0, s32 arg1) {
    D_801E1230 = arg0;
    D_801DADFC = 0;
    D_801DAE00 = 0;
    D_801DAE08 = 1;
    D_801DADE0 = 0;
    D_801DADE4 = 0;
    D_801DAE0C = 0;
    func_8013B570(arg0, 0x30, 0, 4, func_801CF124);
}
