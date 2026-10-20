#include "context.h"
extern void func_800023A8(s32);
extern void func_800058DC(s32, void *);
extern s32 func_8012FE50();


extern func_801C3C14_Struct D_801BBBF0;
extern void func_801C3CD0();
extern void func_80020718(s32);
extern void func_8012FFCC(s32);
extern void func_80133830();
extern void func_80133950();
extern void func_80133A70();
extern void func_8014AC60();
extern void func_80152240();
extern void func_801C1308();

void func_801C3C14(s32 arg0, s32 arg1) {
    func_800023A8(0);
    func_80020718(8);
    D_801BBBF0.unkA = 0;
    D_801BBBF0.unkC = 0;
    func_8012FE50(0x15, (u16)(D_801BBBF0.unk4 = 0x104), 0, 1, 0);
    D_801BBBF0.unk3A2 = 0;
    D_801BBBF0.unk2 = 1;
    func_80133830();
    func_80133950();
    func_80133A70();
    func_8014AC60();
    D_801BBBF0.unkEF2 = 0;
    func_8012FFCC(0);
    func_801C1308();
    func_80152240();
    func_800058DC(arg0, &func_801C3CD0);
}
