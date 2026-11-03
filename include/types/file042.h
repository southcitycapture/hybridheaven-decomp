#ifndef TYPES_FILE042_H
#define TYPES_FILE042_H

/* Recovered types for file042 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E4E14; 2 functions */
typedef struct T_D_801E4E14_file042 { /* size >= 0x4 */
    /* 0x000 */ s32 unk0; /* 4 uses; also s8@0x3 */
} T_D_801E4E14_file042;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file042 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8038DF70_file042;

/* func_801DAAF0; 11 functions */
typedef struct T_func_801DAAF0_file042 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 34 uses */
} T_func_801DAAF0_file042;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file042 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file042;

/* func_8038D8B8; 1 functions */
typedef struct T_func_8038D8B8_file042 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 9 uses */
} T_func_8038D8B8_file042;

extern s32 D_801D8D60;
extern T_D_801E0A48_file026 D_801E0A48;
extern T_D_801E4E14_file042 D_801E4E14;
extern T_D_8016379C D_801E4E2C;
extern u32 D_801E4E70;
extern u32 D_801E4E9C;
extern u32 D_801E4EE0;
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
extern f64 D_801E5010;
extern f64 D_801E5018;
extern f64 D_801E5050;
extern f32 D_801E5058;
extern f32 D_801E5070;
extern f32 D_801E5074;
extern f32 D_801E5078;
extern f64 D_801E5080;
extern f32 D_801E5088;
extern f32 D_801E50A0;
extern f32 D_801E50A4;
extern f32 D_801E50A8;
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_801E0A48_file026 D_8038DDC0;
extern T_D_8038DF70_file042 D_8038DF70;

#endif
