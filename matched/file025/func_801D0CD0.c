#include "common.h"

extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801D0D90(void);
extern s32 D_801DB084;
extern s32 D_801DB088;
extern s32 D_801DB0A8;
extern s32 D_801DB0B0;
extern s32 D_801E1330;
extern s32 D_801E1334;

void func_801D0CD0(s32 arg0, s32 arg1) {
    D_801E1330 = arg0;
    D_801DB084 = 0;
    D_801DB088 = 0;
    D_801DB0A8 = 1;
    D_801E1334 = 0;
    D_801DB0B0 = func_801CC654(arg0, 0x140, 0, 0x140, 1, 0x140, 2, 0x140, 1, 1, 1, 0);
    func_8013B570(arg0, 0x141, 0, 4, (void *) func_801D0D90);
}
