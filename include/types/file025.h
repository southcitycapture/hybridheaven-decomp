#ifndef TYPES_FILE025_H
#define TYPES_FILE025_H

/* Recovered types for file025 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* pointed to by T_D_80171CF0.0x10E0; 2 functions */
typedef struct T_D_80171CF0_p10E0 { /* size >= 0x8 */
    /* 0x000 */ struct T_D_80171CF0_p10E0_p0 *unk0; /* 4 uses */
    /* 0x004 */ struct T_D_80171CF0_p10E0_p4 *unk4; /* 2 uses */
} T_D_80171CF0_p10E0;

/* pointed to by T_D_80171CF0_p10E0.0x0; 2 functions */
typedef struct T_D_80171CF0_p10E0_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 2 uses */
    /* 0x002 */ u16 unk2; /* 2 uses */
} T_D_80171CF0_p10E0_p0;

/* pointed to by T_D_80171CF0_p10E0.0x4; 2 functions */
typedef struct T_D_80171CF0_p10E0_p4 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80171CF0_p10E0_p4;

/* pointed to by T_D_80171CF0.0x11A0; 1 functions */
typedef struct T_D_80171CF0_p11A0 { /* size >= 0x8 */
    /* 0x000 */ struct T_D_80171CF0_p11A0_p0 *unk0; /* 2 uses */
    /* 0x004 */ s32 *unk4; /* 1 use */
} T_D_80171CF0_p11A0;

/* pointed to by T_D_80171CF0_p11A0.0x0; 1 functions */
typedef struct T_D_80171CF0_p11A0_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
} T_D_80171CF0_p11A0_p0;

/* pointed to by T_D_80171CF0.0x158; 2 functions */
typedef struct T_D_80171CF0_p158 { /* size >= 0x8 */
    /* 0x000 */ struct T_D_80171CF0_p158_p0 *unk0; /* 8 uses */
    /* 0x004 */ struct T_D_80171CF0_p158_p4 *unk4; /* 4 uses */
} T_D_80171CF0_p158;

/* pointed to by T_D_80171CF0_p158.0x0; 2 functions */
typedef struct T_D_80171CF0_p158_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 4 uses */
    /* 0x002 */ u16 unk2; /* 4 uses */
} T_D_80171CF0_p158_p0;

/* pointed to by T_D_80171CF0_p158.0x4; 2 functions */
typedef struct T_D_80171CF0_p158_p4 { /* size >= 0x20 */
    /* 0x000 */ u8 pad0[0x18];
    /* 0x018 */ struct T_func_8037DD6C_a1_p2C_p28_elem *unk18; /* 2 uses */
    /* 0x01C */ struct T_func_8037DD6C_a1_p2C_p28_elem *unk1C; /* 2 uses */
} T_D_80171CF0_p158_p4;

/* pointed to by T_D_80171CF0.0x980; 4 functions */
typedef struct T_D_80171CF0_p980 { /* size >= 0x8 */
    /* 0x000 */ struct T_D_80171CF0_p980_p0 *unk0; /* 8 uses */
    /* 0x004 */ struct T_D_80171CF0_p980_p4 *unk4; /* 4 uses */
} T_D_80171CF0_p980;

/* pointed to by T_D_80171CF0_p980.0x0; 4 functions */
typedef struct T_D_80171CF0_p980_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 4 uses */
    /* 0x002 */ u16 unk2; /* 4 uses */
} T_D_80171CF0_p980_p0;

/* pointed to by T_D_80171CF0_p980.0x4; 4 functions */
typedef struct T_D_80171CF0_p980_p4 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80171CF0_p980_p4;

/* pointed to by T_D_80171CF0.0xD8; 1 functions */
typedef struct T_D_80171CF0_pD8 { /* size >= 0x8 */
    /* 0x000 */ struct T_D_80171CF0_pD8_p0 *unk0; /* 2 uses */
    /* 0x004 */ struct T_func_8037DD6C_a1_p2C_p28_elem **unk4; /* 1 use */
} T_D_80171CF0_pD8;

/* pointed to by T_D_80171CF0_pD8.0x0; 1 functions */
typedef struct T_D_80171CF0_pD8_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
} T_D_80171CF0_pD8_p0;

/* pointed to by T_D_80171CF0.0xDC; 1 functions */
typedef struct T_D_80171CF0_pDC { /* size >= 0x8 */
    /* 0x000 */ struct T_D_80171CF0_pDC_p0 *unk0; /* 2 uses */
    /* 0x004 */ struct T_func_8037DD6C_a1_p2C_p28_elem **unk4; /* 1 use */
} T_D_80171CF0_pDC;

/* pointed to by T_D_80171CF0_pDC.0x0; 1 functions */
typedef struct T_D_80171CF0_pDC_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
} T_D_80171CF0_pDC_p0;

/* anonymous; 2 functions */
typedef struct T_D_801D8C00_file025_elem_p0_elem_p0_elem { /* size 0x18 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ void *unk8; /* 3 uses */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801D8C00_file025_elem_p0_elem_p0_elem;

/* D_801D8D68; 1 functions */
typedef struct T_D_801D8D68_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801D8D68_file025;

/* anonymous; 6 functions */
typedef struct T_D_801D8DF0_file025_elem_p0_elem_p0_elem { /* size 0x20 */
    /* 0x000 */ s32 * *unk0; /* 5 uses */
    /* 0x004 */ void *unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ u8 padC[0x4];
    /* 0x010 */ void *unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ void *unk18; /* 2 uses */
    /* 0x01C */ u8 pad1C[0x4];
} T_D_801D8DF0_file025_elem_p0_elem_p0_elem;

/* D_801D9F30; 1 functions */
typedef struct T_D_801D9F30_file025 { /* size >= 0xA0 */
    /* 0x000 */ u8 pad0[0x98];
    /* 0x098 */ s32 unk98; /* 1 use */
    /* 0x09C */ s32 unk9C; /* 1 use */
} T_D_801D9F30_file025;

/* D_801DA3A0; 1 functions */
typedef struct T_D_801DA3A0_file025_elem { /* size 0x10 */
    /* 0x000 */ s32 w; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_801DA3A0_file025_elem;

/* D_801DA400; 1 functions */
typedef struct T_D_801DA400_file025_elem { /* size 0x20 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x18];
} T_D_801DA400_file025_elem;

/* D_801DA408; 1 functions */
typedef struct T_D_801DA408_file025_elem { /* size 0x20 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x18];
} T_D_801DA408_file025_elem;

/* D_801DA410; 1 functions */
typedef struct T_D_801DA410_file025_elem { /* size 0x20 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x18];
} T_D_801DA410_file025_elem;

/* D_801DA418; 1 functions */
typedef struct T_D_801DA418_file025_elem { /* size 0x20 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x18];
} T_D_801DA418_file025_elem;

/* D_801DA518; 1 functions */
typedef struct T_D_801DA518_file025 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_801DA518_file025;

/* anonymous; 1 functions */
typedef struct T_D_801DAAF4_file025_elem_p0_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DAAF4_file025_elem_p0_elem;

/* pointed to by T_D_801DAB80_file025.0x0; 2 functions */
typedef struct T_D_801DAB80_file025_p0 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
} T_D_801DAB80_file025_p0;

/* anonymous; 1 functions */
typedef struct T_D_801DAB84_file025_p0_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ struct T_D_801E0BC0_file025_elem *unk4; /* 2 uses */
} T_D_801DAB84_file025_p0_elem;

/* pointed to by T_D_801DAC70_file025.0x0; 1 functions */
typedef struct T_D_801DAC70_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DAC70_file025_p0;

/* pointed to by T_D_801DAC74_file025.0x0; 1 functions */
typedef struct T_D_801DAC74_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DAC74_file025_p0;

/* D_801DAC90; 1 functions */
typedef struct T_D_801DAC90_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DAC90_file025_elem;

/* pointed to by T_D_801DAD28_file025.0x0; 1 functions */
typedef struct T_D_801DAD28_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DAD28_file025_p0;

/* pointed to by T_D_801DAD2C_file025.0x0; 1 functions */
typedef struct T_D_801DAD2C_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DAD2C_file025_p0;

/* D_801DAD64; 1 functions */
typedef struct T_D_801DAD64_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DAD64_file025_elem;

/* pointed to by T_D_801DADFC_file025.0x0; 1 functions */
typedef struct T_D_801DADFC_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DADFC_file025_p0;

/* pointed to by T_D_801DAE00_file025.0x0; 1 functions */
typedef struct T_D_801DAE00_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DAE00_file025_p0;

/* D_801DAE10; 1 functions */
typedef struct T_D_801DAE10_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DAE10_file025_elem;

/* D_801DAE88; 1 functions */
typedef struct T_D_801DAE88_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 thr; /* 1 use */
    /* 0x004 */ s32 action; /* 1 use */
} T_D_801DAE88_file025_elem;

/* pointed to by T_D_801DAECC_file025.0x0; 1 functions */
typedef struct T_D_801DAECC_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DAECC_file025_p0;

/* pointed to by T_D_801DAED0_file025.0x0; 1 functions */
typedef struct T_D_801DAED0_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DAED0_file025_p0;

/* pointed to by T_D_801DAF18_file025.0x0; 1 functions */
typedef struct T_D_801DAF18_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DAF18_file025_p0;

/* pointed to by T_D_801DAF1C_file025.0x0; 1 functions */
typedef struct T_D_801DAF1C_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DAF1C_file025_p0;

/* D_801DAF48; 1 functions */
typedef struct T_D_801DAF48_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DAF48_file025_elem;

/* pointed to by T_D_801DAFD8_file025.0x0; 1 functions */
typedef struct T_D_801DAFD8_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DAFD8_file025_p0;

/* pointed to by T_D_801DAFDC_file025.0x0; 1 functions */
typedef struct T_D_801DAFDC_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DAFDC_file025_p0;

/* D_801DAFF0; 1 functions */
typedef struct T_D_801DAFF0_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DAFF0_file025_elem;

/* pointed to by T_D_801DB084_file025.0x0; 1 functions */
typedef struct T_D_801DB084_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB084_file025_p0;

/* pointed to by T_D_801DB088_file025.0x0; 1 functions */
typedef struct T_D_801DB088_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB088_file025_p0;

/* D_801DB0B4; 1 functions */
typedef struct T_D_801DB0B4_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DB0B4_file025_elem;

/* pointed to by T_D_801DB144_file025.0x0; 1 functions */
typedef struct T_D_801DB144_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB144_file025_p0;

/* pointed to by T_D_801DB148_file025.0x0; 1 functions */
typedef struct T_D_801DB148_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB148_file025_p0;

/* pointed to by T_D_801DB164_file025.0x0; 1 functions */
typedef struct T_D_801DB164_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB164_file025_p0;

/* pointed to by T_D_801DB168_file025.0x0; 1 functions */
typedef struct T_D_801DB168_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB168_file025_p0;

/* pointed to by T_D_801DB198_file025.0x0; 1 functions */
typedef struct T_D_801DB198_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB198_file025_p0;

/* pointed to by T_D_801DB19C_file025.0x0; 1 functions */
typedef struct T_D_801DB19C_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB19C_file025_p0;

/* D_801DB1C4; 1 functions */
typedef struct T_D_801DB1C4_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DB1C4_file025_elem;

/* pointed to by T_D_801DB258_file025.0x0; 1 functions */
typedef struct T_D_801DB258_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB258_file025_p0;

/* pointed to by T_D_801DB25C_file025.0x0; 1 functions */
typedef struct T_D_801DB25C_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB25C_file025_p0;

/* D_801DB284; 1 functions */
typedef struct T_D_801DB284_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DB284_file025_elem;

/* pointed to by T_D_801DB314_file025.0x0; 1 functions */
typedef struct T_D_801DB314_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB314_file025_p0;

/* pointed to by T_D_801DB318_file025.0x0; 1 functions */
typedef struct T_D_801DB318_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB318_file025_p0;

/* pointed to by T_D_801DB334_file025.0x0; 1 functions */
typedef struct T_D_801DB334_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB334_file025_p0;

/* pointed to by T_D_801DB338_file025.0x0; 1 functions */
typedef struct T_D_801DB338_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB338_file025_p0;

/* pointed to by T_D_801DB354_file025.0x0; 1 functions */
typedef struct T_D_801DB354_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB354_file025_p0;

/* pointed to by T_D_801DB358_file025.0x0; 1 functions */
typedef struct T_D_801DB358_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB358_file025_p0;

/* pointed to by T_D_801DB374_file025.0x0; 1 functions */
typedef struct T_D_801DB374_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB374_file025_p0;

/* pointed to by T_D_801DB378_file025.0x0; 1 functions */
typedef struct T_D_801DB378_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB378_file025_p0;

/* pointed to by T_D_801DB5A8_file025.0x0; 1 functions */
typedef struct T_D_801DB5A8_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB5A8_file025_p0;

/* pointed to by T_D_801DB5AC_file025.0x0; 1 functions */
typedef struct T_D_801DB5AC_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB5AC_file025_p0;

/* D_801DB5BC; 1 functions */
typedef struct T_D_801DB5BC_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DB5BC_file025_elem;

/* pointed to by T_D_801DB660_file025.0x0; 1 functions */
typedef struct T_D_801DB660_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB660_file025_p0;

/* pointed to by T_D_801DB664_file025.0x0; 1 functions */
typedef struct T_D_801DB664_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB664_file025_p0;

/* D_801DB690; 1 functions */
typedef struct T_D_801DB690_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DB690_file025_elem;

/* pointed to by T_D_801DB730_file025.0x0; 1 functions */
typedef struct T_D_801DB730_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB730_file025_p0;

/* pointed to by T_D_801DB734_file025.0x0; 1 functions */
typedef struct T_D_801DB734_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB734_file025_p0;

/* D_801DB75C; 1 functions */
typedef struct T_D_801DB75C_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DB75C_file025_elem;

/* pointed to by T_D_801DB7F8_file025.0x0; 1 functions */
typedef struct T_D_801DB7F8_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB7F8_file025_p0;

/* pointed to by T_D_801DB7FC_file025.0x0; 1 functions */
typedef struct T_D_801DB7FC_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB7FC_file025_p0;

/* D_801DB808; 1 functions */
typedef struct T_D_801DB808_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DB808_file025_elem;

/* pointed to by T_D_801DB89C_file025.0x0; 1 functions */
typedef struct T_D_801DB89C_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB89C_file025_p0;

/* pointed to by T_D_801DB8A0_file025.0x0; 1 functions */
typedef struct T_D_801DB8A0_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB8A0_file025_p0;

/* D_801DB8AC; 1 functions */
typedef struct T_D_801DB8AC_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 time; /* 1 use */
    /* 0x004 */ s32 action; /* 1 use */
} T_D_801DB8AC_file025_elem;

/* D_801DB924; 1 functions */
typedef struct T_D_801DB924_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 time; /* 1 use */
    /* 0x004 */ s32 action; /* 1 use */
} T_D_801DB924_file025_elem;

/* pointed to by T_D_801DB968_file025.0x0; 1 functions */
typedef struct T_D_801DB968_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DB968_file025_p0;

/* pointed to by T_D_801DB96C_file025.0x0; 1 functions */
typedef struct T_D_801DB96C_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DB96C_file025_p0;

/* D_801DB984; 1 functions */
typedef struct T_D_801DB984_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DB984_file025_elem;

/* pointed to by T_D_801DBA24_file025.0x0; 1 functions */
typedef struct T_D_801DBA24_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DBA24_file025_p0;

/* pointed to by T_D_801DBA28_file025.0x0; 1 functions */
typedef struct T_D_801DBA28_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DBA28_file025_p0;

/* D_801DBA38; 1 functions */
typedef struct T_D_801DBA38_file025_elem { /* size 0x8 */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_801DBA38_file025_elem;

/* pointed to by T_D_801DBAD4_file025.0x0; 1 functions */
typedef struct T_D_801DBAD4_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DBAD4_file025_p0;

/* pointed to by T_D_801DBAD8_file025.0x0; 1 functions */
typedef struct T_D_801DBAD8_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DBAD8_file025_p0;

/* pointed to by T_D_801DBB74_file025.0x0; 1 functions */
typedef struct T_D_801DBB74_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801DBB74_file025_p0;

/* pointed to by T_D_801DBB78_file025.0x0; 1 functions */
typedef struct T_D_801DBB78_file025_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
} T_D_801DBB78_file025_p0;

/* D_801DD3B0; 2 functions */
typedef struct T_D_801DD3B0_file025_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
} T_D_801DD3B0_file025_elem;

/* D_801DD5F0; 1 functions */
typedef struct T_D_801DD5F0_file025_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
} T_D_801DD5F0_file025_elem;

/* anonymous; 1 functions */
typedef struct T_D_801DE838_file025_elem { /* size >= 0x40 */
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
} T_D_801DE838_file025_elem;

/* D_801DE838; 5 functions */
typedef struct T_D_801DE838_file025_elem_2 { /* size 0x10 */
    /* 0x000 */ void *unk0; /* 16 uses */
    /* 0x004 */ void *unk4; /* 11 uses */
    /* 0x008 */ void *unk8; /* 9 uses */
    /* 0x00C */ u32 unkC; /* 9 uses */
} T_D_801DE838_file025_elem_2;

/* anonymous; 1 functions */
typedef struct T_D_801DEA40_file025_elem { /* size >= 0x30 */
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
} T_D_801DEA40_file025_elem;

/* D_801DEA40; 5 functions */
typedef struct T_D_801DEA40_file025_elem_2 { /* size 0xC */
    /* 0x000 */ void *unk0; /* 15 uses */
    /* 0x004 */ void *unk4; /* 10 uses */
    /* 0x008 */ s32 unk8; /* 8 uses */
} T_D_801DEA40_file025_elem_2;

/* D_801DEBC4; 1 functions */
typedef struct T_D_801DEBC4_file025_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801DEBC4_file025_elem;

/* D_801DEBF0; 8 functions */
typedef struct T_D_801DEBF0_file025_elem { /* size 0x30 */
    /* 0x000 */ s32 unk0; /* 8 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 3 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 3 uses */
    /* 0x01C */ s32 unk1C; /* 2 uses */
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ s32 unk24; /* 3 uses */
    /* 0x028 */ s32 unk28; /* 2 uses */
    /* 0x02C */ s32 unk2C; /* 1 use */
} T_D_801DEBF0_file025_elem;

/* anonymous; 5 functions */
typedef struct T_D_801DEBF0_file025_elem_2 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 7 uses */
    /* 0x004 */ void *unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 5 uses */
} T_D_801DEBF0_file025_elem_2;

/* D_801DED70; 17 functions */
typedef struct T_D_801DED70_file025_elem { /* size 0x40 */
    /* 0x000 */ s32 unk0; /* 7 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 3 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 3 uses */
    /* 0x024 */ s32 unk24; /* 2 uses */
    /* 0x028 */ s32 unk28; /* 1 use */
    /* 0x02C */ s32 unk2C; /* 1 use */
    /* 0x030 */ s32 unk30; /* 3 uses */
    /* 0x034 */ s32 unk34; /* 2 uses */
    /* 0x038 */ s32 unk38; /* 1 use */
    /* 0x03C */ s32 unk3C; /* 1 use */
} T_D_801DED70_file025_elem;

/* anonymous; 6 functions */
typedef struct T_D_801DED70_file025_elem_2 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 3 uses */
    /* 0x00C */ s32 unkC; /* 4 uses */
} T_D_801DED70_file025_elem_2;

/* D_801DEF90; 2 functions */
typedef struct T_D_801DEF90_file025 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 16 uses */
    /* 0x004 */ s32 unk4; /* 16 uses */
} T_D_801DEF90_file025;

/* anonymous; 2 functions */
typedef struct T_D_801DF7A0_file025_elem { /* size >= 0x218 */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ u8 pad4[0xCC];
    /* 0x0D0 */ s32 unkD0; /* 1 use */
    /* 0x0D4 */ s32 unkD4; /* 1 use */
    /* 0x0D8 */ u8 padD8[0x138];
    /* 0x210 */ s32 unk210; /* 1 use */
    /* 0x214 */ s32 unk214; /* 1 use */
} T_D_801DF7A0_file025_elem;

/* D_801E04C0; 5 functions */
typedef struct T_D_801E04C0_file025 { /* size >= 0x1C */
    /* 0x000 */ f32 unk0; /* 4 uses */
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 4 uses */
    /* 0x00C */ f32 unkC; /* 6 uses */
    /* 0x010 */ f32 unk10; /* 3 uses */
    /* 0x014 */ f32 unk14; /* 8 uses */
    /* 0x018 */ f32 unk18; /* 3 uses */
} T_D_801E04C0_file025;

/* D_801E04E0, D_801E0504, D_801E0528; 5 functions */
typedef struct T_D_801E04E0_file025_elem { /* size 0xC */
    /* 0x000 */ f32 unk0; /* 22 uses */
    /* 0x004 */ f32 unk4; /* 22 uses */
    /* 0x008 */ f32 unk8; /* 22 uses */
} T_D_801E04E0_file025_elem;

/* D_801E0550; 5 functions */
typedef struct T_D_801E0550_file025_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
} T_D_801E0550_file025_elem;

/* D_801E0660; 1 functions */
typedef struct T_D_801E0660_file025_elem { /* size 0xC */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801E0660_file025_elem;

/* D_801E06E0; 1 functions */
typedef struct T_D_801E06E0_file025_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E06E0_file025_elem;

/* D_801E0700; 1 functions */
typedef struct T_D_801E0700_file025_elem { /* size 0xC */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801E0700_file025_elem;

/* D_801E0780; 1 functions */
typedef struct T_D_801E0780_file025_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801E0780_file025_elem;

/* D_801E07A0; 6 functions */
typedef struct T_D_801E07A0_file025_elem { /* size 0x44 */
    /* 0x000 */ struct T_D_801E07A0_file025_elem_p0 *unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 3 uses */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 3 uses */
    /* 0x018 */ s32 unk18; /* 3 uses */
    /* 0x01C */ s32 unk1C; /* 1 use */
    /* 0x020 */ s32 unk20; /* 1 use */
    /* 0x024 */ s32 unk24; /* 3 uses */
    /* 0x028 */ s32 unk28; /* 1 use */
    /* 0x02C */ void *unk2C; /* 5 uses */
    /* 0x030 */ void *unk30; /* 2 uses */
    /* 0x034 */ s32 unk34; /* 3 uses */
    /* 0x038 */ s32 unk38; /* 3 uses */
    /* 0x03C */ s32 unk3C; /* 4 uses */
    /* 0x040 */ s32 unk40; /* 7 uses */
} T_D_801E07A0_file025_elem;

/* pointed to by T_D_801E07A0_file025_elem.0x0; 3 functions */
typedef struct T_D_801E07A0_file025_elem_p0 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ s32 unk24; /* 3 uses */
} T_D_801E07A0_file025_elem_p0;

/* D_801E0828; 1 functions */
typedef struct T_D_801E0828_file025_elem { /* size 0x110 */
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
    /* 0x040 */ s32 unk40; /* 1 use */
    /* 0x044 */ s32 unk44; /* 1 use */
    /* 0x048 */ s32 unk48; /* 1 use */
    /* 0x04C */ s32 unk4C; /* 1 use */
    /* 0x050 */ s32 unk50; /* 1 use */
    /* 0x054 */ s32 unk54; /* 1 use */
    /* 0x058 */ s32 unk58; /* 1 use */
    /* 0x05C */ s32 unk5C; /* 1 use */
    /* 0x060 */ s32 unk60; /* 1 use */
    /* 0x064 */ s32 unk64; /* 1 use */
    /* 0x068 */ s32 unk68; /* 1 use */
    /* 0x06C */ s32 unk6C; /* 1 use */
    /* 0x070 */ s32 unk70; /* 1 use */
    /* 0x074 */ s32 unk74; /* 1 use */
    /* 0x078 */ s32 unk78; /* 1 use */
    /* 0x07C */ s32 unk7C; /* 1 use */
    /* 0x080 */ s32 unk80; /* 1 use */
    /* 0x084 */ s32 unk84; /* 1 use */
    /* 0x088 */ s32 unk88; /* 1 use */
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ s32 unk90; /* 1 use */
    /* 0x094 */ s32 unk94; /* 1 use */
    /* 0x098 */ s32 unk98; /* 1 use */
    /* 0x09C */ s32 unk9C; /* 1 use */
    /* 0x0A0 */ s32 unkA0; /* 1 use */
    /* 0x0A4 */ s32 unkA4; /* 1 use */
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ s32 unkAC; /* 1 use */
    /* 0x0B0 */ s32 unkB0; /* 1 use */
    /* 0x0B4 */ s32 unkB4; /* 1 use */
    /* 0x0B8 */ s32 unkB8; /* 1 use */
    /* 0x0BC */ s32 unkBC; /* 1 use */
    /* 0x0C0 */ s32 unkC0; /* 1 use */
    /* 0x0C4 */ s32 unkC4; /* 1 use */
    /* 0x0C8 */ s32 unkC8; /* 1 use */
    /* 0x0CC */ s32 unkCC; /* 1 use */
    /* 0x0D0 */ s32 unkD0; /* 1 use */
    /* 0x0D4 */ s32 unkD4; /* 1 use */
    /* 0x0D8 */ s32 unkD8; /* 1 use */
    /* 0x0DC */ s32 unkDC; /* 1 use */
    /* 0x0E0 */ s32 unkE0; /* 1 use */
    /* 0x0E4 */ s32 unkE4; /* 1 use */
    /* 0x0E8 */ s32 unkE8; /* 1 use */
    /* 0x0EC */ s32 unkEC; /* 1 use */
    /* 0x0F0 */ s32 unkF0; /* 1 use */
    /* 0x0F4 */ s32 unkF4; /* 1 use */
    /* 0x0F8 */ s32 unkF8; /* 1 use */
    /* 0x0FC */ s32 unkFC; /* 1 use */
    /* 0x100 */ s32 unk100; /* 1 use */
    /* 0x104 */ s32 unk104; /* 1 use */
    /* 0x108 */ s32 unk108; /* 1 use */
    /* 0x10C */ s32 unk10C; /* 1 use */
} T_D_801E0828_file025_elem;

/* D_801E0BD0; 1 functions */
typedef struct T_D_801E0BD0_file025_elem { /* size 0x10 */
    /* 0x000 */ s8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0xF];
} T_D_801E0BD0_file025_elem;

/* D_801E0BD1; 1 functions */
typedef struct T_D_801E0BD1_file025_elem { /* size 0x10 */
    /* 0x000 */ s8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0xF];
} T_D_801E0BD1_file025_elem;

/* D_801E0BD2; 1 functions */
typedef struct T_D_801E0BD2_file025_elem { /* size 0x10 */
    /* 0x000 */ s8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0xF];
} T_D_801E0BD2_file025_elem;

/* D_801E0C40; 3 functions */
typedef struct T_D_801E0C40_file025 { /* size >= 0xB4 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x20];
    /* 0x024 */ s32 unk24; /* 1 use */
    /* 0x028 */ s32 unk28; /* 1 use */
    /* 0x02C */ s32 unk2C; /* 1 use */
    /* 0x030 */ u8 unk30; /* 1 use */
    /* 0x031 */ u8 pad31[0x3];
    /* 0x034 */ s32 unk34; /* 1 use */
    /* 0x038 */ u8 unk38; /* 1 use */
    /* 0x039 */ u8 pad39[0x3];
    /* 0x03C */ s32 unk3C; /* 1 use */
    /* 0x040 */ u8 unk40; /* 1 use */
    /* 0x041 */ u8 pad41[0x3];
    /* 0x044 */ s32 unk44; /* 1 use */
    /* 0x048 */ s32 unk48; /* 1 use */
    /* 0x04C */ s32 unk4C; /* 1 use */
    /* 0x050 */ s32 unk50; /* 1 use */
    /* 0x054 */ u8 unk54; /* 1 use */
    /* 0x055 */ u8 pad55[0x3];
    /* 0x058 */ s32 unk58; /* 1 use */
    /* 0x05C */ u8 unk5C; /* 1 use */
    /* 0x05D */ u8 pad5D[0x3];
    /* 0x060 */ s32 unk60; /* 1 use */
    /* 0x064 */ u8 unk64; /* 1 use */
    /* 0x065 */ u8 pad65[0x3];
    /* 0x068 */ s32 unk68; /* 1 use */
    /* 0x06C */ s32 unk6C; /* 1 use */
    /* 0x070 */ s32 unk70; /* 1 use */
    /* 0x074 */ s32 unk74; /* 1 use */
    /* 0x078 */ u8 unk78; /* 1 use */
    /* 0x079 */ u8 pad79[0x3];
    /* 0x07C */ s32 unk7C; /* 1 use */
    /* 0x080 */ u8 unk80; /* 1 use */
    /* 0x081 */ u8 pad81[0x3];
    /* 0x084 */ s32 unk84; /* 1 use */
    /* 0x088 */ u8 unk88; /* 1 use */
    /* 0x089 */ u8 pad89[0x3];
    /* 0x08C */ s32 unk8C; /* 1 use */
    /* 0x090 */ s32 unk90; /* 1 use */
    /* 0x094 */ s32 unk94; /* 1 use */
    /* 0x098 */ s32 unk98; /* 1 use */
    /* 0x09C */ u8 unk9C; /* 1 use */
    /* 0x09D */ u8 pad9D[0x3];
    /* 0x0A0 */ s32 unkA0; /* 1 use */
    /* 0x0A4 */ u8 unkA4; /* 1 use */
    /* 0x0A5 */ u8 padA5[0x3];
    /* 0x0A8 */ s32 unkA8; /* 1 use */
    /* 0x0AC */ u8 unkAC; /* 1 use */
    /* 0x0AD */ u8 padAD[0x3];
    /* 0x0B0 */ s32 unkB0; /* 1 use */
} T_D_801E0C40_file025;

/* anonymous; 1 functions */
typedef struct T_D_801E0C40_file025_elem { /* size >= 0x24 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s8 unkC; /* 3 uses */
    /* 0x00D */ u8 padD[0x6];
    /* 0x013 */ s8 unk13; /* 1 use */
    /* 0x014 */ s8 unk14; /* 3 uses */
    /* 0x015 */ u8 pad15[0x6];
    /* 0x01B */ s8 unk1B; /* 1 use */
    /* 0x01C */ s8 unk1C; /* 3 uses */
    /* 0x01D */ u8 pad1D[0x6];
    /* 0x023 */ s8 unk23; /* 1 use */
} T_D_801E0C40_file025_elem;

/* D_801E0D10, D_801E0F10; 2 functions */
typedef struct T_D_801E0D10_file025 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
} T_D_801E0D10_file025;

/* D_801E11B0; 2 functions */
typedef struct T_D_801E11B0_file025 { /* size >= 0xC */
    /* 0x000 */ void *x; /* 2 uses */
    /* 0x004 */ void *y; /* 1 use; also u16@0x4 */
    /* 0x008 */ void *z; /* 1 use */
} T_D_801E11B0_file025;

/* D_801E11F8; 2 functions */
typedef struct T_D_801E11F8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E11F8_file025;

/* D_801E1208; 2 functions */
typedef struct T_D_801E1208_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1208_file025;

/* D_801E1248; 2 functions */
typedef struct T_D_801E1248_file025 { /* size >= 0xC */
    /* 0x000 */ s32 x; /* 2 uses */
    /* 0x004 */ s32 y; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 z; /* 1 use */
} T_D_801E1248_file025;

/* D_801E1280; 2 functions */
typedef struct T_D_801E1280_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1280_file025;

/* D_801E1290; 2 functions */
typedef struct T_D_801E1290_file025 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 2 uses */
    /* 0x004 */ void *unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ void *unk8; /* 1 use */
} T_D_801E1290_file025;

/* D_801E12C8; 2 functions */
typedef struct T_D_801E12C8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E12C8_file025;

/* D_801E12D8; 2 functions */
typedef struct T_D_801E12D8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E12D8_file025;

/* D_801E1308; 2 functions */
typedef struct T_D_801E1308_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1308_file025;

/* D_801E1338; 2 functions */
typedef struct T_D_801E1338_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1338_file025;

/* D_801E1348; 2 functions */
typedef struct T_D_801E1348_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1348_file025;

/* D_801E1370; 2 functions */
typedef struct T_D_801E1370_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1370_file025;

/* D_801E1380; 2 functions */
typedef struct T_D_801E1380_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1380_file025;

/* D_801E1398; 2 functions */
typedef struct T_D_801E1398_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1398_file025;

/* D_801E13A8; 2 functions */
typedef struct T_D_801E13A8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E13A8_file025;

/* D_801E13C8; 2 functions */
typedef struct T_D_801E13C8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E13C8_file025;

/* D_801E13D8; 2 functions */
typedef struct T_D_801E13D8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E13D8_file025;

/* D_801E1408; 2 functions */
typedef struct T_D_801E1408_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1408_file025;

/* D_801E1418; 2 functions */
typedef struct T_D_801E1418_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1418_file025;

/* D_801E1440; 2 functions */
typedef struct T_D_801E1440_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1440_file025;

/* D_801E1450; 2 functions */
typedef struct T_D_801E1450_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1450_file025;

/* D_801E1460; 2 functions */
typedef struct T_D_801E1460_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1460_file025;

/* D_801E1470; 2 functions */
typedef struct T_D_801E1470_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1470_file025;

/* D_801E1480; 2 functions */
typedef struct T_D_801E1480_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1480_file025;

/* D_801E1490; 2 functions */
typedef struct T_D_801E1490_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1490_file025;

/* D_801E14A8; 2 functions */
typedef struct T_D_801E14A8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E14A8_file025;

/* D_801E14B8; 2 functions */
typedef struct T_D_801E14B8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E14B8_file025;

/* D_801E14C8; 2 functions */
typedef struct T_D_801E14C8_file025 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801E14C8_file025;

/* D_801E1608; 2 functions */
typedef struct T_D_801E1608_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1608_file025;

/* D_801E1630; 2 functions */
typedef struct T_D_801E1630_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1630_file025;

/* D_801E1640; 2 functions */
typedef struct T_D_801E1640_file025 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 2 uses */
    /* 0x004 */ void *unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ void *unk8; /* 1 use */
} T_D_801E1640_file025;

/* D_801E1680; 2 functions */
typedef struct T_D_801E1680_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1680_file025;

/* D_801E1690; 2 functions */
typedef struct T_D_801E1690_file025 { /* size >= 0xC */
    /* 0x000 */ void *unk0; /* 2 uses */
    /* 0x004 */ void *unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ void *unk8; /* 1 use */
} T_D_801E1690_file025;

/* D_801E16D0; 2 functions */
typedef struct T_D_801E16D0_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E16D0_file025;

/* D_801E16F8; 2 functions */
typedef struct T_D_801E16F8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E16F8_file025;

/* D_801E1738; 2 functions */
typedef struct T_D_801E1738_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1738_file025;

/* D_801E1748; 2 functions */
typedef struct T_D_801E1748_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1748_file025;

/* D_801E1778; 2 functions */
typedef struct T_D_801E1778_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1778_file025;

/* D_801E1788; 2 functions */
typedef struct T_D_801E1788_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1788_file025;

/* D_801E17B8; 2 functions */
typedef struct T_D_801E17B8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E17B8_file025;

/* D_801E17C8; 2 functions */
typedef struct T_D_801E17C8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E17C8_file025;

/* D_801E17D8; 2 functions */
typedef struct T_D_801E17D8_file025 { /* size >= 0xC */
    /* 0x000 */ f32 unk0; /* 1 use */
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 1 use */
} T_D_801E17D8_file025;

/* D_801E1BB8; 2 functions */
typedef struct T_D_801E1BB8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1BB8_file025;

/* D_801E1BC8; 2 functions */
typedef struct T_D_801E1BC8_file025 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use; also u16@0x4 */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801E1BC8_file025;

/* anonymous; 1 functions */
typedef struct T_func_801BF6B0_ret_elem { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_func_801BF6B0_ret_elem;

/* func_8038D8B8; 28 functions */
typedef struct T_func_8038D8B8_file025 { /* size >= 0x18 */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_D_80089378 *unk14; /* 29 uses */
} T_func_8038D8B8_file025;

extern struct T_D_801D8C00_file025_elem_p0_elem_p0_elem * *D_801D8C00[];
extern void * * *D_801D8C74[];
extern s32 D_801D8CE4;
extern s32 D_801D8CE8;
extern s32 D_801D8CEC;
extern u32 D_801D8CF0;
extern s32 D_801D8CF4;
extern s32 D_801D8CF8;
extern s32 D_801D8CFC;
extern s32 D_801D8D00;
extern struct T_func_801BF6B0_ret_elem_2 *D_801D8D04[];
extern struct T_func_80107830_a0 *D_801D8D60;
extern s32 D_801D8D64;
extern T_D_801D8D68_file025 D_801D8D68;
extern s32 D_801D8D80;
extern u32 D_801D8D84;
extern s32 D_801D8D88;
extern u32 D_801D8D8C;
extern s32 D_801D8D90;
extern s32 D_801D8D94;
extern s32 D_801D8D98;
extern s32 D_801D8DA0;
extern u32 D_801D8DA4;
extern u32 D_801D8DA8;
extern s32 D_801D8DB0;
extern s32 D_801D8DC0;
extern u32 D_801D8DD0;
extern s32 D_801D8DD4;
extern s32 D_801D8DD8;
extern s32 D_801D8DDC;
extern s32 D_801D8DE0;
extern u32 D_801D8DE4;
extern struct T_D_801D8DF0_file025_elem_p0_elem_p0_elem * *D_801D8DF0[];
extern T_D_801D9F30_file025 D_801D9F30;
extern T_D_801D9FD8_file025 D_801D9FD8;
extern s32 D_801DA230;
extern s32 D_801DA234[];
extern T_D_80162DD0 D_801DA23C;
extern s32 D_801DA250[];
extern T_D_80162DD0 D_801DA270;
extern f32 D_801DA284;
extern s32 D_801DA288;
extern T_D_80162DD0 D_801DA28C;
extern s32 D_801DA2A0[];
extern struct T_D_801DEF90_file025 *D_801DA2AC;
extern s32 D_801DA2B0;
extern s32 D_801DA2B4;
extern s32 D_801DA2B8;
extern T_D_80162DD0 D_801DA2BC;
extern T_D_8016379C D_801DA2D0;
extern T_D_80162DD0 D_801DA2E0;
extern T_D_8016379C D_801DA2F4;
extern s32 D_801DA2F8;
extern s32 D_801DA304[];
extern T_D_80162DD0 D_801DA354;
extern T_D_80162DD0 D_801DA368;
extern s32 D_801DA37C[];
extern struct T_D_801DA3A0_file025_elem D_801DA3A0[];
extern struct T_D_801DA400_file025_elem D_801DA400[];
extern struct T_D_801DA408_file025_elem D_801DA408[];
extern struct T_D_801DA410_file025_elem D_801DA410[];
extern struct T_D_801DA418_file025_elem D_801DA418[];
extern T_D_80162DD0 D_801DA4C0;
extern T_D_8016379C D_801DA4D4;
extern T_D_80162DD0 D_801DA4E4;
extern f32 D_801DA4F8;
extern f32 D_801DA4FC;
extern f32 D_801DA500;
extern s32 D_801DA504;
extern f32 D_801DA508;
extern struct T_D_80089378 *D_801DA50C;
extern struct T_D_80089378 *D_801DA510;
extern s32 D_801DA514;
extern T_D_801DA518_file025 D_801DA518;
extern T_D_8016379C D_801DA52C;
extern T_D_80162DD0 D_801DA53C;
extern T_D_8016379C D_801DA550;
extern s32 D_801DA560[];
extern T_D_80162DD0 D_801DA580;
extern T_D_8016379C D_801DA594;
extern s32 D_801DA5A4[];
extern T_D_80162DD0 D_801DA5C4;
extern T_D_8016379C D_801DA5D8;
extern s32 D_801DA5E8[];
extern u32 D_801DA610;
extern s32 D_801DA614;
extern s32 D_801DA618;
extern T_D_80162DD0 D_801DA61C;
extern T_D_80162DD0 D_801DA630;
extern s32 D_801DA644;
extern s32 D_801DA648;
extern T_D_80162DD0 D_801DA64C;
extern T_D_80162DD0 D_801DA660;
extern u32 *D_801DA674[];
extern s32 D_801DA680;
extern T_D_80162DD0 D_801DA684;
extern s32 D_801DA698;
extern T_D_80162DD0 D_801DA69C;
extern T_D_80162DD0 D_801DA6B0;
extern T_D_80162DD0 D_801DA6C4;
extern T_D_80162DD0 D_801DA6D8;
extern f32 D_801DA6EC;
extern T_D_80162DD0 D_801DA6F0;
extern T_D_80162DD0 D_801DA704;
extern s32 D_801DA718;
extern f32 D_801DA71C;
extern f32 D_801DA720;
extern T_D_80162DD0 D_801DA724;
extern T_D_80162DD0 D_801DA738;
extern T_D_80162DD0 D_801DA74C;
extern T_D_80162DD0 D_801DA760;
extern T_D_8016379C D_801DA778;
extern T_D_8016379C D_801DA788;
extern T_D_8016379C D_801DA798;
extern T_D_8016379C D_801DA7A8;
extern T_D_8016379C D_801DA7B8;
extern s32 D_801DA7C8[];
extern T_D_8016379C D_801DA818;
extern T_D_8016379C D_801DA840;
extern s32 D_801DA850[];
extern T_D_8016379C D_801DA8F0;
extern s32 D_801DA900[];
extern T_D_8016379C D_801DA950;
extern s32 D_801DA960[];
extern T_D_8016379C D_801DA9B0;
extern s32 D_801DA9C0[];
extern T_D_8016379C D_801DA9E0;
extern T_D_8016379C D_801DA9F0;
extern T_D_8016379C D_801DAA00;
extern T_D_8016379C D_801DAA10;
extern s32 D_801DAA20[];
extern T_D_8016379C D_801DAA50;
extern s32 D_801DAA60[];
extern s32 D_801DAABC;
extern s32 D_801DAAC0;
extern s32 D_801DAAC4;
extern s32 D_801DAAC8;
extern s32 D_801DAACC[];
extern struct T_D_801DAAF4_file025_elem_p0_elem *D_801DAAF4[];
extern s32 D_801DAAFC;
extern T_D_80162DD0 D_801DAB00;
extern struct T_func_80107830_a0 *D_801DAB14;
extern s32 D_801DAB18;
extern s32 D_801DAB20;
extern struct T_D_801DAB80_file025_p0 *D_801DAB80;
extern struct T_D_801DAB84_file025_p0_elem *D_801DAB84;
extern T_D_80162DD0 D_801DAB94;
extern T_D_8016379C D_801DABA8;
extern struct T_func_80107830_a0 *D_801DABB8;
extern s32 D_801DABBC;
extern s32 D_801DABCC;
extern s32 D_801DABD0;
extern T_D_80162DD0 D_801DABD4;
extern struct T_D_801E0D10_file025 *D_801DABE8;
extern struct T_func_80107830_a0 *D_801DAC48;
extern s32 D_801DAC4C;
extern struct T_func_8012636C_a0 *D_801DAC50;
extern struct T_func_8037DD6C_a1 * *D_801DAC54;
extern s32 D_801DAC58;
extern struct T_D_801DAC70_file025_p0 *D_801DAC70;
extern struct T_D_801DAC74_file025_p0 *D_801DAC74;
extern s32 D_801DAC78;
extern s32 D_801DAC7C;
extern s32 D_801DAC80;
extern s32 D_801DAC84;
extern s32 D_801DAC88;
extern s32 D_801DAC8C;
extern struct T_D_801DAC90_file025_elem D_801DAC90[];
extern s32 D_801DAD10;
extern struct T_D_801DAD28_file025_p0 *D_801DAD28;
extern struct T_D_801DAD2C_file025_p0 *D_801DAD2C;
extern s32 D_801DAD30;
extern s32 D_801DAD34;
extern s32 D_801DAD38;
extern s32 D_801DAD3C;
extern T_D_8016379C D_801DAD40;
extern struct T_func_80005FAC_ret *D_801DAD50;
extern s32 D_801DAD54;
extern s32 D_801DAD58;
extern u8 D_801DAD5C;
extern s32 D_801DAD60;
extern struct T_D_801DAD64_file025_elem D_801DAD64[];
extern s32 D_801DADE0;
extern s32 D_801DADE4;
extern struct T_D_801DADFC_file025_p0 *D_801DADFC;
extern struct T_D_801DAE00_file025_p0 *D_801DAE00;
extern s32 D_801DAE04;
extern s32 D_801DAE08;
extern s32 D_801DAE0C;
extern struct T_D_801DAE10_file025_elem D_801DAE10[];
extern struct T_D_801DAE88_file025_elem D_801DAE88[];
extern struct T_func_8012636C_a0 *D_801DAEB0;
extern struct T_func_8037DD6C_a1 * *D_801DAEB4;
extern struct T_D_801DAECC_file025_p0 *D_801DAECC;
extern struct T_D_801DAED0_file025_p0 *D_801DAED0;
extern T_D_8016379C D_801DAED4;
extern struct T_func_80005FAC_ret *D_801DAEE4;
extern s32 D_801DAEE8;
extern s32 D_801DAEEC;
extern s32 D_801DAEF0;
extern s32 D_801DAEF4;
extern s32 D_801DAF00;
extern struct T_D_801DAF18_file025_p0 *D_801DAF18;
extern struct T_D_801DAF1C_file025_p0 *D_801DAF1C;
extern T_D_8016379C D_801DAF20;
extern s32 D_801DAF30;
extern struct T_func_80005FAC_ret *D_801DAF34;
extern s32 D_801DAF38;
extern s32 D_801DAF3C;
extern s32 D_801DAF40;
extern s32 D_801DAF44;
extern struct T_D_801DAF48_file025_elem D_801DAF48[];
extern s32 D_801DAFC0;
extern struct T_D_801DAFD8_file025_p0 *D_801DAFD8;
extern struct T_D_801DAFDC_file025_p0 *D_801DAFDC;
extern s32 D_801DAFE0;
extern s32 D_801DAFE4;
extern s32 D_801DAFE8;
extern s32 D_801DAFEC;
extern struct T_D_801DAFF0_file025_elem D_801DAFF0[];
extern struct T_D_801DB084_file025_p0 *D_801DB084;
extern struct T_D_801DB088_file025_p0 *D_801DB088;
extern T_D_8016379C D_801DB08C;
extern struct T_func_80005FAC_ret *D_801DB09C;
extern s32 D_801DB0A0;
extern s32 D_801DB0A4;
extern s32 D_801DB0A8;
extern s32 D_801DB0AC;
extern s32 D_801DB0B0;
extern struct T_D_801DB0B4_file025_elem D_801DB0B4[];
extern struct T_D_801DB144_file025_p0 *D_801DB144;
extern struct T_D_801DB148_file025_p0 *D_801DB148;
extern s32 D_801DB14C;
extern struct T_D_801DB164_file025_p0 *D_801DB164;
extern struct T_D_801DB168_file025_p0 *D_801DB168;
extern s32 D_801DB16C;
extern s32 D_801DB170;
extern s32 D_801DB174;
extern s32 D_801DB180;
extern struct T_D_801DB198_file025_p0 *D_801DB198;
extern struct T_D_801DB19C_file025_p0 *D_801DB19C;
extern T_D_8016379C D_801DB1A0;
extern s32 D_801DB1B0;
extern struct T_func_80005FAC_ret *D_801DB1B4;
extern s32 D_801DB1B8;
extern s32 D_801DB1BC;
extern s32 D_801DB1C0;
extern struct T_D_801DB1C4_file025_elem D_801DB1C4[];
extern s32 D_801DB240;
extern struct T_D_801DB258_file025_p0 *D_801DB258;
extern struct T_D_801DB25C_file025_p0 *D_801DB25C;
extern T_D_8016379C D_801DB260;
extern s32 D_801DB270;
extern struct T_func_80005FAC_ret *D_801DB274;
extern s32 D_801DB278;
extern s32 D_801DB27C;
extern s32 D_801DB280;
extern struct T_D_801DB284_file025_elem D_801DB284[];
extern struct T_D_801DB314_file025_p0 *D_801DB314;
extern struct T_D_801DB318_file025_p0 *D_801DB318;
extern s32 D_801DB31C;
extern struct T_D_801DB334_file025_p0 *D_801DB334;
extern struct T_D_801DB338_file025_p0 *D_801DB338;
extern s32 D_801DB33C;
extern struct T_D_801DB354_file025_p0 *D_801DB354;
extern struct T_D_801DB358_file025_p0 *D_801DB358;
extern s32 D_801DB35C;
extern struct T_D_801DB374_file025_p0 *D_801DB374;
extern struct T_D_801DB378_file025_p0 *D_801DB378;
extern s32 D_801DB37C;
extern s32 D_801DB380;
extern s32 D_801DB384;
extern s32 D_801DB388;
extern s32 D_801DB38C;
extern u32 D_801DB390;
extern s32 D_801DB394;
extern f32 D_801DB3F4;
extern f32 D_801DB3F8;
extern f32 D_801DB3FC;
extern f32 D_801DB400;
extern f32 D_801DB428[];
extern s32 D_801DB590;
extern struct T_D_801DB5A8_file025_p0 *D_801DB5A8;
extern struct T_D_801DB5AC_file025_p0 *D_801DB5AC;
extern s32 D_801DB5B0;
extern s32 D_801DB5B4;
extern s32 D_801DB5B8;
extern struct T_D_801DB5BC_file025_elem D_801DB5BC[];
extern struct T_func_8012636C_a0 *D_801DB640;
extern struct T_func_8037DD6C_a1 * *D_801DB644;
extern s32 D_801DB648;
extern struct T_D_801DB660_file025_p0 *D_801DB660;
extern struct T_D_801DB664_file025_p0 *D_801DB664;
extern T_D_8016379C D_801DB668;
extern struct T_func_80005FAC_ret *D_801DB678;
extern s32 D_801DB67C;
extern s32 D_801DB680;
extern s32 D_801DB684;
extern s32 D_801DB688;
extern s32 D_801DB68C;
extern struct T_D_801DB690_file025_elem D_801DB690[];
extern struct T_func_8012636C_a0 *D_801DB710;
extern struct T_func_8037DD6C_a1 * *D_801DB714;
extern s32 D_801DB718;
extern struct T_D_801DB730_file025_p0 *D_801DB730;
extern struct T_D_801DB734_file025_p0 *D_801DB734;
extern T_D_8016379C D_801DB738;
extern struct T_func_80005FAC_ret *D_801DB748;
extern s32 D_801DB74C;
extern s32 D_801DB750;
extern s32 D_801DB754;
extern s32 D_801DB758;
extern struct T_D_801DB75C_file025_elem D_801DB75C[];
extern s32 D_801DB7E0;
extern struct T_D_801DB7F8_file025_p0 *D_801DB7F8;
extern struct T_D_801DB7FC_file025_p0 *D_801DB7FC;
extern s32 D_801DB800;
extern s32 D_801DB804;
extern struct T_D_801DB808_file025_elem D_801DB808[];
extern s32 D_801DB880;
extern s32 D_801DB884;
extern struct T_D_801DB89C_file025_p0 *D_801DB89C;
extern struct T_D_801DB8A0_file025_p0 *D_801DB8A0;
extern s32 D_801DB8A4;
extern s32 D_801DB8A8;
extern struct T_D_801DB8AC_file025_elem D_801DB8AC[];
extern struct T_D_801DB924_file025_elem D_801DB924[];
extern s32 D_801DB950;
extern struct T_D_801DB968_file025_p0 *D_801DB968;
extern struct T_D_801DB96C_file025_p0 *D_801DB96C;
extern s32 D_801DB970;
extern s32 D_801DB974;
extern s32 D_801DB978;
extern s32 D_801DB97C;
extern s32 D_801DB980;
extern struct T_D_801DB984_file025_elem D_801DB984[];
extern struct T_D_801DBA24_file025_p0 *D_801DBA24;
extern struct T_D_801DBA28_file025_p0 *D_801DBA28;
extern s32 D_801DBA2C;
extern s32 D_801DBA30;
extern s32 D_801DBA34;
extern struct T_D_801DBA38_file025_elem D_801DBA38[];
extern struct T_D_801DBAD4_file025_p0 *D_801DBAD4;
extern struct T_D_801DBAD8_file025_p0 *D_801DBAD8;
extern s32 D_801DBADC;
extern s32 D_801DBAE0;
extern s32 D_801DBAE4;
extern s32 D_801DBAE8;
extern s32 D_801DBAEC;
extern u32 D_801DBAF0;
extern s32 D_801DBAF4;
extern s32 D_801DBB54;
extern struct T_D_801DBB74_file025_p0 *D_801DBB74;
extern struct T_D_801DBB78_file025_p0 *D_801DBB78;
extern s32 D_801DBB7C;
extern s32 D_801DBB80;
extern s32 D_801DC930[];
extern s32 D_801DCD54[];
extern u8 D_801DCE70;
extern u8 D_801DCE90;
extern f64 D_801DCED8;
extern u8 D_801DCF20;
extern u8 D_801DCF3C;
extern s32 D_801DD16C[];
extern s32 D_801DD178[];
extern s32 D_801DD184[];
extern f32 D_801DD214;
extern f64 D_801DD218;
extern f32 D_801DD220;
extern f64 D_801DD228;
extern f32 D_801DD230;
extern f32 D_801DD234;
extern f32 D_801DD238;
extern f32 D_801DD23C;
extern f32 D_801DD240;
extern f64 D_801DD2C0;
extern f32 D_801DD2C8;
extern f32 D_801DD2CC;
extern f32 D_801DD2D0;
extern f32 D_801DD2D4;
extern f32 D_801DD2D8;
extern f32 D_801DD2DC;
extern f32 D_801DD2F8;
extern f32 D_801DD2FC;
extern f32 D_801DD300;
extern f32 D_801DD304;
extern f32 D_801DD308;
extern struct T_D_801DD3B0_file025_elem D_801DD3B0[];
extern f64 D_801DD3F0;
extern f64 D_801DD3F8;
extern f64 D_801DD430;
extern f64 D_801DD440;
extern f64 D_801DD450;
extern f64 D_801DD458;
extern f64 D_801DD460;
extern f64 D_801DD470;
extern f64 D_801DD4A0;
extern f64 D_801DD4B0;
extern f64 D_801DD4C0;
extern f32 D_801DD530;
extern f32 D_801DD534;
extern f32 D_801DD538;
extern f32 D_801DD53C;
extern f32 D_801DD540;
extern f32 D_801DD544;
extern f32 D_801DD548;
extern f32 D_801DD54C;
extern f32 D_801DD550;
extern f32 D_801DD554;
extern f32 D_801DD558;
extern f32 D_801DD55C;
extern f32 D_801DD560;
extern f32 D_801DD564;
extern f32 D_801DD568;
extern f32 D_801DD56C;
extern f32 D_801DD570;
extern f64 D_801DD580;
extern f64 D_801DD590;
extern f64 D_801DD5A0;
extern f64 D_801DD5B0;
extern f64 D_801DD5C0;
extern f64 D_801DD5C8;
extern f64 D_801DD5D0;
extern f64 D_801DD5E0;
extern struct T_D_801DD5F0_file025_elem D_801DD5F0[];
extern f32 D_801DD65C;
extern f32 D_801DD660;
extern s32 D_801DE828;
extern u32 D_801DE830;
extern struct T_D_801DE838_file025_elem_2 D_801DE838[];
extern u32 D_801DEA38;
extern struct T_D_801DEA40_file025_elem_2 D_801DEA40[];
extern s32 D_801DEBC0[];
extern struct T_D_801DEBC4_file025_elem D_801DEBC4[];
extern struct T_D_801DEBF0_file025_elem D_801DEBF0[];
extern struct T_D_801DED70_file025_elem D_801DED70[];
extern s32 D_801DEF70;
extern f32 D_801DEF80;
extern f32 D_801DEF84;
extern f32 D_801DEF88;
extern T_D_801DEF90_file025 D_801DEF90;
extern u8 D_801DF790;
extern u8 D_801DF791;
extern u8 D_801DF792;
extern u8 D_801DF793;
extern u8 D_801DF794;
extern u8 D_801DF795;
extern u8 D_801DF796;
extern u8 D_801DF797;
extern u16 D_801DF798;
extern u16 D_801DF79A;
extern T_D_801E04C0_file025 D_801E04C0;
extern struct T_D_801E04E0_file025_elem D_801E04E0[];
extern struct T_D_801E04E0_file025_elem D_801E0504[];
extern struct T_D_801E04E0_file025_elem D_801E0528[];
extern struct T_D_801E0550_file025_elem D_801E0550[];
extern struct T_D_801E05D0_file025_elem D_801E05D0[];
extern T_D_801E0650_file025 D_801E0650;
extern struct T_D_801E0660_file025_elem D_801E0660[];
extern s32 *D_801E06D8[];
extern s32 D_801E06DC;
extern struct T_D_801E06E0_file025_elem D_801E06E0[];
extern struct T_D_801E0700_file025_elem D_801E0700[];
extern s32 *D_801E0778[];
extern s32 D_801E077C;
extern struct T_D_801E0780_file025_elem D_801E0780[];
extern struct T_D_801E07A0_file025_elem D_801E07A0[];
extern s32 D_801E07A4;
extern s32 D_801E07A8;
extern s32 D_801E07AC;
extern s32 D_801E07B0;
extern s32 D_801E07B4;
extern s32 D_801E07B8;
extern s32 D_801E07BC;
extern s32 D_801E07C0;
extern s32 D_801E07C4;
extern s32 D_801E07C8;
extern s32 D_801E07CC;
extern s32 D_801E07D0;
extern s32 D_801E07D4;
extern s32 D_801E07D8;
extern s32 D_801E07DC;
extern s32 D_801E07E0;
extern s32 D_801E07E4;
extern s32 D_801E07E8;
extern s32 D_801E07EC;
extern s32 D_801E07F0;
extern s32 D_801E07F4;
extern s32 D_801E07F8;
extern s32 D_801E07FC;
extern s32 D_801E0800;
extern s32 D_801E0804;
extern s32 D_801E0808;
extern s32 D_801E080C;
extern s32 D_801E0810;
extern s32 D_801E0814;
extern s32 D_801E0818;
extern s32 D_801E081C;
extern s32 D_801E0820;
extern s32 D_801E0824;
extern struct T_D_801E0828_file025_elem D_801E0828[];
extern T_D_801E0BB0_file025 D_801E0BB0;
extern struct T_D_801E0BC0_file025_elem D_801E0BC0[];
extern struct T_D_801E0BD0_file025_elem D_801E0BD0[];
extern struct T_D_801E0BD1_file025_elem D_801E0BD1[];
extern struct T_D_801E0BD2_file025_elem D_801E0BD2[];
extern s32 D_801E0C38;
extern T_D_801E0C40_file025 D_801E0C40;
extern s32 D_801E0C44;
extern s32 D_801E0C48;
extern u8 D_801E0C4C;
extern s32 D_801E0C50;
extern u8 D_801E0C54;
extern s32 D_801E0C58;
extern u8 D_801E0C5C;
extern s32 D_801E0C60;
extern T_D_801E0BB0_file025 D_801E0CF8;
extern T_D_801E0D10_file025 D_801E0D10;
extern T_D_801E0D10_file025 D_801E0F10;
extern T_D_801E0BB0_file025 D_801E1188;
extern T_D_801E11A0_file025 D_801E11A0;
extern T_D_801E11B0_file025 D_801E11B0;
extern T_D_801E11C0_file025 D_801E11C0;
extern T_D_801E11C0_file025 D_801E11D0;
extern s32 D_801E11E0;
extern u32 D_801E11E4;
extern s32 D_801E11E8;
extern struct T_func_8012636C_a0 *D_801E11F0;
extern T_D_801E11F8_file025 D_801E11F8;
extern T_D_801E1208_file025 D_801E1208;
extern s32 D_801E1218;
extern u32 D_801E121C;
extern s32 D_801E1220;
extern struct T_func_8012636C_a0 *D_801E1230;
extern T_D_801E1238_file025 D_801E1238;
extern T_D_801E1248_file025 D_801E1248;
extern s32 D_801E1258;
extern u32 D_801E125C;
extern s32 D_801E1260;
extern s32 D_801E1268;
extern u32 D_801E126C;
extern s32 D_801E1270;
extern T_D_801E1280_file025 D_801E1280;
extern T_D_801E1290_file025 D_801E1290;
extern T_D_801E11C0_file025 D_801E12A0;
extern T_D_801E11C0_file025 D_801E12B0;
extern struct T_func_8012636C_a0 *D_801E12C0;
extern T_D_801E12C8_file025 D_801E12C8;
extern T_D_801E12D8_file025 D_801E12D8;
extern s32 D_801E12E8;
extern u32 D_801E12EC;
extern s32 D_801E12F0;
extern struct T_func_8012636C_a0 *D_801E1300;
extern T_D_801E1308_file025 D_801E1308;
extern s32 D_801E1318;
extern u32 D_801E131C;
extern s32 D_801E1320;
extern struct T_func_8012636C_a0 *D_801E1330;
extern s32 D_801E1334;
extern T_D_801E1338_file025 D_801E1338;
extern T_D_801E1348_file025 D_801E1348;
extern s32 D_801E1358;
extern u32 D_801E135C;
extern s32 D_801E1360;
extern T_D_801E1370_file025 D_801E1370;
extern T_D_801E1380_file025 D_801E1380;
extern struct T_func_8012636C_a0 *D_801E1390;
extern T_D_801E1398_file025 D_801E1398;
extern T_D_801E13A8_file025 D_801E13A8;
extern struct T_func_8012636C_a0 *D_801E13C0;
extern T_D_801E13C8_file025 D_801E13C8;
extern T_D_801E13D8_file025 D_801E13D8;
extern s32 D_801E13E8;
extern u32 D_801E13EC;
extern s32 D_801E13F0;
extern struct T_func_8012636C_a0 *D_801E1400;
extern T_D_801E1408_file025 D_801E1408;
extern T_D_801E1418_file025 D_801E1418;
extern s32 D_801E1428;
extern u32 D_801E142C;
extern s32 D_801E1430;
extern T_D_801E1440_file025 D_801E1440;
extern T_D_801E1450_file025 D_801E1450;
extern T_D_801E1460_file025 D_801E1460;
extern T_D_801E1470_file025 D_801E1470;
extern T_D_801E1480_file025 D_801E1480;
extern T_D_801E1490_file025 D_801E1490;
extern struct T_func_8012636C_a0 *D_801E14A0;
extern T_D_801E14A8_file025 D_801E14A8;
extern T_D_801E14B8_file025 D_801E14B8;
extern T_D_801E14C8_file025 D_801E14C8;
extern s32 D_801E14D4;
extern f32 D_801E14D8[];
extern struct T_func_8012636C_a0 *D_801E1600;
extern T_D_801E1608_file025 D_801E1608;
extern s32 D_801E1618;
extern u32 D_801E161C;
extern s32 D_801E1620;
extern T_D_801E1630_file025 D_801E1630;
extern T_D_801E1640_file025 D_801E1640;
extern T_D_801E11C0_file025 D_801E1650;
extern T_D_801E11C0_file025 D_801E1660;
extern s32 D_801E1670;
extern u32 D_801E1674;
extern s32 D_801E1678;
extern T_D_801E1680_file025 D_801E1680;
extern T_D_801E1690_file025 D_801E1690;
extern T_D_801E11C0_file025 D_801E16A0;
extern T_D_801E11C0_file025 D_801E16B0;
extern s32 D_801E16C0;
extern u32 D_801E16C4;
extern s32 D_801E16C8;
extern T_D_801E16D0_file025 D_801E16D0;
extern s32 D_801E16E0;
extern u32 D_801E16E4;
extern s32 D_801E16E8;
extern struct T_func_8012636C_a0 *D_801E16F0;
extern T_D_801E16F8_file025 D_801E16F8;
extern s32 D_801E1708;
extern u32 D_801E170C;
extern s32 D_801E1710;
extern s32 D_801E1718;
extern u32 D_801E171C;
extern s32 D_801E1720;
extern struct T_func_8012636C_a0 *D_801E1730;
extern T_D_801E1738_file025 D_801E1738;
extern T_D_801E1748_file025 D_801E1748;
extern s32 D_801E1758;
extern u32 D_801E175C;
extern s32 D_801E1760;
extern struct T_func_8012636C_a0 *D_801E1770;
extern s32 D_801E1774;
extern T_D_801E1778_file025 D_801E1778;
extern T_D_801E1788_file025 D_801E1788;
extern s32 D_801E1798;
extern u32 D_801E179C;
extern s32 D_801E17A0;
extern struct T_func_8012636C_a0 *D_801E17B0;
extern T_D_801E17B8_file025 D_801E17B8;
extern T_D_801E17C8_file025 D_801E17C8;
extern T_D_801E17D8_file025 D_801E17D8;
extern f32 D_801E17E8[];
extern f32 D_801E1908[];
extern s32 D_801E1A88;
extern s32 D_801E1A90[];
extern struct T_func_8012636C_a0 *D_801E1BB0;
extern T_D_801E1BB8_file025 D_801E1BB8;
extern T_D_801E1BC8_file025 D_801E1BC8;

#endif
