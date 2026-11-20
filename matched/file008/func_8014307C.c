#include "common.h"
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001B204();
extern void func_8014456C(s32 a0, s16 a1, s16 a2, u8 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);
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
        func_8001B204((u8)(p->d + i), 0, 0, "");
        func_8001B204((u8)(p->d + i + 4), 0, 0, "");
    }
    func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
    func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
    switch (arg1) {
    case 0:
        func_8014456C(p->a, p->c, 0x48, arg2[0], arg2[2], arg2[3], *(u16 *)(arg2 + 4), arg2[6], arg2[7]);
        func_8014456C(p->b, p->c, 0x76, arg2[8], arg2[10], arg2[11], *(u16 *)(arg2 + 12), arg2[14], arg2[15]);
        break;
    case 1:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, "%m", 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, "");
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, "");
        }
        func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        break;
    case 3:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, "%m", 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, "");
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, "");
        }
        func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        break;
    case 15:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, "%m", 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, "");
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, "");
        }
        func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        break;
    case 4:
    case 5:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, "%m", 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, "");
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, "");
        }
        func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        break;
    case 7:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, "%m", 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, "");
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, "");
        }
        func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        break;
    case 9:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, "%m", 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, "");
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, "");
        }
        func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        break;
    case 14:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, "%m", 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, "");
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, "");
        }
        func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        break;
    case 0xFD:
        func_8001B204((u8)p->d, (s16)(p->e + 1000), 0x6A, "%m", 4);
        for (i = 1; i < 3; i++) {
            func_8001B204((u8)(p->d + i), 0, 0, "");
        }
        for (i = 1; i != 3; i++) {
            func_8001B204((u8)(p->d + i + 4), 0, 0, "");
        }
        func_8001A804(p->a, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        func_8001A804(p->b, "sx sy sf wa fa", 0, 0, 0, 0, 0);
        break;
    }
}
