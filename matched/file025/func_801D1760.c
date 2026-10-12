#include "common.h"

extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_801D17D0();
extern u8 D_801BC3D8[];
extern s32 D_801DB174;
extern s32 D_801DB164;
extern s32 D_801DB168;
extern s32 D_801DB16C;
extern s32 D_801DB170;
extern s32 D_801E1390;

void func_801D1760(s32 arg0, s32 arg1) {
    D_801E1390 = arg0;
    D_801DB164 = 0;
    D_801DB168 = 0;
    D_801DB16C = 1;
    D_801DB170 = 0;
    D_801DB174 = 0;
    func_8013B570(arg0, 0x2B, 0, 4, func_801D17D0);
    *(s16 *)&D_801BC3D8[0x3B2] = 0;
}
