#ifndef TYPES_FILE031_H
#define TYPES_FILE031_H

/* Recovered types for file031 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E2C60; 1 functions */
typedef struct T_D_801E2C60_file031 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801E2C60_file031;

/* func_801DAAF0; 4 functions */
typedef struct T_func_801DAAF0_file031 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 15 uses */
} T_func_801DAAF0_file031;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file031 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file031;

/* func_8038D830; 1 functions */
typedef struct T_func_8038D830_file031 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x20];
    /* 0x020 */ struct T_func_80107830_a0 *unk20; /* 3 uses */
    /* 0x024 */ struct T_func_8038D830_file031_p24_p0 **unk24; /* 8 uses */
} T_func_8038D830_file031;

/* pointed to by T_func_8038D830_file031_p24.0x0; 1 functions */
typedef struct T_func_8038D830_file031_p24_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8038D830_file031_p24_p0_p2C *unk2C; /* 8 uses */
} T_func_8038D830_file031_p24_p0;

/* pointed to by T_func_8038D830_file031_p24_p0.0x2C; 1 functions */
typedef struct T_func_8038D830_file031_p24_p0_p2C { /* size >= 0x34 */
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
} T_func_8038D830_file031_p24_p0_p2C;

extern s32 D_801D8D60;
extern T_D_80162DD0 D_801DB300;
extern T_D_801E0A48_file026 D_801E0A48;
extern s32 D_801E2C00;
extern T_D_801E2C60_file031 D_801E2C60;
extern f32 D_801E2DF0;
extern f32 D_801E2DF4;
extern f32 D_801E2DF8;
extern f32 D_801E2DFC;
extern f32 D_801E2E00;
extern f32 D_801E2E04;
extern f32 D_801E2E08;
extern f32 D_801E2E0C;
extern f32 D_801E2E10;
extern f32 D_801E2E14;
extern f32 D_801E2E18;
extern f32 D_801E2E1C;
extern f32 D_801E2E20;

#endif
