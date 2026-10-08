#include "common.h"

extern void func_80005670(void *a0, void *a1);
extern void func_801CC530();
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern void func_801D367C(s32 a0);
extern s32 func_801DAAF0[];
extern s32 func_801DAC30[];
extern s32 D_801DAD14[];
extern s32 D_801DB360[];
extern s32 D_801DBAC0[];

s32 func_801E45F8(s32 arg0, s32 arg1) {
    func_80005670((void *)func_801DAAF0[9], (u8 *)func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670((void *)((s32 *)func_801DAAF0[9])[2], D_801DAD14);
    func_801D367C(0);
    func_80005670((void *)((s32 *)((s32 *)func_801DAAF0[9])[2])[2], D_801DB360);
    func_80005670((void *)((s32 *)((s32 *)((s32 *)func_801DAAF0[9])[2])[2])[2], D_801DBAC0);
    func_801CC530();
    return 2;
}
