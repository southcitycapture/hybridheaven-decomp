#include "context.h"
extern u16 D_8008EBC0;
extern u16 D_8008EBC2;
extern u16 D_8008EBCC;
extern s16 D_8008EBEC;
extern s32 D_8008EE78;
extern u8 D_8008EE81;
extern u8 D_8008EE82;
extern s8 D_8008EE83;
extern u8 D_801BBBF0[];

extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32);
extern void func_8001B204(s32, s32, s32, void *);
extern s16 D_8008EBDA;
extern s16 D_8008EBDC;
extern s16 D_8008EBDE;
extern s16 D_8008EBE0;
extern s16 D_8008EBE2;
extern s16 D_8008EBE4;
extern s16 D_8008EBE6;
extern s16 D_8008EBE8;
extern s16 D_8008EBEA;
extern s16 D_8008EBEE;
extern s16 D_8008EBF0;
extern s16 D_8008EBC4;
extern s16 D_8008EBC6;
extern s16 D_8008EBC8;
extern s16 D_8008EBCA;
extern s16 D_8008EBCE;
extern s16 D_8008EBD0;
extern s16 D_8008EBD2;
extern s16 D_8008EBD4;
extern s16 D_8008EBD6;
extern s16 D_8008EBD8;
extern s32 D_8008EE7C;
extern s8 D_8008EE80;
extern u8 D_8004CC80[];
extern u8 D_8004CC90[];

void func_800179B0(s32 arg0) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 < 7; var_s0++) {
        func_8001A804(var_s0 & 0xFF, D_8004CC80, 0, 0, 0, 0, 0);
    }
    for (var_s0 = 0; var_s0 != 0x1C; var_s0++) {
        func_8001B204(var_s0 & 0xFF, 0, 0, D_8004CC90);
    }
    D_8008EE78 = arg0;
    D_8008EE7C = 0;
    D_8008EE80 = 0;
    D_8008EE81 = 0;
    D_8008EE82 = 0;
    D_8008EE83 = 0;
    D_8008EBC0 = 0;
    D_8008EBC2 = 0;
    D_8008EBC4 = 0;
    D_8008EBC6 = 0;
    D_8008EBC8 = 0;
    D_8008EBCA = 0;
    D_8008EBCC = 0;
    D_8008EBCE = 0;
    D_8008EBD0 = 0;
    D_8008EBD2 = 0;
    D_8008EBD4 = 0x1E;
    D_8008EBD6 = 0xAB;
    D_8008EBD8 = 0x104;
    D_8008EBDA = 0x32;
    D_8008EBDC = 4;
    D_8008EBDE = 0x20;
    D_8008EBE0 = 0xAC;
    D_8008EBE2 = 0;
    D_8008EBE4 = 0x10;
    D_8008EBE6 = 4;
    D_8008EBE8 = 0;
    D_8008EBEA = 1;
    D_8008EBEC = 0;
    D_8008EBEE = 2;
    D_8008EBF0 = 0;
    *(s16 *)&D_801BBBF0[0x34E] = 0;
    *(s16 *)&D_801BBBF0[0x350] = 0;
}
