#include "common.h"
extern u8 D_801BCC25;
typedef struct func_801CC660_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CC660_Struct;
extern func_801CC660_Struct *D_801E4080;
typedef struct T_func_801CC9B0_ret_801CC9EC { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ u8 unk30; /* 6 uses */
    /* 0x031 */ u8 pad31[0x3];
    /* 0x034 */ u8 unk34; /* 7 uses */
    /* 0x035 */ u8 unk35; /* 7 uses */
    /* 0x036 */ u8 unk36; /* 7 uses */
    /* 0x037 */ u8 pad37[0x15];
    /* 0x04C */ u16 unk4C; /* 13 uses */
    /* 0x04E */ u16 unk4E; /* 4 uses */
} T_func_801CC9B0_ret_801CC9EC;
extern void func_800058DC(void *, void *);
void func_801CC6F0(void *arg0, s32 arg1);
void func_801CC830(u8 *arg0, s32 arg1);

extern void func_801CC260(void *, s32);
extern void func_801CC078(void *, s32);

#define OBJ ((T_func_801CC9B0_ret_801CC9EC *)D_801E4080)

void func_801CBEF8(void *arg0, s32 arg1)
{
    D_801E4080->unk4C = 0;
    D_801E4080->unk4E = 0;
    if (D_801BCC25 == 1) {
        switch (OBJ->unk30) {
        case 16:
        case 30:
            OBJ->unk34 = 0xFF;
            OBJ->unk35 = 0x40;
            OBJ->unk36 = 0;
            break;
        case 17:
        case 31:
            OBJ->unk34 = 0;
            OBJ->unk35 = 0x80;
            OBJ->unk36 = 0xFF;
            break;
        case 18:
        case 32:
            OBJ->unk34 = 0xFF;
            OBJ->unk35 = 0xFF;
            OBJ->unk36 = 0;
            break;
        default:
            OBJ->unk34 = 0xFF;
            OBJ->unk35 = 0xFF;
            OBJ->unk36 = 0xFF;
            break;
        }
        switch (OBJ->unk30) {
        case 16:
        case 17:
        case 18:
            func_800058DC(arg0, func_801CC6F0);
            break;
        case 30:
        case 31:
        case 32:
            D_801E4080->unk4C = 2;
            func_800058DC(arg0, func_801CC830);
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            D_801E4080->unk4C = 2;
            func_800058DC(arg0, func_801CC260);
            break;
        case 1:
        default:
            func_800058DC(arg0, func_801CC078);
            break;
        }
    }
}
