#ifndef TYPES_FILE047_H
#define TYPES_FILE047_H

/* Recovered types for file047 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* func_801DAAF0; 2 functions */
typedef struct T_func_801DAAF0_file047 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 5 uses */
} T_func_801DAAF0_file047;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file047 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file047;

/* func_8038D830; 1 functions */
typedef struct T_func_8038D830_file047 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ struct T_func_80107830_a0 *unk20; /* 3 uses */
    /* 0x024 */ struct T_func_8038D830_file047_p24_p0 **unk24; /* 8 uses */
} T_func_8038D830_file047;

/* pointed to by T_func_8038D830_file047_p24.0x0; 1 functions */
typedef struct T_func_8038D830_file047_p24_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038D830_file047_p24_p0_p2C *unk2C; /* 8 uses */
} T_func_8038D830_file047_p24_p0;

/* pointed to by T_func_8038D830_file047_p24_p0.0x2C; 1 functions */
typedef struct T_func_8038D830_file047_p24_p0_p2C { /* size >= 0x34 */
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
} T_func_8038D830_file047_p24_p0_p2C;

/* func_8038D8B8; 1 functions */
typedef struct T_func_8038D8B8_file047 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 11 uses */
} T_func_8038D8B8_file047;

extern s32 D_801D8D60;
extern T_D_801E0A48_file026 D_801E0A48;
extern s32 D_801E3C2C;
extern u32 D_801E3C30;
extern f32 D_801E3C34;
extern f32 D_801E3C38;
extern f32 D_801E3C3C;
extern s32 D_801E3C4C;
extern s32 D_801E3C50;
extern T_D_8016379C D_801E3CB4;
extern T_D_8016379C D_801E3CC4;
extern s32 D_801E3CE4;
extern s32 D_801E3CE8;
extern s32 D_801E3CFC;
extern s32 D_801E3D00;
extern s32 D_801E3D10;
extern s32 D_801E3D14;
extern s32 D_801E3D24;
extern s32 D_801E3D28;
extern s32 D_801E3D38;
extern s32 D_801E3D3C;
extern s32 D_801E3D40;
extern f32 D_801E3E00;
extern f32 D_801E3E04;
extern f32 D_801E3E08;
extern f32 D_801E3E0C;
extern f32 D_801E3E10;
extern f32 D_801E3E14;
extern f32 D_801E3E18;
extern f32 D_801E3E1C;
extern f32 D_801E3E40;
extern f32 D_801E3E44;
extern s32 D_801E3E50;
extern T_D_801E0A48_file026 D_8038DD90;

#endif
