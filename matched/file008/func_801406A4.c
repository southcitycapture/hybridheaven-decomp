#include "common.h"
extern u16 D_80089474[];
extern u16 D_801BBF42;
extern u8 D_801BEB84[];
extern u8 D_801BEBAC[];
extern s8 D_801BEBCC;
extern u8 D_801BEBDC[];
extern u8 D_801BEBFF;
extern u8 D_801BEC00;
extern u8 D_801BEC01;
extern s8 D_801BEC02;
extern s8 D_801BEC03;
extern s8 D_801BEC04;
extern s8 D_801BEC05;
s32 func_800178E8();                                /* extern */
extern void func_80017990(void *);
extern void func_8001B204();
void func_80140E88(u8 arg0, u8 arg1, s32 arg2);
void func_80140FC8(u8 arg0, s32 arg1, s32 arg2);
s32 func_8014150C(u8 arg0, u8 *arg1);
extern void func_80142B28(u8, u8);
extern void func_8014307C(s32 a0, s32 a1, void *p);
extern void func_801439C0(s32 a0, s32 a1, void *a2);
extern s32 func_80143B5C(void);


#define D_801BEBCC (*(u8 *)&D_801BEBCC)
#define D_801BEC02 (*(u8 *)&D_801BEC02)
#define D_801BEC03 (*(u8 *)&D_801BEC03)
#define D_801BEC04 (*(u8 *)&D_801BEC04)
#define D_801BEC05 (*(u8 *)&D_801BEC05)
extern void func_80142F2C(s32);
extern s32 func_8001A804();
extern s32 D_8014168C(u8, u8, u8, u8);
extern u16 D_80089494;
extern u16 D_801BBF44;
extern u8 D_801BEBFE;
extern u8 D_80180BA8[];
extern u8 D_80180B54[];
extern u8 D_80181214[];
extern u8 D_80180DD8[];
extern u8 D_80180E80[];
extern u8 D_80180F28[];
extern u8 D_80180F94[];
extern u8 D_80181010[];
extern u8 D_801810D4[];
extern u8 D_8018110C[];
extern u8 D_80181150[];
extern u8 *D_801812E8[];
extern u8 D_8018ED54[];
extern u8 D_8018ED7C[];
extern u8 D_8018EDA4[];
extern u8 D_8018EDCC[];
extern u8 D_8018EE08[];
extern u8 D_8018EE44[];
extern u8 D_8018EE80[];
extern u8 D_8018EEBC[];
extern u8 D_8018EEE4[];

s32 func_801406A4(void)
{
    if (func_800178E8() == 0) {
        return 0;
    }
    if ((u8)D_801BEC03 == 1) {
        func_80142F2C(0);
        if (func_80143B5C() != 0) {
            D_801BEC03 = 0;
        }
        return 0;
    }
    if (D_801BEBFF == 1) {
        func_80142F2C(1);
        if (func_80143B5C() != 0) {
            D_801BEBFF = 0;
        }
        return 0;
    }
    switch (*(u8 *)&D_801BEBCC) {
    case 0:
        D_801BEC04 = 0;
        D_801BEC05 = 0;
        D_801BEC00 = 0;
        D_801BEC01 = 0;
        if (D_80089494 == 1) {
            func_80017990(D_80180BA8);
        } else {
            func_80017990(D_80180B54);
        }
        D_801BEBCC = 1;
        break;
    case 1:
        func_8014150C(1, D_801BEB84);
        func_8014150C(2, D_801BEBAC);
        switch (D_801BBF42) {
        default:
            return 0;
        case 0:
            func_80017990(D_80181214);
            D_801BEBCC = 9;
            break;
        case 1:
            D_801BEC02 = 0;
            D_801BEBFE = 0;
            D_801BEBCC = 4;
            break;
        case 2:
            D_801BEC02 = 1;
            D_801BEBFE = 1;
            D_801BEBCC = 4;
            break;
        case 3:
            func_8014307C(0, 0, D_801BEBDC);
            func_8014307C(1, 0, D_801BEBDC);
            func_80017990(D_80180DD8);
            func_8001A804(9, D_8018ED54, 0xA6, 0x42, 0x7A, 0x5C, 0, 0, 0, 0, 0x80, 0, 0, 0, 0);
            D_801BEBCC = 2;
            break;
        }
        break;
    case 2:
        if (D_80089474[2] & 0xB000) {
            D_801BEC02 = (u8)D_801BEC05;
            func_80017990(D_80180E80);
            func_8001A804(9, D_8018ED7C, 0x20, 0x42, 0x7A, 0x5C, 0, 0, 0, 0, 0x80, 0, 0, 0, 0);
            D_801BEBCC = 3;
        }
        func_80140E88(0, 2, (s32)D_801BEBDC);
        func_80142B28(0, D_801BEC04);
        return 0;
    case 3:
        if (D_80089474[2] & 0xB000) {
            D_801BEBFE = D_801BEC01;
            D_801BEBCC = 4;
        }
        func_80140FC8(0, 2, (s32)D_801BEBDC);
        func_80142B28(1, D_801BEC00);
        return 0;
    case 4:
        D_801BEC04 = 0;
        D_801BEC05 = 0;
        D_801BEC00 = 0;
        D_801BEC01 = 0;
        func_8014307C(0, 0, D_801812E8[(u8)D_801BEC02]);
        func_8014307C(1, 0, D_801812E8[D_801BEBFE]);
        func_80017990(D_80180F28);
        func_8001A804(9, D_8018EDA4, 0xA6, 0x42, 0x7A, 0x5C, 0, 0, 0, 0, 0x80, 0, 0, 0, 0);
        if (D_801BEC02 == 0 && D_801BEBFE == 0) {
            func_8001B204(0xB, 0x26, 0x30, D_8018EDCC, 1, 0, 1, 0);
        }
        if (D_801BEC02 == 0 && D_801BEBFE == 1) {
            func_8001B204(0xB, 0x26, 0x30, D_8018EE08, 1, 0, 1, 0);
        }
        if (D_801BEC02 == 1 && D_801BEBFE == 0) {
            func_8001B204(0xB, 0x26, 0x30, D_8018EE44, 1, 0, 1, 0);
        }
        if (D_801BEC02 == 1 && D_801BEBFE == 1) {
            func_8001B204(0xB, 0x26, 0x30, D_8018EE80, 1, 0, 1, 0);
        }
        D_801BEBCC = 5;
        break;
    case 5:
        if (D_80089474[2] & 0xB000) {
            func_80017990(D_80180F94);
            func_8001A804(9, D_8018EEBC, 0x20, 0x42, 0x7A, 0x5C, 0, 0, 0, 0, 0x80, 0, 0, 0, 0);
            D_801BEBCC = 6;
        }
        func_80140E88(0, 4, (s32)D_801812E8[(u8)D_801BEC02]);
        func_80142B28(0, D_801BEC04);
        return 0;
    case 6:
        if (D_80089474[2] & 0xB000) {
            func_80017990(D_80181010);
            func_8001A804(9, D_8018EEE4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            D_801BEBCC = 7;
        }
        func_80140FC8(0, 4, (s32)D_801812E8[D_801BEBFE]);
        func_80142B28(1, D_801BEC00);
        return 0;
    case 7:
        if (D_801BBF44 == 0) {
            if (D_8014168C((u8)(D_801BEC02 + 1), (u8)(D_801BEBFE + 1), (u8)D_801BEC05, D_801BEC01) == 0 &&
                func_8014150C(D_801BEBFE + 1, D_801812E8[D_801BEBFE]) == 0) {
                func_801439C0(1, 1, D_801812E8[D_801BEBFE] + (D_801BEC01 - D_801BEC00) * 8);
                func_80017990(D_801810D4);
            } else {
                func_80017990(D_8018110C);
            }
        } else {
            func_80017990(D_80181150);
        }
        D_801BEBCC = 8;
        break;
    case 8:
        if (D_801BBF44 == 0) {
            D_801BEBCC = 9;
        } else {
            D_801BEBCC = 0;
        }
        break;
    case 9:
        return 1;
    }
    return 0;
}
