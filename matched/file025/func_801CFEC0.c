#include "context.h"

extern s32 D_801E12C0;
extern s32 D_801DAF18;
extern s32 D_801DAF1C;
extern s32 D_801DAF40;
extern s32 D_801DAF00;
extern void func_801CFF24();

void func_801CFEC0(s32 arg0, s32 arg1) {
    D_801E12C0 = arg0;
    D_801DAF18 = 0;
    D_801DAF1C = 0;
    D_801DAF40 = 1;
    D_801DAF00 = 0;
    func_8013B570(arg0, 0x57, 0, 4, func_801CFF24);
}
