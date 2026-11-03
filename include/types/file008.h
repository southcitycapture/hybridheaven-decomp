#ifndef TYPES_FILE008_H
#define TYPES_FILE008_H

/* Recovered types for file008 (tools/hh/types_db.py, Task 30): one struct per object family that the
 * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where
 * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.
 * Index and evidence: queue/types.jsonl. */

#include "common.h"
#include "types/main.h"
#include "types/shared.h"

/* pointed to by T_D_8008D8F8_elem.0x0; 1 functions */
typedef struct T_D_8008D8F8_elem_p0 { /* size >= 0x23 */
    /* 0x000 */ u8 pad0[0x22];
    /* 0x022 */ u8 unk22; /* 1 use */
} T_D_8008D8F8_elem_p0;

/* D_801636B0; 1 functions */
typedef struct T_D_801636B0_elem { /* size 0x6 */
    /* 0x000 */ u16 unk0; /* 6 uses */
    /* 0x002 */ u16 count; /* 1 use */
    /* 0x004 */ u8 pad4[0x2];
} T_D_801636B0_elem;

/* D_801636F4; 9 functions */
typedef struct T_D_801636F4 { /* size >= 0x4 */
    /* 0x000 */ s32 unk0; /* 31 uses; also u8@0x0 */
} T_D_801636F4;

/* D_801636FC; 2 functions */
typedef struct T_D_801636FC { /* size >= 0x4 */
    /* 0x000 */ s32 unk0; /* 13 uses; also u8@0x0 */
} T_D_801636FC;

/* D_80163840; 1 functions */
typedef struct T_D_80163840 { /* size >= 0x1C */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
} T_D_80163840;

/* D_80163A90; 1 functions */
typedef struct T_D_80163A90 { /* size >= 0x1C */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
} T_D_80163A90;

/* pointed to by T_D_80164DAC_elem_p0_elem_p0_elem.0x0; 1 functions */
typedef struct T_D_80164DAC_elem_p0_elem_p0_elem_p0 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ f32 unk10; /* 1 use */
} T_D_80164DAC_elem_p0_elem_p0_elem_p0;

/* pointed to by T_D_80164DAC_elem_p0_elem_p0.0x0; 1 functions */
typedef struct T_D_80164DAC_elem_p0_elem_p0_p0 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ f32 unk10; /* 1 use */
} T_D_80164DAC_elem_p0_elem_p0_p0;

/* pointed to by T_D_80164DAC_p10.0x0; 1 functions */
typedef struct T_D_80164DAC_p10_p0 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ struct T_D_80164DAC_p10_p0_p4 *unk4; /* 1 use */
} T_D_80164DAC_p10_p0;

/* pointed to by T_D_80164DAC_p10_p0.0x4; 1 functions */
typedef struct T_D_80164DAC_p10_p0_p4 { /* size >= 0x1A */
    /* 0x000 */ u8 pad0[0x19];
    /* 0x019 */ u8 unk19; /* 1 use */
} T_D_80164DAC_p10_p0_p4;

/* pointed to by T_D_80164DAC_p8.0x0; 1 functions */
typedef struct T_D_80164DAC_p8_p0 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ struct T_D_80164DAC_p8_p0_p4 *unk4; /* 1 use */
} T_D_80164DAC_p8_p0;

/* pointed to by T_D_80164DAC_p8_p0.0x4; 1 functions */
typedef struct T_D_80164DAC_p8_p0_p4 { /* size >= 0x1A */
    /* 0x000 */ u8 pad0[0x19];
    /* 0x019 */ u8 unk19; /* 1 use */
} T_D_80164DAC_p8_p0_p4;

/* pointed to by T_D_80164DAC.0xC; 1 functions */
typedef struct T_D_80164DAC_pC { /* size >= 0x20 */
    /* 0x000 */ struct T_D_80164DAC_pC_p0 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x18];
    /* 0x01C */ struct T_D_80164DAC_pC_p1C *unk1C; /* 1 use */
} T_D_80164DAC_pC;

/* pointed to by T_D_80164DAC_pC.0x0; 1 functions */
typedef struct T_D_80164DAC_pC_p0 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_D_80164DAC_pC_p0_pC *unkC; /* 1 use */
} T_D_80164DAC_pC_p0;

/* pointed to by T_D_80164DAC_pC_p0.0xC; 1 functions */
typedef struct T_D_80164DAC_pC_p0_pC { /* size >= 0x1A */
    /* 0x000 */ u8 pad0[0x19];
    /* 0x019 */ u8 unk19; /* 1 use */
} T_D_80164DAC_pC_p0_pC;

/* pointed to by T_D_80164DAC_pC.0x1C; 1 functions */
typedef struct T_D_80164DAC_pC_p1C { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_D_80164DAC_pC_p1C_pC *unkC; /* 1 use */
} T_D_80164DAC_pC_p1C;

/* pointed to by T_D_80164DAC_pC_p1C.0xC; 1 functions */
typedef struct T_D_80164DAC_pC_p1C_pC { /* size >= 0x1A */
    /* 0x000 */ u8 pad0[0x19];
    /* 0x019 */ u8 unk19; /* 1 use */
} T_D_80164DAC_pC_p1C_pC;

/* D_80164E80; 2 functions */
typedef struct T_D_80164E80 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
} T_D_80164E80;

/* pointed to by T_D_80171D8C.0x0; 1 functions */
typedef struct T_D_80171D8C_p0 { /* size >= 0x8 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80171D8C_p0;

/* pointed to by T_D_80172510_p0.0x0; 1 functions */
typedef struct T_D_80172510_p0_p0 { /* size >= 0x4 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u16 unk2; /* 1 use */
} T_D_80172510_p0_p0;

/* pointed to by T_D_80175490_elem.0x0; 3 functions */
typedef struct T_D_80175490_elem_p0 { /* size >= 0x10 */
    /* 0x000 */ struct T_func_80126198_a0_elem *unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ u16 unk8; /* 4 uses */
    /* 0x00A */ u8 padA[0x2];
    /* 0x00C */ s16 *unkC; /* 1 use */
} T_D_80175490_elem_p0;

/* D_80175BA0; 1 functions */
typedef struct T_D_80175BA0 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175BA0;

/* D_80175BB4; 1 functions */
typedef struct T_D_80175BB4 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175BB4;

/* D_80175BC8; 1 functions */
typedef struct T_D_80175BC8 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175BC8;

/* D_80175BDC; 1 functions */
typedef struct T_D_80175BDC { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175BDC;

/* D_80175BF0; 1 functions */
typedef struct T_D_80175BF0 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175BF0;

/* D_80175C04; 1 functions */
typedef struct T_D_80175C04 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175C04;

/* D_80175C18; 1 functions */
typedef struct T_D_80175C18 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175C18;

/* D_80175C2C; 1 functions */
typedef struct T_D_80175C2C { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175C2C;

/* D_80175C40; 1 functions */
typedef struct T_D_80175C40 { /* size >= 0x14 */
    /* 0x000 */ s32 w; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80175C40;

/* D_80176020; 2 functions */
typedef struct T_D_80176020_elem { /* size 0x4 */
    /* 0x000 */ u16 unk0; /* 20 uses */
    /* 0x002 */ u16 unk2; /* 9 uses */
} T_D_80176020_elem;

/* D_80176090; 2 functions */
typedef struct T_D_80176090 { /* size >= 0x20 */
    /* 0x000 */ s32 w; /* 6 uses */
    /* 0x004 */ s32 unk4; /* 6 uses */
    /* 0x008 */ s32 unk8; /* 6 uses */
    /* 0x00C */ s32 unkC; /* 6 uses */
    /* 0x010 */ s32 unk10; /* 6 uses */
    /* 0x014 */ s32 unk14; /* 6 uses */
    /* 0x018 */ s32 unk18; /* 6 uses */
    /* 0x01C */ s32 unk1C; /* 6 uses */
} T_D_80176090;

/* D_80178C10; 1 functions */
typedef struct T_D_80178C10 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 10 uses */
    /* 0x004 */ s32 unk4; /* 10 uses */
    /* 0x008 */ s32 unk8; /* 10 uses */
    /* 0x00C */ s32 unkC; /* 10 uses */
    /* 0x010 */ s32 unk10; /* 10 uses */
} T_D_80178C10;

/* D_80178CB4; 1 functions */
typedef struct T_D_80178CB4 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
    /* 0x00C */ s32 unkC; /* 4 uses */
    /* 0x010 */ s32 unk10; /* 4 uses */
} T_D_80178CB4;

/* D_80178CC8; 1 functions */
typedef struct T_D_80178CC8 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 4 uses */
    /* 0x008 */ s32 unk8; /* 4 uses */
    /* 0x00C */ s32 unkC; /* 4 uses */
    /* 0x010 */ s32 unk10; /* 4 uses */
} T_D_80178CC8;

/* D_8017BCC0; 1 functions */
typedef struct T_D_8017BCC0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8017BCC0;

/* D_8017BCCC; 1 functions */
typedef struct T_D_8017BCCC { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_8017BCCC;

/* D_8017BCE4; 1 functions */
typedef struct T_D_8017BCE4 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_8017BCE4;

/* D_8017BCFC; 1 functions */
typedef struct T_D_8017BCFC { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_8017BCFC;

/* D_8017BD14; 1 functions */
typedef struct T_D_8017BD14 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_8017BD14;

/* D_8017BD2C; 1 functions */
typedef struct T_D_8017BD2C { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_8017BD2C;

/* D_8017BD44; 1 functions */
typedef struct T_D_8017BD44 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_8017BD44;

/* D_8017BD5C; 1 functions */
typedef struct T_D_8017BD5C { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_8017BD5C;

/* D_8017BD74; 1 functions */
typedef struct T_D_8017BD74 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_8017BD74;

/* D_8017D08C; 1 functions */
typedef struct T_D_8017D08C { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8017D08C;

/* D_8017D1D4; 3 functions */
typedef struct T_D_8017D1D4 { /* size >= 0x6 */
    /* 0x000 */ u16 unk0; /* 3 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ u16 unk4; /* 2 uses */
} T_D_8017D1D4;

/* D_8017D244; 1 functions */
typedef struct T_D_8017D244 { /* size >= 0x6 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ u16 unk4; /* 1 use */
} T_D_8017D244;

/* D_8017D3B8; 1 functions */
typedef struct T_D_8017D3B8_elem { /* size 0xE */
    /* 0x000 */ u16 unk0; /* 3 uses */
    /* 0x002 */ u8 pad2[0xC];
} T_D_8017D3B8_elem;

/* D_8017D460; 3 functions */
typedef struct T_D_8017D460_elem { /* size 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 3 uses */
    /* 0x006 */ u16 unk6; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ u8 unk10; /* 1 use */
    /* 0x011 */ u8 unk11; /* 1 use */
    /* 0x012 */ u8 pad12[0x2];
    /* 0x014 */ struct T_D_8017D460_elem_p14 *unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ u16 unk1C; /* 1 use */
    /* 0x01E */ u8 pad1E[0x2];
} T_D_8017D460_elem;

/* pointed to by T_D_8017D460_elem.0x14; 1 functions */
typedef struct T_D_8017D460_elem_p14 { /* size >= 0x6 */
    /* 0x000 */ u16 unk0; /* 1 use */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ u16 unk4; /* 1 use */
} T_D_8017D460_elem_p14;

/* D_8017D474; 1 functions */
typedef struct T_D_8017D474_elem { /* size 0x20 */
    /* 0x000 */ u16 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x1C];
} T_D_8017D474_elem;

/* D_8017D478; 3 functions */
typedef struct T_D_8017D478_elem { /* size 0x20 */
    /* 0x000 */ struct T_D_8017D478_elem_p0 *unk0; /* 3 uses */
    /* 0x004 */ u8 pad4[0x1C];
} T_D_8017D478_elem;

/* pointed to by T_D_8017D478_elem.0x0; 3 functions */
typedef struct T_D_8017D478_elem_p0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 3 uses */
    /* 0x004 */ s32 unk4; /* 3 uses */
    /* 0x008 */ s32 unk8; /* 3 uses */
} T_D_8017D478_elem_p0;

/* D_8017DBF4; 1 functions */
typedef struct T_D_8017DBF4_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8017DBF4_elem;

/* D_8017DC20; 1 functions */
typedef struct T_D_8017DC20 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8017DC20;

/* anonymous; 2 functions */
typedef struct T_D_8017DD7C_elem { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 4 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
} T_D_8017DD7C_elem;

/* D_8017DDB0; 1 functions */
typedef struct T_D_8017DDB0_elem { /* size 0x7 */
    /* 0x000 */ u8 value; /* 1 use */
    /* 0x001 */ u8 pad1[0x6];
} T_D_8017DDB0_elem;

/* D_8017DF06; 1 functions */
typedef struct T_D_8017DF06_elem { /* size 0x7 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x6];
} T_D_8017DF06_elem;

/* D_8017DF1E; 1 functions */
typedef struct T_D_8017DF1E_elem { /* size 0x7 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x6];
} T_D_8017DF1E_elem;

/* D_8017DF2C; 6 functions */
typedef struct T_D_8017DF2C_elem { /* size 0x7 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 unk5; /* 2 uses */
    /* 0x006 */ u8 unk6; /* 2 uses */
} T_D_8017DF2C_elem;

/* D_8017DFFC; 1 functions */
typedef struct T_D_8017DFFC_elem { /* size 0x8 */
    /* 0x000 */ s32 *unk0; /* 1 use */
    /* 0x004 */ u8 pad4[0x4];
} T_D_8017DFFC_elem;

/* D_8017E000; 1 functions */
typedef struct T_D_8017E000_elem { /* size 0x8 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 pad1[0x7];
} T_D_8017E000_elem;

/* D_8017E404; 1 functions */
typedef struct T_D_8017E404_elem { /* size 0x4 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 1 use */
} T_D_8017E404_elem;

/* D_8017E494; 1 functions */
typedef struct T_D_8017E494 { /* size >= 0x10 */
    /* 0x000 */ void *unk0; /* 1 use */
    /* 0x004 */ f32 *unk4; /* 1 use */
    /* 0x008 */ f32 *unk8; /* 1 use */
    /* 0x00C */ f32 *unkC; /* 1 use */
} T_D_8017E494;

/* D_801812F0; 1 functions */
typedef struct T_D_801812F0 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
} T_D_801812F0;

/* D_80181308; 1 functions */
typedef struct T_D_80181308_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80181308_elem;

/* D_80181468; 1 functions */
typedef struct T_D_80181468 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80181468;

/* D_80181470; 1 functions */
typedef struct T_D_80181470 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80181470;

/* D_80181478; 1 functions */
typedef struct T_D_80181478 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80181478;

/* D_80181480; 1 functions */
typedef struct T_D_80181480 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 padD[0x3];
} T_D_80181480;

/* D_80181490; 1 functions */
typedef struct T_D_80181490 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 padD[0x3];
} T_D_80181490;

/* D_801814A0; 1 functions */
typedef struct T_D_801814A0 { /* size >= 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 padD[0x3];
} T_D_801814A0;

/* D_801814B8; 1 functions */
typedef struct T_D_801814B8 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_801814B8;

/* D_801814CC; 1 functions */
typedef struct T_D_801814CC { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_801814CC;

/* D_801814E0; 1 functions */
typedef struct T_D_801814E0 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801814E0;

/* D_801814EC; 1 functions */
typedef struct T_D_801814EC { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801814EC;

/* D_801814F8; 1 functions */
typedef struct T_D_801814F8 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801814F8;

/* D_80181504; 1 functions */
typedef struct T_D_80181504 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80181504;

/* D_80181510; 1 functions */
typedef struct T_D_80181510 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80181510;

/* D_8018151C; 1 functions */
typedef struct T_D_8018151C { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8018151C;

/* D_80181528; 1 functions */
typedef struct T_D_80181528 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80181528;

/* D_80181534; 1 functions */
typedef struct T_D_80181534 { /* size >= 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80181534;

/* D_80181540; 1 functions */
typedef struct T_D_80181540 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_80181540;

/* D_80181560; 1 functions */
typedef struct T_D_80181560 { /* size >= 0x20 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
    /* 0x01C */ s32 unk1C; /* 1 use */
} T_D_80181560;

/* D_80181580; 1 functions */
typedef struct T_D_80181580 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_80181580;

/* D_80181590; 5 functions */
typedef struct T_D_80181590_elem { /* size 0x18 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 2 uses */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ u8 unk4; /* 3 uses */
    /* 0x005 */ u8 unk5; /* 3 uses */
    /* 0x006 */ u8 unk6; /* 3 uses */
    /* 0x007 */ u8 pad7[0x1];
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 unk9; /* 2 uses */
    /* 0x00A */ u8 unkA; /* 2 uses */
    /* 0x00B */ u8 padB[0x1];
    /* 0x00C */ u8 unkC; /* 3 uses */
    /* 0x00D */ u8 unkD; /* 3 uses */
    /* 0x00E */ u8 unkE; /* 3 uses */
    /* 0x00F */ u8 padF[0x1];
    /* 0x010 */ u8 unk10; /* 1 use */
    /* 0x011 */ u8 unk11; /* 1 use */
    /* 0x012 */ u8 unk12; /* 1 use */
    /* 0x013 */ u8 pad13[0x5];
} T_D_80181590_elem;

/* D_801819E8; 3 functions */
typedef struct T_D_801819E8_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 8 uses */
    /* 0x001 */ u8 unk1; /* 8 uses */
    /* 0x002 */ u8 unk2; /* 8 uses */
    /* 0x003 */ u8 unk3; /* 4 uses */
} T_D_801819E8_elem;

/* D_80181A70; 1 functions */
typedef struct T_D_80181A70 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80181A70;

/* D_80181A98; 1 functions */
typedef struct T_D_80181A98 { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
} T_D_80181A98;

/* D_80181ABC; 6 functions */
typedef struct T_D_80181ABC_elem { /* size 0x6 */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u16 unk2; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
} T_D_80181ABC_elem;

/* D_80181C28; 1 functions */
typedef struct T_D_80181C28 { /* size >= 0x13 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ s8 unk10; /* 1 use */
    /* 0x011 */ s8 unk11; /* 1 use */
    /* 0x012 */ s8 unk12; /* 1 use */
} T_D_80181C28;

/* D_80181D8C; 1 functions */
typedef struct T_D_80181D8C { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80181D8C;

/* D_80181DA8; 1 functions */
typedef struct T_D_80181DA8 { /* size >= 0x1C */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ s32 unk14; /* 1 use */
    /* 0x018 */ s32 unk18; /* 1 use */
} T_D_80181DA8;

/* D_80181DC4; 1 functions */
typedef struct T_D_80181DC4_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80181DC4_elem;

/* pointed to by T_D_80181E40_elem.0x0; 1 functions */
typedef struct T_D_80181E40_elem_p0 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ f32 unkC; /* 1 use */
} T_D_80181E40_elem_p0;

/* pointed to by T_D_80181F94_elem.0x0; 1 functions */
typedef struct T_D_80181F94_elem_p0 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ f32 unkC; /* 1 use */
} T_D_80181F94_elem_p0;

/* anonymous; 1 functions */
typedef struct T_D_8018294C_elem_p0_elem { /* size 0x4 */
    /* 0x000 */ s16 unk0; /* 5 uses */
    /* 0x002 */ u16 unk2; /* 2 uses */
} T_D_8018294C_elem_p0_elem;

/* D_80182950; 4 functions */
typedef struct T_D_80182950_elem { /* size 0x14 */
    /* 0x000 */ u16 unk0; /* 5 uses */
    /* 0x002 */ u8 pad2[0x12];
} T_D_80182950_elem;

/* D_80182958; 3 functions */
typedef struct T_D_80182958_elem { /* size 0x14 */
    /* 0x000 */ u16 value; /* 8 uses */
    /* 0x002 */ u8 pad2[0x12];
} T_D_80182958_elem;

/* D_80183300; 1 functions */
typedef struct T_D_80183300 { /* size >= 0x14 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
} T_D_80183300;

/* D_801834F8; 1 functions */
typedef struct T_D_801834F8_elem { /* size 0xC */
    /* 0x000 */ u16 unk0; /* 1 use; also s32@0x0 */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801834F8_elem;

/* D_80183598; 1 functions */
typedef struct T_D_80183598 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ u8 unk14; /* 1 use */
    /* 0x015 */ u8 pad15[0x3];
} T_D_80183598;

/* D_801835B0; 1 functions */
typedef struct T_D_801835B0_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801835B0_elem;

/* D_801837B4; 1 functions */
typedef struct T_D_801837B4_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801837B4_elem;

/* D_801837DC; 1 functions */
typedef struct T_D_801837DC { /* size >= 0x8 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ u16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
} T_D_801837DC;

/* D_801837E4; 1 functions */
typedef struct T_D_801837E4_elem { /* size 0xC */
    /* 0x000 */ u16 unk0; /* 1 use; also s32@0x0 */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_801837E4_elem;

/* D_80183884; 1 functions */
typedef struct T_D_80183884 { /* size >= 0x18 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
    /* 0x010 */ s32 unk10; /* 1 use */
    /* 0x014 */ u8 unk14; /* 1 use */
    /* 0x015 */ u8 pad15[0x3];
} T_D_80183884;

/* D_8018389C; 1 functions */
typedef struct T_D_8018389C_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_8018389C_elem;

/* D_80183AA0; 1 functions */
typedef struct T_D_80183AA0_elem { /* size 0xC */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s32 unk8; /* 1 use */
} T_D_80183AA0_elem;

/* D_80183AD0; 4 functions */
typedef struct T_D_80183AD0_elem { /* size 0xC */
    /* 0x000 */ u16 unk0; /* 6 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ void *unk4; /* 1 use */
    /* 0x008 */ u16 unk8; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_D_80183AD0_elem;

/* pointed to by T_D_801BBBC4.0x0; 1 functions */
typedef struct T_D_801BBBC4_p0 { /* size >= 0x1C */
    /* 0x000 */ u8 pad0[0x14];
    /* 0x014 */ struct T_D_801BBBC4_p0_p14 *unk14; /* 4 uses */
    /* 0x018 */ u8 unk18; /* 1 use */
    /* 0x019 */ u8 unk19; /* 1 use */
    /* 0x01A */ u8 pad1A[0x2];
} T_D_801BBBC4_p0;

/* pointed to by T_D_801BBBC4_p0.0x14; 1 functions */
typedef struct T_D_801BBBC4_p0_p14 { /* size >= 0x2C */
    /* 0x000 */ u8 pad0[0x1];
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ f32 unkC; /* 1 use */
    /* 0x010 */ f32 unk10; /* 1 use */
    /* 0x014 */ f32 unk14; /* 1 use */
    /* 0x018 */ f32 unk18; /* 2 uses */
    /* 0x01C */ f32 unk1C; /* 1 use */
    /* 0x020 */ f32 unk20; /* 1 use */
    /* 0x024 */ f32 unk24; /* 1 use */
    /* 0x028 */ f32 unk28; /* 1 use */
} T_D_801BBBC4_p0_p14;

/* pointed to by T_D_801BBBF0.0x1048; 1 functions */
typedef struct T_D_801BBBF0_p1048 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_D_801BBBF0_p1048_p24 *unk24; /* 2 uses */
} T_D_801BBBF0_p1048;

/* pointed to by T_D_801BBBF0_p1048.0x24; 1 functions */
typedef struct T_D_801BBBF0_p1048_p24 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_801BBBF0_p1048_p24_p2C *unk2C; /* 2 uses */
} T_D_801BBBF0_p1048_p24;

/* pointed to by T_D_801BBBF0_p1048_p24.0x2C; 1 functions */
typedef struct T_D_801BBBF0_p1048_p24_p2C { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 1 use */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ f32 unkC; /* 1 use */
} T_D_801BBBF0_p1048_p24_p2C;

/* anonymous; 1 functions */
typedef struct T_D_801BBBF0_p170_elem { /* size 0x6 */
    /* 0x000 */ s16 unk0; /* 3 uses; loaded both signed (lh x2) and unsigned (lhu x1) */
    /* 0x002 */ s16 unk2; /* 4 uses; loaded both signed (lh x2) and unsigned (lhu x2) */
    /* 0x004 */ u8 unk4; /* 4 uses; loaded both signed (lb x1) and unsigned (lbu x3) */
    /* 0x005 */ u8 unk5; /* 4 uses; loaded both signed (lb x1) and unsigned (lbu x3) */
} T_D_801BBBF0_p170_elem;

/* pointed to by T_D_801BBBF0.0x26C; 2 functions */
typedef struct T_D_801BBBF0_p26C { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_D_801BBBF0_p26C_p2C *unk2C; /* 37 uses */
} T_D_801BBBF0_p26C;

/* pointed to by T_D_801BBBF0_p26C.0x2C; 2 functions */
typedef struct T_D_801BBBF0_p26C_p2C { /* size >= 0x58 */
    /* 0x000 */ s16 unk0; /* 3 uses */
    /* 0x002 */ s16 unk2; /* 3 uses */
    /* 0x004 */ s16 unk4; /* 3 uses */
    /* 0x006 */ s16 unk6; /* 3 uses */
    /* 0x008 */ u8 pad8[0x20];
    /* 0x028 */ f32 unk28; /* 4 uses */
    /* 0x02C */ f32 unk2C; /* 4 uses */
    /* 0x030 */ u8 pad30[0x4];
    /* 0x034 */ f32 unk34; /* 2 uses */
    /* 0x038 */ f32 unk38; /* 2 uses */
    /* 0x03C */ f32 unk3C; /* 2 uses */
    /* 0x040 */ f32 unk40; /* 2 uses */
    /* 0x044 */ f32 unk44; /* 2 uses */
    /* 0x048 */ f32 unk48; /* 2 uses */
    /* 0x04C */ f32 unk4C; /* 2 uses */
    /* 0x050 */ f32 unk50; /* 1 use */
    /* 0x054 */ f32 unk54; /* 2 uses */
} T_D_801BBBF0_p26C_p2C;

/* D_801BBC4C; 2 functions */
typedef struct T_D_801BBC4C { /* size >= 0x20 */
    /* 0x000 */ s32 w; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ s32 unk18; /* 2 uses */
    /* 0x01C */ s32 unk1C; /* 2 uses */
} T_D_801BBC4C;

/* D_801BBC6C; 2 functions */
typedef struct T_D_801BBC6C { /* size >= 0x20 */
    /* 0x000 */ s32 w; /* 2 uses */
    /* 0x004 */ s32 unk4; /* 2 uses */
    /* 0x008 */ s32 unk8; /* 2 uses */
    /* 0x00C */ s32 unkC; /* 2 uses */
    /* 0x010 */ s32 unk10; /* 2 uses */
    /* 0x014 */ s32 unk14; /* 2 uses */
    /* 0x018 */ s32 unk18; /* 2 uses */
    /* 0x01C */ s32 unk1C; /* 2 uses */
} T_D_801BBC6C;

/* D_801BBE44; 1 functions */
typedef struct T_D_801BBE44 { /* size >= 0x3 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 unk2; /* 2 uses */
} T_D_801BBE44;

/* D_801BCD90; 4 functions */
typedef struct T_D_801BCD90_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_801BCD90_elem;

/* D_801BCDF8; 4 functions */
typedef struct T_D_801BCDF8_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_801BCDF8_elem;

/* D_801BCE60; 2 functions */
typedef struct T_D_801BCE60_elem { /* size 0x40 */
    /* 0x000 */ f32 unk0; /* 2 uses */
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ f32 unk8; /* 2 uses */
    /* 0x00C */ s16 unkC; /* 2 uses */
    /* 0x00E */ s16 unkE; /* 2 uses */
    /* 0x010 */ s16 unk10; /* 3 uses */
    /* 0x012 */ u8 pad12[0x2];
    /* 0x014 */ s32 unk14; /* 4 uses */
    /* 0x018 */ s16 unk18; /* 4 uses */
    /* 0x01A */ u8 pad1A[0x2];
    /* 0x01C */ struct T_D_8017BC50 *unk1C; /* 4 uses */
    /* 0x020 */ s16 unk20; /* 2 uses */
    /* 0x022 */ u8 pad22[0x2];
    /* 0x024 */ s32 x; /* 2 uses */
    /* 0x028 */ s32 y; /* 2 uses */
    /* 0x02C */ s32 z; /* 2 uses */
    /* 0x030 */ f32 unk30; /* 2 uses */
    /* 0x034 */ f32 unk34; /* 2 uses */
    /* 0x038 */ f32 unk38; /* 2 uses */
    /* 0x03C */ u8 unk3C; /* 3 uses */
    /* 0x03D */ u8 unk3D; /* 1 use */
    /* 0x03E */ u8 pad3E[0x2];
} T_D_801BCE60_elem;

/* D_801BD660; 1 functions */
typedef struct T_D_801BD660_elem { /* size 0x10 */
    /* 0x000 */ s32 unk0; /* 1 use */
    /* 0x004 */ s32 unk4; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ s32 unkC; /* 1 use */
} T_D_801BD660_elem;

/* D_801BD960; 5 functions */
typedef struct T_D_801BD960_elem { /* size 0x4 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 1 use */
} T_D_801BD960_elem;

/* D_801BEB50; 4 functions */
typedef struct T_D_801BEB50_elem { /* size 0x10 */
    /* 0x000 */ void *unk0; /* 8 uses */
    /* 0x004 */ f32 *unk4; /* 5 uses */
    /* 0x008 */ f32 *unk8; /* 5 uses */
    /* 0x00C */ f32 *unkC; /* 5 uses */
} T_D_801BEB50_elem;

/* D_801BEB80; 12 functions */
typedef struct T_D_801BEB80 { /* size >= 0x24 */
    /* 0x000 */ u8 unk0; /* 1 use */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 pad3[0x1];
    /* 0x004 */ u8 unk4; /* 1 use */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 unk7; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ u8 unkA; /* 1 use */
    /* 0x00B */ u8 padB[0x1];
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 unkD; /* 1 use */
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ u8 unkF; /* 1 use */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ u8 unk12; /* 1 use */
    /* 0x013 */ u8 pad13[0x1];
    /* 0x014 */ u8 unk14; /* 1 use */
    /* 0x015 */ u8 unk15; /* 1 use */
    /* 0x016 */ u8 unk16; /* 1 use */
    /* 0x017 */ u8 unk17; /* 1 use */
    /* 0x018 */ s16 unk18; /* 1 use */
    /* 0x01A */ u8 unk1A; /* 1 use */
    /* 0x01B */ u8 pad1B[0x1];
    /* 0x01C */ u8 unk1C; /* 1 use */
    /* 0x01D */ u8 unk1D; /* 1 use */
    /* 0x01E */ u8 unk1E; /* 1 use */
    /* 0x01F */ u8 unk1F; /* 1 use */
    /* 0x020 */ s16 unk20; /* 1 use */
    /* 0x022 */ u8 unk22; /* 1 use */
    /* 0x023 */ u8 pad23[0x1];
} T_D_801BEB80;

/* anonymous; 3 functions */
typedef struct T_D_801BEB80_elem { /* size >= 0x8 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 1 use */
    /* 0x004 */ u8 unk4; /* 3 uses */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u8 unk6; /* 4 uses */
    /* 0x007 */ u8 unk7; /* 1 use */
} T_D_801BEB80_elem;

/* D_801BEB84, D_801BEBDC; 15 functions */
typedef struct T_D_801BEB84_elem { /* size 0x8 */
    /* 0x000 */ u8 unk0; /* 5 uses */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ u8 unk2; /* 2 uses */
    /* 0x003 */ u8 unk3; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 2 uses */
    /* 0x006 */ u8 unk6; /* 2 uses */
    /* 0x007 */ u8 unk7; /* 2 uses */
} T_D_801BEB84_elem;

/* D_801BEBA8; 2 functions */
typedef struct T_D_801BEBA8_elem { /* size 0x8 */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ u8 unk2; /* 1 use */
    /* 0x003 */ u8 unk3; /* 1 use */
    /* 0x004 */ u8 unk4; /* 2 uses */
    /* 0x005 */ u8 unk5; /* 1 use */
    /* 0x006 */ u8 unk6; /* 3 uses */
    /* 0x007 */ u8 unk7; /* 1 use */
} T_D_801BEBA8_elem;

/* D_801BEBAC; 5 functions */
typedef struct T_D_801BEBAC_elem { /* size 0x8 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 pad1[0x7];
} T_D_801BEBAC_elem;

/* D_801BEBD8; 2 functions */
typedef struct T_D_801BEBD8_elem { /* size 0x10 */
    /* 0x000 */ u8 pad0[0x3];
    /* 0x003 */ u8 unk3; /* 1 use */
    /* 0x004 */ u8 unk4; /* 3 uses */
    /* 0x005 */ u8 pad5[0x1];
    /* 0x006 */ u8 unk6; /* 1 use */
    /* 0x007 */ u8 pad7[0x4];
    /* 0x00B */ u8 unkB; /* 1 use */
    /* 0x00C */ u8 unkC; /* 5 uses */
    /* 0x00D */ u8 padD[0x1];
    /* 0x00E */ u8 unkE; /* 1 use */
    /* 0x00F */ u8 padF[0x1];
} T_D_801BEBD8_elem;

/* D_801BED14; 2 functions */
typedef struct T_D_801BED14 { /* size >= 0x2 */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 unk1; /* 1 use */
} T_D_801BED14;

/* pointed to by T_D_801BED18.0x0, T_D_801BED1C.0x0; 2 functions */
typedef struct T_D_801BED18_p0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_80148B2C_ret *unk30; /* 2 uses */
} T_D_801BED18_p0;

/* D_801BED38; 5 functions */
typedef struct T_D_801BED38_elem { /* size 0x40 */
    /* 0x000 */ u8 unk0; /* 6 uses */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ u16 unkA; /* 2 uses */
    /* 0x00C */ u8 unkC; /* 1 use */
    /* 0x00D */ u8 unkD; /* 1 use */
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ u8 unk10; /* 4 uses */
    /* 0x011 */ u8 unk11; /* 1 use */
    /* 0x012 */ s16 unk12; /* 1 use */
    /* 0x014 */ s16 unk14; /* 1 use */
    /* 0x016 */ s16 unk16; /* 1 use */
    /* 0x018 */ s16 unk18; /* 1 use */
    /* 0x01A */ u16 unk1A; /* 2 uses */
    /* 0x01C */ u8 unk1C; /* 1 use */
    /* 0x01D */ u8 unk1D; /* 1 use */
    /* 0x01E */ s16 unk1E; /* 1 use */
    /* 0x020 */ u8 unk20; /* 4 uses */
    /* 0x021 */ u8 unk21; /* 1 use */
    /* 0x022 */ s16 unk22; /* 1 use */
    /* 0x024 */ s16 unk24; /* 1 use */
    /* 0x026 */ s16 unk26; /* 1 use */
    /* 0x028 */ s16 unk28; /* 1 use */
    /* 0x02A */ u16 unk2A; /* 2 uses */
    /* 0x02C */ u8 unk2C; /* 1 use */
    /* 0x02D */ u8 unk2D; /* 1 use */
    /* 0x02E */ s16 unk2E; /* 1 use */
    /* 0x030 */ u8 unk30; /* 4 uses */
    /* 0x031 */ u8 unk31; /* 1 use */
    /* 0x032 */ s16 unk32; /* 1 use */
    /* 0x034 */ s16 unk34; /* 1 use */
    /* 0x036 */ s16 unk36; /* 1 use */
    /* 0x038 */ s16 unk38; /* 1 use */
    /* 0x03A */ u16 unk3A; /* 2 uses */
    /* 0x03C */ u8 unk3C; /* 1 use */
    /* 0x03D */ u8 unk3D; /* 1 use */
    /* 0x03E */ s16 unk3E; /* 1 use */
} T_D_801BED38_elem;

/* anonymous; 1 functions */
typedef struct T_D_801BED38_elem_2 { /* size >= 0x10 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ s16 unk2; /* 2 uses */
    /* 0x004 */ s16 unk4; /* 2 uses */
    /* 0x006 */ s16 unk6; /* 2 uses */
    /* 0x008 */ s16 unk8; /* 2 uses */
    /* 0x00A */ u16 unkA; /* 3 uses */
    /* 0x00C */ u8 unkC; /* 2 uses */
    /* 0x00D */ u8 unkD; /* 2 uses */
    /* 0x00E */ u16 unkE; /* 1 use */
} T_D_801BED38_elem_2;

/* anonymous; 4 functions */
typedef struct T_D_801BEF38_elem_2 { /* size >= 0xC */
    /* 0x000 */ u8 unk0; /* 5 uses */
    /* 0x001 */ u8 unk1; /* 1 use */
    /* 0x002 */ u16 unk2; /* 6 uses */
    /* 0x004 */ struct T_D_801BEF38_elem_2_p4 *unk4; /* 9 uses */
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 unk9; /* 2 uses */
    /* 0x00A */ u8 padA[0x2];
} T_D_801BEF38_elem_2;

/* pointed to by T_D_801BEF38_elem_2.0x4; 2 functions */
typedef struct T_D_801BEF38_elem_2_p4 { /* size >= 0xA0 */
    /* 0x000 */ u8 pad0[0x90];
    /* 0x090 */ f32 unk90; /* 5 uses */
    /* 0x094 */ f32 unk94; /* 5 uses */
    /* 0x098 */ f32 unk98; /* 5 uses */
    /* 0x09C */ s16 unk9C; /* 1 use */
    /* 0x09E */ u8 pad9E[0x2];
} T_D_801BEF38_elem_2_p4;

/* pointed to by T_D_801BEF38_elem.0x10; 1 functions */
typedef struct T_D_801BEF38_elem_p10 { /* size >= 0xAA */
    /* 0x000 */ u8 pad0[0xA8];
    /* 0x0A8 */ u16 unkA8; /* 1 use */
} T_D_801BEF38_elem_p10;

/* pointed to by T_D_801BEF38_elem.0x1C; 1 functions */
typedef struct T_D_801BEF38_elem_p1C { /* size >= 0xAA */
    /* 0x000 */ u8 pad0[0xA8];
    /* 0x0A8 */ u16 unkA8; /* 1 use */
} T_D_801BEF38_elem_p1C;

/* pointed to by T_D_801BEF38_elem.0x28; 1 functions */
typedef struct T_D_801BEF38_elem_p28 { /* size >= 0xAA */
    /* 0x000 */ u8 pad0[0xA8];
    /* 0x0A8 */ u16 unkA8; /* 1 use */
} T_D_801BEF38_elem_p28;

/* pointed to by T_D_801BEF38_elem.0x4; 1 functions */
typedef struct T_D_801BEF38_elem_p4 { /* size >= 0xAA */
    /* 0x000 */ u8 pad0[0xA8];
    /* 0x0A8 */ u16 unkA8; /* 1 use */
} T_D_801BEF38_elem_p4;

/* parameter file008:func_8010ACF8:0, file008:func_8010B73C:0; 2 functions */
typedef struct T_func_8010ACF8_a0 { /* size >= 0x34 */
    /* 0x000 */ struct T_func_8010ACF8_a0_p0_elem *node; /* 23 uses */
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 3 uses */
    /* 0x00C */ f32 unkC; /* 3 uses */
    /* 0x010 */ f32 unk10; /* 2 uses */
    /* 0x014 */ f32 unk14; /* 2 uses */
    /* 0x018 */ f32 unk18; /* 2 uses */
    /* 0x01C */ u8 unk1C; /* 1 use */
    /* 0x01D */ u8 pad1D[0x3];
    /* 0x020 */ f32 distance; /* 3 uses */
    /* 0x024 */ f32 unk24; /* 1 use */
    /* 0x028 */ f32 unk28; /* 1 use */
    /* 0x02C */ f32 unk2C; /* 1 use */
    /* 0x030 */ f32 unk30; /* 1 use */
} T_func_8010ACF8_a0;

/* anonymous; 2 functions */
typedef struct T_func_8010ACF8_a0_p0_elem { /* size 0x14 */
    /* 0x000 */ u8 unk0; /* 11 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s16 unk8; /* 2 uses */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 1 use */
} T_func_8010ACF8_a0_p0_elem;

/* parameter file008:func_8010AF98:0, file008:func_8010C21C:0; 2 functions */
typedef struct T_func_8010AF98_a0 { /* size >= 0x1C */
    /* 0x000 */ struct T_func_8010AF98_a0_p0_elem *node; /* 23 uses */
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 3 uses */
    /* 0x00C */ f32 unkC; /* 3 uses */
    /* 0x010 */ f32 unk10; /* 2 uses */
    /* 0x014 */ f32 unk14; /* 2 uses */
    /* 0x018 */ f32 unk18; /* 2 uses */
} T_func_8010AF98_a0;

/* anonymous; 2 functions */
typedef struct T_func_8010AF98_a0_p0_elem { /* size 0x14 */
    /* 0x000 */ u8 unk0; /* 11 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s16 unk8; /* 2 uses */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 1 use */
} T_func_8010AF98_a0_p0_elem;

/* parameter file008:func_8010B238:0, file008:func_8010CC68:0; 2 functions */
typedef struct T_func_8010B238_a0 { /* size >= 0x1C */
    /* 0x000 */ struct T_func_8010B238_a0_p0_elem *node; /* 23 uses */
    /* 0x004 */ f32 unk4; /* 3 uses */
    /* 0x008 */ f32 unk8; /* 3 uses */
    /* 0x00C */ f32 unkC; /* 3 uses */
    /* 0x010 */ f32 unk10; /* 3 uses */
    /* 0x014 */ f32 unk14; /* 3 uses */
    /* 0x018 */ f32 unk18; /* 3 uses */
} T_func_8010B238_a0;

/* anonymous; 2 functions */
typedef struct T_func_8010B238_a0_p0_elem { /* size 0x14 */
    /* 0x000 */ u8 unk0; /* 11 uses */
    /* 0x001 */ u8 pad1[0x3];
    /* 0x004 */ s16 unk4; /* 1 use */
    /* 0x006 */ u8 pad6[0x2];
    /* 0x008 */ s16 unk8; /* 2 uses */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
    /* 0x00E */ s16 unkE; /* 1 use */
    /* 0x010 */ s16 unk10; /* 1 use */
    /* 0x012 */ s16 unk12; /* 1 use */
} T_func_8010B238_a0_p0_elem;

/* element of file008:func_80126198:0, file008:func_80126570:0; 2 functions */
typedef struct T_func_80126198_a0_elem { /* size 0x20 */
    /* 0x000 */ u16 unk0; /* 12 uses */
    /* 0x002 */ u16 unk2; /* 2 uses */
    /* 0x004 */ u16 unk4; /* 2 uses */
    /* 0x006 */ u8 pad6[0x16];
    /* 0x01C */ u16 unk1C; /* 2 uses */
    /* 0x01E */ u16 unk1E; /* 4 uses */
} T_func_80126198_a0_elem;

/* pointed to by T_func_8012636C_a0.0xC; 1 functions */
typedef struct T_func_8012636C_a0_pC { /* size >= 0x3C */
    /* 0x000 */ u8 pad0[0x38];
    /* 0x038 */ struct T_func_8013B83C_ret *unk38; /* 1 use */
} T_func_8012636C_a0_pC;

/* anonymous; 2 functions */
typedef struct T_func_8012A0F0_ret { /* size >= 0xA0 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_8012A0F0_ret_p24 *unk24; /* 14 uses */
    /* 0x028 */ u8 pad28[0x14];
    /* 0x03C */ s16 unk3C; /* 3 uses */
    /* 0x03E */ u8 pad3E[0x6];
    /* 0x044 */ f32 unk44; /* 1 use */
    /* 0x048 */ u8 pad48[0x48];
    /* 0x090 */ u8 unk90; /* 2 uses */
    /* 0x091 */ u8 unk91; /* 2 uses */
    /* 0x092 */ u8 unk92; /* 2 uses */
    /* 0x093 */ u8 unk93; /* 2 uses */
    /* 0x094 */ u8 pad94[0x8];
    /* 0x09C */ f32 unk9C; /* 2 uses */
} T_func_8012A0F0_ret;

/* pointed to by T_func_8012A0F0_ret.0x24; 2 functions */
typedef struct T_func_8012A0F0_ret_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ struct T_func_8012A0F0_ret_p24_p30 *unk30; /* 14 uses */
} T_func_8012A0F0_ret_p24;

/* pointed to by T_func_8012A0F0_ret_p24.0x30; 2 functions */
typedef struct T_func_8012A0F0_ret_p24_p30 { /* size >= 0x4C */
    /* 0x000 */ u8 pad0[0x48];
    /* 0x048 */ u8 unk48; /* 4 uses */
    /* 0x049 */ u8 unk49; /* 4 uses */
    /* 0x04A */ u8 unk4A; /* 4 uses */
    /* 0x04B */ u8 unk4B; /* 2 uses */
} T_func_8012A0F0_ret_p24_p30;

/* pointed to by T_func_8012A630_a0_p24.0x30; 5 functions */
typedef struct T_func_8012A630_a0_p24_p30 { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 8 uses */
    /* 0x008 */ f32 unk8; /* 1 use */
    /* 0x00C */ f32 z; /* 8 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 angle; /* 13 uses */
} T_func_8012A630_a0_p24_p30;

/* parameter file008:func_8012B7C0:0, file008:func_8012E584:0; 2 functions */
typedef struct T_func_8012B7C0_a0 { /* size >= 0x84 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_8012B7C0_a0_p24 *obj; /* 2 uses */
    /* 0x028 */ u8 pad28[0x4];
    /* 0x02C */ s32 flags; /* 1 use */
    /* 0x030 */ u8 pad30[0x2C];
    /* 0x05C */ struct T_func_8012CE9C_a1 *unk5C; /* 2 uses */
    /* 0x060 */ u8 pad60[0x18];
    /* 0x078 */ f32 outX; /* 1 use */
    /* 0x07C */ f32 outY; /* 1 use */
    /* 0x080 */ f32 outZ; /* 1 use */
} T_func_8012B7C0_a0;

/* pointed to by T_func_8012B7C0_a0.0x24; 1 functions */
typedef struct T_func_8012B7C0_a0_p24 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8012B7C0_a0_p24_p2C *unk2C; /* 1 use */
    /* 0x030 */ struct T_func_8012B7C0_a0_p24_p30 *unk30; /* 1 use */
} T_func_8012B7C0_a0_p24;

/* pointed to by T_func_8012B7C0_a0_p24.0x2C; 1 functions */
typedef struct T_func_8012B7C0_a0_p24_p2C { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 1 use */
    /* 0x008 */ f32 y; /* 1 use */
    /* 0x00C */ f32 z; /* 1 use */
} T_func_8012B7C0_a0_p24_p2C;

/* pointed to by T_func_8012B7C0_a0_p24.0x30; 1 functions */
typedef struct T_func_8012B7C0_a0_p24_p30 { /* size >= 0x10 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 x; /* 1 use */
    /* 0x008 */ f32 y; /* 1 use */
    /* 0x00C */ f32 z; /* 1 use */
} T_func_8012B7C0_a0_p24_p30;

/* parameter file008:func_8012C71C:0; 2 functions */
typedef struct T_func_8012C71C_a0 { /* size >= 0x28 */
    /* 0x000 */ u8 pad0[0x24];
    /* 0x024 */ struct T_func_801451C0_a0 *unk24; /* 13 uses */
} T_func_8012C71C_a0;

/* parameter file008:func_801311F8:0, file008:func_801315A8:0; 5 functions */
typedef struct T_func_801311F8_a0 { /* size >= 0x6 */
    /* 0x000 */ u16 unk0; /* 17 uses */
    /* 0x002 */ u16 unk2; /* 4 uses */
    /* 0x004 */ u16 unk4; /* 10 uses */
} T_func_801311F8_a0;

/* parameter file008:func_8013A5E8:0, file008:func_8013A7D4:0; 2 functions */
typedef struct T_func_8013A5E8_a0 { /* size >= 0x8 */
    /* 0x000 */ struct T_func_8013A5E8_a0_p0 *unk0; /* 4 uses */
    /* 0x004 */ struct T_func_8013A5E8_a0_p4 *unk4; /* 1 use */
} T_func_8013A5E8_a0;

/* pointed to by T_func_8013A5E8_a0.0x0; 1 functions */
typedef struct T_func_8013A5E8_a0_p0 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8013A5E8_a0_p0_p2C *unk2C; /* 1 use */
} T_func_8013A5E8_a0_p0;

/* pointed to by T_func_8013A5E8_a0_p0.0x2C; 1 functions */
typedef struct T_func_8013A5E8_a0_p0_p2C { /* size >= 0x14 */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ f32 unk4; /* 2 uses */
    /* 0x008 */ u8 pad8[0x4];
    /* 0x00C */ f32 unkC; /* 2 uses */
    /* 0x010 */ u8 pad10[0x2];
    /* 0x012 */ s16 unk12; /* 3 uses */
} T_func_8013A5E8_a0_p0_p2C;

/* pointed to by T_func_8013A5E8_a0.0x4; 1 functions */
typedef struct T_func_8013A5E8_a0_p4 { /* size >= 0x30 */
    /* 0x000 */ u8 pad0[0x2C];
    /* 0x02C */ struct T_func_8013A5E8_a0_p4_p2C *unk2C; /* 1 use */
} T_func_8013A5E8_a0_p4;

/* pointed to by T_func_8013A5E8_a0_p4.0x2C; 1 functions */
typedef struct T_func_8013A5E8_a0_p4_p2C { /* size >= 0x62 */
    /* 0x000 */ u8 pad0[0x60];
    /* 0x060 */ u16 unk60; /* 1 use */
} T_func_8013A5E8_a0_p4_p2C;

/* pointed to by T_func_8012636C_a0_pC.0x38; 1 functions */
typedef struct T_func_8013B83C_ret { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x6];
    /* 0x006 */ s16 unk6; /* 1 use */
    /* 0x008 */ s16 unk8; /* 1 use */
    /* 0x00A */ s16 unkA; /* 1 use */
    /* 0x00C */ s16 unkC; /* 1 use */
} T_func_8013B83C_ret;

/* parameter file008:func_80143AC4:2, file008:func_80143C08:0; 4 functions */
typedef struct T_func_80143AC4_a2 { /* size >= 0x18 */
    /* 0x000 */ u8 unk0; /* 4 uses */
    /* 0x001 */ u8 pad1[0x1];
    /* 0x002 */ u8 unk2; /* 4 uses */
    /* 0x003 */ u8 unk3; /* 4 uses */
    /* 0x004 */ u16 unk4; /* 4 uses */
    /* 0x006 */ u8 unk6; /* 4 uses */
    /* 0x007 */ u8 unk7; /* 4 uses */
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 pad9[0x1];
    /* 0x00A */ u8 unkA; /* 2 uses */
    /* 0x00B */ u8 unkB; /* 2 uses */
    /* 0x00C */ u16 unkC; /* 2 uses */
    /* 0x00E */ u8 unkE; /* 2 uses */
    /* 0x00F */ u8 unkF; /* 2 uses */
    /* 0x010 */ u8 unk10; /* 2 uses */
    /* 0x011 */ u8 pad11[0x1];
    /* 0x012 */ u8 unk12; /* 2 uses */
    /* 0x013 */ u8 unk13; /* 2 uses */
    /* 0x014 */ u16 unk14; /* 2 uses */
    /* 0x016 */ u8 unk16; /* 2 uses */
    /* 0x017 */ u8 unk17; /* 2 uses */
} T_func_80143AC4_a2;

/* pointed to by T_func_801451C0_a0.0x18; 2 functions */
typedef struct T_func_801451C0_a0_p18 { /* size >= 0x64 */
    /* 0x000 */ u8 pad0[0x5C];
    /* 0x05C */ struct T_func_801451C0_a0_p18_p5C *unk5C; /* 1 use */
    /* 0x060 */ u8 pad60[0x3];
    /* 0x063 */ u8 unk63; /* 1 use */
} T_func_801451C0_a0_p18;

/* pointed to by T_func_801451C0_a0_p18.0x5C; 1 functions */
typedef struct T_func_801451C0_a0_p18_p5C { /* size >= 0x78 */
    /* 0x000 */ u8 pad0[0xD];
    /* 0x00D */ u8 unkD; /* 1 use */
    /* 0x00E */ u8 padE[0xE];
    /* 0x01C */ void *unk1C; /* 1 use */
    /* 0x020 */ void *unk20; /* 1 use */
    /* 0x024 */ void *unk24; /* 1 use */
    /* 0x028 */ u8 pad28[0x4E];
    /* 0x076 */ u8 unk76; /* 1 use */
    /* 0x077 */ u8 pad77[0x1];
} T_func_801451C0_a0_p18_p5C;

/* pointed to by T_D_8024087C_file011_p0.0x10, T_D_8038A9C4_file056_p0.0x10; 1 functions */
typedef struct T_func_80147174_a0 { /* size >= 0x34 */
    /* 0x000 */ u8 pad0[0x10];
    /* 0x010 */ struct T_func_80147174_a0 *unk10; /* 1 use */
    /* 0x014 */ u8 pad14[0x1C];
    /* 0x030 */ struct T_func_80147174_a0_p30 *unk30; /* 2 uses */
} T_func_80147174_a0;

/* pointed to by T_func_80147174_a0.0x30; 1 functions */
typedef struct T_func_80147174_a0_p30 { /* size >= 0xC */
    /* 0x000 */ u8 pad0[0xB];
    /* 0x00B */ u8 unkB; /* 3 uses */
} T_func_80147174_a0_p30;

/* parameter file008:func_80148074:0, file008:func_801498CC:0; 3 functions */
typedef struct T_func_80148074_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0x91];
    /* 0x091 */ u8 unk91; /* 1 use */
    /* 0x092 */ u8 pad92[0x2];
    /* 0x094 */ s8 unk94; /* 7 uses */
    /* 0x095 */ u8 pad95[0xD];
    /* 0x0A2 */ u8 unkA2; /* 8 uses; loaded both signed (lb x1) and unsigned (lbu x3) */
    /* 0x0A3 */ u8 padA3[0x1];
    /* 0x0A4 */ struct T_func_80148074_a0_pA4 *unkA4; /* 1 use */
} T_func_80148074_a0;

/* pointed to by T_func_80148074_a0.0xA4; 1 functions */
typedef struct T_func_80148074_a0_pA4 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u16 unk4; /* 2 uses */
    /* 0x006 */ u8 pad6[0x6];
    /* 0x00C */ u16 unkC; /* 1 use */
} T_func_80148074_a0_pA4;

/* parameter file008:func_80148500:0, file008:func_801486A8:0; 6 functions */
typedef struct T_func_80148500_a0 { /* size >= 0xA8 */
    /* 0x000 */ u8 pad0[0xC];
    /* 0x00C */ struct T_func_80148500_a0_pC *unkC; /* 2 uses */
    /* 0x010 */ u8 pad10[0x80];
    /* 0x090 */ s8 unk90; /* 11 uses */
    /* 0x091 */ s8 unk91; /* 9 uses */
    /* 0x092 */ s8 unk92; /* 1 use */
    /* 0x093 */ u8 pad93[0x1];
    /* 0x094 */ u8 unk94; /* 1 use */
    /* 0x095 */ s8 unk95; /* 10 uses; loaded both signed (lb x4) and unsigned (lbu x2) */
    /* 0x096 */ s8 unk96; /* 12 uses; loaded both signed (lb x6) and unsigned (lbu x2) */
    /* 0x097 */ u8 pad97[0x1];
    /* 0x098 */ struct T_func_80232128_a0 *unk98; /* 3 uses */
    /* 0x09C */ u8 pad9C[0x4];
    /* 0x0A0 */ s16 unkA0; /* 5 uses */
    /* 0x0A2 */ u8 padA2[0x2];
    /* 0x0A4 */ struct T_func_80148500_a0_pA4 *unkA4; /* 1 use */
} T_func_80148500_a0;

/* pointed to by T_func_80148500_a0.0xA4; 1 functions */
typedef struct T_func_80148500_a0_pA4 { /* size >= 0xE */
    /* 0x000 */ u8 pad0[0x4];
    /* 0x004 */ u16 unk4; /* 2 uses */
    /* 0x006 */ u8 pad6[0x6];
    /* 0x00C */ u16 unkC; /* 1 use */
} T_func_80148500_a0_pA4;

/* pointed to by T_func_80148500_a0.0xC; 1 functions */
typedef struct T_func_80148500_a0_pC { /* size >= 0xAC */
    /* 0x000 */ u8 pad0[0xAA];
    /* 0x0AA */ u8 unkAA; /* 1 use */
    /* 0x0AB */ u8 unkAB; /* 1 use */
} T_func_80148500_a0_pC;

/* pointed to by T_D_801BED18_p0.0x30; 2 functions */
typedef struct T_func_80148B2C_ret { /* size >= 0xC */
    /* 0x000 */ s16 unk0; /* 1 use */
    /* 0x002 */ s16 unk2; /* 1 use */
    /* 0x004 */ u8 pad4[0x7];
    /* 0x00B */ u8 unkB; /* 1 use */
} T_func_80148B2C_ret;

/* anonymous; 3 functions */
typedef struct T_func_8014B5E8_ret { /* size >= 0x10 */
    /* 0x000 */ u8 unk0; /* 3 uses */
    /* 0x001 */ u8 unk1; /* 3 uses */
    /* 0x002 */ s16 unk2; /* 3 uses */
    /* 0x004 */ s16 unk4; /* 3 uses */
    /* 0x006 */ s16 unk6; /* 3 uses */
    /* 0x008 */ s16 unk8; /* 3 uses */
    /* 0x00A */ s16 unkA; /* 3 uses */
    /* 0x00C */ u8 unkC; /* 3 uses */
    /* 0x00D */ u8 unkD; /* 3 uses */
    /* 0x00E */ s16 unkE; /* 3 uses */
} T_func_8014B5E8_ret;

/* anonymous; 2 functions */
typedef struct T_func_8014B670_ret { /* size >= 0xC */
    /* 0x000 */ u8 unk0; /* 2 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u16 unk2; /* 6 uses */
    /* 0x004 */ void *unk4; /* 2 uses */
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 unk9; /* 2 uses */
    /* 0x00A */ u8 padA[0x2];
} T_func_8014B670_ret;

/* anonymous; 17 functions */
typedef struct T_func_8014B7CC_ret { /* size >= 0xC */
    /* 0x000 */ u8 unk0; /* 12 uses */
    /* 0x001 */ u8 unk1; /* 2 uses */
    /* 0x002 */ u8 pad2[0x2];
    /* 0x004 */ struct T_func_801FF348_a0 *unk4; /* 18 uses */
    /* 0x008 */ u8 unk8; /* 2 uses */
    /* 0x009 */ u8 unk9; /* 1 use */
    /* 0x00A */ u8 padA[0x2];
} T_func_8014B7CC_ret;

/* anonymous; 2 functions */
typedef struct T_func_8037DD6C_a1_p2C_p28_elem { /* size 0x8 */
    /* 0x000 */ s32 unk0; /* 2 uses */
    /* 0x004 */ u8 unk4; /* 3 uses */
    /* 0x005 */ u8 pad5[0x3];
} T_func_8037DD6C_a1_p2C_p28_elem;

extern struct T_D_80153032_elem D_80153032[];
extern struct T_D_80153070_elem D_80153070[];
extern struct T_D_80153072_elem D_80153072[];
extern struct T_D_8015327C_elem D_8015327C[];
extern struct T_D_801628F8_elem D_801628F8[];
extern T_D_80162DD0 D_80162DD0;
extern T_D_80162DD0 D_80163504;
extern T_D_80162DD0 D_80163518;
extern u8 D_80163530[];
extern u8 D_80163570[];
extern u8 D_801635B0[];
extern u8 D_801635F0[];
extern u8 D_80163630[];
extern u8 D_80163670[];
extern struct T_D_801636B0_elem D_801636B0[];
extern u8 D_801636F0;
extern T_D_801636F4 D_801636F4;
extern T_D_801636F8 D_801636F8;
extern T_D_801636FC D_801636FC;
extern u8 D_80163700;
extern T_D_80162DD0 D_80163704;
extern T_D_80162DD0 D_80163718;
extern T_D_80162DD0 D_8016372C;
extern s8 D_80163740;
extern s8 D_80163744;
extern u8 D_80163748;
extern T_D_8016379C D_8016379C;
extern f32 D_801637AC;
extern f32 D_801637B0;
extern f32 D_801637B4;
extern s16 D_801637C0;
extern s16 D_801637C4;
extern s16 D_801637C8;
extern f32 D_801637CC;
extern f32 D_801637D0;
extern T_D_8016379C D_80163820;
extern T_D_8016379C D_80163830;
extern T_D_80163840 D_80163840;
extern u8 D_8016385C;
extern u8 D_80163860;
extern u8 D_80163864;
extern u8 D_80163870;
extern u8 D_80163874;
extern u8 D_80163878;
extern u8 D_8016387C;
extern u8 D_80163880;
extern f32 D_80163884;
extern s16 D_80163888;
extern u8 D_8016388C;
extern u8 D_80163890;
extern u8 D_80163894;
extern u8 D_80163898;
extern u8 D_8016389C;
extern T_D_8016379C D_801638EC;
extern T_D_8016379C D_801638FC;
extern f32 D_8016390C;
extern f32 D_80163910;
extern f32 D_80163914;
extern f32 D_80163918;
extern f32 D_8016391C;
extern f32 D_80163920;
extern s32 D_80163924;
extern s32 D_80163928;
extern f32 D_8016392C;
extern f32 D_80163930;
extern u8 D_80163934;
extern u8 D_80163938;
extern f32 D_8016393C;
extern s32 D_80163944;
extern f32 D_80163948;
extern f32 D_8016394C;
extern s32 D_80163950;
extern s32 D_80163954;
extern s32 D_80163958;
extern s32 D_8016395C;
extern s32 D_80163960;
extern s32 D_80163964;
extern s32 D_80163968;
extern s32 D_8016396C;
extern s32 D_80163970;
extern s32 D_80163974;
extern f32 D_80163980;
extern f32 D_80163984;
extern f32 D_80163988;
extern s16 D_8016398C;
extern T_D_8016379C D_801639DC;
extern f32 D_801639F4;
extern f32 D_801639F8;
extern f32 D_801639FC;
extern u8 D_80163A00;
extern s32 D_80163A04;
extern s16 D_80163A10;
extern s16 D_80163A14;
extern s16 D_80163A18;
extern f32 D_80163A1C;
extern T_D_8016379C D_80163A70;
extern T_D_8016379C D_80163A80;
extern T_D_80163A90 D_80163A90;
extern u8 D_80163AB8;
extern u8 D_80163ABC;
extern u8 D_80163AC0;
extern s32 D_80163AC4;
extern T_D_8016379C D_80163B1C;
extern f32 D_80163B2C;
extern f32 D_80163B30;
extern f32 D_80163B34;
extern T_D_8016379C D_80163B8C;
extern f32 D_80163B9C;
extern f32 D_80163BA0;
extern f32 D_80163BA4;
extern T_D_8016379C D_80163BFC;
extern f32 D_80163C0C;
extern f32 D_80163C10;
extern f32 D_80163C14;
extern f32 D_80163C20;
extern f32 D_80163C24;
extern f32 D_80163C28;
extern T_D_8016379C D_80163C78;
extern f32 D_80163C8C;
extern f32 D_80163C90;
extern f32 D_80163C94;
extern s32 D_80163C9C;
extern T_D_8016379C D_80163CA4;
extern T_D_8016379C D_80163CF4;
extern T_D_8016379C D_80163D44;
extern T_D_8016379C D_80163DA0;
extern T_D_8016379C D_80163DB4;
extern T_D_8016379C D_80163DC8;
extern T_D_8016379C D_80163DDC;
extern T_D_8016379C D_80163E2C;
extern T_D_8016379C D_80163E40;
extern T_D_8016379C D_80163E88;
extern T_D_8016379C D_80163ED0;
extern f32 D_80163EE0;
extern f32 D_80163EEC;
extern f32 D_80163EF0;
extern f32 D_80163EF4;
extern f32 D_80163EF8;
extern T_D_80163FEC D_80163FEC;
extern T_D_80164404 D_80164404;
extern T_D_80164698 D_80164698;
extern void * * *D_80164DAC[];
extern T_D_80162DD0 D_80164DCC;
extern s32 D_80164DE0;
extern s32 D_80164DE4;
extern f32 D_80164DF0;
extern f32 D_80164E00;
extern u8 D_80164E10;
extern s16 D_80164E20;
extern T_D_80162DD0 D_80164E44;
extern T_D_80162DD0 D_80164E58;
extern T_D_80162DD0 D_80164E6C;
extern T_D_80164E80 D_80164E80;
extern T_D_80162DD0 D_80164EA0;
extern T_D_80162DD0 D_80164EB4;
extern T_D_80162DD0 D_80164EC8;
extern T_D_80164F30 D_80164F30;
extern T_D_80164F40 D_80164F40;
extern struct T_D_80171CEC_elem_p0 *D_80171CEC[];
extern struct T_D_80171CF0_elem_p0 *D_80171CF0[];
extern struct T_D_80171D8C_p0 *D_80171D8C;
extern struct T_D_80171EEC_p0 *D_80171EEC;
extern struct T_D_8017201C_p0 *D_8017201C;
extern struct T_D_80172510_p0_p0 **D_80172510;
extern struct T_D_8017251C_p0 *D_8017251C;
extern struct T_D_80172570_p0 *D_80172570;
extern struct T_D_80172574_p0 *D_80172574;
extern struct T_D_80172578_p0 *D_80172578;
extern struct T_D_8017257C_p0 *D_8017257C;
extern struct T_D_80172594_p0 *D_80172594;
extern struct T_D_801730F4_p0 *D_801730F4;
extern f32 D_801753A0[];
extern f32 D_801753A4[];
extern struct T_D_80175490_elem_p0 *D_80175490[];
extern u16 D_80175940[];
extern T_D_80175BA0 D_80175BA0;
extern T_D_80175BB4 D_80175BB4;
extern T_D_80175BC8 D_80175BC8;
extern T_D_80175BDC D_80175BDC;
extern T_D_80175BF0 D_80175BF0;
extern T_D_80175C04 D_80175C04;
extern T_D_80175C18 D_80175C18;
extern T_D_80175C2C D_80175C2C;
extern T_D_80175C40 D_80175C40;
extern u8 D_80175D78;
extern u8 D_80175D7C;
extern u8 D_80175D80;
extern u8 D_80175D84;
extern u8 D_80175D88;
extern u8 D_80175D8C;
extern u8 D_80175D90;
extern u8 D_80175D94;
extern struct T_D_80175D98_elem D_80175D98[];
extern struct T_D_80176020_elem D_80176020[];
extern T_D_80176090 D_80176090;
extern s32 D_801760B0;
extern u8 D_801760B4;
extern f32 D_801763A0[];
extern f32 D_801763A4[];
extern T_D_80178C10 D_80178C10;
extern T_D_8016379C D_80178C94;
extern T_D_8016379C D_80178CA4;
extern T_D_80178CB4 D_80178CB4;
extern T_D_80178CC8 D_80178CC8;
extern s32 D_8017AA90;
extern s32 D_8017AC24[];
extern void *D_8017ACE0[];
extern T_D_8017BC50 D_8017BC50;
extern u16 D_8017BC7C[];
extern T_D_8017BCC0 D_8017BCC0;
extern T_D_8017BCCC D_8017BCCC;
extern T_D_8017BCE4 D_8017BCE4;
extern T_D_8017BCFC D_8017BCFC;
extern T_D_8017BD14 D_8017BD14;
extern T_D_8017BD2C D_8017BD2C;
extern T_D_8017BD44 D_8017BD44;
extern T_D_8017BD5C D_8017BD5C;
extern T_D_8017BD74 D_8017BD74;
extern T_D_80162DD0 D_8017BDB8;
extern T_D_80162DD0 D_8017BDE0;
extern T_D_80162DD0 D_8017BDF4;
extern T_D_80162DD0 D_8017BE08;
extern T_D_8017D08C D_8017D08C;
extern T_D_8017D1D4 D_8017D1D4;
extern u16 D_8017D1D6;
extern u16 D_8017D1DC[];
extern T_D_8017D244 D_8017D244;
extern struct T_D_8017D250_elem D_8017D250[];
extern struct T_D_8017D3B8_elem D_8017D3B8[];
extern struct T_D_8017D460_elem D_8017D460[];
extern struct T_D_8017D474_elem D_8017D474[];
extern struct T_D_8017D478_elem D_8017D478[];
extern u16 D_8017DBC0[];
extern struct T_D_8017DBF4_elem D_8017DBF4[];
extern T_D_8017DC20 D_8017DC20;
extern T_D_8017DC2C D_8017DC2C;
extern T_D_8017DC40 D_8017DC40;
extern u16 D_8017DC42;
extern struct T_D_8017DC44_elem D_8017DC44[];
extern u16 D_8017DC48;
extern struct T_D_8017DC4A_elem D_8017DC4A[];
extern u16 D_8017DC80;
extern u16 D_8017DC82;
extern u16 D_8017DC84;
extern u16 D_8017DC86;
extern u16 D_8017DC88;
extern u8 D_8017DC89;
extern struct T_D_8017DC92_elem D_8017DC92[];
extern struct T_D_8017DC93_elem D_8017DC93[];
extern struct T_D_8017DC94_elem D_8017DC94[];
extern struct T_D_8017DC95_elem D_8017DC95[];
extern u16 D_8017DCA6;
extern u16 D_8017DCC2;
extern u8 D_8017DCC6;
extern u8 D_8017DCC8;
extern u8 D_8017DCC9;
extern u8 D_8017DCCC;
extern u16 D_8017DCCE[];
extern u16 D_8017DCDC;
extern struct T_D_8017DCDE_elem D_8017DCDE[];
extern u8 D_8017DD27;
extern T_D_8017DD7C D_8017DD7C;
extern u8 D_8017DD7D;
extern s8 D_8017DD8A;
extern s8 D_8017DD8B;
extern u16 D_8017DD8C;
extern u16 D_8017DD8E;
extern u8 D_8017DD92;
extern u8 D_8017DD93;
extern u8 D_8017DD9E;
extern u32 D_8017DDA0;
extern T_D_8017DDA4 D_8017DDA4;
extern struct T_D_8017DDB0_elem D_8017DDB0[];
extern struct T_D_8017DF06_elem D_8017DF06[];
extern struct T_D_8017DF14_elem D_8017DF14[];
extern struct T_D_8017DF1E_elem D_8017DF1E[];
extern struct T_D_8017DF2C_elem D_8017DF2C[];
extern struct T_D_8017DFFC_elem D_8017DFFC[];
extern struct T_D_8017E000_elem D_8017E000[];
extern struct T_D_8017E004_elem D_8017E004[];
extern struct T_D_8017E404_elem D_8017E404[];
extern T_D_8016379C D_8017E484;
extern T_D_8017E494 D_8017E494;
extern struct T_D_801BEB84_elem *D_801812E8[];
extern s32 D_801812EC;
extern T_D_801812F0 D_801812F0;
extern struct T_D_80181308_elem D_80181308[];
extern T_D_80181468 D_80181468;
extern T_D_80181470 D_80181470;
extern T_D_80181478 D_80181478;
extern T_D_80181480 D_80181480;
extern T_D_80181490 D_80181490;
extern T_D_801814A0 D_801814A0;
extern s32 D_801814B0;
extern s32 D_801814B4;
extern T_D_801814B8 D_801814B8;
extern T_D_801814CC D_801814CC;
extern T_D_801814E0 D_801814E0;
extern T_D_801814EC D_801814EC;
extern T_D_801814F8 D_801814F8;
extern T_D_80181504 D_80181504;
extern T_D_80181510 D_80181510;
extern T_D_8018151C D_8018151C;
extern T_D_80181528 D_80181528;
extern T_D_80181534 D_80181534;
extern T_D_80181540 D_80181540;
extern T_D_80181560 D_80181560;
extern T_D_80181580 D_80181580;
extern struct T_D_80181590_elem D_80181590[];
extern s32 D_801816B0[];
extern u8 D_801819E0;
extern u8 D_801819E4;
extern struct T_D_801819E8_elem D_801819E8[];
extern T_D_80181A70 D_80181A70;
extern T_D_8016379C D_80181A84;
extern s32 D_80181A94;
extern T_D_80181A98 D_80181A98;
extern void *D_80181AA0[];
extern struct T_D_80181ABC_elem D_80181ABC[];
extern T_D_80181C28 D_80181C28;
extern u8 D_80181D58;
extern struct T_func_80149580_a1 *D_80181D5C;
extern struct T_func_80149580_a1 *D_80181D60;
extern T_D_80162DD0 D_80181D64;
extern T_D_80162DD0 D_80181D78;
extern T_D_80181D8C D_80181D8C;
extern s16 D_80181DA4;
extern T_D_80181DA8 D_80181DA8;
extern struct T_D_80181DC4_elem D_80181DC4[];
extern struct T_D_80181E40_elem_p0 *D_80181E40[];
extern struct T_D_80181F94_elem_p0 *D_80181F94[];
extern void *D_80181FA0[];
extern void *D_80182104[];
extern void *D_80182268[];
extern void *D_801823CC[];
extern void *D_80182530[];
extern void *D_80182694[];
extern T_D_80162DD0 D_801826AC;
extern T_D_80162DD0 D_801826C0;
extern struct T_D_8018294C_elem D_8018294C[];
extern struct T_D_80182950_elem D_80182950[];
extern struct T_D_80182952_elem D_80182952[];
extern struct T_D_80182954_elem D_80182954[];
extern struct T_D_80182958_elem D_80182958[];
extern struct T_D_8018295A_elem D_8018295A[];
extern struct T_D_8018295C_elem D_8018295C[];
extern void *D_801832F0[];
extern T_D_80183300 D_80183300;
extern T_D_80162DD0 D_80183320;
extern u16 D_80183334[];
extern u16 D_80183370[];
extern u16 D_80183378[];
extern struct T_D_801834F8_elem D_801834F8[];
extern T_D_80183598 D_80183598;
extern struct T_D_801835B0_elem D_801835B0[];
extern struct T_D_801837B4_elem D_801837B4[];
extern T_D_801837DC D_801837DC;
extern struct T_D_801837E4_elem D_801837E4[];
extern T_D_80183884 D_80183884;
extern struct T_D_8018389C_elem D_8018389C[];
extern struct T_D_80183AA0_elem D_80183AA0[];
extern struct T_D_80183AD0_elem D_80183AD0[];
extern struct T_D_80183CE0_elem D_80183CE0[];
extern u8 *D_80184140[];
extern struct T_D_801842A0_elem D_801842A0[];
extern struct T_D_801842A5_elem D_801842A5[];
extern struct T_D_801842A9_elem D_801842A9[];
extern struct T_D_801842AB_elem D_801842AB[];
extern struct T_D_801842B0_elem D_801842B0[];
extern u8 D_80185620[];
extern u8 D_80185648;
extern u8 D_80185674;
extern u8 D_801856B8;
extern u8 D_801856FC;
extern u8 D_80185700;
extern u8 D_8018571C;
extern u8 D_80185738;
extern u8 D_80185780;
extern u8 D_80185788;
extern u8 D_801857C0;
extern u8 D_801857F4;
extern f64 D_80185CB8;
extern f64 D_80185CC8;
extern f64 D_80185CD0;
extern u8 D_80186008;
extern u8 D_80186010;
extern u8 D_80186024;
extern u8 D_80186034;
extern f32 D_80186154;
extern f32 D_80186158;
extern u8 D_80186834;
extern f32 D_80187420;
extern f32 D_80187424;
extern f64 D_80187428;
extern f64 D_80187430;
extern f64 D_80187438;
extern f64 D_80187440;
extern f64 D_80187448;
extern f64 D_80187450;
extern f64 D_80187458;
extern f64 D_80187460;
extern f64 D_80187468;
extern f64 D_80187470;
extern f64 D_80187478;
extern f64 D_80187480;
extern f64 D_80187488;
extern f64 D_80187490;
extern f64 D_80187498;
extern f64 D_801874A0;
extern f64 D_801874A8;
extern f64 D_801874B0;
extern f64 D_801874B8;
extern f64 D_801874C0;
extern f64 D_801874C8;
extern f64 D_801874D0;
extern f64 D_80188028;
extern f64 D_80188030;
extern f64 D_80188038;
extern f64 D_80188040;
extern u8 D_8018828C;
extern u8 D_801882AC;
extern u8 D_801882B0;
extern u8 D_801882B4;
extern u8 D_801882B8;
extern u8 D_801882BC;
extern u8 D_801882C0;
extern u8 D_801882C4;
extern u8 D_801882C8;
extern u8 D_801882CC;
extern u8 D_801882D0;
extern u8 D_801882D4;
extern u8 D_801882DC;
extern u8 D_801882E0;
extern u8 D_801882E4;
extern u8 D_801882EC;
extern u8 D_801882F0;
extern u8 D_801882F4;
extern u8 D_801882FC;
extern f32 D_8018848C;
extern f64 D_80188A08;
extern u8 D_80188DE0;
extern f64 D_80188E20;
extern f64 D_80188E28;
extern f64 D_80188E30;
extern f64 D_80188E38;
extern u8 D_80189540;
extern u8 D_801895E0;
extern f64 D_80189B20;
extern f64 D_80189B28;
extern f64 D_80189B30;
extern f64 D_80189B38;
extern f64 D_80189B40;
extern f64 D_80189B48;
extern f64 D_80189E80;
extern f64 D_80189E88;
extern f64 D_80189E90;
extern f64 D_80189E98;
extern f64 D_80189EA0;
extern f64 D_80189EA8;
extern f64 D_80189EB0;
extern f64 D_8018A690;
extern f64 D_8018A698;
extern f64 D_8018A6A0;
extern f64 D_8018A6A8;
extern f64 D_8018ABE8;
extern f64 D_8018ABF0;
extern f64 D_8018ABF8;
extern f64 D_8018B2B8;
extern f64 D_8018B2C0;
extern f64 D_8018B2C8;
extern f64 D_8018B390;
extern f64 D_8018B398;
extern f64 D_8018B3A0;
extern f32 D_8018BB08;
extern f32 D_8018BB0C;
extern f32 D_8018BB10;
extern f32 D_8018BB14;
extern f32 D_8018BB18;
extern f32 D_8018BB1C;
extern f64 D_8018CB00;
extern f64 D_8018CB08;
extern f64 D_8018CB10;
extern f64 D_8018CB18;
extern f32 D_8018CC10;
extern f64 D_8018CC28;
extern f64 D_8018CC30;
extern f64 D_8018CC38;
extern f32 D_8018CC40;
extern f64 D_8018CC48;
extern f64 D_8018CC50;
extern f64 D_8018CC58;
extern f64 D_8018CC60;
extern f64 D_8018CC68;
extern f64 D_8018CC70;
extern f64 D_8018CC78;
extern f64 D_8018CC80;
extern f64 D_8018CC88;
extern f64 D_8018CC90;
extern f64 D_8018CC98;
extern f64 D_8018CCA0;
extern f64 D_8018CCA8;
extern f64 D_8018CCB0;
extern f64 D_8018CCB8;
extern f64 D_8018CCC0;
extern f64 D_8018CCC8;
extern f64 D_8018CCD0;
extern f64 D_8018CCD8;
extern f64 D_8018CCE0;
extern f64 D_8018CCE8;
extern f64 D_8018CCF0;
extern f64 D_8018CCF8;
extern f64 D_8018CD00;
extern f64 D_8018CD08;
extern f64 D_8018CD10;
extern f64 D_8018CD18;
extern f64 D_8018CD20;
extern f32 D_8018CD28;
extern f64 D_8018CD30;
extern f32 D_8018CD38;
extern f64 D_8018CD40;
extern f64 D_8018CD48;
extern f64 D_8018CD50;
extern f64 D_8018CD58;
extern f64 D_8018CD60;
extern f64 D_8018CD68;
extern f64 D_8018CD70;
extern f64 D_8018CD78;
extern f64 D_8018CD80;
extern f64 D_8018CD88;
extern f64 D_8018CD90;
extern f64 D_8018CD98;
extern f64 D_8018CDA0;
extern f64 D_8018CDA8;
extern f64 D_8018CDB0;
extern f64 D_8018CDD0;
extern f32 D_8018CDD8;
extern f32 D_8018CDDC;
extern f32 D_8018CDE0;
extern u8 D_8018D38C;
extern u8 D_8018D390;
extern u8 D_8018D394;
extern u8 D_8018D398;
extern u8 D_8018D3B0;
extern u8 D_8018D3C8;
extern u8 D_8018D3E0;
extern u8 D_8018D3FC;
extern u8 D_8018D410;
extern u8 D_8018D424;
extern u8 D_8018D43C;
extern f64 D_8018D530;
extern f32 D_8018D564;
extern f32 D_8018D568;
extern f64 D_8018D570;
extern f64 D_8018D578;
extern f64 D_8018D580;
extern f64 D_8018D588;
extern f32 D_8018D590;
extern f64 D_8018D598;
extern f64 D_8018D5A0;
extern f64 D_8018D670;
extern f64 D_8018D680;
extern f64 D_8018D688;
extern f64 D_8018D690;
extern f32 D_8018D698;
extern f64 D_8018D6B0;
extern f64 D_8018D6B8;
extern f64 D_8018D6C0;
extern f64 D_8018D6C8;
extern f64 D_8018D6D0;
extern u8 D_8018D6E0;
extern u8 D_8018D6E8;
extern f32 D_8018D754;
extern f32 D_8018D758;
extern f32 D_8018D75C;
extern f64 D_8018D760;
extern f32 D_8018D768;
extern f32 D_8018D76C;
extern f32 D_8018D770;
extern f32 D_8018D774;
extern f32 D_8018D778;
extern f32 D_8018DA80;
extern f32 D_8018DB68;
extern f32 D_8018DB6C;
extern f32 D_8018DB70;
extern f32 D_8018DC68;
extern f32 D_8018DC6C;
extern f64 D_8018DC70;
extern f64 D_8018DC78;
extern f64 D_8018DC80;
extern f32 D_8018DC88;
extern f64 D_8018DC90;
extern f64 D_8018DC98;
extern f32 D_8018DCB4;
extern f32 D_8018DCB8;
extern f64 D_8018DCC0;
extern f64 D_8018DCC8;
extern f64 D_8018DCD0;
extern f64 D_8018DCD8;
extern f64 D_8018DCE0;
extern f64 D_8018DCE8;
extern f32 D_8018DCF0;
extern f32 D_8018DCF4;
extern f32 D_8018DCF8;
extern u8 D_8018DE20;
extern u8 D_8018DF54;
extern u8 D_8018DF68;
extern f32 D_8018DFBC;
extern f64 D_8018DFC0;
extern f64 D_8018E288;
extern f64 D_8018E290;
extern u8 D_8018E2FC;
extern u8 D_8018E300;
extern f32 D_8018E690;
extern f32 D_8018E694;
extern f32 D_8018E698;
extern f64 D_8018E6A0;
extern f64 D_8018E6A8;
extern f64 D_8018E6B0;
extern f64 D_8018E6B8;
extern u8 D_8018ED1C;
extern u8 D_8018ED24;
extern u8 D_8018ED2C;
extern u8 D_8018ED34;
extern u8 D_8018ED3C;
extern u8 D_8018ED44;
extern u8 D_8018ED4C;
extern u8 D_8018ED50;
extern u8 D_8018ED54[];
extern u8 D_8018ED7C[];
extern u8 D_8018EDA4[];
extern u8 D_8018EDCC;
extern u8 D_8018EE08;
extern u8 D_8018EE44;
extern u8 D_8018EE80;
extern u8 D_8018EEBC[];
extern u8 D_8018EEE4[];
extern u8 D_8018F0F0;
extern u8 D_8018F0F4[];
extern u8 D_8018F11C[];
extern u8 D_8018F144[];
extern u8 D_8018F16C;
extern u8 D_8018F184;
extern u8 D_8018F194[];
extern u8 D_8018F1BC;
extern u8 D_8018F1D4;
extern u8 D_8018F1E4[];
extern u8 D_8018F20C;
extern u8 D_8018F230;
extern u8 D_8018F254[];
extern u8 D_8018F27C[];
extern u8 D_8018F2A4[];
extern u8 D_8018F2CC[];
extern u8 D_8018F2F4;
extern u8 D_8018F30C;
extern u8 D_8018F33C[];
extern u8 D_8018F364[];
extern u8 D_8018F370[];
extern u8 D_8018F37C[];
extern u8 D_8018F388[];
extern u8 D_8018F394[];
extern u8 D_8018F3A0[];
extern u8 D_8018F3AC[];
extern u8 D_8018F3B8[];
extern u8 D_8018F3C4[];
extern u8 D_8018F3D0[];
extern u8 D_8018F3DC[];
extern u8 D_8018F3E8[];
extern u8 D_8018F3F4[];
extern u8 D_8018F400[];
extern u8 D_8018F40C[];
extern u8 D_8018F418[];
extern u8 D_8018F424[];
extern u8 D_8018F430[];
extern u8 D_8018F43C[];
extern u8 D_8018F448[];
extern u8 D_8018F454[];
extern u8 D_8018F460[];
extern u8 D_8018F46C[];
extern u8 D_8018F478[];
extern u8 D_8018F484[];
extern u8 D_8018F490[];
extern u8 D_8018F49C;
extern u8 D_8018F4A0;
extern u8 D_8018F4A4[];
extern u8 D_8018F4B4[];
extern u8 D_8018F4C4;
extern u8 D_8018F4CC;
extern u8 D_8018F4D0[];
extern u8 D_8018F4E0[];
extern u8 D_8018F4F0;
extern u8 D_8018F4F8;
extern u8 D_8018F4FC[];
extern u8 D_8018F50C[];
extern u8 D_8018F51C;
extern u8 D_8018F524;
extern u8 D_8018F528[];
extern u8 D_8018F538[];
extern u8 D_8018F548;
extern u8 D_8018F550;
extern u8 D_8018F554[];
extern u8 D_8018F564[];
extern u8 D_8018F574;
extern u8 D_8018F57C;
extern u8 D_8018F580[];
extern u8 D_8018F590[];
extern u8 D_8018F5A0;
extern u8 D_8018F5A8;
extern u8 D_8018F5AC[];
extern u8 D_8018F5BC[];
extern u8 D_8018F5CC;
extern u8 D_8018F5D4;
extern u8 D_8018F5D8[];
extern u8 D_8018F5E8[];
extern u8 D_8018F5F8;
extern u8 D_8018F5FC;
extern u8 D_8018F600;
extern u8 D_8018F604[];
extern u8 D_8018F614[];
extern u8 D_8018F624[];
extern u8 D_8018F634;
extern u8 D_8018F638;
extern u8 D_8018F63C;
extern u8 D_8018F640;
extern u8 D_8018F644[];
extern u8 D_8018F680;
extern u8 D_8018F684;
extern u8 D_8018F69C;
extern u8 D_8018F6A0;
extern u8 D_8018F6BC;
extern u8 D_8018F6DC;
extern u8 D_8018F6FC;
extern u8 D_8018F71C;
extern u8 D_8018F73C;
extern u8 D_8018F758;
extern u8 D_8018F75C;
extern u8 D_8018F778;
extern u8 D_8018F77C;
extern u8 D_8018F784;
extern u8 D_8018F7A4;
extern u8 D_8018F7A8;
extern u8 D_8018F7B0;
extern u8 D_8018F7D0;
extern u8 D_8018F7D4[];
extern f32 D_8018F990;
extern f32 D_8018F994;
extern f32 D_8018F998;
extern u8 D_8018F9A0;
extern u8 D_8018F9A4;
extern u8 D_8018F9C0;
extern u8 D_8018F9C8;
extern u8 D_8018F9CC;
extern u8 D_8018F9D4;
extern u8 D_8018F9E0;
extern u8 D_8018FAD8;
extern u8 D_8018FAE8;
extern u8 D_8018FB00;
extern u8 D_8018FB1C;
extern f32 D_8018FB54;
extern f32 D_8018FB58;
extern f64 D_8018FB60;
extern f32 D_8019026C;
extern f64 D_80190670;
extern f64 D_80190678;
extern f32 D_80190680;
extern f64 D_80190688;
extern f64 D_80190690;
extern f64 D_80190698;
extern f64 D_801906A0;
extern f64 D_801906A8;
extern f64 D_801906B0;
extern f64 D_801906B8;
extern f64 D_801906C0;
extern f64 D_801906C8;
extern f64 D_801906D0;
extern f64 D_801906D8;
extern f64 D_801906E0;
extern f32 D_801906E8;
extern f32 D_801906EC;
extern f32 D_801906F0;
extern u8 D_801909F0;
extern u8 D_801909FC;
extern u8 D_80190A08;
extern struct SndTrack D_801B5520[];
extern struct T_D_801B5524_elem D_801B5524[];
extern struct T_D_801B55F8_elem D_801B55F8[];
extern struct T_D_801B56D0_elem D_801B56D0[];
extern struct T_D_801B57A8_elem D_801B57A8[];
extern struct T_D_801B5958_elem D_801B5958[];
extern u8 D_801B595C;
extern struct T_D_801B60F0_elem D_801B60F0[];
extern s32 D_801B61C8;
extern struct T_D_801B62A0_elem D_801B62A0[];
extern u8 D_801B62A4;
extern u8 D_801BB600;
extern T_D_801BB610 D_801BB610;
extern u8 D_801BBAC4;
extern u8 D_801BBAC5;
extern u8 D_801BBAC6;
extern u8 D_801BBAC7;
extern u8 D_801BBAC8;
extern s32 D_801BBAD0;
extern void (*D_801BBAD4)();
extern s16 D_801BBAE0;
extern f32 D_801BBAE4;
extern s16 D_801BBAE8;
extern s16 D_801BBAEA;
extern s16 D_801BBAEC;
extern s16 D_801BBAEE;
extern s16 D_801BBAF0;
extern s16 D_801BBAF2;
extern f32 D_801BBAF4;
extern f32 D_801BBAF8;
extern f32 D_801BBAFC;
extern f32 D_801BBB00;
extern f32 D_801BBB04;
extern f32 D_801BBB08;
extern f32 D_801BBB0C;
extern f32 D_801BBB10;
extern f32 D_801BBB14;
extern f32 D_801BBB18;
extern f32 D_801BBB1C;
extern f32 D_801BBB20;
extern f32 D_801BBB24;
extern f32 D_801BBB28;
extern f32 D_801BBB2C;
extern s16 D_801BBB30;
extern s16 D_801BBB40;
extern f32 D_801BBB44;
extern f32 D_801BBB48;
extern f32 D_801BBB4C;
extern f32 D_801BBB50;
extern f32 D_801BBB54;
extern f32 D_801BBB58;
extern f32 D_801BBB5C;
extern f32 D_801BBB60;
extern f32 D_801BBB64;
extern f32 D_801BBB68;
extern f32 D_801BBB6C;
extern f32 D_801BBB70;
extern f32 D_801BBB74;
extern f32 D_801BBB78;
extern f32 D_801BBB7C;
extern s16 D_801BBB90;
extern s16 D_801BBB92;
extern s16 D_801BBB94;
extern s16 D_801BBB98;
extern f32 D_801BBB9C;
extern f32 D_801BBBA0;
extern f32 D_801BBBA4;
extern f32 D_801BBBA8;
extern f32 D_801BBBAC;
extern f32 D_801BBBB0;
extern f32 D_801BBBB4;
extern f32 D_801BBBB8;
extern struct T_D_801BBBC4_p0 *D_801BBBC4;
extern s16 D_801BBBD0;
extern s16 D_801BBBD2;
extern T_D_801BBBF0 D_801BBBF0;
extern u16 D_801BBBF4;
extern u8 D_801BBBF5;
extern s16 D_801BBBF6;
extern u16 D_801BBBF8;
extern T_D_801BBBFA D_801BBBFA;
extern u16 D_801BBBFC;
extern u16 D_801BBBFE;
extern u16 D_801BBC00;
extern u16 D_801BBC02;
extern u16 D_801BBC04;
extern T_D_801BBC06 D_801BBC06;
extern u8 D_801BBC0D;
extern s32 D_801BBC10;
extern u16 D_801BBC1C;
extern u16 D_801BBC1E;
extern u16 D_801BBC20;
extern s16 D_801BBC22;
extern s32 D_801BBC2C;
extern T_D_801BBC30 D_801BBC30;
extern struct T_D_80089378 *D_801BBC40;
extern T_D_801BBC4C D_801BBC4C;
extern T_D_801BBC6C D_801BBC6C;
extern T_D_801BBC8C D_801BBC8C;
extern T_D_801BBC8E D_801BBC8E;
extern T_D_801BBC8C D_801BBCAC;
extern struct T_func_80107830_a0 *D_801BBCCC;
extern struct T_D_801BBCD0_p0 *D_801BBCD0;
extern struct T_D_801BBCD8_p0 *D_801BBCD8;
extern T_D_801BBCDC D_801BBCDC;
extern u8 D_801BBD4D;
extern s32 D_801BBD50;
extern u8 D_801BBD54;
extern u8 D_801BBD55;
extern s16 D_801BBD58;
extern u8 D_801BBD5A;
extern u8 D_801BBD5B;
extern u8 D_801BBD5C;
extern u8 D_801BBD5D;
extern u16 D_801BBD5E;
extern s32 D_801BBD60;
extern s32 D_801BBD64;
extern u8 D_801BBD6C;
extern u8 D_801BBD6D;
extern T_D_801BBD6E D_801BBD6E;
extern u8 D_801BBD72;
extern u8 D_801BBD76;
extern u8 D_801BBD77;
extern T_D_801BBD7E D_801BBD7E;
extern s16 D_801BBD82;
extern s16 D_801BBD84;
extern T_D_801BBD86 D_801BBD86;
extern T_D_801BBDA0 D_801BBDA0;
extern s32 D_801BBDFC;
extern s32 D_801BBE00;
extern s32 D_801BBE04;
extern T_D_801BBE08 D_801BBE08;
extern T_D_801BBE1A D_801BBE1A;
extern T_D_801BBE22 D_801BBE22;
extern struct T_func_8010E680_a0 *D_801BBE3C;
extern struct T_func_8010E680_a0 *D_801BBE40;
extern T_D_801BBE44 D_801BBE44;
extern s32 D_801BBE48[];
extern T_D_801BBE8A D_801BBE8A;
extern T_D_801BBF0A D_801BBF0A;
extern u16 D_801BBF3E;
extern s16 D_801BBF40;
extern u16 D_801BBF42;
extern T_D_801BBF44 D_801BBF44;
extern f32 D_801BBF50;
extern f32 D_801BBF54;
extern f32 D_801BBF64;
extern f32 D_801BBF68;
extern f32 D_801BBF6C;
extern f32 D_801BBF70;
extern f32 D_801BBF74;
extern f32 D_801BBF78;
extern T_D_801BBF7C D_801BBF7C;
extern u8 D_801BBF8E;
extern T_D_801BBF90 D_801BBF90;
extern u8 D_801BBF96;
extern u8 D_801BBF97;
extern u16 D_801BBFA8;
extern T_D_801BBFAC D_801BBFAC;
extern T_D_801BC025 D_801BC025;
extern T_D_801BC028 D_801BC028;
extern s32 D_801BC034;
extern s32 D_801BC038;
extern T_D_801BC03C D_801BC03C;
extern u8 D_801BC31A;
extern T_D_801BC03C D_801BC3D8;
extern u8 D_801BC6B6;
extern struct T_D_801BC918_elem D_801BC918[];
extern T_D_801BCAE0 D_801BCAE0;
extern u8 D_801BCC20;
extern T_D_801BCC21 D_801BCC21;
extern T_D_801BCC25 D_801BCC25;
extern struct T_D_700000 *D_801BCD48;
extern struct T_D_801BCD4C_p0 *D_801BCD4C;
extern s32 D_801BCD50;
extern T_D_700000 D_801BCD58;
extern T_D_700000 D_801BCD60;
extern T_D_700000 D_801BCD70;
extern struct T_D_801BCD90_elem D_801BCD90[];
extern struct T_D_801BCDF8_elem D_801BCDF8[];
extern struct T_D_801BCE60_elem D_801BCE60[];
extern f32 D_801BCEA4;
extern struct T_D_801BD660_elem D_801BD660[];
extern struct T_D_801BD860_elem D_801BD860[];
extern struct T_D_801BD960_elem D_801BD960[];
extern struct T_D_801BD980_elem D_801BD980[];
extern u8 D_801BEB00[];
extern f32 D_801BEB40;
extern f32 D_801BEB44;
extern f32 D_801BEB48;
extern s16 D_801BEB4C;
extern s16 D_801BEB4E;
extern struct T_D_801BEB50_elem D_801BEB50[];
extern T_D_801BEB80 D_801BEB80;
extern struct T_D_801BEB84_elem D_801BEB84[];
extern struct T_D_801BEBA8_elem D_801BEBA8[];
extern struct T_D_801BEBAC_elem D_801BEBAC[];
extern u8 D_801BEBCC;
extern u8 D_801BEBCD;
extern struct T_D_801BEBD8_elem D_801BEBD8[];
extern struct T_D_801BEB84_elem D_801BEBDC[];
extern u8 D_801BEBFE;
extern u8 D_801BEBFF;
extern u8 D_801BEC00;
extern u8 D_801BEC01;
extern u8 D_801BEC02;
extern u8 D_801BEC03;
extern u8 D_801BEC04;
extern u8 D_801BEC05;
extern u8 D_801BEC50;
extern s16 D_801BEC52;
extern T_D_801BEC60 D_801BEC60;
extern s16 D_801BEC88[];
extern s32 D_801BED10;
extern T_D_801BED14 D_801BED14;
extern u8 D_801BED15;
extern struct T_D_801BED18_p0 *D_801BED18;
extern struct T_D_801BED18_p0 *D_801BED1C;
extern struct T_D_801BED18_p0 *D_801BED20;
extern s32 D_801BED24;
extern struct T_D_801BED18_p0 *D_801BED28;
extern struct T_func_80107830_a0 *D_801BED2C;
extern u16 D_801BED30;
extern u16 D_801BED32;
extern struct T_D_801BED38_elem D_801BED38[];
extern struct T_D_801BEF38_elem D_801BEF38[];
extern s32 D_801BF180;
extern u16 D_801BF190[];
extern T_D_80162DD0 D_801E1460;

#endif
