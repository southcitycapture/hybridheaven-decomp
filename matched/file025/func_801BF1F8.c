#include "common.h"

extern void func_800058DC(s32, void *);
extern void func_801BF9A4(s32);
extern void func_801C00B8();
extern void func_801C0C7C();
extern void func_801C0FA8();
extern void func_801C117C();
extern void func_801C13C0();
extern void func_801C1520();
extern void func_801C1860();
extern void func_801C1D60();
extern void func_801C1FD0();
extern void func_8038BC00();
extern void func_8038C8D0();
extern void func_8038CA40();
extern void func_8038D1E0();
extern s32 D_801D8CF0;
extern s32 D_801D8CF4;
extern s32 D_801D8D00;
extern void func_801BF2AC();

void func_801BF1F8(s32 arg0, s32 arg1) {
    func_801BF9A4(0);
    D_801D8CF0 = 0;
    D_801D8D00 = 0;
    func_8038BC00();
    func_8038C8D0();
    func_8038CA40();
    func_8038D1E0();
    func_801C00B8();
    func_801C13C0();
    func_801C1520();
    func_801C1860();
    func_801C1FD0();
    func_801C117C();
    func_801C1D60();
    func_801C0C7C();
    func_801C0FA8();
    D_801D8CF4 = 0;
    func_800058DC(arg0, &func_801BF2AC);
}
