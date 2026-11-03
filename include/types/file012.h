#ifndef TYPES_FILE012_H
#define TYPES_FILE012_H

/* Recovered types for file012 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"

/* pointed to by T_D_801E4058.0x0, T_D_80253968_file015.0x4; 1 functions */
typedef struct T_D_801E4058_p0 { /* size >= 0xC */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 unk1; /* 3 uses */
    /* 0x002 */ u8 unk2; /* 3 uses */
    /* 0x003 */ u8 unk3; /* 1 use */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 pad5[0x3];
    /* 0x008 */ struct T_D_801E4058_p0 *unk8; /* 1 use */
} T_D_801E4058_p0;

/* D_80248C48; 2 functions */
typedef struct T_D_80248C48_file012_elem { /* size 0x10 */
    /* 0x000 */ s32 value; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 unk9; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ s32 param; /* 1 use */
} T_D_80248C48_file012_elem;

/* D_80248DC0; 2 functions */
typedef struct T_D_80248DC0_file012_elem { /* size 0x3 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 unk1; /* 3 uses */
    /* 0x002 */ u8 unk2; /* 3 uses */
} T_D_80248DC0_file012_elem;

/* D_80248F08; 1 functions */
typedef struct T_D_80248F08_file012 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ u8 unk8; /* 1 use */
    /* 0x009 */ u8 pad9[0x3];
} T_D_80248F08_file012;

extern struct T_D_80248C48_file012_elem D_80248C48[];
extern T_D_80162DD0 D_80248DA8;
extern struct T_D_80248DC0_file012_elem D_80248DC0[];
extern T_D_80162DD0 D_80248E78;
extern T_D_80248F08_file012 D_80248F08;
extern T_D_80162DD0 D_80248F20;
extern u8 D_8024917C;
extern u8 D_80249188;
extern f64 D_80249190;
extern f64 D_80249198;
extern f64 D_802491A0;
extern f64 D_802491A8;
extern f64 D_802491B0;
extern f64 D_802491B8;
extern f64 D_802491C0;
extern f64 D_802491D0;
extern f64 D_802491D8;
extern f64 D_802491E0;
extern f64 D_802491E8;
extern u16 D_80249500;

#endif
