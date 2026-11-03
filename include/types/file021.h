#ifndef TYPES_FILE021_H
#define TYPES_FILE021_H

/* Recovered types for file021 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"

/* pointed to by T_D_801730F4.0x0; 1 functions */
typedef struct T_D_801730F4_p0 { /* size >= 0x8 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ struct T_D_801730F4_p0_p4 *unk4; /* 1 use */
} T_D_801730F4_p0;

/* pointed to by T_D_801730F4_p0.0x4; 1 functions */
typedef struct T_D_801730F4_p0_p4 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_801730F4_p0_p4;

/* pointed to by T_D_801BCC25.0xF; 1 functions */
typedef struct T_D_801BCC25_pF { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_801BCC25_pF_p24 *unk24; /* 1 use */
} T_D_801BCC25_pF;

/* pointed to by T_D_801BCC25_pF.0x24; 1 functions */
typedef struct T_D_801BCC25_pF_p24 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
} T_D_801BCC25_pF_p24;

/* D_8024F230; 1 functions */
typedef struct T_D_8024F230_file021 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8024F230_file021;

/* D_8024F244; 1 functions */
typedef struct T_D_8024F244_file021 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_8024F244_file021;

/* pointed to by T_func_80129C20_a0.0x38; 2 functions */
typedef struct T_func_80129C20_a0_p38 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s32 unk10; /* 4 uses */
} T_func_80129C20_a0_p38;

/* parameter file021:func_8024286C:0, file021:func_80242BE8:0; 4 functions */
typedef struct T_func_8024286C_a0 { /* size >= 0x94 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_8024286C_a0_p24 *unk24; /* 1 use */
    /* 0x028 */ u8 pad28[0x68];
    /* 0x090 */ u16 unk90; /* 6 uses */
    /* 0x092 */ u8 pad92[0x2];
} T_func_8024286C_a0;

/* pointed to by T_func_8024286C_a0.0x24; 1 functions */
typedef struct T_func_8024286C_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8024286C_a0_p24_p30 *unk30; /* 1 use */
} T_func_8024286C_a0_p24;

/* pointed to by T_func_8024286C_a0_p24.0x30; 1 functions */
typedef struct T_func_8024286C_a0_p24_p30 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 unkC; /* 1 use */
} T_func_8024286C_a0_p24_p30;

extern T_D_8024F230_file021 D_8024F230;
extern T_D_8024F244_file021 D_8024F244;
extern T_D_80162DD0 D_8024F258;
extern f32 D_80256F30;
extern f32 D_80256F34;
extern f32 D_80256F38;
extern f32 D_80256F3C;
extern f32 D_80256F40;
extern f32 D_80256F44;
extern f32 D_80256F7C;
extern f32 D_80256F80;
extern f32 D_80256F84;
extern f32 D_80256F88;
extern f32 D_80256F8C;
extern f32 D_80256F90;
extern f32 D_80256F94;
extern f32 D_80256F98;
extern f64 D_80256FA0;
extern f64 D_80256FA8;
extern f32 D_80256FB0;
extern f32 D_80256FB4;
extern f32 D_80256FB8;
extern f32 D_80256FBC;
extern f64 D_80256FC0;
extern f64 D_80256FC8;
extern f32 D_80257064;
extern f32 D_8025707C;
extern f32 D_80257080;
extern f32 D_80257084;
extern f32 D_80257088;
extern f32 D_8025708C;
extern f32 D_80257090;
extern f32 D_80257094;
extern f32 D_80257098;
extern f32 D_8025709C;
extern f32 D_802570A0;
extern f32 D_802570A4;
extern f32 D_802570A8;
extern f32 D_802570AC;
extern f32 D_802570B0;
extern f64 D_802570B8;
extern f64 D_802570C0;
extern f64 D_802570C8;
extern f64 D_802570D0;
extern f64 D_802570D8;
extern f64 D_802570E0;
extern f64 D_802570E8;
extern f64 D_802570F0;
extern f32 D_802570F8;
extern f64 D_80257100;
extern f64 D_80257108;
extern f32 D_80257110;
extern f64 D_80257118;
extern f64 D_80257120;
extern f64 D_80257128;
extern f64 D_80257130;
extern f64 D_80257138;
extern f64 D_80257140;
extern f64 D_80257148;
extern u32 D_80257150;

#endif
