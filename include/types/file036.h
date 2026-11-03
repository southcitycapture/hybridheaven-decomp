#ifndef TYPES_FILE036_H
#define TYPES_FILE036_H

/* Recovered types for file036 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E5220; 2 functions */
typedef struct T_D_801E5220_file036 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801E5220_file036;

/* D_801E5230; 1 functions */
typedef struct T_D_801E5230_file036 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801E5230_file036;

/* D_801E5240; 2 functions */
typedef struct T_D_801E5240_file036 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801E5240_file036;

/* D_801E5250; 1 functions */
typedef struct T_D_801E5250_file036 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801E5250_file036;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file036 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x8];
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ u8 pad14[0x8];
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_8038DF70_file036;

/* func_801DAAF0; 4 functions */
typedef struct T_func_801DAAF0_file036 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 14 uses */
} T_func_801DAAF0_file036;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file036 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file036;

/* func_8038D830; 2 functions */
typedef struct T_func_8038D830_file036 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ struct T_func_80107830_a0 *unk20; /* 3 uses */
    /* 0x024 */ struct T_func_8038D830_file036_p24_p0 **unk24; /* 7 uses */
} T_func_8038D830_file036;

/* pointed to by T_func_8038D830_file036_p24.0x0; 1 functions */
typedef struct T_func_8038D830_file036_p24_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8038D830_file036_p24_p0_p30 *unk30; /* 7 uses */
} T_func_8038D830_file036_p24_p0;

/* pointed to by T_func_8038D830_file036_p24_p0.0x30; 1 functions */
typedef struct T_func_8038D830_file036_p24_p0_p30 { /* size >= 0x24 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ u8 pad14[0x4];
    /* 0x018 */ f32 unk18; /* 1 use */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
} T_func_8038D830_file036_p24_p0_p30;

/* func_8038D8B8; 2 functions */
typedef struct T_func_8038D8B8_file036 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 6 uses */
} T_func_8038D8B8_file036;

extern s32 D_801D8D60;
extern T_D_80162DD0 D_801DBA10;
extern T_D_801E0A48_file026 D_801E0A48;
extern s32 D_801E4CC4;
extern s32 D_801E4CC8;
extern s32 D_801E4D0C;
extern s32 D_801E4D10;
extern s32 D_801E4D14;
extern s32 D_801E4D18;
extern s32 D_801E4D44;
extern s32 D_801E4D48;
extern s32 D_801E4D70;
extern s32 D_801E4D74;
extern s32 D_801E4DB8;
extern f32 D_801E4F40;
extern f32 D_801E4F44;
extern f32 D_801E4F48;
extern f32 D_801E4F4C;
extern f32 D_801E4F50;
extern f32 D_801E4F54;
extern f32 D_801E4F58;
extern f32 D_801E4F5C;
extern f32 D_801E4F60;
extern f32 D_801E4F64;
extern f32 D_801E4F68;
extern f32 D_801E4F6C;
extern f32 D_801E4F70;
extern f32 D_801E4F74;
extern f32 D_801E4F78;
extern f32 D_801E4F7C;
extern f32 D_801E4F80;
extern f32 D_801E4F84;
extern f32 D_801E4F88;
extern f32 D_801E4F8C;
extern f32 D_801E4F90;
extern f32 D_801E4F94;
extern f32 D_801E4F98;
extern f32 D_801E4F9C;
extern f32 D_801E4FA0;
extern f32 D_801E4FA4;
extern f32 D_801E4FA8;
extern f32 D_801E4FAC;
extern f32 D_801E4FB0;
extern f32 D_801E4FB4;
extern f32 D_801E4FB8;
extern f32 D_801E4FBC;
extern f32 D_801E4FC0;
extern f32 D_801E4FC4;
extern f32 D_801E4FC8;
extern f32 D_801E4FCC;
extern f32 D_801E4FD0;
extern f32 D_801E4FD4;
extern f32 D_801E4FD8;
extern f32 D_801E4FDC;
extern f32 D_801E4FE0;
extern f32 D_801E4FE4;
extern f32 D_801E4FE8;
extern f32 D_801E4FEC;
extern f32 D_801E4FF0;
extern f32 D_801E4FF4;
extern f32 D_801E4FF8;
extern f32 D_801E4FFC;
extern f32 D_801E5000;
extern f32 D_801E5004;
extern f32 D_801E5008;
extern f32 D_801E500C;
extern f32 D_801E5010;
extern f32 D_801E5014;
extern f32 D_801E5018;
extern f32 D_801E501C;
extern f32 D_801E5020;
extern f32 D_801E5024;
extern f32 D_801E5028;
extern f32 D_801E502C;
extern f32 D_801E5030;
extern f32 D_801E5034;
extern f32 D_801E5038;
extern f32 D_801E503C;
extern f32 D_801E5040;
extern f32 D_801E5044;
extern f32 D_801E5048;
extern f32 D_801E504C;
extern f32 D_801E5050;
extern f32 D_801E5054;
extern f32 D_801E5058;
extern f32 D_801E505C;
extern f32 D_801E5060;
extern f32 D_801E5064;
extern f32 D_801E5068;
extern f32 D_801E506C;
extern f32 D_801E5070;
extern f32 D_801E5074;
extern f32 D_801E5078;
extern f32 D_801E507C;
extern f32 D_801E5080;
extern f32 D_801E5084;
extern f32 D_801E5088;
extern f32 D_801E508C;
extern f32 D_801E5090;
extern f32 D_801E5094;
extern f32 D_801E5098;
extern f32 D_801E509C;
extern f32 D_801E50A0;
extern f32 D_801E50A4;
extern f32 D_801E50A8;
extern f32 D_801E50AC;
extern f32 D_801E50B0;
extern f32 D_801E50B4;
extern f32 D_801E50B8;
extern f32 D_801E50BC;
extern f32 D_801E50C0;
extern f32 D_801E50C4;
extern f32 D_801E50C8;
extern f32 D_801E50CC;
extern f32 D_801E50D0;
extern f32 D_801E50D4;
extern f32 D_801E50D8;
extern f32 D_801E50DC;
extern f32 D_801E50E0;
extern f32 D_801E50E4;
extern f32 D_801E50E8;
extern f32 D_801E50EC;
extern f32 D_801E50F0;
extern f32 D_801E50F4;
extern f32 D_801E50F8;
extern f32 D_801E50FC;
extern f32 D_801E5100;
extern f32 D_801E5104;
extern f32 D_801E5108;
extern f32 D_801E510C;
extern f32 D_801E5110;
extern f32 D_801E5114;
extern f32 D_801E5118;
extern f32 D_801E511C;
extern f32 D_801E5120;
extern f32 D_801E5124;
extern f32 D_801E5128;
extern f32 D_801E512C;
extern f32 D_801E5130;
extern f32 D_801E5134;
extern f32 D_801E5138;
extern f32 D_801E513C;
extern f32 D_801E5140;
extern f32 D_801E5144;
extern f32 D_801E5148;
extern f32 D_801E514C;
extern f32 D_801E5150;
extern f32 D_801E5154;
extern f32 D_801E5158;
extern f32 D_801E515C;
extern f32 D_801E5160;
extern f32 D_801E5164;
extern f32 D_801E5168;
extern f32 D_801E516C;
extern f32 D_801E5170;
extern f32 D_801E5174;
extern f32 D_801E5178;
extern f32 D_801E517C;
extern f32 D_801E5180;
extern f32 D_801E5184;
extern f32 D_801E5188;
extern f32 D_801E518C;
extern f32 D_801E5190;
extern f32 D_801E5194;
extern f32 D_801E5198;
extern f32 D_801E519C;
extern f32 D_801E51A0;
extern f32 D_801E51A4;
extern f32 D_801E51A8;
extern f32 D_801E51AC;
extern f32 D_801E51B0;
extern f32 D_801E51B4;
extern f32 D_801E51B8;
extern f32 D_801E51BC;
extern f32 D_801E51C0;
extern f32 D_801E51C4;
extern f32 D_801E51C8;
extern f32 D_801E51CC;
extern f32 D_801E51D0;
extern f32 D_801E51D4;
extern f32 D_801E51D8;
extern f32 D_801E51DC;
extern f32 D_801E51E0;
extern f32 D_801E51E4;
extern f32 D_801E51E8;
extern f32 D_801E51EC;
extern f32 D_801E51F0;
extern f32 D_801E51F4;
extern f32 D_801E51F8;
extern f32 D_801E51FC;
extern T_D_801E5200_file036 D_801E5200;
extern T_D_801E5220_file036 D_801E5220;
extern T_D_801E5230_file036 D_801E5230;
extern T_D_801E5240_file036 D_801E5240;
extern T_D_801E5250_file036 D_801E5250;
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_8038DF70_file036 D_8038DF70;

#endif
