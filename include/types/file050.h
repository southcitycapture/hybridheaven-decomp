#ifndef TYPES_FILE050_H
#define TYPES_FILE050_H

/* Recovered types for file050 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/shared.h"

/* D_801E39F4; 1 functions */
typedef struct T_D_801E39F4_file050 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E39F4_file050;

/* D_801E3A04; 1 functions */
typedef struct T_D_801E3A04_file050 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3A04_file050;

/* D_801E3A14; 1 functions */
typedef struct T_D_801E3A14_file050 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3A14_file050;

/* D_801E3A24; 1 functions */
typedef struct T_D_801E3A24_file050 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3A24_file050;

/* D_801E3A34; 1 functions */
typedef struct T_D_801E3A34_file050 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3A34_file050;

/* D_801E3A44; 1 functions */
typedef struct T_D_801E3A44_file050 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3A44_file050;

/* D_801E3A54; 1 functions */
typedef struct T_D_801E3A54_file050 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3A54_file050;

/* D_801E3A64; 1 functions */
typedef struct T_D_801E3A64_file050 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3A64_file050;

/* D_801E3D98; 1 functions */
typedef struct T_D_801E3D98_file050_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3D98_file050_elem;

/* D_801E3DD0; 1 functions */
typedef struct T_D_801E3DD0_file050_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E3DD0_file050_elem;

/* D_8038DF70; 1 functions */
typedef struct T_D_8038DF70_file050 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_8038DF70_file050;

/* func_801DABB4; 1 functions */
typedef struct T_func_801DABB4_file050 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801DABB4_file050;

/* func_8038D8B8; 2 functions */
typedef struct T_func_8038D8B8_file050 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_func_80107830_a0 *unk14; /* 23 uses */
} T_func_8038D8B8_file050;

extern s32 D_801D8D60;
extern T_D_801E39F4_file050 D_801E39F4;
extern T_D_801E3A04_file050 D_801E3A04;
extern T_D_801E3A14_file050 D_801E3A14;
extern T_D_801E3A24_file050 D_801E3A24;
extern T_D_801E3A34_file050 D_801E3A34;
extern T_D_801E3A44_file050 D_801E3A44;
extern T_D_801E3A54_file050 D_801E3A54;
extern T_D_801E3A64_file050 D_801E3A64;
extern s32 D_801E3A74;
extern s32 D_801E3A78;
extern s32 D_801E3A8C;
extern s32 D_801E3B00[];
extern f32 D_801E3B20;
extern f32 D_801E3B24;
extern f32 D_801E3B28;
extern f32 D_801E3B2C;
extern f32 D_801E3B30;
extern f32 D_801E3B34;
extern f32 D_801E3B38;
extern f32 D_801E3B3C;
extern f32 D_801E3B40;
extern f32 D_801E3B44;
extern f32 D_801E3B48;
extern f32 D_801E3B4C;
extern f32 D_801E3B50;
extern s32 D_801E3D90[];
extern s32 D_801E3D94;
extern struct T_D_801E3D98_file050_elem D_801E3D98[];
extern s32 D_801E3DC8[];
extern s32 D_801E3DCC;
extern struct T_D_801E3DD0_file050_elem D_801E3DD0[];
extern T_D_801E0A48_file026 D_8038DD90;
extern T_D_801E0A48_file026 D_8038DDC0;
extern T_D_8038DF70_file050 D_8038DF70;

#endif
