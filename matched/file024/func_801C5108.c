#include "context.h"

extern u16 func_80001060();
extern s32 func_801302CC();
extern s32 func_80130290();
extern void func_8001B204();
extern void func_801C5378();
extern u16 D_801CFD0E;
extern u8 D_801CEFF0[];
extern u8 D_801CEFF4[];
extern u8 D_801CEFF8[];
extern u8 D_801CF008[];
extern u8 D_801CF01C[];
extern u8 D_801CF024[];
extern u8 D_801CF034[];
extern u8 D_801CF048[];
extern u8 D_801CF050[];
extern u8 D_801CF060[];
extern u8 D_801CF074[];
extern u8 D_801CF07C[];
extern u8 D_801CF084[];

void func_801C5108(s32 arg0, s32 arg1) {
    D_801CC8C8 = 0;
    if (func_801302CC() != 0) {
        D_801CC8C8 = 1;
    } else if (func_80130290() != 0) {
        D_801CC8C8 = 0;
    } else {
        D_801CC8C8 = 2;
    }
    func_8001B204(0, 0x6B, (s16) ((D_801CC8C8 * 0xA) + 0x8A), D_801CEFF0);
    func_8001B204(1, 0, 0, D_801CEFF4);
    D_801CFD0E = func_80001060();
    if (func_801302CC() != 0) {
        D_801CFD0E = 2;
    }
    if (D_801CFD0E == 0) goto case0;
    if (D_801CFD0E == 1) goto case1;
    if (D_801CFD0E != 2) goto done;
    goto case2;
case0:
    func_8001B204(2, 0x73, 0x8A, D_801CEFF8, 6);
    func_8001B204(3, 0x73, 0x94, D_801CF008, 6);
    func_8001B204(4, 0x73, 0x9E, D_801CF01C, 2);
    goto done;
case1:
    func_8001B204(2, 0x73, 0x8A, D_801CF024, 2);
    func_8001B204(3, 0x73, 0x94, D_801CF034, 6);
    func_8001B204(4, 0x73, 0x9E, D_801CF048, 6);
    goto done;
case2:
    func_8001B204(2, 0x73, 0x8A, D_801CF050, 6);
    func_8001B204(3, 0x73, 0x94, D_801CF060, 2);
    func_8001B204(4, 0x73, 0x9E, D_801CF074, 6);
done:
    func_8001B204(5, 0x73, 0xA8, D_801CF07C);
    func_8001B204(6, 0, 0, D_801CF084);
    func_800058DC(arg0, func_801C5378);
}
