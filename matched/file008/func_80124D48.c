#include "common.h"
typedef struct func_801237AC_Struct {
    u8 pad[0x92];
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801237AC_Struct;
extern struct func_801237AC_Struct D_800892B0;
extern s32 D_8008D5D4;
typedef struct func_80124C0C_Struct {
    u8 pad[0x164];
    u8 unk164;
    u8 pad2[0x3];
    s16 unk168;
    u8 pad3[0x13];
    u8 unk17D;
    u8 unk17E;
} func_80124C0C_Struct;
extern struct func_80124C0C_Struct D_801BBBF0;
typedef struct T_D_800892B0 { /* size >= 0x4304; compacted: the 2 of 83 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0xA4];
    /* 0x0A4 */ s16 unkA4; /* 15 uses */
    /* 0x0A6 */ s16 unkA6; /* 7 uses */
    /* 0x0A8 */ u8 padA8[0x425C];
} T_D_800892B0;
typedef struct T_D_801BBBF0 { /* size >= 0x1154; compacted: the 7 of 458 fields this function uses (full type: include/types/main.h) */
    /* 0x000 */ u8 pad0[0x17F];
    /* 0x17F */ u8 unk17F; /* 7 uses */
    /* 0x180 */ u8 pad180[0x226];
    /* 0x3A6 */ u8 unk3A6; /* 12 uses */
    /* 0x3A7 */ u8 unk3A7; /* 5 uses */
    /* 0x3A8 */ f32 unk3A8; /* 4 uses */
    /* 0x3AC */ f32 unk3AC; /* 2 uses */
    /* 0x3B0 */ f32 unk3B0; /* 4 uses */
    /* 0x3B4 */ f32 unk3B4; /* 2 uses */
    /* 0x3B8 */ u8 pad3B8[0xD9C];
} T_D_801BBBF0;
extern s32 func_80005624(void *);
extern void func_800058DC(s32, void *);
void func_801235D0(s32 arg0, s32 arg1);
void func_801237AC(s32 arg0, s32 arg1);
void func_80123BF0(s32 arg0, s32 arg1);
extern void func_8014B8DC(void);
extern void func_80002BAC(u8);
extern void func_80005700(s32);
extern void func_800057DC(s32, void *);
extern void func_80123934(s32, s32);
extern u8 D_80164E58[];
extern u8 D_80162FC0[];

#define P ((T_D_801BBBF0 *)&D_801BBBF0)
#define Q ((T_D_800892B0 *)&D_800892B0)

void func_80124D48(s32 arg0)
{
    s32 i;

    func_8014B8DC();
    i = 0;
    do {
        func_80002BAC(i);
        i++;
    } while (i != 4);
    if (P->unk17F == 1) {
        func_80005700(D_8008D5D4);
        D_8008D5D4 = func_80005624(D_80164E58);
        func_800058DC(arg0, func_80123BF0);
        return;
    }
    P->unk3A6 = 0;
    P->unk3A7 = 0;
    P->unk3A8 = 0.0f;
    P->unk3AC = 0.0f;
    P->unk3B0 = 0.0f;
    P->unk3B4 = 0.0f;
    switch (P->unk17F) {
    case 5:
        func_800058DC(arg0, func_801235D0);
        break;
    case 0:
        func_800058DC(arg0, func_80123934);
        break;
    case 3:
        Q->unkA6 = 0;
        Q->unkA4 = 0;
        func_800057DC(arg0, D_80162FC0);
        break;
    case 2:
        func_800058DC(arg0, func_801237AC);
        break;
    case 4:
        func_80005700(D_8008D5D4);
        D_8008D5D4 = func_80005624(D_80164E58);
        func_800058DC(arg0, func_80123BF0);
        break;
    }
}
