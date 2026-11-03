#ifndef TYPES_FILE037_H
#define TYPES_FILE037_H

/* Recovered types for file037 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E6934; 2 functions */
typedef struct T_D_801E6934_file037 { /* size >= 0x4 */
    /* 0x000 */ s32 unk0; /* 4 uses; also s8@0x3 */
} T_D_801E6934_file037;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file037 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x8];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8038DF70_file037;

/* func_801DAAF0; 16 functions */
typedef struct T_func_801DAAF0_file037 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 44 uses */
} T_func_801DAAF0_file037;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file037 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file037;

/* func_8038D830; 1 functions */
typedef struct T_func_8038D830_file037 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ struct T_func_80107830_a0 *unk20; /* 3 uses */
    /* 0x024 */ struct T_func_8038D830_file037_p24_p0 **unk24; /* 8 uses */
} T_func_8038D830_file037;

/* pointed to by T_func_8038D830_file037_p24.0x0; 1 functions */
typedef struct T_func_8038D830_file037_p24_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038D830_file037_p24_p0_p2C *unk2C; /* 8 uses */
} T_func_8038D830_file037_p24_p0;

/* pointed to by T_func_8038D830_file037_p24_p0.0x2C; 1 functions */
typedef struct T_func_8038D830_file037_p24_p0_p2C { /* size >= 0x34 */
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
    /* 0x024 */ u8 pad24[0xC];
    /* 0x030 */ void *unk30; /* 1 use */
} T_func_8038D830_file037_p24_p0_p2C;

/* func_8038D8B8; 2 functions */
typedef struct T_func_8038D8B8_file037 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 11 uses */
} T_func_8038D8B8_file037;

extern s32 D_801D8D60;
extern T_D_801E0A48_file026 D_801E0A48;
extern s32 D_801E68E0;
extern T_D_801E6934_file037 D_801E6934;
extern T_D_8016379C D_801E6978;
extern f32 D_801E69B0;
extern f32 D_801E69C4;
extern s32 D_801E69F8;
extern s32 D_801E69FC;
extern s32 D_801E6A58;
extern s32 D_801E6A5C;
extern f32 D_801E6A60;
extern u32 D_801E6AB8;
extern f32 D_801E6ABC;
extern f32 D_801E6B50;
extern f32 D_801E6B54;
extern f32 D_801E6B58;
extern f32 D_801E6B5C;
extern f32 D_801E6B60;
extern f32 D_801E6B64;
extern f32 D_801E6B68;
extern f32 D_801E6B6C;
extern f32 D_801E6B70;
extern f32 D_801E6B74;
extern f32 D_801E6B78;
extern f32 D_801E6B7C;
extern f32 D_801E6B80;
extern f32 D_801E6B84;
extern f32 D_801E6B88;
extern f32 D_801E6B8C;
extern f32 D_801E6B90;
extern f32 D_801E6B94;
extern f32 D_801E6B98;
extern f32 D_801E6B9C;
extern f32 D_801E6BA0;
extern f32 D_801E6BA4;
extern f32 D_801E6BA8;
extern f32 D_801E6BAC;
extern f32 D_801E6BB0;
extern f32 D_801E6BB4;
extern f32 D_801E6BB8;
extern f32 D_801E6BBC;
extern f32 D_801E6BC0;
extern f32 D_801E6BC4;
extern f32 D_801E6BC8;
extern f32 D_801E6BCC;
extern f32 D_801E6BD0;
extern f32 D_801E6BD4;
extern f32 D_801E6BD8;
extern f32 D_801E6BDC;
extern f32 D_801E6BE0;
extern f32 D_801E6BE4;
extern f32 D_801E6BE8;
extern f32 D_801E6BEC;
extern f32 D_801E6BF0;
extern f32 D_801E6BF4;
extern f32 D_801E6BF8;
extern f32 D_801E6BFC;
extern f32 D_801E6C00;
extern f32 D_801E6C04;
extern f32 D_801E6C08;
extern f32 D_801E6C0C;
extern f32 D_801E6C10;
extern f32 D_801E6C14;
extern f32 D_801E6C18;
extern f32 D_801E6C1C;
extern f32 D_801E6C20;
extern f32 D_801E6C24;
extern f32 D_801E6C28;
extern f32 D_801E6C2C;
extern f32 D_801E6C30;
extern f32 D_801E6C34;
extern f32 D_801E6C38;
extern f32 D_801E6C3C;
extern f32 D_801E6C40;
extern f32 D_801E6C44;
extern f32 D_801E6C48;
extern f32 D_801E6C4C;
extern f32 D_801E6C50;
extern f32 D_801E6C54;
extern f32 D_801E6C58;
extern f32 D_801E6C5C;
extern f32 D_801E6C60;
extern f32 D_801E6C64;
extern f32 D_801E6C68;
extern f32 D_801E6C6C;
extern f32 D_801E6C70;
extern f32 D_801E6C74;
extern f32 D_801E6C78;
extern f32 D_801E6C7C;
extern f32 D_801E6C80;
extern f32 D_801E6C84;
extern f32 D_801E6C88;
extern f32 D_801E6C8C;
extern f32 D_801E6C90;
extern f32 D_801E6C94;
extern f32 D_801E6C98;
extern f32 D_801E6C9C;
extern f32 D_801E6CA0;
extern f32 D_801E6CA4;
extern f32 D_801E6CA8;
extern f32 D_801E6CAC;
extern f32 D_801E6CB0;
extern f32 D_801E6CB4;
extern f32 D_801E6CB8;
extern f32 D_801E6CBC;
extern f32 D_801E6CC0;
extern f32 D_801E6CC4;
extern f32 D_801E6CC8;
extern f32 D_801E6CCC;
extern f32 D_801E6CD0;
extern f32 D_801E6CD4;
extern f32 D_801E6CD8;
extern f32 D_801E6CDC;
extern f32 D_801E6CE0;
extern f32 D_801E6CE4;
extern f32 D_801E6CE8;
extern f32 D_801E6CEC;
extern f32 D_801E6CF0;
extern f32 D_801E6CF4;
extern f32 D_801E6CF8;
extern f32 D_801E6CFC;
extern f32 D_801E6D00;
extern f32 D_801E6D04;
extern f32 D_801E6D08;
extern f32 D_801E6D0C;
extern f32 D_801E6D10;
extern f32 D_801E6D14;
extern f32 D_801E6D18;
extern f32 D_801E6D1C;
extern f32 D_801E6D20;
extern f32 D_801E6D24;
extern f32 D_801E6D28;
extern f32 D_801E6D2C;
extern f32 D_801E6D30;
extern f32 D_801E6D34;
extern f32 D_801E6D38;
extern f32 D_801E6D3C;
extern f32 D_801E6D40;
extern f32 D_801E6D44;
extern f32 D_801E6D48;
extern f32 D_801E6D4C;
extern f32 D_801E6D50;
extern f32 D_801E6D54;
extern f32 D_801E6D58;
extern f32 D_801E6D5C;
extern f32 D_801E6D60;
extern f32 D_801E6D64;
extern f32 D_801E6D68;
extern f32 D_801E6D6C;
extern f64 D_801E6D70;
extern f64 D_801E6D78;
extern f64 D_801E6D80;
extern f64 D_801E6D88;
extern f32 D_801E6D90;
extern f32 D_801E6D94;
extern f64 D_801E6D98;
extern f64 D_801E6DA0;
extern f32 D_801E6DA8;
extern f32 D_801E6DAC;
extern f32 D_801E6DB0;
extern f32 D_801E6DB4;
extern f64 D_801E6DB8;
extern f64 D_801E6DC0;
extern f64 D_801E6E08;
extern s32 D_801E6E10;
extern s32 D_801E6E14;
extern s32 D_801E6E18;
extern s32 D_801E6E1C;
extern s32 D_801E6E20;
extern s32 D_801E6E24;
extern s32 D_801E6E28;
extern s32 D_801E6E38;
extern s32 D_801E6E3C;
extern s32 D_801E6E40;
extern s32 D_801E6E44;
extern s32 D_801E6E48;
extern s32 D_801E6E4C;
extern f32 D_801E6E50;
extern f32 D_801E6E54;
extern f32 D_801E6E58;
extern f32 D_801E6E60;
extern f32 D_801E6E64;
extern f32 D_801E6E68;
extern f32 D_801E6E70;
extern f32 D_801E6E74;
extern f32 D_801E6E78;
extern f32 D_801E6E80;
extern f32 D_801E6E84;
extern f32 D_801E6E88;
extern f32 D_801E6E90;
extern f32 D_801E6E94;
extern f32 D_801E6E98;
extern f32 D_801E6EA0;
extern f32 D_801E6EA4;
extern f32 D_801E6EA8;
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_801E0A48_file026 D_8038DDC0;
extern T_D_8038DF70_file037 D_8038DF70;

#endif
