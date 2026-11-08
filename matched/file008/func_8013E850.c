#include "common.h"
extern u16 D_80089474[];
extern u16 D_801BBF42;
extern u8 D_801BEB84[];
extern s8 D_801BEBCC;
extern s8 D_801BEC03;
extern s8 D_801BEC04;
extern void func_800023A8(s32);
s32 func_800178E8();                                /* extern */
extern void func_80017990(void *);
void func_80140E88(u8 arg0, u8 arg1, s32 arg2);
s32 func_8014115C(void);
s32 func_801411D0(void);
s32 func_8014150C(u8 arg0, u8 *arg1);
extern void func_80142B28(u8, u8);
extern void func_80142FC4(void);
extern void func_8014307C(s32 a0, s32 a1, void *p);
extern s32 func_80143B5C(void);


extern u8 D_80180668[];
extern u8 D_80180598[];
extern u8 D_801806E4[];
extern u8 D_8018071C[];

s32 func_8013E850(void)
{
    u16 v;

    if (func_800178E8() == 0) return 0;
    if (*(u8 *)&D_801BEC03 == 1U) {
        func_80142FC4();
        if (func_80143B5C() != 0) D_801BEC03 = 0;
        return 0;
    }
    switch (*(u8 *)&D_801BEBCC) {
    case 0:
        if (D_801BBF42 == 0) {
            func_8014307C(0, (u8)func_8014150C(1, D_801BEB84), D_801BEB84);
            D_801BEBCC = 2;
        }
        if (D_801BBF42 == 2) D_801BEBCC = 1;
        break;
    case 1:
        func_800023A8(0);
        return 2;
    case 2:
        if (D_80089474[2] & 0xB000) {
            if (func_8014115C() != 0) {
                func_80017990(D_80180668);
            } else {
                D_801BEBCC = 3;
                func_80017990(D_80180598);
            }
        }
        func_80140E88(0, 4, (s32)D_801BEB84);
        func_80142B28(0, (u8)D_801BEC04);
        return 0;
    case 3:
        if (D_801BBF42 == 0) D_801BEBCC = 4;
        if (D_801BBF42 == 2) D_801BEBCC = 1;
        break;
    case 4:
        if (func_801411D0() == 0) {
            D_801BEBCC = 5;
            func_80017990(D_801806E4);
        } else {
            D_801BEBCC = 1;
            func_80017990(D_8018071C);
        }
        return 0;
    case 5:
        func_800023A8(0);
        return 1;
    }
    return 0;
}
