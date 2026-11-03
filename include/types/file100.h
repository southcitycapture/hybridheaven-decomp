#ifndef TYPES_FILE100_H
#define TYPES_FILE100_H

/* Recovered types for file100 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/shared.h"

/* anonymous; 2 functions */
typedef struct T_D_8038DB34_file100_elem_p0_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ u8 pad4[0xC];
} T_D_8038DB34_file100_elem_p0_elem;

/* D_8038E070; 4 functions */
typedef struct T_D_8038E070_file100_elem { /* size 0x40 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ s32 unk28; /* 1 use */
    /* 0x02C */ s32 unk2C; /* 1 use */
    /* 0x030 */ s32 unk30; /* 1 use */
    /* 0x034 */ s32 unk34; /* 1 use */
    /* 0x038 */ s32 unk38; /* 1 use */
    /* 0x03C */ s32 unk3C; /* 1 use */
} T_D_8038E070_file100_elem;

/* anonymous; 3 functions */
typedef struct T_D_8038E070_file100_elem_2 { /* size >= 0x10 */
    /* 0x000 */ void *unk0; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 5 uses */
    /* 0x008 */ void *unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_8038E070_file100_elem_2;

extern struct T_func_80107830_a0 *D_8038D850;
extern s32 D_8038D854;
extern s32 D_8038D86C;
extern s32 D_8038D870;
extern s32 D_8038D874;
extern struct T_func_80107830_a0 *D_8038D8CC;
extern s32 D_8038D8D0;
extern s32 D_8038D8EC;
extern s32 D_8038D8F0;
extern struct T_D_8038DB34_file100_elem_p0_elem *D_8038DB34[];
extern s32 D_8038DB48;
extern s32 D_8038DB4C;
extern s32 D_8038DB50;
extern s32 D_8038DB54;
extern s32 D_8038DB6C;
extern s32 D_8038DB70;
extern s32 D_8038DB74;
extern s32 D_8038DB8C;
extern s32 D_8038DB90;
extern s32 D_8038DB94;
extern void *D_8038DB98[];
extern s32 D_8038DBA4;
extern s32 D_8038DBA8;
extern s32 D_8038DBAC;
extern s32 D_8038DBB0;
extern s32 D_8038DBB4;
extern s32 D_8038DBB8;
extern void *D_8038DBBC[];
extern s32 D_8038DBC8;
extern s32 D_8038DBCC;
extern s32 D_8038DBD0;
extern void *D_8038DBD4[];
extern s32 D_8038DBE0;
extern s32 D_8038DBE4;
extern s32 D_8038DBE8;
extern s32 D_8038DBEC;
extern s32 D_8038DBFC;
extern s32 D_8038DC00;
extern f32 D_8038DCF0;
extern f64 D_8038DCF8;
extern f64 D_8038DD00;
extern f64 D_8038DD08;
extern f32 D_8038DD4C;
extern f64 D_8038DD50;
extern f32 D_8038DD58;
extern f32 D_8038DD5C;
extern s32 D_8038DD60;
extern T_D_8038DD68_file100 D_8038DD68;
extern T_D_801E0BB0_file025 D_8038DD80;
extern T_D_801E0BB0_file025 D_8038E060;
extern struct T_D_8038E070_file100_elem D_8038E070[];
extern T_D_801E0BB0_file025 D_8038E0F0;
extern T_D_801E0BB0_file025 D_8038E100;
extern s32 D_8038E110;
extern T_D_801E0BB0_file025 D_8038E118;
extern void *D_8038E128[];
extern s32 D_8038E134;
extern s32 D_8038E138;
extern f32 D_8038E13C;
extern s32 D_8038E140;
extern s32 D_8038E150;
extern T_D_8038E158_file100 D_8038E158;
extern T_D_801E0BB0_file025 D_8038E190;

#endif
