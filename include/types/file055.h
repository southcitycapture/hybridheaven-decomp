#ifndef TYPES_FILE055_H
#define TYPES_FILE055_H

/* Recovered types for file055 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"

/* D_80384360; 2 functions */
typedef struct T_D_80384360_file055_elem { /* size 0x10 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ s16 unk2; /* 2 uses */
    /* 0x004 */ s16 unk4; /* 2 uses */
    /* 0x006 */ s16 unk6; /* 3 uses */
    /* 0x008 */ s16 unk8; /* 2 uses */
    /* 0x00A */ u16 unkA; /* 5 uses */
    /* 0x00C */ u8 unkC; /* 2 uses */
    /* 0x00D */ u8 unkD; /* 2 uses */
    /* 0x00E */ u16 unkE; /* 3 uses */
} T_D_80384360_file055_elem;

/* pointed to by T_D_8038DDC0_file055.0x0; 2 functions */
typedef struct T_func_80383E54_a1 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 19 uses */
    /* 0x004 */ void *unk4; /* 19 uses */
} T_func_80383E54_a1;

extern struct T_D_80384360_file055_elem D_80384360[];
extern u16 D_8038436A;
extern u8 D_8038DBB0;
extern s32 D_8038DBB4;
extern s32 *D_8038DBB8;
extern s32 D_8038DBBC;
extern u8 D_8038DBC0;
extern s32 D_8038DBC4;
extern s32 D_8038DBC8;
extern u32 D_8038DBCC;
extern s32 D_8038DBD0;
extern u8 D_8038DBD4;
extern s32 D_8038DBD8;
extern T_D_8016379C D_8038DCAC;
extern struct T_func_80383E54_a1 *D_8038DDC0;
extern struct T_D_80089378 *D_8038DDC4;

#endif
