#include "common.h"
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001B204();
extern void func_8014456C(s32 a0, s16 a1, s16 a2, u8 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);


extern u8 D_8018F49C[];
extern u8 D_8018F4A0[];
extern u8 D_8018F4A4[];
extern u8 D_8018F4B4[];
extern u8 D_8018F4C4[];
extern u8 D_8018F4C8[];
extern u8 D_8018F4CC[];
extern u8 D_8018F4D0[];
extern u8 D_8018F4E0[];
extern u8 D_8018F4F0[];
extern u8 D_8018F4F4[];
extern u8 D_8018F4F8[];
extern u8 D_8018F4FC[];
extern u8 D_8018F50C[];
extern u8 D_8018F51C[];
extern u8 D_8018F520[];
extern u8 D_8018F524[];
extern u8 D_8018F528[];
extern u8 D_8018F538[];
extern u8 D_8018F548[];
extern u8 D_8018F54C[];
extern u8 D_8018F550[];
extern u8 D_8018F554[];
extern u8 D_8018F564[];
extern u8 D_8018F574[];
extern u8 D_8018F578[];
extern u8 D_8018F57C[];
extern u8 D_8018F580[];
extern u8 D_8018F590[];
extern u8 D_8018F5A0[];
extern u8 D_8018F5A4[];
extern u8 D_8018F5A8[];
extern u8 D_8018F5AC[];
extern u8 D_8018F5BC[];
extern u8 D_8018F5CC[];
extern u8 D_8018F5D0[];
extern u8 D_8018F5D4[];
extern u8 D_8018F5D8[];
extern u8 D_8018F5E8[];
extern u8 D_8018F5F8[];
extern u8 D_8018F5FC[];
extern u8 D_8018F600[];
extern u8 D_8018F604[];
extern u8 D_8018F614[];

typedef struct func_8014307C_StructE {
    u8 p0;
    u8 a;
    u8 p2;
    u8 b;
    s16 c;
    u16 d;
    u16 e;
} func_8014307C_StructE;
typedef struct func_8014307C_Struct {
    func_8014307C_StructE e[2];
} func_8014307C_Struct;
extern func_8014307C_Struct D_801814B8;

void func_8014307C(u8 arg0, u8 arg1, u8 *arg2) {
extern void func_8001A804();
    s32 i;
    func_8014307C_Struct sp50;
    func_8014307C_StructE *p;

    sp50 = D_801814B8;
    p = &sp50.e[arg0 & 1];
    for (i = 0; i < 3; i++) {
        func_8001B204((u8)(p->d + i), 0, 0, D_8018F49C);
        func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F4A0);
    }
    func_8001A804(p->a, D_8018F4A4, 0, 0, 0, 0, 0);
    func_8001A804(p->b, D_8018F4B4, 0, 0, 0, 0, 0);
    switch (arg1) {
    case 0:
        func_8014456C(p->a, p->c, 0x48, arg2[0], arg2[2], arg2[3], *(u16 *)(arg2 + 4), arg2[6], arg2[7]);
        func_8014456C(p->b, p->c, 0x76, arg2[8], arg2[10], arg2[11], *(u16 *)(arg2 + 12), arg2[14], arg2[15]);
        break;
    case 1:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, D_8018F4C4, 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, D_8018F4C8);
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F4CC);
        }
        func_8001A804(p->a, D_8018F4D0, 0, 0, 0, 0, 0);
        func_8001A804(p->b, D_8018F4E0, 0, 0, 0, 0, 0);
        break;
    case 3:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, D_8018F4F0, 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, D_8018F4F4);
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F4F8);
        }
        func_8001A804(p->a, D_8018F4FC, 0, 0, 0, 0, 0);
        func_8001A804(p->b, D_8018F50C, 0, 0, 0, 0, 0);
        break;
    case 15:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, D_8018F51C, 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, D_8018F520);
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F524);
        }
        func_8001A804(p->a, D_8018F528, 0, 0, 0, 0, 0);
        func_8001A804(p->b, D_8018F538, 0, 0, 0, 0, 0);
        break;
    case 4:
    case 5:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, D_8018F548, 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, D_8018F54C);
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F550);
        }
        func_8001A804(p->a, D_8018F554, 0, 0, 0, 0, 0);
        func_8001A804(p->b, D_8018F564, 0, 0, 0, 0, 0);
        break;
    case 7:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, D_8018F574, 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, D_8018F578);
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F57C);
        }
        func_8001A804(p->a, D_8018F580, 0, 0, 0, 0, 0);
        func_8001A804(p->b, D_8018F590, 0, 0, 0, 0, 0);
        break;
    case 9:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, D_8018F5A0, 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, D_8018F5A4);
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F5A8);
        }
        func_8001A804(p->a, D_8018F5AC, 0, 0, 0, 0, 0);
        func_8001A804(p->b, D_8018F5BC, 0, 0, 0, 0, 0);
        break;
    case 14:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, D_8018F5CC, 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, D_8018F5D0);
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F5D4);
        }
        func_8001A804(p->a, D_8018F5D8, 0, 0, 0, 0, 0);
        func_8001A804(p->b, D_8018F5E8, 0, 0, 0, 0, 0);
        break;
    case 0xFD:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, D_8018F5F8, 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, D_8018F5FC);
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, D_8018F600);
        }
        func_8001A804(p->a, D_8018F604, 0, 0, 0, 0, 0);
        func_8001A804(p->b, D_8018F614, 0, 0, 0, 0, 0);
        break;
    }
}
