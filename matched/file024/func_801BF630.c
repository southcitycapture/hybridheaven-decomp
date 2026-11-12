#include "common.h"
typedef struct func_801BF288_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801BF288_Struct;
extern func_801BF288_Struct D_800892B0;
extern u16 *D_801CFCF0;
extern void func_8001B204();


typedef struct func_801BF630_StructInput {
    u8 pad[0x1C8];
    u16 buttons;
    u8 pad2[6];
    u16 repeat;
    u8 pad3[0x42FE - 0x1D2];
    u8 mode;
} func_801BF630_StructInput;
typedef struct func_801BF630_StructState {
    u8 pad[4];
    u16 selection;
    u8 pad2[0xF6 - 6];
    u8 flag;
} func_801BF630_StructState;
extern func_801BF630_StructState D_801BBBF0;
extern void func_8012FE50(s32, u16, s32, s32, s32);
extern void func_80152230(s32, s32);
extern u8 D_801CE8A8[];
extern u8 D_801CE8B0[];
extern u8 D_801CE8B8[];
extern u8 D_801CE8C0[];
extern u8 D_801CE8C8[];
extern u8 D_801CE8D0[];
extern u8 D_801CE8D8[];
extern u8 D_801CE8E0[];
extern u8 D_801CE8E8[];
extern u8 D_801CE8F0[];
extern u8 D_801CE8F8[];
extern u8 D_801CE900[];
extern u8 D_801CE908[];
extern u8 D_801CE910[];
extern u8 D_801CE918[];
extern u8 D_801CE920[];
extern u8 D_801CE928[];
typedef struct func_801BF630_Menu {
    u16 count;
    u16 selection;
} func_801BF630_Menu;
#define MENU (*(func_801BF630_Menu *)D_801CFCF0)
#define INPUT (*(func_801BF630_StructInput *)&D_800892B0)

void func_801BF630(s32 arg0, s32 arg1) {
    if ((INPUT.buttons & 0x808) || (INPUT.repeat & 0x800)) {
        if (INPUT.mode == 1) {
            if (MENU.selection == 0) MENU.selection = 6;
            else MENU.selection--;
        } else {
            if (MENU.selection == 0) MENU.selection = 16;
            else MENU.selection--;
        }
        MENU.count = 0;
    }
    if ((INPUT.buttons & 0x404) || (INPUT.repeat & 0x400)) {
        if (INPUT.mode == 1) {
            if (MENU.selection == 6) MENU.selection = 0;
            else MENU.selection++;
        } else {
            if (MENU.selection == 16) MENU.selection = 0;
            else MENU.selection++;
        }
        MENU.count = 0;
    }
    if (INPUT.mode == 1) {
        func_8001B204(1U, 100, (s16)(MENU.selection * 12 + 96), D_801CE8A8, 1);
    } else {
    switch (MENU.selection) {
    case 0: func_8001B204(1U,106,0x2C,D_801CE8B0,5,2); break;
    case 1: func_8001B204(1U,106,0x3E,D_801CE8B8,5,2); break;
    case 2: func_8001B204(1U,106,0x46,D_801CE8C0,5,2); break;
    case 3: func_8001B204(1U,106,0x4E,D_801CE8C8,5,2); break;
    case 4: func_8001B204(1U,106,0x56,D_801CE8D0,5,2); break;
    case 5: func_8001B204(1U,106,0x5E,D_801CE8D8,5,2); break;
    case 6: func_8001B204(1U,106,0x66,D_801CE8E0,5,2); break;
    case 7: func_8001B204(1U,106,0x6E,D_801CE8E8,5,2); break;
    case 8: func_8001B204(1U,106,0x76,D_801CE8F0,5,2); break;
    case 9: func_8001B204(1U,106,0x7E,D_801CE8F8,5,2); break;
    case 10: func_8001B204(1U,106,0x86,D_801CE900,5,2); break;
    case 11: func_8001B204(1U,106,0x8E,D_801CE908,5,2); break;
    case 12: func_8001B204(1U,106,0x9E,D_801CE910,5,2); break;
    case 13: func_8001B204(1U,106,0xA6,D_801CE918,5,2); break;
    case 14: func_8001B204(1U,106,0xAE,D_801CE920,5,2); break;
    case 15: func_8001B204(1U,106,0xBE,D_801CE928,5,2); break;
    }
    }
    if (INPUT.buttons & 0xF000) {
        if (INPUT.mode == 1) {
            if (MENU.selection != 6) {
                if (MENU.selection == 0) func_8012FE50(7,D_801BBBF0.selection,0,0,2);
                else func_8012FE50(7,D_801BBBF0.selection,0,0,0);
            } else func_8012FE50(20,190,0,0,0);
        } else if (MENU.selection == 0) {
            func_8012FE50(15,D_801BBBF0.selection,0,0,2);
        } else if (MENU.selection != 15) {
            func_80152230(MENU.selection,INPUT.mode);
            func_8012FE50(15,D_801BBBF0.selection,0,0,0);
        } else {
            func_8012FE50(20,190,0,0,0);
        }
    }
    if (INPUT.mode == 1) {
        switch (MENU.selection) {
        case 0: D_801BBBF0.selection = 0; break;
        case 1: D_801BBBF0.selection = 0x104; break;
        case 2: D_801BBBF0.selection = 0x8C; break;
        case 3: D_801BBBF0.selection = 0x6E; break;
        case 4: D_801BBBF0.selection = 0x82; break;
        case 5: D_801BBBF0.selection = 0x78; break;
        case 6: D_801BBBF0.selection = 0xC2; break;
        }
    } else {
        switch (MENU.selection) {
        case 0: D_801BBBF0.selection = 0x104; D_801BBBF0.flag = 0; break;
        case 1: D_801BBBF0.selection = 0; D_801BBBF0.flag = 0; break;
        case 2: D_801BBBF0.selection = 10; D_801BBBF0.flag = 0; break;
        case 3: D_801BBBF0.selection = 20; D_801BBBF0.flag = 0; break;
        case 4: D_801BBBF0.selection = 30; D_801BBBF0.flag = 0; break;
        case 5: D_801BBBF0.selection = 40; D_801BBBF0.flag = 0; break;
        case 6: D_801BBBF0.selection = 50; D_801BBBF0.flag = 0; break;
        case 7: D_801BBBF0.selection = 60; D_801BBBF0.flag = 0; break;
        case 8: D_801BBBF0.selection = 75; D_801BBBF0.flag = 0; break;
        case 9: D_801BBBF0.selection = 80; D_801BBBF0.flag = 0; break;
        case 10: D_801BBBF0.selection = 90; D_801BBBF0.flag = 0; break;
        case 11: D_801BBBF0.selection = 100; D_801BBBF0.flag = 0; break;
        case 12: D_801BBBF0.selection = 140; D_801BBBF0.flag = 0; break;
        case 13: D_801BBBF0.selection = 150; D_801BBBF0.flag = 0; break;
        case 14: D_801BBBF0.selection = 154; D_801BBBF0.flag = 0; break;
        case 15: D_801BBBF0.selection = 190; D_801BBBF0.flag = 0; break;
        }
    }
    MENU.count += 1;
}
