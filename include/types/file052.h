#ifndef TYPES_FILE052_H
#define TYPES_FILE052_H

/* Recovered types for file052 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* D_801E5738; 1 functions */
typedef struct T_D_801E5738_file052 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E5738_file052;

/* D_801E5748; 1 functions */
typedef struct T_D_801E5748_file052 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E5748_file052;

/* D_801E5758; 1 functions */
typedef struct T_D_801E5758_file052 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E5758_file052;

/* D_801E5768; 1 functions */
typedef struct T_D_801E5768_file052 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E5768_file052;

/* D_801E5778; 1 functions */
typedef struct T_D_801E5778_file052 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E5778_file052;

/* D_801E5788; 1 functions */
typedef struct T_D_801E5788_file052 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E5788_file052;

/* D_801E5798; 1 functions */
typedef struct T_D_801E5798_file052 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E5798_file052;

/* D_801E57A8; 1 functions */
typedef struct T_D_801E57A8_file052 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E57A8_file052;

/* D_801E5A80; 2 functions */
typedef struct T_D_801E5A80_file052 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801E5A80_file052;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file052 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x8];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8038DF70_file052;

/* func_801DAAF0; 8 functions */
typedef struct T_func_801DAAF0_file052 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_80089378 *unk24; /* 26 uses */
} T_func_801DAAF0_file052;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file052 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file052;

/* func_8038D8B8; 1 functions */
typedef struct T_func_8038D8B8_file052 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 21 uses */
} T_func_8038D8B8_file052;

extern s32 D_801D8D60;
extern T_D_80162DD0 D_801DBAC0;
extern T_D_80162DD0 D_801DBB60;
extern T_D_801E0A48_file026 D_801E0A48;
extern T_D_801E5738_file052 D_801E5738;
extern T_D_801E5748_file052 D_801E5748;
extern T_D_801E5758_file052 D_801E5758;
extern T_D_801E5768_file052 D_801E5768;
extern T_D_801E5778_file052 D_801E5778;
extern T_D_801E5788_file052 D_801E5788;
extern T_D_801E5798_file052 D_801E5798;
extern T_D_801E57A8_file052 D_801E57A8;
extern s32 D_801E57B8;
extern u32 D_801E57E8;
extern s32 D_801E57FC;
extern s32 D_801E5800;
extern s32 D_801E5804;
extern s32 D_801E5808;
extern s32 D_801E580C;
extern s32 D_801E5810;
extern f32 D_801E5814;
extern f32 D_801E5818;
extern f32 D_801E581C;
extern s32 D_801E583C;
extern f32 D_801E5930;
extern f32 D_801E5934;
extern f32 D_801E5938;
extern f32 D_801E593C;
extern f32 D_801E5940;
extern f32 D_801E5944;
extern f32 D_801E5948;
extern f32 D_801E594C;
extern f32 D_801E5950;
extern f32 D_801E5954;
extern f32 D_801E5958;
extern f32 D_801E595C;
extern f32 D_801E5960;
extern f32 D_801E5964;
extern f32 D_801E5968;
extern f32 D_801E596C;
extern f32 D_801E5970;
extern f32 D_801E5974;
extern f32 D_801E5978;
extern f32 D_801E597C;
extern f32 D_801E5980;
extern f32 D_801E5984;
extern f32 D_801E5988;
extern f32 D_801E598C;
extern f32 D_801E5990;
extern f32 D_801E5994;
extern f32 D_801E5998;
extern f32 D_801E5A20;
extern f32 D_801E5A24;
extern f32 D_801E5A28;
extern f32 D_801E5A2C;
extern f32 D_801E5A30;
extern f32 D_801E5A34;
extern f32 D_801E5A38;
extern f32 D_801E5A3C;
extern f32 D_801E5A40;
extern f32 D_801E5A44;
extern f32 D_801E5A48;
extern f32 D_801E5A4C;
extern f32 D_801E5A50;
extern f32 D_801E5A54;
extern f32 D_801E5A58;
extern f32 D_801E5A5C;
extern f32 D_801E5A60;
extern f32 D_801E5A64;
extern f32 D_801E5A68;
extern f32 D_801E5A6C;
extern f32 D_801E5A70;
extern f32 D_801E5A74;
extern T_D_801E5A80_file052 D_801E5A80;
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_8038DF70_file052 D_8038DF70;

#endif
