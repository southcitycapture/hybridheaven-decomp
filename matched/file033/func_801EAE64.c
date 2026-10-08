#include "common.h"

extern void func_80005670(void *a, void *b);
extern void func_801CC530();
extern void func_801D517C(s32 a);
extern void func_801D5188(s32 a);
extern void func_801D58C4(s32 a);
extern void func_801D58D0(s32 a);
extern s32 func_801DAAF0[];
extern s32 func_801DAC30[];
extern s32 D_801DB64C[];
extern s32 D_801DB71C[];

s32 func_801EAE64(s32 arg0, s32 arg1) {
    func_80005670((void *)((s32 *)func_801DAAF0)[9], (void *)((u8 *)func_801DAC30 + 0x2C));
    func_801D517C(0);
    func_801D5188(0);
    func_80005670((void *)((s32 *)((s32 *)func_801DAAF0)[9])[2], D_801DB64C);
    func_801D58C4(1);
    func_801D58D0(1);
    func_80005670((void *)((s32 *)((s32 *)((s32 *)func_801DAAF0)[9])[2])[2], D_801DB71C);
    func_801CC530();
    return 2;
}
