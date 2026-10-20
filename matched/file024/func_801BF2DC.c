#include "context.h"

extern u8 D_8008D5AC[];
extern u8 D_801CE700[];
extern u8 D_801CE70C[];
extern u8 D_801CE728[];
extern u8 D_801CE744[];
extern u8 D_801CE760[];
extern u8 D_801CE77C[];
extern u8 D_801CE798[];
extern u8 D_801CE7B4[];
extern u8 D_801CE7D4[];
extern u8 D_801CE7E4[];
extern u8 D_801CE7F4[];
extern u8 D_801CE800[];
extern u8 D_801CE80C[];
extern u8 D_801CE818[];
extern u8 D_801CE824[];
extern u8 D_801CE830[];
extern u8 D_801CE83C[];
extern u8 D_801CE848[];
extern u8 D_801CE854[];
extern u8 D_801CE860[];
extern u8 D_801CE86C[];
extern u8 D_801CE878[];
extern u8 D_801CE884[];
extern u8 D_801CE890[];
extern u8 D_801CE89C[];
extern void func_801BF630();
extern void func_8001B204();
extern void func_800058DC(s32, void *);
extern void func_80002364(s32, s32, s32, s32);
extern u16 *D_801CFCF0;

void func_801BF2DC(s32 arg0, s32 arg1) {
    D_801CFCF0 = (u16 *)(arg0 + 0x90);
    if (D_8008D5AC[2] == 1) {
        func_8001B204(0, 0x8C, 0x50, D_801CE700);
        func_8001B204(2, 0x80, 0x60, D_801CE70C, 3, 2);
        func_8001B204(4, 0x80, 0x6C, D_801CE728, 3, 2);
        func_8001B204(6, 0x80, 0x78, D_801CE744, 3, 2);
        func_8001B204(8, 0x80, 0x84, D_801CE760, 3, 2);
        func_8001B204(0xA, 0x80, 0x90, D_801CE77C, 3, 2);
        func_8001B204(0xC, 0x80, 0x9C, D_801CE798, 3, 2);
        func_8001B204(0xD, 0x80, 0xA8, D_801CE7B4, 3, 2);
    } else {
        func_8001B204(0, 0x7D0, 0x19, D_801CE7D4, 2);
        func_8001B204(2, 0x74, 0x2C, D_801CE7E4);
        func_8001B204(3, 0x74, 0x3E, D_801CE7F4);
        func_8001B204(4, 0x74, 0x46, D_801CE800);
        func_8001B204(5, 0x74, 0x4E, D_801CE80C);
        func_8001B204(6, 0x74, 0x56, D_801CE818);
        func_8001B204(7, 0x74, 0x5E, D_801CE824);
        func_8001B204(8, 0x74, 0x66, D_801CE830);
        func_8001B204(9, 0x74, 0x6E, D_801CE83C);
        func_8001B204(0xA, 0x74, 0x76, D_801CE848);
        func_8001B204(0xB, 0x74, 0x7E, D_801CE854);
        func_8001B204(0xC, 0x74, 0x86, D_801CE860);
        func_8001B204(0xD, 0x74, 0x8E, D_801CE86C);
        func_8001B204(0xE, 0x74, 0x9E, D_801CE878);
        func_8001B204(0xF, 0x74, 0xA6, D_801CE884);
        func_8001B204(0x10, 0x74, 0xAE, D_801CE890);
        func_8001B204(0x11, 0x74, 0xBE, D_801CE89C);
    }
    D_801CFCF0[0] = 0;
    D_801CFCF0[1] = 0;
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800058DC(arg0, func_801BF630);
}
