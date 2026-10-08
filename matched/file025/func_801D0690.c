#include "common.h"

extern void func_8013B570(s32 a0, s32 a1, s32 a2, s32 a3, void *a4);
extern void func_801D0700(void);
extern u8 D_801BC3D8[];
extern s32 D_801DAFC0;
extern s32 D_801DAFD8;
extern s32 D_801DAFDC;
extern s32 D_801DAFE4;
extern s32 D_801DAFEC;
extern s32 D_801E1300;

void func_801D0690(s32 arg0, s32 arg1) {
    D_801E1300 = arg0;
    D_801DAFD8 = 0;
    D_801DAFDC = 0;
    D_801DAFE4 = 1;
    D_801DAFEC = 0;
    D_801DAFC0 = 0;
    func_8013B570(arg0, 0x57, 0, 4, func_801D0700);
    *(s16 *)&D_801BC3D8[0x3B2] = 0;
}
