#include "context.h"

extern void func_80002364(s32, s32, s32, s32);
extern void func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern void func_80107B60(void);
extern u8 D_80044090[];
extern u8 D_80044220[];
extern u8 D_80044420[];
extern s8 D_801BBAC4;
extern s8 D_801BBAC5;
extern s8 D_801BBAC6;
extern s8 D_801BBAC7;
extern s8 D_801BBAC8;

void func_80107AC0(void *arg0, s32 arg1) {
    func_80005670(arg0, D_80044420);
    func_80005670(arg0, D_80044220);
    func_80005670(arg0, D_80044090);
    D_801BBAC4 = 1;
    D_801BBAC5 = 1;
    D_801BBAC6 = 0;
    D_801BBAC7 = 0;
    D_801BBAC8 = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_80107B60);
}
