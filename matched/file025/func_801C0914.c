#include "common.h"
extern s16 D_801BBBF4;
typedef s32 (*func_801C0464_Fn)(s32, s32);
extern s32 D_801D8CE4;
extern s32 func_8012FE50(s32, u16, s32, s32, s32);
extern void (*D_801D8D28[])(void);


void func_801C0914(void) {
    switch (D_801D8CE4) {
    case 13:
    case 18:
    case 20:
    case 25:
    case 26:
        func_8012FE50(0xF, *(u16 *)&D_801BBBF4, 1, 6, 2);
        return;
    case 4:
    case 9:
    case 11:
    case 12:
    case 14:
    case 15:
    case 16:
    case 17:
    case 19:
    case 21:
    case 22:
    case 23:
    case 24:
    case 27:
        func_8012FE50(0xF, *(u16 *)&D_801BBBF4, 6, 6, 2);
        return;
    case 7:
        func_8012FE50(0xF, *(u16 *)&D_801BBBF4, 6, 6, 0);
        return;
    case 8:
        func_8012FE50(0x1D, *(u16 *)&D_801BBBF4, 6, 6, 2);
        return;
    default:
        func_8012FE50(0xF, *(u16 *)&D_801BBBF4, 1, 6, 2);
        return;
    }
}
